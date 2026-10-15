// Reconstructed from DWARF by pahole; not original source.

// src/public/mdlobjects/vpropbreakabledata.h:22
class VpropBreakablePartData_t {
private:

	bool m_bMotionDisabled;  // +0x0
	bool m_bNoShadows;  // +0x1

	int32 m_nHealth;  // +0x4
	int32 m_nFadeTime;  // +0x8
	int32 m_nFadeMin;  // +0xc
	int32 m_nFadeMax;  // +0x10
	float32 m_flBurstScale;  // +0x14
	float32 m_flBurstRandomize;  // +0x18
	uint32 m_nSurfaceProp;  // +0x1c
	uint32 m_nCollisionGroupHash;  // +0x20

	// sizeof = 36
};
