// Reconstructed from DWARF by pahole; not original source.

// src/game/public/modellib/morphset_old_disk.h:37
struct FlexOp_t {
private:

	int32 m_OpCode;  // +0x0
	int32 m_Data;  // +0x4

	// sizeof = 8
};

// src/game/public/modellib/morphset_old_disk.h:46
struct FlexRule_t {
private:

	int32 m_nFlex;  // +0x0
	FlexRule_t();

	// sizeof = 12
};

// src/game/public/modellib/morphset_old_disk.h:55
struct FlexDesc_t {
private:

	FlexDesc_t();

	// sizeof = 4
};

// src/game/public/modellib/morphset_old_disk.h:63
struct FlexController_t {
private:

	int32 localToGlobal;  // +0x8
	float32 min;  // +0xc
	float32 max;  // +0x10
	FlexController_t();

	// sizeof = 20
};

// src/game/public/modellib/morphset_old_disk.h:96
struct BundleData_t {
private:

	float m_flULeftSrc;  // +0x0
	float m_flVTopSrc;  // +0x4
	BundleData_t();

	// sizeof = 24
};

// src/game/public/modellib/morphset_old_disk.h:106
struct MorphRectData_t {
private:

	int16 m_nXLeftDst;  // +0x0
	int16 m_nYTopDst;  // +0x2
	float m_flUWidthSrc;  // +0x4
	float m_flVHeightSrc;  // +0x8
	MorphRectData_t();

	// sizeof = 20
};

// src/game/public/modellib/morphset_old_disk.h:117
struct MorphData_t {
private:

	MorphData_t();

	// sizeof = 12
};

// src/game/public/modellib/morphset_old_disk.h:125
struct MorphSetData_t {
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

private:

	int m_nWidth;  // +0x0
	int m_nHeight;  // +0x4
	MorphSetData_t();

	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 72
};

// src/game/public/modellib/morphset_old_disk.h:125
struct MorphSetData_t {
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

private:

	int m_nWidth;  // +0x0
	int m_nHeight;  // +0x4
	MorphSetData_t();

	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	MorphSetData_t & operator=(const MorphSetData_t &);

	// sizeof = 72
};
