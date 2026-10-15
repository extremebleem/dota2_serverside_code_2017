// Reconstructed from DWARF by pahole; not original source.

// src/game/public/fow/fow.h:169
class CFoW {
	enum TILEINFO_BITS {
		TILEINFO_HEIGHTFIELD_MASK = 0x1f,
		TILEINFO_RADIUS_OCCLUDER_MASK = 0x20,
		TILEINFO_RADIUS_BLOCKING_OCCLUDER_MASK = 0x40,
		TILEINFO_RADIUS_TREE_MASK = 0x80,
		TILEINFO_OCCLUDERS_MASK = 0xe0,
	};

	struct OccluderId_t {
		union {
			struct {
				uint32 GridX:10;  // +0x0:0
				uint32 GridY:10;  // +0x0:10
				uint32 Unused:12;  // +0x0:20
			} elems;
			uint32 val;  // +0x0
		};

		union {
			struct {
				uint32 GridX:10;  // +0x0:0
				uint32 GridY:10;  // +0x0:10
				uint32 Unused:12;  // +0x0:20
			} elems;
			uint32 val;  // +0x0
		} u;

		// sizeof = 4
	};

private:

	bool m_bInSolveVisibility;  // +0x0
	bool m_bIsDotaServer;  // +0x1
	bool m_bFowEnabled;  // +0x2
	bool m_bEnableUnseenVisibility;  // +0x3
	unsigned int m_nNumberOfTeams;  // +0x4
	int m_nHorizontalGridSize;  // +0x20
	float m_nHorizontalGridSizeRcp;  // +0x24
	int m_nGridXUnits;  // +0x28
	int m_nGridYUnits;  // +0x2c
	int m_FrameNumber;  // +0x30
	float m_flElapsedFrameTime;  // +0x34
	unsigned int m_nMagicInitNumber;  // +0x38

	static unsigned int s_nMagicInitNumber;
	int m_WasVisibleUpdateID[10];  // +0x3c

	float32 m_flOccluderRadius;  // +0x350
	float32 m_flTreeRadius;  // +0x354

	bool m_bDebugVisible;  // +0x3f8

	unsigned int m_nDebugFlags;  // +0x3fc
	unsigned int m_nDebugTeam;  // +0x400

	PFN_TraceRayVerticalGroundHeight * m_pfnTraceRayVerticalGroundHeight;  // +0x410
	uintp m_hContext;  // +0x418
	typedef uint8 GRIDDEGREE;
	CFoW();
	~CFoW();
	void ClearState();
	void SetNumberOfTeams(int);
	unsigned int GetNumberOfTeams();
	void EnableFogOfWar(bool);
	bool IsUnseenVisibilityEnabled();
	void EnableUnseenVisbility(bool);
	void SetContext(uintp);
	void SetSize(bool, uintp, Vector &, Vector &, int, int, PFN_TraceRayVerticalGroundHeight *, float);
	void UpdateHeightArray();
	void SetCustomVerticalLevels(float *, int);
	bool IsInitialized();
	void GetSize(Vector *, Vector *);
	const Vector & GetWorldMins();
	const Vector & GetWorldMaxs();
	int GetHorizontalGridSize();
	float GetHorizontalGridSizeRcp();
	int GetXGridUnits();
	int GetYGridUnits();
	void SnapCoordsToGrid(const Vector &, Vector &);
	void SetDebugVisibility(bool);
	void SetDebugTeam(unsigned int);
	void EnableDebugFlags(unsigned int);
	void DisableDebugFlags(unsigned int);
	unsigned int GetDebugFlags();
	void DrawDebugInfo(const Vector &, float, float, float, float);
	void PrintStats();
	bool EndUpdate(float, int, bool);
	int AddViewer(FoWViewerType_t, unsigned int);
	void RemoveViewer(int);
	void UpdateViewerLocation(int, const Vector &);
	void UpdateViewerSize(int, float);
	void UpdateViewerOccludeMode(int, FoWOccluderMode_t);
	void UpdateViewerTeam(int, unsigned int);
	void UpdateViewerName(int, const char *);
	void UpdateViewer(int, unsigned int, const Vector &, float, FoWOccluderMode_t);
	bool HasUnobstructedViewer(unsigned int, const Vector &);
	void OutOfViewersDieDieDie();
	float GetViewerSize(int);
	const Vector & GetViewerLocation(int);
	FoWViewerType_t GetViewerType(int);
	uint32 AddOccluder(const Vector &);
	uint32 AddBlockingOccluder(const Vector &);
	void RemoveOccluder(uint32);
	void EnableOccluder(uint32, bool);
	uint32 GetLocationInfo(unsigned int, const Vector &);
	bool GetLocationInfoForRadius(unsigned int, const Vector &, float);
	uint32 GetLocationInfoFast(unsigned int, int, int);
	uint8 GetTileLocationMaxVisibilityDegreeInt(unsigned int, int, int);
	float GetLocationVisibilityDegree(unsigned int, const Vector &, bool, float, const char *);
	float GetLocationVisibilityDegree(unsigned int, const Vector &, const Vector &, bool, const char *);
	float GetTileLocationVisibilityDegree(unsigned int, const Vector &, const char *);
	float GetTileLocationVisibilityDegreeFast(unsigned int, int, int, const char *);
	uint8 GetTileLocationVisibilityDegreeInt(unsigned int, int, int);
	bool GetGridUnits(const Vector &, float, float, bool, int &, int &);
	bool GetGridUnitsClamped(const Vector &, int &, int &);
	bool GetGridUnitsClamped(const Vector2D &, int &, int &);
	bool ClampGridUnits(int &, int &);
	int GetGridUnitClampedX(float);
	int GetGridUnitClampedY(float);
	void GetWorldCoords(int, int, Vector &);
	uint8 GetHeightGroup(uint32, uint32);
	uint8 GetHeightGroup(int);
	uint32 GetLocationInfo(unsigned int, uint32, uint32);
	void GenerateMiniMapTexture(unsigned int, CPixelWriter &, int, int, unsigned int, unsigned int);
	void GenerateMiniMapTexture(unsigned int, uint8 *, int, int, unsigned int, unsigned int);
	float GetTreeRadius();
	float GetOccluderRadius();
	uint8 GetOccluderBitMask(int);
	void VisibilityAddRef(unsigned int, int, int);
	CFoW_1DZ & GetFoW1DZ();
	void SetHeightGroup(uint32, uint32, uint8);
	void InsertViewerIntoTree(int);
	void RemoveViewerFromTree(int, Vector *);
	void DirtyViewers(int, int, float);
	void UpdateVisibleAmountsAndGridDegree(float, uint32);
	void UpdateVisibleAmounts(float, uint32);
	int GetGridIndex(float, float);
	int SolveVisibility(float, int, bool &);
	float GridDegreeToFloatClamped(GRIDDEGREE, bool);
	GRIDDEGREE FloatToGridDegree(float);
	float GetLocationVisibilityDegree_Circular(unsigned int, const Vector &, bool, float, const char *);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 1056
};

// src/game/public/fow/fow.h:169
class CFoW {
	enum TILEINFO_BITS {
		TILEINFO_HEIGHTFIELD_MASK = 0x1f,
		TILEINFO_RADIUS_OCCLUDER_MASK = 0x20,
		TILEINFO_RADIUS_BLOCKING_OCCLUDER_MASK = 0x40,
		TILEINFO_RADIUS_TREE_MASK = 0x80,
		TILEINFO_OCCLUDERS_MASK = 0xe0,
	};

private:

	bool m_bInSolveVisibility;  // +0x0
	bool m_bIsDotaServer;  // +0x1
	bool m_bFowEnabled;  // +0x2
	bool m_bEnableUnseenVisibility;  // +0x3
	unsigned int m_nNumberOfTeams;  // +0x4
	int m_nHorizontalGridSize;  // +0x20
	float m_nHorizontalGridSizeRcp;  // +0x24
	int m_nGridXUnits;  // +0x28
	int m_nGridYUnits;  // +0x2c
	int m_FrameNumber;  // +0x30
	float m_flElapsedFrameTime;  // +0x34
	unsigned int m_nMagicInitNumber;  // +0x38

	static unsigned int s_nMagicInitNumber;
	int m_WasVisibleUpdateID[10];  // +0x3c

	float32 m_flOccluderRadius;  // +0x350
	float32 m_flTreeRadius;  // +0x354

	bool m_bDebugVisible;  // +0x3f8

	unsigned int m_nDebugFlags;  // +0x3fc
	unsigned int m_nDebugTeam;  // +0x400

	PFN_TraceRayVerticalGroundHeight * m_pfnTraceRayVerticalGroundHeight;  // +0x410
	uintp m_hContext;  // +0x418
	typedef uint8 GRIDDEGREE;
	CFoW();
	~CFoW();
	void ClearState();
	void SetNumberOfTeams(int);
	unsigned int GetNumberOfTeams();
	void EnableFogOfWar(bool);
	bool IsUnseenVisibilityEnabled();
	void EnableUnseenVisbility(bool);
	void SetContext(uintp);
	void SetSize(bool, uintp, Vector &, Vector &, int, int, PFN_TraceRayVerticalGroundHeight *, float);
	void UpdateHeightArray();
	void SetCustomVerticalLevels(float *, int);
	bool IsInitialized();
	void GetSize(Vector *, Vector *);
	const Vector & GetWorldMins();
	const Vector & GetWorldMaxs();
	int GetHorizontalGridSize();
	float GetHorizontalGridSizeRcp();
	int GetXGridUnits();
	int GetYGridUnits();
	void SnapCoordsToGrid(const Vector &, Vector &);
	void SetDebugVisibility(bool);
	void SetDebugTeam(unsigned int);
	void EnableDebugFlags(unsigned int);
	void DisableDebugFlags(unsigned int);
	unsigned int GetDebugFlags();
	void DrawDebugInfo(const Vector &, float, float, float, float);
	void PrintStats();
	bool EndUpdate(float, int, bool);
	int AddViewer(FoWViewerType_t, unsigned int);
	void RemoveViewer(int);
	void UpdateViewerLocation(int, const Vector &);
	void UpdateViewerSize(int, float);
	void UpdateViewerOccludeMode(int, FoWOccluderMode_t);
	void UpdateViewerTeam(int, unsigned int);
	void UpdateViewerName(int, const char *);
	void UpdateViewer(int, unsigned int, const Vector &, float, FoWOccluderMode_t);
	bool HasUnobstructedViewer(unsigned int, const Vector &);
	void OutOfViewersDieDieDie();
	float GetViewerSize(int);
	const Vector & GetViewerLocation(int);
	FoWViewerType_t GetViewerType(int);
	uint32 AddOccluder(const Vector &);
	uint32 AddBlockingOccluder(const Vector &);
	void RemoveOccluder(uint32);
	void EnableOccluder(uint32, bool);
	uint32 GetLocationInfo(unsigned int, const Vector &);
	bool GetLocationInfoForRadius(unsigned int, const Vector &, float);
	uint32 GetLocationInfoFast(unsigned int, int, int);
	uint8 GetTileLocationMaxVisibilityDegreeInt(unsigned int, int, int);
	float GetLocationVisibilityDegree(unsigned int, const Vector &, bool, float, const char *);
	float GetLocationVisibilityDegree(unsigned int, const Vector &, const Vector &, bool, const char *);
	float GetTileLocationVisibilityDegree(unsigned int, const Vector &, const char *);
	float GetTileLocationVisibilityDegreeFast(unsigned int, int, int, const char *);
	uint8 GetTileLocationVisibilityDegreeInt(unsigned int, int, int);
	bool GetGridUnits(const Vector &, float, float, bool, int &, int &);
	bool GetGridUnitsClamped(const Vector &, int &, int &);
	bool GetGridUnitsClamped(const Vector2D &, int &, int &);
	bool ClampGridUnits(int &, int &);
	int GetGridUnitClampedX(float);
	int GetGridUnitClampedY(float);
	void GetWorldCoords(int, int, Vector &);
	uint8 GetHeightGroup(uint32, uint32);
	uint8 GetHeightGroup(int);
	uint32 GetLocationInfo(unsigned int, uint32, uint32);
	void GenerateMiniMapTexture(unsigned int, CPixelWriter &, int, int, unsigned int, unsigned int);
	void GenerateMiniMapTexture(unsigned int, uint8 *, int, int, unsigned int, unsigned int);
	float GetTreeRadius();
	float GetOccluderRadius();
	uint8 GetOccluderBitMask(int);
	void VisibilityAddRef(unsigned int, int, int);
	CFoW_1DZ & GetFoW1DZ();
	void SetHeightGroup(uint32, uint32, uint8);
	void InsertViewerIntoTree(int);
	void RemoveViewerFromTree(int, Vector *);
	void DirtyViewers(int, int, float);
	void UpdateVisibleAmountsAndGridDegree(float, uint32);
	void UpdateVisibleAmounts(float, uint32);
	int GetGridIndex(float, float);
	int SolveVisibility(float, int, bool &);
	float GridDegreeToFloatClamped(GRIDDEGREE, bool);
	GRIDDEGREE FloatToGridDegree(float);
	float GetLocationVisibilityDegree_Circular(unsigned int, const Vector &, bool, float, const char *);

	// sizeof = 1056
};
