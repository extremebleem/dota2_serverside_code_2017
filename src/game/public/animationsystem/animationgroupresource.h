// Reconstructed from DWARF by pahole; not original source.

// src/game/public/animationsystem/animationgroupresource.h:15
struct CAnimBone {
	AnimString_t m_name;  // +0x0
	int32 m_parent;  // +0x10
	const char * GetName();
	CAnimBone();

private:

	CAnimBone(const CAnimBone &);

	// sizeof = 72
};

// src/game/public/animationsystem/animationgroupresource.h:54
struct CAnimUser {
	AnimString_t m_name;  // +0x0
	int32 m_nType;  // +0x10
	const char * GetName();
	CAnimUser();

private:

	CAnimUser(const CAnimUser &);

	// sizeof = 24
};

// src/game/public/animationsystem/animationgroupresource.h:81
struct CAnimDataChannelDesc {
	AnimString_t m_szChannelClass;  // +0x0
	AnimString_t m_szVariableName;  // +0x10
	int32 m_nType;  // +0x24
	AnimString_t m_szGrouping;  // +0x28
	AnimString_t m_szDescription;  // +0x38
	CAnimDataChannelDesc();

	// sizeof = 144
};

// src/game/public/animationsystem/animationgroupresource.h:170
struct CAnimKeyData {
	AnimString_t m_name;  // +0x0
	int32 m_nChannelElements;  // +0x70

	const char * GetName();
	CAnimKeyData();

private:

	CAnimKeyData(const CAnimationGroup &);

	// sizeof = 144
};

// src/game/public/animationsystem/animationgroupresource.h:196
struct CAnimRetargetElementData {
	int32 m_nElementType;  // +0x0
	int32 m_nGroupType;  // +0x4
	int32 m_nChainType;  // +0x8
	int32 m_nChainIndex;  // +0xc
	int32 m_nChainInvIndex;  // +0x10
	int32 m_nBoneIndex;  // +0x14
	AnimString_t m_boneName;  // +0x18
	float m_flDistance;  // +0x88
	float m_flMass;  // +0xa4
	CAnimRetargetElementData();

private:

	CAnimRetargetElementData(const CAnimRetargetElementData &);

	// sizeof = 168
};

// src/game/public/animationsystem/animationgroupresource.h:221
struct CAnimRetargetChainData {
	AnimString_t m_sChainName;  // +0x0
	int32 m_nGroupType;  // +0x10
	int32 m_nChainType;  // +0x14
	CAnimRetargetChainData();

private:

	CAnimRetargetChainData(const CAnimRetargetChainData &);

	// sizeof = 48
};

// src/game/public/animationsystem/animationgroupresource.h:235
struct CAnimRetargetData {
	int32 m_bEnableRetarget;  // +0x0
	int32 m_nRetargetStyle;  // +0x4
	CAnimRetargetData();

private:

	CAnimRetargetData(const CAnimRetargetData &);

	// sizeof = 80
};

// src/game/public/animationsystem/animationgroupresource.h:255
struct CAnimationGroup {
	uint32 m_nFlags;  // +0x0

	AnimString_t m_name;  // +0x8

	CAnimationGroup();
	~CAnimationGroup();
	const char * GetName();

private:

	CAnimationGroup(const CAnimationGroup &);

	// sizeof = 328
};
