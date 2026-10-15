// Reconstructed from DWARF by pahole; not original source.

// src/game/server/player_pickup.h:61
class IPlayerPickupVPhysics {
	int ()() * * _vptr.IPlayerPickupVPhysics;  // +0x0
	IPlayerPickupVPhysics(IPlayerPickupVPhysics &);
	IPlayerPickupVPhysics(const IPlayerPickupVPhysics &);
	IPlayerPickupVPhysics();
	virtual bool OnAttemptPhysGunPickup(CBasePlayer *, PhysGunPickup_t);
	virtual CBaseEntity * OnFailedPhysGunPickup(Vector);
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual void OnPhysGunDrop(CBasePlayer *, PhysGunDrop_t, int);
	virtual bool HasPreferredCarryAnglesForPlayer(CBasePlayer *);
	virtual QAngle PreferredCarryAngles();
	virtual bool ForcePhysgunOpen(CBasePlayer *);
	virtual AngularImpulse PhysGunLaunchAngularImpulse();
	virtual bool ShouldPuntUseLaunchForces(PhysGunForce_t);
	virtual Vector PhysGunLaunchVelocity(const Vector &, float);
	virtual bool OnAttemptPhysGunPull(CBasePlayer *, int);

	// vtable[0] OnAttemptPhysGunPickup
	// vtable[1] OnFailedPhysGunPickup
	// vtable[2] OnPhysGunPickup
	// vtable[3] OnPhysGunDrop
	// vtable[4] HasPreferredCarryAnglesForPlayer
	// vtable[5] PreferredCarryAngles
	// vtable[6] ForcePhysgunOpen
	// vtable[7] PhysGunLaunchAngularImpulse
	// vtable[8] ShouldPuntUseLaunchForces
	// vtable[9] PhysGunLaunchVelocity
	// vtable[10] OnAttemptPhysGunPull
	// sizeof = 8
};

// src/game/server/player_pickup.h:78
class CDefaultPlayerPickupVPhysics : public IPlayerPickupVPhysics {
public:

	CDefaultPlayerPickupVPhysics(CDefaultPlayerPickupVPhysics &);
	CDefaultPlayerPickupVPhysics(const CDefaultPlayerPickupVPhysics &);
	~CDefaultPlayerPickupVPhysics();
	CDefaultPlayerPickupVPhysics();
	virtual bool OnAttemptPhysGunPickup(CBasePlayer *, PhysGunPickup_t);
	virtual CBaseEntity * OnFailedPhysGunPickup(Vector);
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual void OnPhysGunDrop(CBasePlayer *, PhysGunDrop_t, int);
	virtual bool HasPreferredCarryAnglesForPlayer(CBasePlayer *);
	virtual QAngle PreferredCarryAngles();
	virtual bool ForcePhysgunOpen(CBasePlayer *);
	virtual AngularImpulse PhysGunLaunchAngularImpulse();
	virtual bool ShouldPuntUseLaunchForces(PhysGunForce_t);
	virtual Vector PhysGunLaunchVelocity(const Vector &, float);
	virtual bool OnAttemptPhysGunPull(CBasePlayer *, int);

	// vtable[0] OnAttemptPhysGunPickup
	// vtable[1] OnFailedPhysGunPickup
	// vtable[2] OnPhysGunPickup
	// vtable[3] OnPhysGunDrop
	// vtable[4] HasPreferredCarryAnglesForPlayer
	// vtable[5] PreferredCarryAngles
	// vtable[6] ForcePhysgunOpen
	// vtable[7] PhysGunLaunchAngularImpulse
	// vtable[8] ShouldPuntUseLaunchForces
	// vtable[9] PhysGunLaunchVelocity
	// vtable[10] OnAttemptPhysGunPull
	// sizeof = 8
};
