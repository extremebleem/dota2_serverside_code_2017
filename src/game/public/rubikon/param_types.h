// Reconstructed from DWARF by pahole; not original source.

// src/game/public/rubikon/param_types.h:485
struct CShapeCastResult {
	float m_flHitTime;  // +0x0
	int m_nTriangle;  // +0x1c
	const RnMaterial_t * m_pMaterial;  // +0x20
	bool m_bStartInSolid;  // +0x28
	CShapeCastResult();
	bool DidHit();

	// sizeof = 48
};
