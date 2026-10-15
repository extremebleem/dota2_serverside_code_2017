// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_area.h:63
class CNavConnect {
	union {
		uint m_nAreaId;  // +0x0
	};

protected:

	union {
		uint m_nAreaId;  // +0x0
	};
	NavEdgeIndex m_nBackEdge;  // +0x8
	CNavConnect(uint, NavEdgeIndex);
	CNavConnect(CNavArea *, NavEdgeIndex);
	CNavArea * GetArea();
	void Set(CNavArea *, NavEdgeIndex);
	void SetArea(CNavArea *);
	void SetBackEdge(NavEdgeIndex);
	NavEdgeIndex GetBackEdge();
	void SetAreaId(uint);
	uint GetAreaId();
	bool operator==(const CNavConnect &);

	// sizeof = 16
};

// src/public/navlib/nav_area.h:131
class CNavConnectVector : public CUtlVectorUltraConservative<CNavConnect, CUtlVectorUltraConservativeAllocator> {
public:

	CNavConnectVector();

	// sizeof = 8
};

// src/public/navlib/nav_area.h:137
union NavLadderConnect {
	uint32 m_nId;  // +0x0
};

// src/public/navlib/nav_area.h:148
class CNavLadderConnectVector : public CUtlVectorUltraConservative<NavLadderConnect, CUtlVectorUltraConservativeAllocator> {
public:

	CNavLadderConnectVector();

	// sizeof = 8
};

// src/public/navlib/nav_area.h:158
struct NavLaddersAndElevators_t {
	NavLaddersAndElevators_t();

	// sizeof = 32
};

// src/public/navlib/nav_area.h:167
struct LegacyNavData_t {
	enum LegacyDir_t {
		LEGACY_NORTH = 0,
		LEGACY_EAST = 0x1,
		LEGACY_SOUTH = 0x2,
		LEGACY_WEST = 0x3,
	};

	struct HidingSpotData_t {
		uint32 m_id;  // +0x0
		uint8 m_flags;  // +0x10
		HidingSpotData_t();

		// sizeof = 20
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct EncounterSpotData_t {
		struct SpotOrder_t {
			uint32 m_Id;  // +0x0
			float m_Time;  // +0x4

			// sizeof = 8
		};
		/* tag__fprintf: const_type tag not supported! */;

		uint32 m_From;  // +0x0
		uint32 m_To;  // +0x4
		EncounterSpotData_t();

		// sizeof = 40
	};
	/* tag__fprintf: const_type tag not supported! */;

	uint32 m_NextHidingSpotID;  // +0x18

	float m_earliestOccupyTime[2];  // +0x38
	LegacyNavData_t();

	// sizeof = 64
};

// src/public/navlib/nav_area.h:167
struct LegacyNavData_t {
	enum {
		MAX_NAV_TEAMS_LEGACY = 0x2,
	};

	enum LegacyDir_t {
		LEGACY_NORTH = 0,
		LEGACY_EAST = 0x1,
		LEGACY_SOUTH = 0x2,
		LEGACY_WEST = 0x3,
	};

	struct HidingSpotData_t {
		uint32 m_id;  // +0x0
		uint8 m_flags;  // +0x10
		HidingSpotData_t();

		// sizeof = 20
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct EncounterSpotData_t {
		struct SpotOrder_t {
			uint32 m_Id;  // +0x0
			float m_Time;  // +0x4

			// sizeof = 8
		};
		/* tag__fprintf: const_type tag not supported! */;

		uint32 m_From;  // +0x0
		uint32 m_To;  // +0x4
		EncounterSpotData_t();

		// sizeof = 40
	};
	/* tag__fprintf: const_type tag not supported! */;

	uint32 m_NextHidingSpotID;  // +0x18

	float m_earliestOccupyTime[2];  // +0x38
	LegacyNavData_t();

	// sizeof = 64
};

// src/public/navlib/nav_area.h:167
struct LegacyNavData_t {
	enum {
		MAX_NAV_TEAMS_LEGACY = 0x2,
	};

	enum LegacyDir_t {
		LEGACY_NORTH = 0,
		LEGACY_EAST = 0x1,
		LEGACY_SOUTH = 0x2,
		LEGACY_WEST = 0x3,
	};

	struct HidingSpotData_t {
		uint32 m_id;  // +0x0
		uint8 m_flags;  // +0x10
		HidingSpotData_t();

		// sizeof = 20
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct EncounterSpotData_t {
		struct SpotOrder_t {
			uint32 m_Id;  // +0x0
			float m_Time;  // +0x4

			// sizeof = 8
		};
		/* tag__fprintf: const_type tag not supported! */;

		uint32 m_From;  // +0x0
		uint32 m_To;  // +0x4
		EncounterSpotData_t();
		~EncounterSpotData_t();

		// sizeof = 40
	};
	/* tag__fprintf: const_type tag not supported! */;

	uint32 m_NextHidingSpotID;  // +0x18

	float m_earliestOccupyTime[2];  // +0x38
	LegacyNavData_t();
	~LegacyNavData_t();

	// sizeof = 64
};

// src/public/navlib/nav_area.h:210
class CNavArea : public CNavPoly {
public:

	int m_nOpenListHeapIndex;  // +0xbc
	bool m_bShouldBeDestroyed;  // +0xc0

protected:

	static bool ms_bIsReset;
	static unsigned int ms_nNextID;
	static unsigned int ms_nMasterMarker;
	static CNavOpenList * ms_pOpenList;
	int32 m_nIndex;  // +0xd0
	uint32 m_AreaId;  // +0xd4
	uint32 m_AttributeDynamicFlags;  // +0xe0
	bool m_bIsInGrid;  // +0xe4

	uint32 m_nMarker;  // +0xe8

private:

protected:

	uint8 m_isBlockedFlags;  // +0x138
	uint8 m_nAvoidanceObstacleHeight;  // +0x139

	uint8 m_pathParentHow:4;  // +0x148:0

	NavEdgeIndex m_nPathInEdge;  // +0x149

	CNavArea(const CNavArea &);
	CNavArea(CNavMesh &);
	virtual ~CNavArea();
	virtual void GeometryChanged();
	const CNavMesh & GetNavMesh();
	bool IsInGrid();
	bool IsValidArea();
	uint32 GetID();
	int GetIndex();
	virtual void RemapIndices(const CUtlVector<int, CUtlMemory<int, int> > &);
	virtual void Validate();
	void SetAttributes(CNavAttribute);
	CNavAttribute GetAttributes();
	bool HasAttributes(CNavAttribute);
	bool HasSpawnAttributes(CNavAttribute);
	void AddAttributes(CNavAttribute);
	void RemoveAttributes(CNavAttribute);
	void AddSpawnAttributes(CNavAttribute);
	void RemoveSpawnAttributes(CNavAttribute);
	virtual CNavAttribute GetSavedAttributes();
	void SetAttributesDynamic(int);
	int GetAttributesDynamic();
	bool HasAttributesDynamic(int);
	void AddAttributesDynamic(int);
	void RemoveAttributesDynamic(int);
	bool IsBottleneck();
	bool IsUnderwater();
	virtual void SetPlace(Place);
	virtual Place GetPlace();
	bool IsBlockedRaw(int);
	void SetBlockedRaw(int);
	void ClearBlockedRaw(int);
	bool IsBlockedAnyRaw();
	void SetBlockedAnyRaw();
	void ClearBlockedAnyRaw();
	bool IsBlocked(int, bool);
	bool HasAvoidanceObstacle(float);
	float GetAvoidanceObstacleHeight();
	void SetAvoidanceObstacleHeight(float);
	void UpdateFlagBottleneck();
	void UpdateFlagUnderWater();
	void ConnectivityChanged();
	int GetTotalAdjacentCount();
	CNavConnectVector & GetAdjacentAreas(NavEdgeIndex);
	const CNavConnectVector & GetAdjacentAreas(NavEdgeIndex);
	CNavConnectVector & GetIncomingConnections(NavEdgeIndex);
	const CNavConnectVector & GetIncomingConnections(NavEdgeIndex);
	int FindOutgoingConnectionEdgeIndex(const CNavArea *);
	CNavArea * GetRandomAdjacentArea();
	bool IsConnectedOnEdge(const CNavArea *, NavEdgeIndex);
	bool IsConnectedOnAny(const CNavArea *, bool, NavEdgeIndex *, NavEdgeIndex *);
	bool IsConnectedToLadder(const CNavLadder *, LadderDirectionType);
	bool IsEdgeConnected(NavEdgeIndex);
	bool IsEdgeConnectedOut(NavEdgeIndex);
	NavEdgeIndex GetBackEdgeIndex(const CNavArea &, NavEdgeIndex, float *);
	void GetEdgePairWithMaximumOverlap(CNavArea &, NavEdgeIndex &, NavEdgeIndex &);
	void ConnectTo(CNavArea &, NavEdgeIndex, NavEdgeIndex, bool);
	void AddIncomingConnection(CNavArea &, NavEdgeIndex, NavEdgeIndex);
	void Disconnect(CNavArea *);
	void Disconnect(NavEdgeIndex);
	void ConnectTo(CNavLadder *);
	void Disconnect(CNavLadder *);
	float ComputeGroundHeightChange(const CNavArea &);
	bool HasLaddersAndElevatorsStruct();
	void AllocateLaddersAndElevatorsStruct();
	CNavLadderConnectVector * GetLadders(LadderDirectionType);
	IHandleEntity * GetElevatorEntity();
	const CNavConnectVector * GetElevatorAreas();
	bool IsLineToPointWithinPortal(const CNavArea &, NavEdgeIndex, NavEdgeIndex, const Vector &, const Vector &, float);
	void ClipRayToAreaInterior(const Vector2D &, const Vector2D &, float *, Vector *);
	virtual void Save(CUtlBuffer &, const CNavPlaceDirectory &);
	virtual NavErrorType Load(CUtlBuffer &, uint, uint, LegacyNavData_t *);
	NavErrorType LoadCore(CUtlBuffer &, uint, uint, LegacyNavData_t *);
	virtual NavErrorType PostLoad();
	virtual void SaveToSelectedSet(KeyValues *);
	virtual void RestoreFromSelectedSet(KeyValues *);
	virtual void Dump(CUtlBuffer &);
	virtual void OnServerActivate();
	virtual void OnRoundRestart();
	virtual void OnRoundRestartPreEntity();
	virtual void OnEnter(const IHandleEntity *, const CNavArea *);
	virtual void OnExit(const IHandleEntity *, const CNavArea *);
	void CalcBoundaryEdges();
	void CalcBoundaryVerts();
	void MakeNewMarker();
	void Mark();
	bool IsMarked();
	void SetPathParentArea(CNavArea *, NavTraverseType, NavEdgeIndex);
	CNavArea * GetPathParentArea();
	NavTraverseType GetPathParentAreaHow();
	NavEdgeIndex GetPathIncomingAreaEdge();
	CNavArea * GetParent();
	CNavOpenList & GetOpenList();
	bool IsOpen();
	float GetOpenListCost();
	float GetCostSoFar();
	bool IsClosed();
	void AddToClosedList();
	void ClearSearchLists();
	void SetPathfindingPos(const Vector &);
	const Vector & GetPathfindingPos();
	virtual void OnDestroyNotify(CNavArea *);
	virtual void OnDestroyNotify(CNavLadder *);
	virtual void OnAreaIndexChangeNotify(int, int);
	virtual void OnEditCreateNotify(CNavArea &);
	virtual void OnEditDestroyNotify(const CNavArea *);
	virtual void OnEditDestroyNotify(const CNavLadder *);
	void MarkAreaForDeletion();
	virtual void RemoveInvalidNavAreas();
	bool SplitArea_Old(const Vector &, float, CNavArea * *, CNavArea * *);
	int SplitArea(const Vector &, float, bool, CNavArea * *, bool);
	int SplitAreaBySegment(const Vector2D &, const Vector2D &, bool, CNavArea * *);
	bool SplitEditWrapper_Old(bool, float, CNavArea * *, CNavArea * *);
	bool SplitEditWrapperAxisAligned(bool, float, CNavArea * *, CNavArea * *);
	CNavArea * SpliceEdit(CNavArea &);
	bool MergeEdit(CNavArea &);
	void ShiftAreaAndLadders(const Vector &);
	virtual bool IsAbleToMergeWith(const CNavArea &);
	virtual void InheritAttributes(const CNavArea *, const CNavArea *);
	virtual void CustomAnalysis(bool);
	void AddLadderUp(CNavLadder *);
	void AddLadderDown(CNavLadder *);
	virtual void GetNavDataProperties(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual void SetNavDataProperty(const char *, const char *);
	void BuildFromNavGen(const CUtlVector<VecDouble3, CUtlMemory<VecDouble3, int> > &, const CNavGenPoly &);
	void SetAreaIndex(int);

private:

	void Strip();
	void MergeAdjacentConnections(CNavArea &);
	void FinishSplitEdit(CNavArea *, NavDirType);
	void ConnectSplitEdge(NavEdgeIndex, CNavArea &, NavEdgeIndex, bool);

	// vtable[0] GeometryChanged
	// vtable[3] RemapIndices
	// vtable[4] Validate
	// vtable[5] GetSavedAttributes
	// vtable[6] SetPlace
	// vtable[7] GetPlace
	// vtable[8] Save
	// vtable[9] Load
	// vtable[10] PostLoad
	// vtable[11] SaveToSelectedSet
	// vtable[12] RestoreFromSelectedSet
	// vtable[13] Dump
	// vtable[14] OnServerActivate
	// vtable[15] OnRoundRestart
	// vtable[16] OnRoundRestartPreEntity
	// vtable[17] OnEnter
	// vtable[18] OnExit
	// vtable[19] OnDestroyNotify
	// vtable[20] OnDestroyNotify
	// vtable[21] OnAreaIndexChangeNotify
	// vtable[22] OnEditCreateNotify
	// vtable[23] OnEditDestroyNotify
	// vtable[24] OnEditDestroyNotify
	// vtable[25] RemoveInvalidNavAreas
	// vtable[26] IsAbleToMergeWith
	// vtable[27] InheritAttributes
	// vtable[28] CustomAnalysis
	// vtable[29] GetNavDataProperties
	// vtable[30] SetNavDataProperty
	// sizeof = 344
};

// src/public/navlib/nav_area.h:570
class CNavConnectOutIterator {
private:

	const const CNavArea & m_rArea;  // +0x0
	int m_nEdge;  // +0x8
	int m_nCurArea;  // +0xc
	CNavConnectOutIterator(const CNavArea &);
	void Begin();
	void Next();
	bool IsEnd();
	CNavArea * GetArea();
	const CNavArea * GetArea();
	int GetEdgeIndex();
	int GetBackEdgeIndex();
	const CNavConnect * GetConnect();

	// sizeof = 16
};

// src/public/navlib/nav_area.h:650
class CNavConnectInOnlyIterator {
private:

	const const CNavArea & m_rArea;  // +0x0
	int m_nEdge;  // +0x8
	int m_nCurArea;  // +0xc
	CNavConnectInOnlyIterator(const CNavArea &);
	void Begin();
	void Next();
	bool IsEnd();
	CNavArea * GetArea();
	const CNavArea * GetArea();
	int GetEdgeIndex();
	int GetBackEdgeIndex();
	const CNavConnect * GetConnect();

	// sizeof = 16
};
