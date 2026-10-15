// Reconstructed from DWARF by pahole; not original source.

// src/game/server/attached_physics.h:36
class CAttachedPhysics {
	int ()() * * _vptr.CAttachedPhysics;  // +0x0
	CAttachedPhysics();
	virtual ~CAttachedPhysics();
	virtual void SetTargetPosition(IPhysicsObject *, const Vector &, const QAngle &);
	virtual float GetPositionError(IPhysicsObject *);
	virtual void SetTotalMass(float);
	virtual void OnTeleported(CBaseEntity *, const Vector &, const QAngle &);

	// vtable[2] SetTargetPosition
	// vtable[3] GetPositionError
	// vtable[4] SetTotalMass
	// vtable[5] OnTeleported
	// sizeof = 8
};
