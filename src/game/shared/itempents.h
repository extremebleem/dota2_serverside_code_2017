// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/itempents.h:25
class ITempEntsSystem : public IPredictionSystem {
public:

	ITempEntsSystem(ITempEntsSystem &);
	ITempEntsSystem(const ITempEntsSystem &);
	ITempEntsSystem();
	virtual bool SuppressTE(IRecipientFilter &);
	virtual void ArmorRicochet(IRecipientFilter &, float, const Vector *, const Vector *);
	virtual void BeamEntPoint(IRecipientFilter &, float, CEntityIndex, const Vector *, CEntityIndex, const Vector *, HMaterial, HMaterial, int, int, float, float, float, int, float, int, int, int, int, int);
	virtual void BeamEnts(IRecipientFilter &, float, CEntityIndex, CEntityIndex, HMaterial, HMaterial, int, int, float, float, float, int, float, int, int, int, int, int);
	virtual void BeamPoints(IRecipientFilter &, float, const Vector *, const Vector *, HMaterial, HMaterial, int, int, float, float, float, int, float, int, int, int, int, int);
	virtual void BeamRing(IRecipientFilter &, float, CEntityIndex, CEntityIndex, HMaterial, HMaterial, int, int, float, float, int, float, int, int, int, int, int, int);
	virtual void BloodStream(IRecipientFilter &, float, const Vector *, const Vector *, int, int, int, int, int);
	virtual void BreakModel(IRecipientFilter &, float, const Vector &, const QAngle &, const Vector &, const Vector &, HModel, int, int, float, int);
	virtual void BSPDecal(IRecipientFilter &, float, const Vector *, const Vector *, const Vector *, CEntityIndex, int);
	virtual void ProjectDecal(IRecipientFilter &, float, const Vector *, const QAngle *, float, int);
	virtual void Bubbles(IRecipientFilter &, float, const Vector *, const Vector *, float, int, float);
	virtual void BubbleTrail(IRecipientFilter &, float, const Vector *, const Vector *, float, int, float);
	virtual void Decal(IRecipientFilter &, float, const Vector *, const Vector *, CEntityIndex, int, int);
	virtual void Explosion(IRecipientFilter &, float, const Vector *, float, int, int, int, int, const Vector *, unsigned char, bool);
	virtual void ShatterSurface(IRecipientFilter &, float, const Vector *, const QAngle *, const Vector *, const Vector *, float, float, float, ShatterSurface_t, int, int, int, int, int, int);
	virtual void GlowSprite(IRecipientFilter &, float, const Vector *, float, float, int);
	virtual void Fizz(IRecipientFilter &, float, const CBaseEntity *, int, int);
	virtual void LargeFunnel(IRecipientFilter &, float, const Vector *, int);
	virtual void EnergySplash(IRecipientFilter &, float, const Vector *, const Vector *, bool);
	virtual void PlayerDecal(IRecipientFilter &, float, const Vector *, CEntityIndex, CEntityIndex);
	virtual void Smoke(IRecipientFilter &, float, const Vector *, float);
	virtual void Sparks(IRecipientFilter &, float, const Vector *, int, int, const Vector *);
	virtual void WorldDecal(IRecipientFilter &, float, const Vector *, const Vector *, int);
	virtual void MuzzleFlash(IRecipientFilter &, float, const Vector &, const QAngle &, float, int);
	virtual void Dust(IRecipientFilter &, float, const Vector &, const Vector &, float, float);
	virtual void PhysicsProp(IRecipientFilter &, float, HModel, CUtlStringToken, const Vector &, const QAngle &, float, const Vector &, int, int, int, int, int, int);
	void Sparks(const Vector &, int, int, const Vector *);
	void Smoke(const Vector &, float);
	void Dust(const Vector &, const Vector &, float, float);
	void MuzzleFlash(const Vector &, const QAngle &, float, int);
	void EnergySplash(const Vector &, const Vector &, bool);
	void Ricochet(const Vector &, const Vector &);
	virtual float Time();
	virtual bool IsServer();
	virtual void SuppressEffectsSounds(bool);
	virtual bool IsSuppressingEffectsSounds();
	virtual ~ITempEntsSystem();

	// vtable[2] SuppressTE
	// vtable[3] ArmorRicochet
	// vtable[4] BeamEntPoint
	// vtable[5] BeamEnts
	// vtable[6] BeamPoints
	// vtable[7] BeamRing
	// vtable[8] BloodStream
	// vtable[9] BreakModel
	// vtable[10] BSPDecal
	// vtable[11] ProjectDecal
	// vtable[12] Bubbles
	// vtable[13] BubbleTrail
	// vtable[14] Decal
	// vtable[15] Explosion
	// vtable[16] ShatterSurface
	// vtable[17] GlowSprite
	// vtable[18] Fizz
	// vtable[19] LargeFunnel
	// vtable[20] EnergySplash
	// vtable[21] PlayerDecal
	// vtable[22] Smoke
	// vtable[23] Sparks
	// vtable[24] WorldDecal
	// vtable[25] MuzzleFlash
	// vtable[26] Dust
	// vtable[27] PhysicsProp
	// vtable[28] Time
	// vtable[29] IsServer
	// vtable[30] SuppressEffectsSounds
	// vtable[31] IsSuppressingEffectsSounds
	// sizeof = 40
};
