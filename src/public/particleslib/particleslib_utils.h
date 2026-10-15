// Reconstructed from DWARF by pahole; not original source.

// src/public/particleslib/particleslib_utils.h:55
class IParticleEffect {
	int ()() * * _vptr.IParticleEffect;  // +0x0
private:

	IParticleEffect();

	virtual ~IParticleEffect();
	virtual void Update(float);
	virtual void StartRender(VMatrix &);
	virtual bool ShouldSimulate();
	virtual void SetShouldSimulate(bool);
	virtual void NotifyRemove();
	virtual const Vector & GetSortOrigin();

	// vtable[0] Schema_DynamicBinding
	// vtable[3] Update
	// vtable[4] StartRender
	// vtable[5] ShouldSimulate
	// vtable[6] SetShouldSimulate
	// vtable[7] NotifyRemove
	// vtable[8] GetSortOrigin
	// sizeof = 8
};
