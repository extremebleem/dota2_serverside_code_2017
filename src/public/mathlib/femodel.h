// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/femodel.h:52
class FourVectors2D {
private:

	fltx4 x;  // +0x0
	fltx4 y;  // +0x10

	FourVectors2D();
	FourVectors2D(const fltx4 &, const fltx4 &);
	fltx4 Length();
	const FourVectors2D operator-(const FourVectors2D &);

	// sizeof = 32
};

// src/public/mathlib/femodel.h:138
struct FeTri_t {
private:

	short unsigned int nNode[3];  // +0x0

	float32 w1;  // +0x8
	float32 w2;  // +0xc
	float32 v1x;  // +0x10
	FeTri_t();

	// sizeof = 28
};

// src/public/mathlib/femodel.h:155
struct FeSimdTri_t {
private:

	unsigned int nNode[3][4];  // +0x0
	fltx4 w1;  // +0x30
	fltx4 w2;  // +0x40
	fltx4 v1x;  // +0x50
	FeSimdTri_t();

	void Init(const FeTri_t *);

	// sizeof = 128
};

// src/public/mathlib/femodel.h:173
struct FeQuad_t {
private:

	short unsigned int nNode[4];  // +0x0
	float flSlack;  // +0x8
	FeQuad_t();

	// sizeof = 76
};

// src/public/mathlib/femodel.h:201
struct FeNodeBase_t {
private:

	uint16 nNode;  // +0x0
	short unsigned int nDummy[3];  // +0x2
	uint16 nNodeX0;  // +0x8
	uint16 nNodeX1;  // +0xa
	uint16 nNodeY0;  // +0xc
	uint16 nNodeY1;  // +0xe
	FeNodeBase_t();

	void RebaseNodes(int);
	void RemapNodes(const CUtlVector<int, CUtlMemory<int, int> > &);

	// sizeof = 32
};

// src/public/mathlib/femodel.h:242
struct FeNodeReverseOffset_t {
private:

	uint16 nBoneCtrl;  // +0x0
	uint16 nTargetNode;  // +0x2
	FeNodeReverseOffset_t();

	// sizeof = 16
};

// src/public/mathlib/femodel.h:259
struct FeSimdQuad_t {
private:

	short unsigned int nNode[4][4];  // +0x0
	fltx4 f4Slack;  // +0x20
	float f4Weights __attribute__ ((__vector_size__ (16)))[4];  // +0xf0
	FeSimdQuad_t();

	void Init(const FeQuad_t *);

	// sizeof = 304
};

// src/public/mathlib/femodel.h:292
struct FeAxialEdgeBend_t {
private:

	float32 te;  // +0x0
	float32 tv;  // +0x4
	float32 flDist;  // +0x8
	float flWeight[4];  // +0xc
	short unsigned int nNode[6];  // +0x1c

	// sizeof = 40
};

// src/public/mathlib/femodel.h:327
struct FeRodConstraint_t {
private:

	short unsigned int nNode[2];  // +0x0
	float32 flMaxDist;  // +0x4
	float32 flMinDist;  // +0x8
	float32 flWeight0;  // +0xc
	float32 flRelaxationFactor;  // +0x10

	void InvariantReverse();

	// sizeof = 20
};

// src/public/mathlib/femodel.h:349
struct FeSimdRodConstraint_t {
private:

	short unsigned int nNode[2][4];  // +0x0
	fltx4 f4MaxDist;  // +0x10
	fltx4 f4MinDist;  // +0x20
	fltx4 f4Weight0;  // +0x30
	fltx4 f4RelaxationFactor;  // +0x40

	void Init(const FeRodConstraint_t *);

	// sizeof = 80
};

// src/public/mathlib/femodel.h:368
struct FeSimdNodeBase_t {
private:

	short unsigned int nNode[4];  // +0x0
	short unsigned int nNodeX0[4];  // +0x8
	short unsigned int nNodeX1[4];  // +0x10
	short unsigned int nNodeY0[4];  // +0x18
	short unsigned int nNodeY1[4];  // +0x20
	short unsigned int nDummy[4];  // +0x28
	FeSimdNodeBase_t();

	void Init(const FeNodeBase_t *);

	// sizeof = 112
};

// src/public/mathlib/femodel.h:391
struct FeNodeIntegrator_t {
private:

	float flPointDamping;  // +0x0
	float flAnimationForceAttraction;  // +0x4
	float flAnimationVertexAttraction;  // +0x8
	float flGravity;  // +0xc

	void Init();

	// sizeof = 16
};

// src/public/mathlib/femodel.h:409
struct FeSpringIntegrator_t {
private:

	short unsigned int nNode[2];  // +0x0
	float32 flSpringRestLength;  // +0x4
	float32 flSpringConstant;  // +0x8
	float32 flSpringDamping;  // +0xc
	float32 flNodeWeight0;  // +0x10

	// sizeof = 20
};

// src/public/mathlib/femodel.h:429
struct FeSimdSpringIntegrator_t {
private:

	short unsigned int nNode[2][4];  // +0x0
	fltx4 flSpringRestLength;  // +0x10
	fltx4 flSpringConstant;  // +0x20
	fltx4 flSpringDamping;  // +0x30
	fltx4 flNodeWeight0;  // +0x40

	void Init(const FeSpringIntegrator_t *);

	// sizeof = 80
};

// src/public/mathlib/femodel.h:454
struct FeCtrlOffset_t {
private:

	uint16 nCtrlParent;  // +0x0
	uint16 nCtrlChild;  // +0x2
	FeCtrlOffset_t();

	// sizeof = 16
};

// src/public/mathlib/femodel.h:472
struct FeCtrlOsOffset_t {
private:

	uint16 nCtrlParent;  // +0x0
	uint16 nCtrlChild;  // +0x2

	// sizeof = 4
};

// src/public/mathlib/femodel.h:493
struct FeFollowNode_t {
private:

	uint16 nParentNode;  // +0x0
	uint16 nChildNode;  // +0x2
	float flWeight;  // +0x4

	// sizeof = 8
};

// src/public/mathlib/femodel.h:511
struct FeCollisionSphere_t {
private:

	uint16 nCtrlParent;  // +0x0
	uint16 nChildNode;  // +0x2
	float m_flRFactor;  // +0x4
	float flStickiness;  // +0x14
	FeCollisionSphere_t();

	// sizeof = 24
};

// src/public/mathlib/femodel.h:530
struct FeCollisionPlane_t {
private:

	uint16 nCtrlParent;  // +0x0
	uint16 nChildNode;  // +0x2
	float flStickiness;  // +0x14
	FeCollisionPlane_t();

	// sizeof = 24
};

// src/public/mathlib/femodel.h:550
struct FeWorldCollisionParams_t {
private:

	float flWorldFriction;  // +0x0
	float flGroundFriction;  // +0x4
	uint16 nListBegin;  // +0x8
	uint16 nListEnd;  // +0xa

	// sizeof = 12
};

// src/public/mathlib/femodel.h:567
struct FeTreeChildren_t {
private:

	short unsigned int nChild[2];  // +0x0

	// sizeof = 4
};

// src/public/mathlib/femodel.h:575
struct FeTaperedCapsuleRigid_t {
private:

	uint16 nNode;  // +0x0
	uint16 nCollisionMask;  // +0x2
	float flRadius[2];  // +0x1c
	float flStickiness;  // +0x24

	FeTaperedCapsuleRigid_t();
	bool UsesNode(uint);
	void ChangeNode(uint, uint);
	void RebaseNodes(int);
	void RemapNodes(const CUtlVector<int, CUtlMemory<int, int> > &);
	bool IsValid(uint);

	// sizeof = 40
};

// src/public/mathlib/femodel.h:627
struct FeSphereRigid_t {
private:

	uint16 nNode;  // +0x0
	uint16 nCollisionMask;  // +0x2
	float flRadius;  // +0x10
	float flStickiness;  // +0x14

	FeSphereRigid_t();
	bool UsesNode(uint);
	void ChangeNode(uint, uint);
	void RebaseNodes(int);
	void RemapNodes(const CUtlVector<int, CUtlMemory<int, int> > &);
	bool IsValid(uint);

	// sizeof = 24
};

// src/public/mathlib/femodel.h:676
struct FeTaperedCapsuleStretch_t {
private:

	short unsigned int nNode[2];  // +0x0
	uint16 nCollisionMask;  // +0x4
	uint16 nDummy;  // +0x6
	float flRadius[2];  // +0x8
	float flStickiness;  // +0x10

	bool operator==(const FeTaperedCapsuleStretch_t &);
	bool UsesNode(uint);
	void ChangeNode(uint, uint);
	void RebaseNodes(int);
	void RemapNodes(const CUtlVector<int, CUtlMemory<int, int> > &);
	bool IsValid(uint);

	// sizeof = 20
};

// src/public/mathlib/femodel.h:752
class FourCovMatrices3 {
private:

	fltx4 m_flXY;  // +0x30
	fltx4 m_flXZ;  // +0x40
	fltx4 m_flYZ;  // +0x50
	FourCovMatrices3();

	void InitForWahba(const fltx4 &, const FourVectors &);
	void AddForWahba(const fltx4 &, const FourVectors &);
	FourVectors operator*(const FourVectors &);

	// sizeof = 96
};

// src/public/mathlib/femodel.h:773
struct FeFitWeight_t {
private:

	float flWeight;  // +0x0
	uint16 nNode;  // +0x4
	uint16 nDummy;  // +0x6

	// sizeof = 8
};

// src/public/mathlib/femodel.h:814
struct FeFitMatrix_t {
private:

	uint16 nEnd;  // +0x2c
	uint16 nNode;  // +0x2e
	uint16 nCtrl;  // +0x30
	uint16 nBeginDynamic;  // +0x32
	FeFitMatrix_t();

	// sizeof = 64
};

// src/public/mathlib/femodel.h:841
struct FeSimdFitMatrices_t {
private:

	short unsigned int nEnd[4];  // +0x30
	short unsigned int nCtrl[4];  // +0x38
	fltx4 flStretchMin;  // +0xa0
	fltx4 flStretchMax;  // +0xb0
	FeSimdFitMatrices_t();

	// sizeof = 192
};

// src/public/mathlib/femodel.h:861
class FeAabb_t {
	fltx4 m_vMinBounds;  // +0x0
	fltx4 m_vMaxBounds;  // +0x10
	FeAabb_t();
	FeAabb_t(const AABB_t &);
	const Vector & GetMinAsVector();
	const Vector & GetMaxAsVector();
	float GetCost(float);
	fltx4 GetDistVector(fltx4);
	void operator|=(const FeAabb_t &);
	void operator|=(const fltx4 &);
	void AddCenterAndExtents(const fltx4 &, const fltx4 &);
	void AddExtents(const fltx4 &);
	int HasSeparatingAxis(const FeAabb_t &);
	bool IsValid();

	// sizeof = 32
};

// src/public/mathlib/femodel.h:921
class CFeModel {
	uint32 m_nStaticNodeFlags;  // +0x0
	uint32 m_nDynamicNodeFlags;  // +0x4
	float32 m_flLocalForce;  // +0x8
	float32 m_flLocalRotation;  // +0xc
	uint16 m_nNodeCount;  // +0x10
	uint16 m_nCtrlCount;  // +0x12
	uint16 m_nStaticNodes;  // +0x14
	uint16 m_nRotLockStaticNodes;  // +0x16
	short unsigned int m_nQuadCount[3];  // +0x18
	short unsigned int m_nTriCount[3];  // +0x1e
	short unsigned int m_nSimdQuadCount[3];  // +0x24
	short unsigned int m_nSimdTriCount[3];  // +0x2a
	uint16 m_nSimdSpringIntegratorCount;  // +0x30
	uint16 m_nSimdRodCount;  // +0x32
	uint16 m_nSimdNodeBaseCount;  // +0x34
	uint16 m_nRodCount;  // +0x36
	uint16 m_nAxialEdgeCount;  // +0x38
	uint16 m_nRopeCount;  // +0x3a
	uint16 m_nRopeIndexCount;  // +0x3c
	uint16 m_nNodeBaseCount;  // +0x3e
	uint16 m_nSpringIntegratorCount;  // +0x40
	uint16 m_nCtrlOffsets;  // +0x42
	uint16 m_nCtrlOsOffsets;  // +0x44
	uint16 m_nFollowNodeCount;  // +0x46
	short unsigned int m_nCollisionSpheres[2];  // +0x48
	uint16 m_nCollisionPlanes;  // +0x4c
	uint16 m_nWorldCollisionParamCount;  // +0x4e
	uint16 m_nWorldCollisionNodeCount;  // +0x50
	uint16 m_nTaperedCapsuleStretchCount;  // +0x52
	uint16 m_nTaperedCapsuleRigidCount;  // +0x54
	uint16 m_nSphereRigidCount;  // +0x56
	uint16 m_nTreeDepth;  // +0x58
	uint16 m_nQuadVelocitySmoothIterations;  // +0x5a
	uint16 m_nRodVelocitySmoothIterations;  // +0x5c
	uint16 m_nFreeNodeCount;  // +0x5e
	short unsigned int m_nFitMatrixCount[3];  // +0x60
	short unsigned int m_nSimdFitMatrixCount[3];  // +0x66
	uint32 m_nFitWeightCount;  // +0x6c
	uint32 m_nReverseOffsetCount;  // +0x70
	float32 m_flDefaultThreadStretch;  // +0x74
	float32 m_flDefaultSurfaceStretch;  // +0x78
	float32 m_flDefaultGravityScale;  // +0x7c
	float32 m_flDefaultVelAirDrag;  // +0x80
	float32 m_flDefaultExpAirDrag;  // +0x84
	float32 m_flDefaultVelQuadAirDrag;  // +0x88
	float32 m_flDefaultExpQuadAirDrag;  // +0x8c
	float32 m_flDefaultVelRodAirDrag;  // +0x90
	float32 m_flDefaultExpRodAirDrag;  // +0x94
	float32 m_flQuadVelocitySmoothRate;  // +0x98
	float32 m_flRodVelocitySmoothRate;  // +0x9c
	float32 m_flAddWorldCollisionRadius;  // +0xa0
	float32 m_flDefaultVolumetricSolveAmount;  // +0xa4
	float32 m_flWindage;  // +0xa8
	float32 m_flWindDrag;  // +0xac
	uint16 * m_pNodeToCtrl;  // +0xe8
	uint16 * m_pCtrlToNode;  // +0xf0
	uint16 * m_pRopes;  // +0xf8
	uint32 * m_pCtrlHash;  // +0x100
	float * m_pLegacyStretchForce;  // +0x168
	float * m_pNodeCollisionRadii;  // +0x170
	float * m_pLocalRotation;  // +0x178
	float * m_pLocalForce;  // +0x180
	uint16 * m_pTreeParents;  // +0x190
	uint16 * m_pTreeCollisionMasks;  // +0x198
	uint16 * m_pWorldCollisionNodes;  // +0x1a0
	uint16 * m_pFreeNodes;  // +0x1a8
	float * m_pNodeInvMasses;  // +0x1e8
	const char * * m_pCtrlName;  // +0x1f0
	float * m_pFitWeightsCumulative;  // +0x1f8
	CFeModel();
	CFeModel(const CFeModel &);
	float SafeRcp(float);
	uint NodeToCtrl(uint);
	uint CtrlToNode(uint);
	const char * GetNodeName(uint);
	const char * GetCtrlName(uint);
	FeCtrlOffset_t * FindCtrlOffsetByChild(uint);
	FeCtrlOsOffset_t * FindCtrlOsOffsetByChild(uint);
	uint GetInclusiveCollisionSphereCount();
	uint GetExclusiveCollisionSphereCount();
	int GetComplexity();
	uint GetNodeCount();
	uint GetCtrlCount();
	uint GetDynamicNodeCount();
	bool HasDynamicNodes();
	uint GetTreeRootAabbIndex();
	uint GetNodeCount(uint);
	uint ComputeCollisionTreeDepthTopDown();
	uint ComputeCollisionTreeDepthTopDown(CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > &);
	uint ComputeCollisionTreeDepthTopDown(uint16 *);
	uint ComputeCollisionTreeHeightBottomUp();
	uint ComputeCollisionTreeHeightBottomUp(CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > &);
	uint ComputeCollisionTreeHeightBottomUp(uint16 *);
	uint ComputeCollisionTreeNodeCount();
	uint ComputeCollisionTreeNodeCount(CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > &);
	uint ComputeCollisionTreeNodeCount(uint16 *);
	void ComputeCollisionTreeBounds(const fltx4 *, FeAabb_t *);
	void ComputeCollisionTreeBounds(const VectorAligned *, FeAabb_t *);
	float ComputeCollisionTreeBoundsError(const fltx4 *, const FeAabb_t *);
	float ComputeCollisionTreeBoundsError(const VectorAligned *, FeAabb_t *);
	float GetDefaultLocalForce();
	float GetDefaultLocalRotation();
	float GetDefaultNodeCollisionRadius();
	float GetDefaultLegacyStretchForce();
	FeNodeIntegrator_t GetDefaultNodeIntegrator();
	const char * GetDefaultCtrlName();
	CTransform GetDefaultInitPose();
	float GetDefaultNodeInvMass();
	uint32 GetDefaultCtrlHash();
	void RelaxRods(VectorAligned *, float, float);
	void RelaxRods2(VectorAligned *, float, float);
	void RelaxRods2Ftl(VectorAligned *, float, float);
	void RelaxRodsUninertial(VectorAligned *, VectorAligned *, float, float);
	void RelaxSimdRods(fltx4 *, float, float);
	void RelaxSimdRodsFtl(fltx4 *, float, float);
	float RelaxQuads(VectorAligned *, float, float, int);
	float RelaxTris(VectorAligned *, float, float);
	fltx4 RelaxSimdTris(VectorAligned *, float, float);
	fltx4 RelaxSimdQuads(VectorAligned *, float, float, int);
	void RelaxBend(VectorAligned *, float);
	void RelaxBendSIMD(VectorAligned *, float);
	void RelaxBendRigid(VectorAligned *, float);
	void RelaxBendRigidSIMD(VectorAligned *, float);
	float RelaxQuad2(float, float, const FeQuad_t &, const VectorAligned &, const VectorAligned &, VectorAligned &, VectorAligned &);
	float RelaxQuad1(float, float, const FeQuad_t &, const VectorAligned &, VectorAligned &, VectorAligned &, VectorAligned &);
	float RelaxQuad0(float, float, const FeQuad_t &, VectorAligned &, VectorAligned &, VectorAligned &, VectorAligned &);
	float RelaxQuad0flat(float, float, const FeQuad_t &, VectorAligned &, VectorAligned &, VectorAligned &, VectorAligned &);
	float RelaxTri2(float, float, const FeTri_t &, const VectorAligned &, const VectorAligned &, VectorAligned &);
	float RelaxTri1(float, float, const FeTri_t &, const VectorAligned &, VectorAligned &, VectorAligned &);
	float RelaxTri0(float, float, const FeTri_t &, VectorAligned &, VectorAligned &, VectorAligned &);
	fltx4 RelaxSimdTri2(const fltx4 &, const fltx4 &, const FeSimdTri_t &, fltx4 *);
	fltx4 RelaxSimdTri1(const fltx4 &, const fltx4 &, const FeSimdTri_t &, fltx4 *);
	fltx4 RelaxSimdTri0(const fltx4 &, const fltx4 &, const FeSimdTri_t &, fltx4 *);
	fltx4 RelaxSimdQuad2(const fltx4 &, const fltx4 &, const FeSimdQuad_t &, fltx4 *);
	fltx4 RelaxSimdQuad1(const fltx4 &, const fltx4 &, const FeSimdQuad_t &, fltx4 *);
	fltx4 RelaxSimdQuad0(const fltx4 &, const fltx4 &, const FeSimdQuad_t &, fltx4 *);
	fltx4 RelaxSimdQuad0flat(const fltx4 &, const fltx4 &, const FeSimdQuad_t &, fltx4 *);
	void FitCenters(fltx4 *);
	void FitTransforms(const VectorAligned *, float, matrix3x4a_t *);
	void FitTransform(matrix3x4a_t *, const FeFitMatrix_t &, const VectorAligned *, const FeFitWeight_t *, const FeFitWeight_t *);
	void FitTransform2D(matrix3x4a_t *, const FeFitMatrix_t &, const Vector &, const VectorAligned *, const FeFitWeight_t *, const FeFitWeight_t *);
	void FeedbackFitTransforms(VectorAligned *);
	void FeedbackFitTransform(const matrix3x4a_t &, const FeFitMatrix_t &, VectorAligned *, const FeFitWeight_t *, const FeFitWeight_t *);
	void FeedbackFitTransformNew(const matrix3x4a_t &, const FeFitMatrix_t &, VectorAligned *);
	void ComputeFitWeightsCumulative();
	void IntegrateSprings(VectorAligned *, VectorAligned *, float, float);
	float ComputeElasticEnergyQuads(const VectorAligned *, float);
	float ComputeElasticEnergyRods(const VectorAligned *, float);
	float ComputeElasticEnergySprings(const VectorAligned *, const VectorAligned *, float, float);
	void ApplyAirDrag(VectorAligned *, const VectorAligned *, float, float);
	void ApplyQuadAirDrag(fltx4 *, const fltx4 *, float, float);
	void ApplyRodAirDrag(fltx4 *, const fltx4 *, float, float);
	void ApplyQuadWind(VectorAligned *, const Vector &, float);
	void ApplyTriWind(VectorAligned *, const Vector &, float);
	void ApplySimdTriWind(fltx4 *, const Vector &, float);
	void SmoothQuadVelocityField(fltx4 *, const fltx4 *, float);
	void SmoothRodVelocityField(fltx4 *, const fltx4 *, float);
	bool Serialize(CRnSerializer *);
	bool Unserialize(CRnUnserializer *);
	bool Serialize(CRnObjectStats *);
	bool Snoop(CRnSnooper *, const CFeModel *);

	// sizeof = 512
};
