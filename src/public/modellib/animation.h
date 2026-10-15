// Reconstructed from DWARF by pahole; not original source.

// src/public/modellib/animation.h:52
struct AnimEventDetectionQuery_t {
	const CModel * m_pModel;  // +0x8
	int m_nOrder;  // +0x14
	float m_flStartCycle;  // +0x18
	float m_flEndCycle;  // +0x1c
	float m_flStartAnimTime;  // +0x20
	float m_flEndAnimTime;  // +0x24
	bool m_bIsServerDLL;  // +0x28

	int32 m_nEntityIndex;  // +0x2c
	int m_nTickcount;  // +0x30
	float m_flCurrentTime;  // +0x34
	AnimEventDetectionQuery_t();

	// sizeof = 56
};
