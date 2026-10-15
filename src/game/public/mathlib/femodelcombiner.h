// Reconstructed from DWARF by pahole; not original source.

// src/game/public/mathlib/femodelcombiner.h:14
class CFeModelCombiner {
	struct Model_t {
		const CFeModel * m_pModel;  // +0x0
		uint m_nNodeBase;  // +0x8
		short unsigned int m_nNodeCount[4];  // +0xc
		uint GetEndNode();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	bool m_bMergeable;  // +0x100

	uint16 m_nCombinedNodeCount;  // +0x102
	uint16 m_nCombinedStaticNodeCount;  // +0x104
protected:

	uint32 Or(uint32 CFeModel::*);
	float Avg(float CFeModel::*);
	void CollectMarker(const char *);
	CFeModelCombiner();
	void Add(const CFeModel *);
	const CFeModel * Combine(void *, uint);
	uint GetDataSize();
	void CollectFitMatrices();
	void CollectRopes();
	~CFeModelCombiner();

	// sizeof = 264
};

// src/game/public/mathlib/femodelcombiner.h:14
class CFeModelCombiner {
	struct Model_t {
		const CFeModel * m_pModel;  // +0x0
		uint m_nNodeBase;  // +0x8
		short unsigned int m_nNodeCount[4];  // +0xc
		uint GetEndNode();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum ConstEnum_t {
		MARKER_SIZE = 0x10,
	};

	enum NodeMode_t {
		ALL_NODES = 0,
		DYNAMIC_NODES_ONLY = 0x1,
	};

private:

	bool m_bMergeable;  // +0x100

	uint16 m_nCombinedNodeCount;  // +0x102
	uint16 m_nCombinedStaticNodeCount;  // +0x104
protected:

	uint32 Or(uint32 CFeModel::*);
	float Avg(float CFeModel::*);
	void CollectMarker(const char *);
	CFeModelCombiner();
	void Add(const CFeModel *);
	const CFeModel * Combine(void *, uint);
	uint GetDataSize();
	void CollectFitMatrices();
	void CollectRopes();
	bool IsEmpty<CTransform>(CTransform * CFeModel::*);
	bool IsEmpty<char const*>(const char * * CFeModel::*);
	bool IsEmpty<unsigned int>(unsigned int * CFeModel::*);
	bool IsEmpty<float>(float * CFeModel::*);
	bool IsEmpty<FeNodeIntegrator_t>(FeNodeIntegrator_t * CFeModel::*);
	void Collect<FeSimdRodConstraint_t, short unsigned int>(FeSimdRodConstraint_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void CollectTiers<FeSimdQuad_t, short unsigned int, 3>(FeSimdQuad_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void CollectTiers<FeSimdTri_t, short unsigned int, 3>(FeSimdTri_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeSimdNodeBase_t, short unsigned int>(FeSimdNodeBase_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeSimdSpringIntegrator_t, short unsigned int>(FeSimdSpringIntegrator_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void CollectTiers<FeFitMatrix_t, short unsigned int, 3>(FeFitMatrix_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void CollectNodes<CTransform>(CTransform * CFeModel::*, NodeMode_t, class );
	void CollectNodes<char const*>(const char * * CFeModel::*, NodeMode_t, class );
	void Collect<FeNodeBase_t, short unsigned int>(FeNodeBase_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeNodeReverseOffset_t, unsigned int>(FeNodeReverseOffset_t * CFeModel::*, unsigned int CFeModel::*, bool);
	void Collect<FeCtrlOffset_t, short unsigned int>(FeCtrlOffset_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeCtrlOsOffset_t, short unsigned int>(FeCtrlOsOffset_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeFollowNode_t, short unsigned int>(FeFollowNode_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void CollectNodes<unsigned int>(unsigned int * CFeModel::*, NodeMode_t, class );
	void Collect<FeSpringIntegrator_t, short unsigned int>(FeSpringIntegrator_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void CollectNodes<float>(float * CFeModel::*, NodeMode_t, class );
	void CollectTiers<FeQuad_t, short unsigned int, 3>(FeQuad_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeRodConstraint_t, short unsigned int>(FeRodConstraint_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void CollectTiers<FeTri_t, short unsigned int, 3>(FeTri_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeAxialEdgeBend_t, short unsigned int>(FeAxialEdgeBend_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void CollectTiers<FeCollisionSphere_t, short unsigned int, 2>(FeCollisionSphere_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeCollisionPlane_t, short unsigned int>(FeCollisionPlane_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeWorldCollisionParams_t, short unsigned int>(FeWorldCollisionParams_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeTaperedCapsuleStretch_t, short unsigned int>(FeTaperedCapsuleStretch_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeTaperedCapsuleRigid_t, short unsigned int>(FeTaperedCapsuleRigid_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeSphereRigid_t, short unsigned int>(FeSphereRigid_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeFitWeight_t, unsigned int>(FeFitWeight_t * CFeModel::*, unsigned int CFeModel::*, bool);
	void CollectNodes<FeNodeIntegrator_t>(FeNodeIntegrator_t * CFeModel::*, NodeMode_t, class );
	void Collect<short unsigned int, short unsigned int>(short unsigned int * CFeModel::*, short unsigned int CFeModel::*, bool);
	void CollectMemory<CFeModelCombiner>(CFeModelCombiner &);
	void CollectMemory<CFeModelCombinerSizeCollector>(CFeModelCombinerSizeCollector &);

	// sizeof = 264
};

// src/game/public/mathlib/femodelcombiner.h:100
class CFeModelCombinerSizeCollector {
private:

	const CFeModelCombiner & m_Combiner;  // +0x0
	uint m_nMemSize;  // +0x8
	uint m_nLastAlign;  // +0xc
	typedef Model_t Model_t;
	CFeModelCombinerSizeCollector(CFeModelCombiner &, uint);
	uint GetMemSize();
	void CollectMarker(const char *);
	void Collect<FeSimdRodConstraint_t, short unsigned int>(FeSimdRodConstraint_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	/* tag__fprintf: const_type tag not supported! */;
	void CollectTiers<FeSimdQuad_t, short unsigned int, 3>(FeSimdQuad_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void CollectTiers<FeSimdTri_t, short unsigned int, 3>(FeSimdTri_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeSimdNodeBase_t, short unsigned int>(FeSimdNodeBase_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void Collect<FeSimdSpringIntegrator_t, short unsigned int>(FeSimdSpringIntegrator_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void CollectTiers<FeFitMatrix_t, short unsigned int, 3>(FeFitMatrix_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeNodeBase_t, short unsigned int>(FeNodeBase_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void Collect<FeNodeReverseOffset_t, unsigned int>(FeNodeReverseOffset_t * CFeModel::*, unsigned int CFeModel::*, int, bool);
	void Collect<FeCtrlOffset_t, short unsigned int>(FeCtrlOffset_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void Collect<FeCtrlOsOffset_t, short unsigned int>(FeCtrlOsOffset_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void Collect<FeFollowNode_t, short unsigned int>(FeFollowNode_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void Collect<FeSpringIntegrator_t, short unsigned int>(FeSpringIntegrator_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void CollectTiers<FeQuad_t, short unsigned int, 3>(FeQuad_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeRodConstraint_t, short unsigned int>(FeRodConstraint_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void CollectTiers<FeTri_t, short unsigned int, 3>(FeTri_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeAxialEdgeBend_t, short unsigned int>(FeAxialEdgeBend_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void CollectTiers<FeCollisionSphere_t, short unsigned int, 2>(FeCollisionSphere_t * CFeModel::*, short unsigned int CFeModel::*, bool);
	void Collect<FeCollisionPlane_t, short unsigned int>(FeCollisionPlane_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void Collect<FeWorldCollisionParams_t, short unsigned int>(FeWorldCollisionParams_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void Collect<FeTaperedCapsuleStretch_t, short unsigned int>(FeTaperedCapsuleStretch_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void Collect<FeTaperedCapsuleRigid_t, short unsigned int>(FeTaperedCapsuleRigid_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void Collect<FeSphereRigid_t, short unsigned int>(FeSphereRigid_t * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void Collect<FeFitWeight_t, unsigned int>(FeFitWeight_t * CFeModel::*, unsigned int CFeModel::*, int, bool);
	void Collect<short unsigned int, short unsigned int>(short unsigned int * CFeModel::*, short unsigned int CFeModel::*, int, bool);
	void CollectNodes<CTransform>(CTransform * CFeModel::*, NodeMode_t, class );
	void CollectNodes<char const*>(const char * * CFeModel::*, NodeMode_t, class );
	void CollectNodes<unsigned int>(unsigned int * CFeModel::*, NodeMode_t, class );
	void CollectNodes<float>(float * CFeModel::*, NodeMode_t, class );
	void CollectNodes<FeNodeIntegrator_t>(FeNodeIntegrator_t * CFeModel::*, NodeMode_t, class );
	void Align<FeSimdRodConstraint_t>();
	void Align<FeSimdQuad_t>();
	void Align<FeSimdTri_t>();
	void Align<FeSimdNodeBase_t>();
	void Align<FeSimdSpringIntegrator_t>();
	void Align<FeFitMatrix_t>();
	void Align<CTransform>();
	void Align<char const*>();
	void Align<FeNodeBase_t>();
	void Align<FeNodeReverseOffset_t>();
	void Align<FeCtrlOffset_t>();
	void Align<FeCtrlOsOffset_t>();
	void Align<FeFollowNode_t>();
	void Align<unsigned int>();
	void Align<FeSpringIntegrator_t>();
	void Align<float>();
	void Align<FeQuad_t>();
	void Align<FeRodConstraint_t>();
	void Align<FeTri_t>();
	void Align<FeAxialEdgeBend_t>();
	void Align<FeCollisionSphere_t>();
	void Align<FeCollisionPlane_t>();
	void Align<FeWorldCollisionParams_t>();
	void Align<FeTaperedCapsuleStretch_t>();
	void Align<FeTaperedCapsuleRigid_t>();
	void Align<FeSphereRigid_t>();
	void Align<FeFitWeight_t>();
	void Align<FeNodeIntegrator_t>();
	void Align<short unsigned int>();

	// sizeof = 16
};

// src/game/public/mathlib/femodelcombiner.h:166
class CFeModelCombinerNodeMerger {
private:

	const CFeModelCombiner & m_Combiner;  // +0x0
	uint m_nCombinedNodes;  // +0x8
	uint m_nMergedNodes;  // +0xc
	CFeModelCombinerNodeMerger(CFeModelCombiner &);
	uint GetCombinedNodeCount();
	uint AddNodes(uint);

	// sizeof = 16
};

// src/game/public/mathlib/femodelcombiner.h:221
class CFeNodeMap {
private:

	const uint16 * m_pMap;  // +0x0
	uint16 m_nOldCount;  // +0x8
	uint16 m_nNewCount;  // +0xa
	CFeNodeMap(const uint16 *, uint16, uint16);
	CFeNodeMap(CFeModelCombiner &, const Model_t &);
	uint16 operator[](uint16);
	uint16 & operator()(uint16 &);
	void MapNodes<short unsigned int>(uint16 &);
	void MapNodes<FeWorldCollisionParams_t>(FeWorldCollisionParams_t &);
	void operator()<short unsigned int, 2, 4>(short unsigned int &);
	void operator()<short unsigned int, 4, 4>(short unsigned int &);
	void operator()<4>(short unsigned int &);
	void operator()<2>(short unsigned int &);
	void operator()<3>(short unsigned int &);
	void operator()<6>(short unsigned int &);
	void MapNodes<FeSimdRodConstraint_t>(FeSimdRodConstraint_t &);
	void MapNodes<FeSimdQuad_t>(FeSimdQuad_t &);
	void MapNodes<FeSimdTri_t>(FeSimdTri_t &);
	void operator()<unsigned int, 3, 4>(unsigned int &);
	void MapNodes<FeSimdNodeBase_t>(FeSimdNodeBase_t &);
	void MapNodes<FeSimdSpringIntegrator_t>(FeSimdSpringIntegrator_t &);
	void MapNodes<FeNodeBase_t>(FeNodeBase_t &);
	void MapNodes<FeNodeReverseOffset_t>(FeNodeReverseOffset_t &);
	void MapNodes<FeCtrlOffset_t>(FeCtrlOffset_t &);
	void MapNodes<FeCtrlOsOffset_t>(FeCtrlOsOffset_t &);
	void MapNodes<FeFollowNode_t>(FeFollowNode_t &);
	void MapNodes<FeSpringIntegrator_t>(FeSpringIntegrator_t &);
	void MapNodes<FeQuad_t>(FeQuad_t &);
	void MapNodes<FeRodConstraint_t>(FeRodConstraint_t &);
	void MapNodes<FeTri_t>(FeTri_t &);
	void MapNodes<FeAxialEdgeBend_t>(FeAxialEdgeBend_t &);
	void MapNodes<FeCollisionSphere_t>(FeCollisionSphere_t &);
	void MapNodes<FeCollisionPlane_t>(FeCollisionPlane_t &);
	void MapNodes<FeTaperedCapsuleStretch_t>(FeTaperedCapsuleStretch_t &);
	void MapNodes<FeTaperedCapsuleRigid_t>(FeTaperedCapsuleRigid_t &);
	void MapNodes<FeSphereRigid_t>(FeSphereRigid_t &);

	// sizeof = 16
};
