// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysics2/iphysicsjoint.h:151
class IPhysicsSpring {
	int ()() * * _vptr.IPhysicsSpring;  // +0x0
	IPhysicsSpring();
	virtual ~IPhysicsSpring();
	virtual void GetEndpoints(Vector *, Vector *);
	virtual void SetSpringConstant(float);
	virtual void SetSpringDamping(float);
	virtual void SetSpringLength(float);
	virtual IPhysicsObject * GetStartObject();
	virtual IPhysicsObject * GetEndObject();

	// vtable[2] GetEndpoints
	// vtable[3] SetSpringConstant
	// vtable[4] SetSpringDamping
	// vtable[5] SetSpringLength
	// vtable[6] GetStartObject
	// vtable[7] GetEndObject
	// sizeof = 8
};
