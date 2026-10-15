// Reconstructed from DWARF by pahole; not original source.

// src/public/physicslib/fnphysicsjoint.h:250
class CFnPhysicsJoint<IFnPhysicsWeldJoint> {
protected:

	char m_Buffer[16];  // +0x0
	CFnPhysicsJoint(IPhysicsJoint *);
	CFnPhysicsJoint(const CFnPhysicsJoint<IFnPhysicsWeldJoint> &);
	IFnPhysicsWeldJoint * operator->();
	IPhysicsJoint * operator IPhysicsJoint*();

	// sizeof = 16
};

// src/public/physicslib/fnphysicsjoint.h:250
class CFnPhysicsJoint<IFnPhysicsRevoluteJoint> {
protected:

	char m_Buffer[16];  // +0x0
	CFnPhysicsJoint(IPhysicsJoint *);
	CFnPhysicsJoint(const CFnPhysicsJoint<IFnPhysicsRevoluteJoint> &);
	IFnPhysicsRevoluteJoint * operator->();
	IPhysicsJoint * operator IPhysicsJoint*();

	// sizeof = 16
};
