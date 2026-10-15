// Reconstructed from DWARF by pahole; not original source.

// src/public/meshsystem/morphsetdata.h:39
struct CFlexOp {
	union {
		int32 index;  // +0x0
		float value;  // +0x0
	};

	union {
		int32 index;  // +0x4
		float value;  // +0x4
	} m_Data;
	int32 index();
	float value();

	// sizeof = 8
};

// src/public/meshsystem/morphsetdata.h:53
struct CFlexRule {
	int32 m_nFlex;  // +0x0

	CFlexRule();
	int32 numops();
	const CFlexOp * iFlexOp(int);

	// sizeof = 32
};

// src/public/meshsystem/morphsetdata.h:61
struct CFlexDesc {
	CFlexDesc();
	const char * pszFACS();

	// sizeof = 8
};

// src/public/meshsystem/morphsetdata.h:67
struct CFlexController {
	float32 min;  // +0x10
	float32 max;  // +0x14
	CFlexController();
	const char * pszName();
	const char * pszType();

	// sizeof = 24
};

// src/public/meshsystem/morphsetdata.h:95
struct CMorphBundleData {
	float m_flULeftSrc;  // +0x0
	float m_flVTopSrc;  // +0x4
	CMorphBundleData();

	// sizeof = 56
};

// src/public/meshsystem/morphsetdata.h:103
struct CMorphRectData {
	int16 m_nXLeftDst;  // +0x0
	int16 m_nYTopDst;  // +0x2
	float m_flUWidthSrc;  // +0x4
	float m_flVHeightSrc;  // +0x8

	CMorphRectData();

	// sizeof = 40
};

// src/public/meshsystem/morphsetdata.h:112
struct CMorphData {
	CMorphData();

	// sizeof = 32
};

// src/public/meshsystem/morphsetdata.h:118
struct CMorphSetData {
	enum LookupType_t {
		LOOKUP_TYPE_TEXCOORD = 0,
		LOOKUP_TYPE_VERTEX_ID = 0x1,
		LOOKUP_TYPE_COUNT = 0x2,
	};

	enum EncodingType_t {
		ENCODING_TYPE_OBJECT_SPACE = 0,
		ENCODING_TYPE_TANGENT_SPACE = 0x1,
		ENCODING_TYPE_COUNT = 0x2,
	};

	int m_nWidth;  // +0x0
	int m_nHeight;  // +0x4
	HRenderTextureStrong m_pTextureAtlas;  // +0x40
	CMorphSetData();
	void InitFromV0Data(CConvertOldDiskCtx &, const MorphSetData_t *, bool);

	// sizeof = 144
};

// src/public/meshsystem/morphsetdata.h:118
struct CMorphSetData {
	enum LookupType_t {
		LOOKUP_TYPE_TEXCOORD = 0,
		LOOKUP_TYPE_VERTEX_ID = 0x1,
		LOOKUP_TYPE_COUNT = 0x2,
	};

	enum EncodingType_t {
		ENCODING_TYPE_OBJECT_SPACE = 0,
		ENCODING_TYPE_TANGENT_SPACE = 0x1,
		ENCODING_TYPE_COUNT = 0x2,
	};

	int m_nWidth;  // +0x0
	int m_nHeight;  // +0x4
	HRenderTextureStrong m_pTextureAtlas;  // +0x40
	CMorphSetData();
	void InitFromV0Data(CConvertOldDiskCtx &, const MorphSetData_t *, bool);
	~CMorphSetData();

	// sizeof = 144
};
