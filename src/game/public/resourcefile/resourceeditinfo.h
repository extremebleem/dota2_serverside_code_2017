// Reconstructed from DWARF by pahole; not original source.

// src/game/public/resourcefile/resourceeditinfo.h:34
struct ResourceInputDependency_t {
private:

	uint32 m_nFileCRC;  // +0x8
	uint32 m_nFlags;  // +0xc
	ResourceInputDependency_t();

	// sizeof = 16
};

// src/game/public/resourcefile/resourceeditinfo.h:44
struct ResourceArgumentDependency_t {
private:

	uint32 m_nFingerprint;  // +0x8
	uint32 m_nFingerprintDefault;  // +0xc
	ResourceArgumentDependency_t();

	// sizeof = 16
};

// src/game/public/resourcefile/resourceeditinfo.h:54
struct ResourceSpecialDependency_t {
private:

	uint32 m_nFingerprint;  // +0x8
	uint32 m_nUserData;  // +0xc
	ResourceSpecialDependency_t();

	// sizeof = 16
};

// src/game/public/resourcefile/resourceeditinfo.h:64
struct ResourceEditIntData_t {
private:

	int32 m_nInt;  // +0x4
	ResourceEditIntData_t();

	// sizeof = 8
};

// src/game/public/resourcefile/resourceeditinfo.h:72
struct ResourceEditFloatData_t {
private:

	float32 m_flFloat;  // +0x4
	ResourceEditFloatData_t();

	// sizeof = 8
};

// src/game/public/resourcefile/resourceeditinfo.h:80
struct ResourceEditStringData_t {
private:

	ResourceEditStringData_t();

	// sizeof = 8
};

// src/game/public/resourcefile/resourceeditinfo.h:88
struct ResourceCustomDependency_t {
private:

	int32 m_nParentIndex;  // +0x4
	uint32 m_nFingerprint;  // +0x8
	ResourceCustomDependency_t();

	// sizeof = 12
};

// src/game/public/resourcefile/resourceeditinfo.h:97
struct ResourceAdditionalRelatedFile_t {
private:

	ResourceAdditionalRelatedFile_t();

	// sizeof = 8
};

// src/game/public/resourcefile/resourceeditinfo.h:106
struct ResourceEditInfoBlock_t {
private:

	ResourceEditInfoBlock_t();

	// sizeof = 80
};
