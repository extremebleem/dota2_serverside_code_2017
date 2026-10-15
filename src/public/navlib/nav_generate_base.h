// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_generate_base.h:18
class CNavGeneratorBase {
	enum GenerationModeType {
		GENERATE_NONE = 0,
		GENERATE_FULL = 0x1,
		GENERATE_INCREMENTAL = 0x2,
		GENERATE_SIMPLIFY = 0x3,
		GENERATE_ANALYSIS_ONLY = 0x4,
	};

	struct WalkableSeedSpot {
		WalkableSeedSpot();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CNavGeneratorBase;  // +0x0
	static float sm_flGenerationStepSize;
protected:

	const CNavMesh & m_rNavMesh;  // +0x8
	const const NavAreaVector & m_rNavAreas;  // +0x10
	const const NavLadderVector & m_rNavLadders;  // +0x18
	bool m_bQuitWhenFinished;  // +0x20

	CNavGeneratorBase(CNavGeneratorBase &);
	CNavGeneratorBase(const CNavGeneratorBase &);
	CNavGeneratorBase(CNavMesh &);
	virtual bool Update();
	virtual void OnNavMeshDestroy();
	virtual void ResetNavMesh();
	virtual void BeginGeneration(bool);
	virtual void BeginAnalysis(bool);
	virtual void ResetGeneratorData();
	virtual void FinishSplitEdit(CNavArea &, CNavArea &, NavEdgeIndex);
	bool IsGenerating();
	GenerationModeType GetGenerationMode();
	void AddWalkableSeed(const Vector &, const Vector &);
	void ClearWalkableSeeds();

	// vtable[0] Update
	// vtable[1] OnNavMeshDestroy
	// vtable[2] ResetNavMesh
	// vtable[3] BeginGeneration
	// vtable[4] BeginAnalysis
	// vtable[5] ResetGeneratorData
	// vtable[6] FinishSplitEdit
	// sizeof = 64
};
