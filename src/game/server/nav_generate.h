// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_generate.h:69
class CNavNodesForArea {
	CNavNodesForArea();
	void Reset();
	bool HasNodes();

	// sizeof = 32
};

// src/game/server/nav_generate.h:102
class CNavGenerator : public CNavGeneratorBase {
	enum GenerationStateType {
		SAMPLE_WALKABLE_SPACE = 0,
		CREATE_AREAS_FROM_SAMPLES = 0x1,
		PRE_ANALYSIS_STEP = 0x2,
		FIND_LIGHT_INTENSITY = 0x3,
		COMPUTE_MESH_VISIBILITY = 0x4,
		CUSTOM = 0x5,
		SAVE_NAV_MESH = 0x6,
		NUM_GENERATION_STATES = 0x7,
	};

public:

protected:

	int m_nGenerationIndex;  // +0x44
	int m_nSampleTick;  // +0x48

	bool m_bIncrementalSelection;  // +0x68

	int m_nWalkableSeedIdx;  // +0x6c
	float m_flGenerationStartTime;  // +0x78
	char * m_pSpawnName;  // +0x98
	CNavGenerator(const CNavGenerator &);
	CNavGenerator(CNavMesh &);
	~CNavGenerator();
	virtual bool Update();
	virtual void OnNavMeshDestroy();
	virtual void ResetNavMesh();
	virtual void BeginGeneration(bool);
	virtual void BeginAnalysis(bool);
	virtual void CreateNavAreasFromSamples();
	virtual bool SampleWalkableSpace(float, float);
	virtual void BeginCustomAnalysis(bool);
	virtual void EndCustomAnalysis();
	virtual void AddWalkableSeeds();
	virtual void PostCreateNavAreasCustomStep();
	virtual void ConnectGeneratedAreas();
	virtual CNavNodesForArea * GetNodesForArea(const CNavArea &);
	bool UpdateGeneration(float);
	void PostCreateNavAreas();
	void CreateNavAreasFromRecastData();
	void AddWalkableSeedsFromMarkup();
	int AddWalkableSeedsForMarkup(const NavGenDataMarkup_t *);
	void FindAreasInNavGenMarkup(CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> > *, NavGenDataMarkup_t *);
	void BuildLadders();
	virtual void PostCustomAnalysis();
	void MarkPlayerClipAreas();
	void SplitAreasUnderOverhangs();
	void MarkStairAreas();
	void MarkJumpAreas();
	void StichAndRemoveJumpAreas();
	const char * GetPlayerSpawnName();
	void SetPlayerSpawnName(const char *);
	void RemoveJumpAreas();
	bool TestAreaForStairs(CNavArea &);
	void RemoveOrthogonalConnectionsForArea(CNavArea &, NavDirType);

	// vtable[0] Update
	// vtable[1] OnNavMeshDestroy
	// vtable[2] ResetNavMesh
	// vtable[3] BeginGeneration
	// vtable[4] BeginAnalysis
	// vtable[7] CreateNavAreasFromSamples
	// vtable[8] SampleWalkableSpace
	// vtable[9] BeginCustomAnalysis
	// vtable[10] EndCustomAnalysis
	// vtable[11] AddWalkableSeeds
	// vtable[12] PostCreateNavAreasCustomStep
	// vtable[13] ConnectGeneratedAreas
	// vtable[14] GetNodesForArea
	// vtable[15] PostCustomAnalysis
	// sizeof = 160
};

// src/game/server/nav_generate.h:215
class CNavGeneratorAAQuad : public CNavGenerator {
public:

	CNavGeneratorAAQuad(CNavMesh &);
	virtual void CreateNavAreasFromSamples();
	virtual bool SampleWalkableSpace(float, float);
	virtual void PostCreateNavAreasCustomStep();
	virtual void ConnectGeneratedAreas();
	virtual void ResetGeneratorData();
	bool GenerationSampleStep();
	CNavNode * AddNode(const Vector &, const Vector &, NavDirType, CNavNode *, float, float, float);
	void GetNodes(const CNavArea &, NavDirType, CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> > *);
	CNavNode * FindClosestNode(const CNavArea &, const Vector &, NavDirType);
	bool ReduceToComponentAreas(CNavArea &, bool);
	void SimplifySelectedAreas();
	void CreateNavAreasFromNodes();
	void MergeGeneratedAreas();
	bool MergeNavAreaInDirectionForArea(CNavArea &, NavDirType);
	void ConnectAreaEdge(CNavArea &, NavDirType);
	void FixUpGeneratedAreas();
	void FixCornerOnCornerAreas();
	void FixConnections();
	void ClassifyCorners(Vector *, Vector &, Vector &, Vector &, Vector &);
	int BuildArea(CNavNode *, int, int);
	void BuildAreaFromNodes(CNavArea &, CNavNode *, CNavNode *, CNavNode *, CNavNode *);
	void StitchGeneratedAreas();
	void GenerateNodes(const Extent &);
	void SquareUpAreas();
	bool TestNodeForValidCrouchArea(CNavNode &);
	bool TestNodeForValidJumpArea(CNavNode &);
	CNavNode * LadderEndSearch(const Vector *, NavDirType);
	bool CheckObstacles(CNavNode *, int, int, int, int);
	void HandleObstacleTopAreas();
	void RaiseAreasWithInternalObstacles();
	void RemoveOverlappingObstacleTopAreas();
	void CreateObstacleTopAreas();
	bool TestArea(CNavNode *, int, int);
	bool CreateObstacleTopAreaIfNecessary(CNavArea *, CNavArea *, NavEdgeIndex, bool);
	CNavNode * GetNextWalkableSeedNode();
	virtual CNavNodesForArea * GetNodesForArea(const CNavArea &);
	bool AreaHasNodes(const CNavArea *);
	void AssignNodes(CNavArea &, CNavArea &);
	virtual void FinishSplitEdit(CNavArea &, CNavArea &, NavEdgeIndex);

	// vtable[7] CreateNavAreasFromSamples
	// vtable[8] SampleWalkableSpace
	// vtable[12] PostCreateNavAreasCustomStep
	// vtable[13] ConnectGeneratedAreas
	// vtable[5] ResetGeneratorData
	// vtable[14] GetNodesForArea
	// vtable[6] FinishSplitEdit
	// sizeof = 192
};
