// Reconstructed from DWARF by pahole; not original source.

// src/public/animationsystem/animationdecodeop.h:51
class CAnimationDecodeOp {
	float m_flCycle;  // +0x4
	float m_flWeight;  // +0x8
	CAnimationDecodeOp();
	bool operator==(const CAnimationDecodeOp &);
	const Color & GetSpewColor();
	const char * GetSpewSourceName();

	// sizeof = 16
};
