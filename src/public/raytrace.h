// Reconstructed from DWARF by pahole; not original source.

// src/public/raytrace.h:24
class FourRays {
	FourRays();
	void Check();
	int CalculateDirectionSignMask();

	// sizeof = 96
};

// src/public/raytrace.h:76
struct TriIntersectData_t {
	float m_flNx;  // +0x0
	float m_flNy;  // +0x4
	float m_flNz;  // +0x8
	float m_flD;  // +0xc
	int32 m_nTriangleID;  // +0x10
	float m_ProjectedEdgeEquations[6];  // +0x14
	uint8 m_nCoordSelect0;  // +0x2c
	uint8 m_nCoordSelect1;  // +0x2d
	uint16 m_nFlags;  // +0x2e

	// sizeof = 48
};

// src/public/raytrace.h:99
struct TriGeometryData_t {
	int32 m_nTriangleID;  // +0x0
	float m_VertexCoordData[9];  // +0x4
	uint16 m_nFlags;  // +0x28
	unsigned char m_nPadToDWord[2];  // +0x2a
	Vector & Vertex(int);
	const Vector & Vertex(int);

	// sizeof = 44
};

// src/public/raytrace.h:123
struct CacheOptimizedTriangle_t {
	union {
	};

	union {
	} m_Data;
	Vector & Vertex(int);
	const Vector & Vertex(int);
	void ChangeIntoIntersectionFormat();
	bool ExtractVerticesFromIntersectionFormat(Vector &, Vector &, Vector &);

private:

	Vector ProjectOntoPlaneFromAxis(const Vector &, const Vector &, float, int);

	// sizeof = 48
};

// src/public/raytrace.h:199
struct TriangleBounds_t {
	float m_flMinsMaxs[6];  // +0x0
	void SetBoundsFromTriangle(const CacheOptimizedTriangle_t &);
	int ClassifyAgainstAxisSplit(int, float);

	// sizeof = 24
};

// src/public/raytrace.h:216
struct CacheOptimizedKDNode_t {
	int32 m_nChildIdx;  // +0x0
	float m_flSplitPlaneValue;  // +0x4
	int NodeType();
	int32 TriangleIndexStart();
	int LeftChild();
	int RightChild();
	int NumberOfTrianglesInLeaf();
	void SetNumberOfTrianglesInLeafNode(int);

	// sizeof = 8
};

// src/public/raytrace.h:278
class InstancedRayTracingEnvironmentReference_t {
	void * m_pUserData;  // +0x88
	InstancedRayTracingEnvironmentReference_t();

	// sizeof = 144
};

// src/public/raytrace.h:291
struct RayTracingEnvironmentHierarchyBuildPath_t {
	RayTracingEnvironmentHierarchyPathBits_t m_CurrentPath;  // +0x0
	int m_nNextStartBit;  // +0x8

	// sizeof = 16
};

// src/public/raytrace.h:344
struct RayTracingSingleResult_t {
	int32 m_nTriangleHitIndex;  // +0xc
	float m_flHitDistance;  // +0x10

	const RayTracingEnvironment * m_pRtEnv;  // +0x18
	const InstancedRayTracingEnvironmentReference_t * m_pInstance;  // +0x20
	RayTracingEnvironmentHierarchyPathBits_t m_HierarchyPathBits;  // +0x28
	RayTracingSingleResult_t();
	void Init();
	void SetInstanceEnv(const InstancedRayTracingEnvironmentReference_t *);
	void SetRayTraceEnv(const RayTracingEnvironment *);
	void SetHierarchyPath(RayTracingEnvironmentHierarchyPathBits_t);
	void MergeInResult(const RayTracingSingleResult_t &);
	Vector TriangleColor();
	int32 TriangleMaterial();
	int32 TriangleID();
	bool HasAnyIntersections();
	bool HasIntersection();
	const InstancedRayTracingEnvironmentReference_t * GetHitInstance();

	// sizeof = 48
};

// src/public/raytrace.h:412
struct RayTracingResult_t {
	int m_nTriangleHitIndex[4];  // +0x30
	fltx4 m_fl4HitDistance;  // +0x40
	const RayTracingEnvironment * m_pRtEnv[4];  // +0x50
	const InstancedRayTracingEnvironmentReference_t * m_pInstance[4];  // +0x70
	long long int m_HierarchyPathBits[4];  // +0x90
	RayTracingResult_t();
	bool HasAnyIntersections();
	void Init();
	void SetRayTraceEnv(const RayTracingEnvironment *);
	void SetInstanceEnv(const InstancedRayTracingEnvironmentReference_t *);
	void SetHierarchyPath(RayTracingEnvironmentHierarchyPathBits_t);
	void RegisterIntersection(fltx4, int, fltx4, const FourVectors &, const RayTracingEnvironment *, const InstancedRayTracingEnvironmentReference_t *, RayTracingEnvironmentHierarchyPathBits_t);
	void MergeInResult(const RayTracingResult_t &);
	fltx4 AdjustMaskForIntersectionDistance(fltx4, fltx4);
	void PostTraceFixup();
	void MergeInSubResult(const RayTracingResult_t &, int);
	int IntersectionCount(int);
	fltx4 RaysStillActiveMask(fltx4);
	void ExtractSingleResult(int, RayTracingSingleResult_t &);
	Vector TriangleColor(int);
	int32 TriangleMaterial(int);
	int32 TriangleID(int);
	fltx4 TriangleHitMaskSIMD();
	bool HasIntersection(int);
	const InstancedRayTracingEnvironmentReference_t * GetHitInstance(int);
	void TransformFromModelSpaceToWorldSpace(const FourRays &, const FourRays &, const matrix3x4a_t &);

	// sizeof = 176
};

// src/public/raytrace.h:745
struct SplitStats_t {
	float m_flCost;  // +0x0
	float m_flSplitValue;  // +0x4
	int m_nNumTrisOnLeftOfSplitPlane;  // +0x8
	int m_nNumTrisOnRightOfSplitPlane;  // +0xc
	int m_nNumTrisStraddlingSplitPlane;  // +0x10
	int m_nAxisIndexOfSplitPlane;  // +0x14

	// sizeof = 24
};

// src/public/raytrace.h:756
struct InstancedRayTracingEnvironmentBVHNode_t {
	int m_nFirstChildOrInstancesStart;  // +0x20
	int m_nSecondChildOrInstancesEnd;  // +0x24
	bool m_bInterior;  // +0x28
	InstancedRayTracingEnvironmentBVHNode_t();

	// sizeof = 48
};

// src/public/raytrace.h:769
class RayTracingEnvironment {
	uint32 m_nFlags;  // +0x0

	void * m_pUserData;  // +0x20

	bool m_bChildHierarchyUpToDate;  // +0xf0

	bool m_bNeverSplit;  // +0x168
	RayTracingEnvironment();
	InstancedRayTracingEnvironmentReference_t * AddInstancedEnv(RayTracingEnvironment *, const matrix3x4a_t &, void *);
	void RemoveInstancedEnv(InstancedRayTracingEnvironmentReference_t *);
	void SetChildTransform(InstancedRayTracingEnvironmentReference_t *, const matrix3x4a_t &);
	void AddTriangle(int32, const Vector &, const Vector &, const Vector &, const Vector &);
	void AddTriangle(int32, const Vector &, const Vector &, const Vector &, const Vector &, uint16, int32);
	void AddQuad(int32, const Vector &, const Vector &, const Vector &, const Vector &, const Vector &);
	void AddAxisAlignedRectangularSolid(int, Vector, Vector, const Vector &);
	int NumTriangles();
	void SetupAccelerationStructure();
	void ClearAllTriangles();
	bool EnsureInstanceAccelerationStructureUpToDate();
	void ComputeVirtualLightSources();
	float IntersectRayWithTrianglePlane(const Vector &, const Vector &, int);
	void RenderScene(int, int, int, uint32 *, Vector, Vector, Vector, Vector, Vector, RayTraceLightingMode_t);
	void CalculateTriangleListBounds(const int32 *, int, Vector &, Vector &);
	void AddInfinitePointLight(Vector, Vector);
	void MakeRoomForTriangles(int);
	const CacheOptimizedTriangle_t & GetTriangle(int32);
	int32 GetTriangleMaterial(int32);
	const Vector & GetTriangleColor(int);
	size_t GetSerializationNumBytes(uint32);
	void Serialize(CUtlBuffer &, uint32);
	bool UnSerialize(CUtlBuffer &);
	void OutputTrianglesAsText(const char *);
	void ReadTrianglesFromTextFile(const char *, int);

private:

	int MakeLeafNode(int, int);
	void FindBestAxisVertexSplit(int, int, SplitStats_t *, const int32 *, int, const TriangleBounds_t *, Vector, Vector);
	void CalculateCostsOfSplit(SplitStats_t &, const int32 *, int, const TriangleBounds_t *, Vector, Vector);
	void RefineNode(int, const int32 *, int, const TriangleBounds_t *, Vector, Vector, int, CUtlMultiJobProcessor *);
	void RefineNodeJob(int, const int32 *, int, const TriangleBounds_t *, Vector, Vector, int, CUtlMultiJobProcessor *);
	void RenderSceneYRange(int, int, int, int, int, uint32 *, Vector, Vector, Vector, Vector, Vector, RayTraceLightingMode_t);

	// sizeof = 368
};
