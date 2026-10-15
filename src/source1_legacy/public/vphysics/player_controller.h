// Reconstructed from DWARF by pahole; not original source.

// src/source1_legacy/public/vphysics/player_controller.h:21
class IPhysicsPlayerController {
	int ()() * * _vptr.IPhysicsPlayerController;  // +0x0
private:

	IPhysicsPlayerController();

	virtual ~IPhysicsPlayerController();
	virtual void Update(const Vector &, const Vector &, float, bool, IPhysicsObject *);
	virtual void SetEventHandler(IPhysicsPlayerControllerEvent *);
	virtual bool IsInContact();
	virtual void MaxSpeed(const Vector &);
	virtual void SetObject(IPhysicsObject *);
	virtual int GetShadowPosition(Vector *, QAngle *);
	virtual void StepUp(float);
	virtual void Jump();
	virtual void GetShadowVelocity(Vector *);
	virtual IPhysicsObject * GetObject();
	virtual void GetLastImpulse(Vector *);
	virtual void SetPushMassLimit(float);
	virtual void SetPushSpeedLimit(float);
	virtual float GetPushMassLimit();
	virtual float GetPushSpeedLimit();
	virtual bool WasFrozen();

	// vtable[0] Schema_DynamicBinding
	// vtable[3] Update
	// vtable[4] SetEventHandler
	// vtable[5] IsInContact
	// vtable[6] MaxSpeed
	// vtable[7] SetObject
	// vtable[8] GetShadowPosition
	// vtable[9] StepUp
	// vtable[10] Jump
	// vtable[11] GetShadowVelocity
	// vtable[12] GetObject
	// vtable[13] GetLastImpulse
	// vtable[14] SetPushMassLimit
	// vtable[15] SetPushSpeedLimit
	// vtable[16] GetPushMassLimit
	// vtable[17] GetPushSpeedLimit
	// vtable[18] WasFrozen
	// sizeof = 8
};
