// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_mesh.h:62
class CNavCrossMeshConnection {
	int m_nIndexOnMeshA;  // +0x0
	int m_nIndexOnMeshB;  // +0x4
	NavEdgeIndex m_EdgeAB;  // +0x8
	CNavCrossMeshConnection();

	// sizeof = 12
};

// src/public/navlib/nav_mesh.h:79
class CNavSelectionSet {
protected:

	NavAreaVector m_SetAreas;  // +0x0
	CNavSelectionSet();
	NavAreaVector & GetSetAreas();
	CNavArea * GetSetItem(int);
	int GetSetSize();
	bool IsSetEmpty();
	bool IsInSet(CNavArea *);
	void AddToSet(CNavArea *);
	void RemoveFromSet(CNavArea *);
	void ClearSet();
	~CNavSelectionSet();
	bool ForAllSetAreas<NavAttributeSetter>(NavAttributeSetter &);
	bool ForAllSetAreas<ShiftSet>(ShiftSet &);
	bool ForAllSetAreas<NavAttributeClearer>(NavAttributeClearer &);
	bool ForAllSetAreas<Subdivider>(Subdivider &);
	bool ForAllSetAreas<NavAreaCollector>(NavAreaCollector &);

	// sizeof = 24
};

// src/public/navlib/nav_mesh.h:150
class CNavScript {
	ScriptVariant_t Script_TestRayToMesh(const Vector &, const Vector &);

	// sizeof = 1
};

// src/public/navlib/nav_mesh.h:160
class CNavPrecacheInfo {
	int ()() * * _vptr.CNavPrecacheInfo;  // +0x0

	CNavPrecacheInfo & operator=(const CNavPrecacheInfo &);
	CNavPrecacheInfo();
	virtual ~CNavPrecacheInfo();
	virtual void CopyPrecacheInfo(const CNavPrecacheInfo &);
	virtual void Reset();

	// vtable[2] CopyPrecacheInfo
	// vtable[3] Reset
	// sizeof = 40
};

// src/public/navlib/nav_mesh.h:171
class CNavTraceResult {
	float m_flEndT;  // +0x0
	CNavTraceResult();
	bool StartedOnMesh();
	bool StartedOffMesh();
	bool StartedOnAndExitedMesh();

	// sizeof = 28
};

// src/public/navlib/nav_mesh.h:189
class CNavMesh {
	enum {
		HASH_TABLE_SIZE = 0x400,
	};

	int ()() * * _vptr.CNavMesh;  // +0x0
	NavAreaVector m_NavAreas;  // +0x8

	static int m_id;
protected:

	uint64 m_nVisMask;  // +0x20
private:

	float m_flGridCellSize;  // +0xb0
	int m_nGridSizeX;  // +0xb4
	int m_nGridSizeY;  // +0xb8
	float m_flGridMinX;  // +0xbc
	float m_flGridMinY;  // +0xc0
	uint m_nGridAreaCount;  // +0xc4
	bool m_bIsLoaded;  // +0xc8
	bool m_bIsOutOfDate;  // +0xc9
	bool m_bIsAnalyzed;  // +0xca
	bool m_bNavFilesEverWritable;  // +0xcb
	uint32 m_nFileSubVersion;  // +0xcc
	NavLadderVector m_Ladders;  // +0x20d0

	CNavMesh(const CNavMesh &);
	CNavMesh();
	virtual ~CNavMesh();
	virtual void PreLoadAreas(int);
	virtual void UnloadAreas();
	virtual CNavArea * CreateArea();
	virtual void DestroyArea(CNavArea *);
	void CompressAreaIDs();
	virtual void Validate();
	virtual void ResetNavMesh();
	void OnChangeTheNavMesh();
	virtual void Update();
	void RegisterNavMeshGameEventListener(INavMeshGameEventListener *);
	void RegisterNavEditor(INavEditor *);
	INavEditor * GetEditor();
	const INavEditor * GetEditor();
	void RegisterObstructionManager(INavObstructionManager *);
	INavObstructionManager * GetObstructionManager();
	void RegisterGenerator(CNavGeneratorBase *);
	CNavGeneratorBase * GetGenerator();
	bool IsGenerating();
	void RegisterPhysicsInterface(INavPhysicsInterface *);
	INavPhysicsInterface * GetPhysicsInterface();
	void RegisterEntityInterface(INavEntityInterface *);
	INavEntityInterface * GetEntityInterface();
	const CNavPlaceDirectory * GetPlaceDirectory();
	const CNavPlaceDatabase & GetPlaceDatabase();
	CNavMesh * CreateAndLoadNavMesh(const char *, CNavMesh * (*)());
	bool CreateAndLoadNavMeshPrecache(const char *, CNavMesh * (*)(), CNavPrecacheInfo *);
	bool MountNavData(const char *, void * *, char *, int, int *);
	bool TestFilesWritable(const char *);
	const char * GetFilename(const char *);
	virtual NavErrorType LoadNavMesh(const char *, void *, int, bool);
	virtual NavErrorType PostLoadNavMesh(uint);
	virtual void PostSpawnGroupLoad();
	const CNavPrecacheInfo * GetPrecacheInfo();
	bool SaveNavMesh(const char *);
	void SaveNavMeshToBuffer(uint, CUtlBuffer &);
	bool IsOutOfDate();
	uint32 GetFileSubVersion();
	virtual uint GetSubVersionNumber();
	virtual void SaveCustomData(CUtlBuffer &);
	virtual void LoadCustomData(CUtlBuffer &);
	virtual void SaveCustomDataPreArea(CUtlBuffer &);
	virtual void LoadCustomDataPreArea(CUtlBuffer &);
	bool IsLoaded();
	void SetLoaded();
	bool IsAnalyzed();
	void SetAnalyzed();
	virtual void ApplyMarkup();
	void GetNavMeshAsTriangles(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &, CUtlVector<Vector, CUtlMemory<Vector, int> > &, uint32);
	void GetNavMeshEdges(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &, CUtlVector<Vector, CUtlMemory<Vector, int> > &);
	void GetNavMeshConnectionsAsDebugGeometry(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &, CUtlVector<Vector, CUtlMemory<Vector, int> > &);
	void ValidateNavAreaConnections();
	virtual void BuildFromNavGen(const CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &, const CUtlVector<CNavGenPoly, CUtlMemory<CNavGenPoly, int> > &, const CNavGenInput &);
	virtual const char * GetNavMarkupDesignerName();
	const NavAreaVector & GetNavAreas();
	uint GetNavAreaCount();
	uint GetGridNavAreaCount();
	CNavArea * GetNavAreaByID(unsigned int);
	NavLadderVector & GetLadders();
	const NavLadderVector & GetLadders();
	CNavLadder * GetLadderByID(unsigned int);
	const CNavGenParams & GetNavGenParams();
	void RegisterFilterGroundEntities(CTraceFilter *);
	CTraceFilter * GetFilterGroundEntities();
	void RegisterFilterWalkableEntities(CTraceFilter *);
	CTraceFilter * GetFilterWalkableEntities();
	uint8 CalcAreaNavHullSupport(uint8);
	void ComputeBounds(Extent *);
	CNavArea * GetNavArea(const Vector &, NavHull_t, int32, float, float, float *);
	CNavArea * GetNearestNav(const Vector &, NavHull_t, int, Vector *, float);
	CNavArea * GetNearestNavArea(const Vector &, NavHull_t, int, float);
	void GetNavAreasInBox(NavAreaVector &, const Vector &, const Vector &);
	void GetNavAreasIntersectingSphere(NavAreaVector &, const Vector &, float, int);
	CNavArea * GetNavAreaWithLargestPortal(const Vector &, const CNavArea &, NavEdgeIndex, float, NavEdgeIndex *);
	bool GetGroundHeight(const Vector &, float *, Vector *);
	bool GetSimpleGroundHeight(const Vector &, float *, Vector *);
	bool FindGroundForNode(Vector *, Vector *);
	bool FindNavAreaOrLadderAlongRay(const Vector &, const Vector &, const NavHull_t &, int32, CNavArea * *, CNavLadder * *, CNavArea *);
	bool TestRayToMesh(const Vector &, const Vector &, NavHull_t, CNavTraceResult *, FuncNavAreaTransition_t *, float, float);
	CNavArea * GetRandomAreaInVolume(const CNavVolume &);
	void FindAreasOverlappingVolume(const CNavVolume &, NavAreaVector &);
	virtual void OnServerActivate();
	virtual void OnRoundRestart();
	virtual void OnRoundRestartPreEntity();
	virtual void OnBreakableCreated(CBaseEntity *);
	virtual void OnBreakableBroken(CBaseEntity *);
	void OnEditCreateNotify(CNavArea &);
	virtual void OnEditDestroyNotify(CNavArea *);
	virtual void OnEditDestroyNotify(CNavLadder *);
	void CommandNavSaveSelected(const char *);
	void CommandNavMergeMesh(const CCommandContext &, const CCommand &);
	void MergeNavMesh(const CNavMesh &, CUtlVector<CNavCrossMeshConnection, CUtlMemory<CNavCrossMeshConnection, int> > &);
	void CreateLadder(const Vector &, const Vector &, float);
	void CreateLadder(const Vector &, const Vector &, float, const Vector2D &, float);
	float SnapToGrid(float, bool);
	Vector SnapToGrid(const Vector &, bool, bool, bool);
	int GetSnapGridSize(bool);
	virtual void StripNavigationAreas();
	void ForAllAreasOverlappingVolume(const CNavVolume &, function<void(CNavArea&)>);
	void ForAllAreasOverlappingEntity(const CBaseEntity &, function<void(CNavArea&)>, bool);
	void RaiseVert(CNavArea &, int, float, bool);
	void PlaceVertOnGround(CNavArea &, int, float);
	void ShiftMesh(const Vector &);
	bool GridIsInitialized();
	const NavAreaVector & GetGridCellAreas(const NavCellCoord_t &);
	const NavAreaVector & GetGridCellAreas(int, int);
	float GetGridCellSize();
	int WorldToGridX(float);
	int WorldToGridY(float);
	int ClampToGridX(int);
	int ClampToGridY(int);
	int GetGridSizeX();
	int GetGridSizeY();
	void GetGridCellExtent(int, int, Extent *);
	float ClosestPointOnCellDistSqr(const Vector2D &, int, int);
	float FarthestPointOnCellDistSqr(const Vector2D &, int, int);
	void GetGridExtent(Extent *);
	const CNavSelectionSet & GetSelectionSet();
	CNavSelectionSet & GetSelectionSet();
	void ClearSelectedSet();
	void AddToSelectedSet(CNavArea *);
	const NavAreaVector & GetSelectedSet();
	bool GetNearestPointOnMeshWithHullClearance(const Vector &, NavHull_t, Vector *, int32);

protected:

	virtual void AddNavArea(CNavArea &);
	virtual void RemoveNavArea(CNavArea &);
	virtual void RemoveInvalidNavAreas();

private:

	int ComputeHashKey(uint);
	void AllocateGrid(float, float, float, float);
	void RebuildGrid();
	void DestroyNavigationMesh(bool);
	bool Dump(const char *);
	void DestroyLadders();
	void StitchAreaSet(CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> > *);
	void PerformDeferredDeletion();
	void BuildLaddersFromNavGen(const CNavGenInput &);
	virtual void ReadNavGenMarkup(const CNavGenInput &);
	void SetupLadder(CNavLadder *, const Vector &, const Vector &, float, const Vector2D &, float);
	void StitchAreaIntoMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea*>*)::CAreaSet>(CNavArea &, NavDirType, CAreaSet &);
	bool StitchMesh<CNavMesh::StitchAreaSet(CUtlVector<CNavArea*>*)::CAreaSet>(CAreaSet &);
	bool ForAllAreasIntersectingSphere<NavAreaCollectorExternal>(NavAreaCollectorExternal &, const Vector &, float);

	// vtable[2] PreLoadAreas
	// vtable[3] UnloadAreas
	// vtable[4] CreateArea
	// vtable[5] DestroyArea
	// vtable[6] Validate
	// vtable[7] ResetNavMesh
	// vtable[8] Update
	// vtable[9] LoadNavMesh
	// vtable[10] PostLoadNavMesh
	// vtable[11] PostSpawnGroupLoad
	// vtable[12] GetSubVersionNumber
	// vtable[13] SaveCustomData
	// vtable[14] LoadCustomData
	// vtable[15] SaveCustomDataPreArea
	// vtable[16] LoadCustomDataPreArea
	// vtable[17] ApplyMarkup
	// vtable[18] BuildFromNavGen
	// vtable[19] GetNavMarkupDesignerName
	// vtable[20] OnServerActivate
	// vtable[21] OnRoundRestart
	// vtable[22] OnRoundRestartPreEntity
	// vtable[23] OnBreakableCreated
	// vtable[24] OnBreakableBroken
	// vtable[25] OnEditDestroyNotify
	// vtable[26] OnEditDestroyNotify
	// vtable[27] StripNavigationAreas
	// vtable[28] AddNavArea
	// vtable[29] RemoveNavArea
	// vtable[30] RemoveInvalidNavAreas
	// vtable[31] ReadNavGenMarkup
	// sizeof = 8528
};

// src/public/navlib/nav_mesh.h:619
class CNavAreaMarker {
protected:

	CNavAreaMarker(int);
	bool IsMarked(const CNavArea &);
	void ClearMark(const CNavArea &);
	void SetMark(const CNavArea &);

	// sizeof = 32768
};

// src/public/navlib/nav_mesh.h:619
class CNavAreaMarker {
	enum {
		MAX_NUM_NAV_AREAS = 0x40000,
	};

protected:

	CNavAreaMarker(int);
	bool IsMarked(const CNavArea &);
	void ClearMark(const CNavArea &);
	void SetMark(const CNavArea &);

	// sizeof = 32768
};
