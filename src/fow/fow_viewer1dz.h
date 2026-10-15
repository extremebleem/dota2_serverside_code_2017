// Reconstructed from DWARF by pahole; not original source.

// src/fow/fow_viewer1dz.h:14
class CFoW_1DZ {
	struct TILEINFO {
		int16 TileIndex;  // +0x0
		uint16 DistanceSq;  // +0x2
		int16 OccluderStart;  // +0x4
		int16 OccluderEnd;  // +0x6
		uint16 OccluderDistanceSq;  // +0x8
		int16 TreeStart;  // +0xa
		int16 TreeEnd;  // +0xc
		uint16 TreeDistanceSq;  // +0xe

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ROWINFO {
		int Start;  // +0x0

		ROWINFO();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct CIRCLEINFO {
		float flRadius;  // +0x0
		int nGridUnits;  // +0x4
		int nGridUnitsRadius;  // +0x8
		int TileCount;  // +0xc
		int RowCount;  // +0x10

		CIRCLEINFO();

		// sizeof = 48
	};

private:

	CUtlMap<float, CFoW_1DZ::CIRCLEINFO*, short unsigned int, bool (*)(float const&, float const&)> m_CircleInfos;  // +0x0
	CFoW_1DZ();
	~CFoW_1DZ();
	void ClearState();
	CIRCLEINFO * FindCircleInfo(CFoW *, float);

	// sizeof = 40
};

// src/fow/fow_viewer1dz.h:14
class CFoW_1DZ {
	struct TILEINFO {
		int16 TileIndex;  // +0x0
		uint16 DistanceSq;  // +0x2
		int16 OccluderStart;  // +0x4
		int16 OccluderEnd;  // +0x6
		uint16 OccluderDistanceSq;  // +0x8
		int16 TreeStart;  // +0xa
		int16 TreeEnd;  // +0xc
		uint16 TreeDistanceSq;  // +0xe

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ROWINFO {
		int Start;  // +0x0

		ROWINFO();
		~ROWINFO();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct CIRCLEINFO {
		float flRadius;  // +0x0
		int nGridUnits;  // +0x4
		int nGridUnitsRadius;  // +0x8
		int TileCount;  // +0xc
		int RowCount;  // +0x10

		CIRCLEINFO();
		~CIRCLEINFO();

		// sizeof = 48
	};

private:

	CUtlMap<float, CFoW_1DZ::CIRCLEINFO*, short unsigned int, bool (*)(float const&, float const&)> m_CircleInfos;  // +0x0
	CFoW_1DZ();
	~CFoW_1DZ();
	void ClearState();
	CIRCLEINFO * FindCircleInfo(CFoW *, float);

	// sizeof = 40
};

// src/fow/fow_viewer1dz.h:65
class CFoW_Viewer1DZ {
private:

	uint32 m_nHeightGroup;  // +0x0
	uint32 m_ViewerOccluderMask;  // +0x4
	int8 m_TemplateX0;  // +0x8
	int8 m_TemplateX1;  // +0x9
	int8 m_TemplateY0;  // +0xa
	int8 m_TemplateY1;  // +0xb

	size_t m_nAllocatedMemory;  // +0x30
	CFoW_Viewer1DZ();
	~CFoW_Viewer1DZ();
	void UpdateSize(CFoW_Viewer &, float);
	void UpdateLocation(CFoW_Viewer &);
	void UpdateViewerOccludeMode(CFoW_Viewer &);
	void CalcLocalizedVisibility(CFoW_Viewer &);
	void MergeViewerVisibility(CFoW_Viewer &, bool);
	size_t GetAllocatedMemory();
	uint32 GetOccluderType(CFoW *, int);

	// sizeof = 56
};
