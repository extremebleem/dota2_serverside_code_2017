// Reconstructed from DWARF by pahole; not original source.

// src/game/public/animationsystem/animationgroupresource_old_disk.h:26
struct AnimResourceBone_t {
private:

	int32 m_parent;  // +0x4
	int32 m_flags;  // +0x34

	const char * GetName();
	AnimResourceBone_t();
	AnimResourceBone_t(const AnimResourceBone_t &);

	// sizeof = 56
};

// src/game/public/animationsystem/animationgroupresource_old_disk.h:68
struct AnimResourceUser_t {
private:

	int32 m_nType;  // +0x4

	const char * GetName();
	AnimResourceUser_t();
	AnimResourceUser_t(const AnimResourceUser_t &);

	// sizeof = 8
};

// src/game/public/animationsystem/animationgroupresource_old_disk.h:98
struct AnimResourceDataChannel_t {
private:

	int32 m_nFlags;  // +0x8
	int32 m_nType;  // +0xc
	AnimResourceDataChannel_t();

	// sizeof = 48
};

// src/game/public/animationsystem/animationgroupresource_old_disk.h:118
struct AnimResourceIKLink_t {
private:

	int32 bone;  // +0x0

	AnimResourceIKLink_t();
	AnimResourceIKLink_t(const AnimResourceIKLink_t &);

	// sizeof = 16
};

// src/game/public/animationsystem/animationgroupresource_old_disk.h:134
struct AnimResourceIKTargetInfo_t {
private:

	int32 m_nType;  // +0x4
	int32 m_nPosChannel;  // +0x8
	int32 m_nPosElement;  // +0xc
	int32 m_nQuatChannel;  // +0x10
	int32 m_nQuatElement;  // +0x14

	AnimResourceIKTargetInfo_t();

	// sizeof = 24
};

// src/game/public/animationsystem/animationgroupresource_old_disk.h:161
struct AnimResourceIKChain_t {
private:

	const char * GetName();
	AnimResourceIKChain_t();

	// sizeof = 20
};

// src/game/public/animationsystem/animationgroupresource_old_disk.h:181
struct AnimationKeyResourceData_t {
private:

	int32 m_nChannelElements;  // +0x24

	const char * GetName();
	AnimationKeyResourceData_t();
	AnimationKeyResourceData_t(const AnimationGroupResourceData_t &);

	// sizeof = 48
};

// src/game/public/animationsystem/animationgroupresource_old_disk.h:210
struct AnimationRetargetElementData_t {
private:

	int32 m_nElementType;  // +0x0
	int32 m_nGroupType;  // +0x4
	int32 m_nChainType;  // +0x8
	int32 m_nChainIndex;  // +0xc
	int32 m_nChainInvIndex;  // +0x10
	int32 m_nBoneIndex;  // +0x14
	float m_flDistance;  // +0x7c
	float m_flMass;  // +0x98

	AnimationRetargetElementData_t();
	AnimationRetargetElementData_t(const AnimationRetargetElementData_t &);

	// sizeof = 156
};

// src/game/public/animationsystem/animationgroupresource_old_disk.h:238
struct AnimationRetargetChainData_t {
private:

	int32 m_nGroupType;  // +0x4
	int32 m_nChainType;  // +0x8

	AnimationRetargetChainData_t();
	AnimationRetargetChainData_t(const AnimationRetargetChainData_t &);

	// sizeof = 20
};

// src/game/public/animationsystem/animationgroupresource_old_disk.h:255
struct AnimationRetargetData_t {
private:

	int32 m_bEnableRetarget;  // +0x0
	int32 m_nRetargetStyle;  // +0x4

	AnimationRetargetData_t();
	AnimationRetargetData_t(const AnimationRetargetData_t &);

	// sizeof = 32
};

// src/game/public/animationsystem/animationgroupresource_old_disk.h:281
struct AnimationGroupResourceData_t {
private:

	uint32 m_nFlags;  // +0x0

	const char * GetName();
	AnimationGroupResourceData_t();
	AnimationGroupResourceData_t(const AnimationGroupResourceData_t &);

	// sizeof = 120
};
