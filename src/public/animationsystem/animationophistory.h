// Reconstructed from DWARF by pahole; not original source.

// src/public/animationsystem/animationophistory.h:22
class AnimationOperationHistory_t : public CAnimationDecodeOp {
public:

	float m_flPrevCycle;  // +0x10
	int32 m_nSequenceParity;  // +0x14
	int16 m_nOrder;  // +0x18
	uint8 m_bInterpolationHadDiscontinuity;  // +0x1a
	uint8 m_nPadding;  // +0x1b
	AnimationOperationHistory_t();
	bool operator==(const AnimationOperationHistory_t &);
	bool IsIdenticalWithinTolerance(const AnimationOperationHistory_t &);
	CUtlString GetDebugString();
	CUtlString GetDebugSpeedString(float, float, const AnimationOperationHistory_t *);

	// sizeof = 28
};
