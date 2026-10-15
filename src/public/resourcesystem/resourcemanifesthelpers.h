// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/resourcemanifesthelpers.h:27
struct ResourceManifestEntry_t {
	const char * m_pResourceName;  // +0x0
	bool m_bResourceNameIsManifestName;  // +0x8

	int m_nHandleReferences;  // +0x20
	ResourceManifestEntry_t(const char *, bool, CStrongHandleVoid *);

	// sizeof = 40
};

// src/public/resourcesystem/resourcemanifesthelpers.h:47
struct ResourceManifestDesc_t {
	const char * m_pManifestName;  // +0x0
	const char * m_pManifestGroup;  // +0x8
	ManifestEntryGroupList_t * m_pEntryGroups;  // +0x10
	const char * m_pFileName;  // +0x18
	int m_nLine;  // +0x20
	bool m_bRegistered;  // +0x24
	bool m_bDisallowRegistration;  // +0x25

	// sizeof = 40
};
