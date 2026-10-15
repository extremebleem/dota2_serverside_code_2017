// Reconstructed from DWARF by pahole; not original source.

// src/public/animationsystem/animationgroupresource.h:98
struct CAnimIKLink {
	int32 bone;  // +0x0
	CAnimIKLink(int, Vector);

	// sizeof = 16
};

// src/public/animationsystem/animationgroupresource.h:112
struct CAnimIKTargetInfo {
	AnimString_t m_name;  // +0x0
	int32 m_nType;  // +0x10
	int32 m_nPosChannel;  // +0x14
	int32 m_nPosElement;  // +0x18
	int32 m_nQuatChannel;  // +0x1c
	int32 m_nQuatElement;  // +0x20
	CAnimIKTargetInfo();

	// sizeof = 40
};

// src/public/animationsystem/animationgroupresource.h:136
struct CAnimIKChain {
	const char * GetName();
	CAnimIKChain();
	CAnimIKChain(const char *);
	CAnimIKChain(const CAnimIKChain &);

	// sizeof = 56
};
