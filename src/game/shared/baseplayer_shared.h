// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseplayer_shared.h:44
struct autoaim_params_t {
	EHANDLE m_hAutoAimEntity;  // +0x18
	float m_fScale;  // +0x1c
	float m_fMaxDist;  // +0x20
	float m_fMaxDeflection;  // +0x24
	bool m_bOnTargetQueryOnly;  // +0x28
	bool m_bAutoAimAssisting;  // +0x29
	bool m_bOnTargetNatural;  // +0x2a
	autoaim_params_t();

	// sizeof = 44
};
