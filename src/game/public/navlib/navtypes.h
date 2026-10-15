// Reconstructed from DWARF by pahole; not original source.

// src/game/public/navlib/navtypes.h:86
class CNavGenParams {
	enum {
		NAV_MAX_HULLS = 0x3,
	};

	bool m_useProjectDefaults;  // +0x0

	float m_flTileSize;  // +0x4
	float m_flCellSize;  // +0x8
	float m_flCellHeight;  // +0xc
	int m_nRegionMinSize;  // +0x10
	int m_nRegionMergeSize;  // +0x14
	float m_flDetailSampleDist;  // +0x18
	float m_flDetailSampleMaxError;  // +0x1c
	int m_nEdgeMaxLen;  // +0x20
	float m_flEdgeMaxError;  // +0x24
	int m_nVertsPerPoly;  // +0x28
	int m_nAgentNumHulls;  // +0x2c
	float m_flAgentRadius[3];  // +0x30
	float m_flAgentHeight[3];  // +0x3c
	float m_flAgentMaxClimb;  // +0x48
	int m_nAgentMaxSlope;  // +0x4c
	float m_flAgentMaxJumpDownDist;  // +0x50
	float m_flAgentMaxJumpHorizDist1;  // +0x54
	float m_flAgentMaxJumpUpDist;  // +0x58
protected:

	static CNavGenParams ms_NavGenParamsDefault;

	static bool ms_bDefaultsLoaded;
	void Save(CUtlBuffer &);
	void Load(int, CUtlBuffer &);
	bool operator==(const CNavGenParams &);
	const CNavGenParams & GetNavGenParamsToUse();
	const CNavGenParams & GetNavGenParamsDefault();
	void LoadDefaultsFromGameInfo(KeyValues *);

	// sizeof = 92
};

// src/game/public/navlib/navtypes.h:142
struct NavGenLadder_t {
	float m_flWidth;  // +0x24
	NavGenLadder_t();

	// sizeof = 40
};

// src/game/public/navlib/navtypes.h:156
struct NavGenProperty_t {
	static const int MAX_STRING_LENGTH = 64;
	char m_Name[64];  // +0x0
	char m_Value[64];  // +0x40

	// sizeof = 128
};

// src/game/public/navlib/navtypes.h:167
struct NavGenMarkup_t {
	uint32 m_nPropertyIndex;  // +0x48
	NavGenMarkup_t();

	// sizeof = 76
};

// src/game/public/navlib/navtypes.h:177
class CNavGenInput {
private:

	uint8 m_nGenParamsIndex;  // +0xbc
	CNavGenInput();
	void SetNavGenParams(const CNavGenParams &);
	const CNavGenParams & GetNavGenParams();
	void SetNavGenParamsIndex(uint8);
	uint8 GetNavGenParamsIndex();
	void SetLadderCount(int32);
	int32 GetLadderCount();
	void SetLadderParameters(uint32, const Vector &, const Vector &, const Vector &, float);
	void GetLadderParameters(uint32, Vector *, Vector *, Vector *, float *);
	void SetPropertyCount(uint16);
	uint16 GetPropertyCount();
	void SetPropertyName(uint32, const char *);
	const char * GetPropertyName(uint32);
	void SetPropertyValue(uint32, const char *);
	const char * GetPropertyValue(uint32);
	uint32 FindOrAddProperty(const char *, const char *);
	void ClearNavMarkups();
	void AddNavMarkup(NavGenMarkup_t *);
	void SetNavMarkupCount(int32);
	int32 GetNavMarkupCount();
	void SetNavMarkup(uint32, NavGenMarkup_t *);
	void GetNavMarkup(NavGenMarkup_t *, uint32);

	// sizeof = 192
};

// src/game/public/navlib/navtypes.h:258
struct NavGenAreaDebug_t {
	uint32 m_nVerts;  // +0x0
	unsigned int m_verts[4];  // +0x4

	NavGenAreaDebug_t();

	// sizeof = 48
};

// src/game/public/navlib/navtypes.h:274
struct NavGenDebugStage_t {
	NavGenDebugStage_t();
	void WriteToOBJFile(const char *);
	~NavGenDebugStage_t();

	// sizeof = 56
};

// src/game/public/navlib/navtypes.h:287
struct NavGenRecastDebugStage_t {
	struct Vertex_t {
		Vertex_t();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;
	NavGenRecastDebugStage_t();
	~NavGenRecastDebugStage_t();

	// sizeof = 56
};

// src/game/public/navlib/navtypes.h:302
class CNavGenOutput {
private:

	CNavGenOutput(CNavMesh * (*)());
	~CNavGenOutput();
	void Reset();
	AABB_t ComputeBounds();
	void DestructiveCopy(CNavGenOutput &);
	bool LoadDebugDataFromBuffer(CUtlBuffer &);
	void WriteDebugDataToBuffer(CUtlBuffer &);
	CNavMesh * GetNavMesh();
	const CNavMesh * GetNavMesh();
	const CNavGenParams & GetNavGenerateParams();
	int32 GetAreaCount();
	uint32 GetAreaUniqueId(uint32);
	float GetAreaClearance(uint32);
	int32 GetAreaNumVertices(uint32);
	Vector GetAreaVertex(uint32, NavAreaVertex_t);
	void GetAreaSideVertices(uint32, uint32, Vector &, Vector &);
	Vector GetAreaNormal(uint32);
	const CNavConnectVector * GetAreaConnections(uint32, uint32);
	int32 GetAreaConnectionCount(uint32, uint32);
	int32 GetAreaConnectionCount(uint32);
	int32 GetLaddersCount();
	int32 GetLadderConnectionsCount(uint32);
	CNavGenOutputLadderConnectionsIterator GetLadderConnections(uint32);
	Vector GetLadderTop(uint32);
	Vector GetLadderBottom(uint32);
	CUtlVector<NavGenDebugStage_t, CUtlMemory<NavGenDebugStage_t, int> > * GetDebugStages();
	uint32 GetDebugStageCount();
	bool IsValidDebugStageIndex(uint32);
	const char * GetDebugStageDescription(uint32);
	int32 GetDebugStageAreaCount(uint32);
	int32 GetDebugStageAreaNumVertices(uint32, uint32);
	Vector GetDebugStageAreaVertex(uint32, uint32, NavAreaVertex_t);
	const NavGenDebugStage_t & GetDebugStage(uint32);
	CUtlVector<NavGenRecastDebugStage_t, CUtlMemory<NavGenRecastDebugStage_t, int> > * GetRecastDebugStages();
	uint32 GetRecastDebugStageCount();
	bool IsValidRecastDebugStageIndex(uint32);
	const char * GetRecastDebugStageDescription(uint32);
	const NavGenRecastDebugStage_t & GetRecastDebugStage(uint32);
	void Destruct();
	const CNavArea * GetArea(uint32);
	const CNavLadder * GetLadder(uint32);

	// sizeof = 24
};

// src/game/public/navlib/navtypes.h:447
class CNavGenOutputLadderConnectionsIterator {
private:

	const const CNavGenOutput & m_navGenOutput;  // +0x0
	int32 m_curLadderConnection;  // +0x8
	uint32 m_nLadderIndex;  // +0xc
	bool m_bEnd;  // +0x10
	CNavGenOutputLadderConnectionsIterator(const CNavGenOutput &, uint32);
	bool End();
	void operator++();
	uint32 GetArea();
	NavLadderConnectionType GetConnectionType();
	void SkipToNextValidConnection();

	// sizeof = 24
};
