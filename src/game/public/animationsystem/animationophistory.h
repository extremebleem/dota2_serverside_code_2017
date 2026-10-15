// Reconstructed from DWARF by pahole; not original source.

// src/game/public/animationsystem/animationophistory.h:80
class CAnimationOpHistory : public CTimestampedDataContainer<AnimationOperationHistory_t, 3> {
public:

	CAnimationOpHistory();
	void AddAnimationOp(float, float, const CAnimationDecodeOp &);
	void AddAnimationOp(float, const AnimationOperationHistory_t &);
	void ChangeModel(HModel, HModel);
	bool Interpolate(float, const CModel *, CAnimationDecodeOp *, float *);

	// sizeof = 40
};
