// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_body.h:14
class CDOTABody : public IBody {
public:

private:

	Activity m_animation;  // +0x28
	Activity m_overrideanimation;  // +0x2c
	bool m_bShouldAnimate;  // +0x30
	CDOTABody(CDOTABody &);
	CDOTABody(const CDOTABody &);
	CDOTABody(CDOTA_BaseNPC *);
	virtual void Reset();
	virtual void Update();
	void ManageOverrideAnimations();
	HSequence StartAnimation(Activity, bool, float);
	Activity GetAnimation();
	bool IsAnimation(Activity);
	virtual float GetHullWidth();
	virtual float GetHullHeight();
	virtual float GetStandHullHeight();
	virtual float GetCrouchHullHeight();
	virtual const Vector & GetHullMins();
	virtual const Vector & GetHullMaxs();
	virtual uint64 GetSolidMask();
	float GetAnimationSpeed(Activity);
	void RestoreAnimation();
	void SetShouldAnimate(bool);
	bool ShouldAnimate();
	virtual ~CDOTABody();

	// vtable[62] Reset
	// vtable[63] Update
	// vtable[93] GetHullWidth
	// vtable[94] GetHullHeight
	// vtable[95] GetStandHullHeight
	// vtable[96] GetCrouchHullHeight
	// vtable[97] GetHullMins
	// vtable[98] GetHullMaxs
	// vtable[99] GetSolidMask
	// sizeof = 56
};
