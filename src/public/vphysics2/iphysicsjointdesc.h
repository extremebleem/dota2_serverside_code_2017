// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysics2/iphysicsjointdesc.h:17
class PhysicsJointDesc_t {
	const PhysicsJointType_t m_nType;  // +0x0

	const IPhysicsBody * m_pBody1;  // +0x8
	const IPhysicsBody * m_pBody2;  // +0x10
	bool m_bEnableCollision;  // +0x50

	float m_flFriction;  // +0x54
	float m_flMaxLinearConstraintImpulse;  // +0x58
	float m_flMaxAngularConstraintImpulse;  // +0x5c
	CUtlDelegate<void(IPhysicsJoint*)> m_BreakDelegate;  // +0x60
	PhysicsJointDesc_t(const PhysicsJointDesc_t &);
	bool IsBreakable();
	Vector GetWorldOrigin1();
	Vector GetWorldOrigin2();
	Quaternion GetWorldBasis1();
	Quaternion GetWorldBasis2();
	void SetLocalFrame1(const CTransform &);
	CTransform GetLocalFrame1();
	void SetWorldFrame1(const CTransform &);
	CTransform GetWorldFrame1();
	void SetLocalFrame2(const CTransform &);
	CTransform GetLocalFrame2();
	void SetWorldFrame2(const CTransform &);
	CTransform GetWorldFrame2();
	Quaternion BuildBasis(const Vector &);
	bool IsValid();

protected:

	PhysicsJointDesc_t(PhysicsJointType_t, IPhysicsBody *, IPhysicsBody *);

	// sizeof = 120
};

// src/public/vphysics2/iphysicsjointdesc.h:73
class PhysicsSphericalJointDesc_t : public PhysicsJointDesc_t {
public:

	bool m_bEnableMotor;  // +0x78

	float m_flMaxTorque;  // +0x88
	PhysicsSphericalJointDesc_t(const PhysicsSphericalJointDesc_t &);
	PhysicsSphericalJointDesc_t(IPhysicsBody *, IPhysicsBody *);
	void SetPivot(const Vector &);
	bool IsValid();

	// sizeof = 144
};

// src/public/vphysics2/iphysicsjointdesc.h:94
class PhysicsRevoluteJointDesc_t : public PhysicsJointDesc_t {
public:

	bool m_bEnableLimit;  // +0x78

	float m_flMinAngle;  // +0x7c
	float m_flMaxAngle;  // +0x80
	bool m_bEnableMotor;  // +0x84

	float m_flTargetVelocity;  // +0x88
	float m_flMaxTorque;  // +0x8c
	PhysicsRevoluteJointDesc_t(IPhysicsBody *, IPhysicsBody *);
	void SetPivot(const Vector &);
	void SetAxis(const Vector &);
	bool IsValid();

	// sizeof = 144
};

// src/public/vphysics2/iphysicsjointdesc.h:170
class PhysicsWeldJointDesc_t : public PhysicsJointDesc_t {
public:

	float m_flLinearFrequency;  // +0x78
	float m_flLinearDampingRatio;  // +0x7c
	float m_flMaxForce;  // +0x80
	float m_flAngularFrequency;  // +0x84
	float m_flAngularDampingRatio;  // +0x88
	float m_flMaxTorque;  // +0x8c
	PhysicsWeldJointDesc_t(IPhysicsBody *, IPhysicsBody *);
	void SetPivot(const Vector &);
	void SetBasis(const Quaternion &);
	bool IsValid();

	// sizeof = 144
};

// src/public/vphysics2/iphysicsjointdesc.h:194
class PhysicsGenericJointDesc_t : public PhysicsJointDesc_t {
public:

	float m_flLinearFrequencies[3];  // +0x84
	float m_flLinearDampingRatios[3];  // +0x90
	float m_flMaxLinearImpulses[3];  // +0x9c
	float m_flAngularFrequencies[3];  // +0xb4
	float m_flAngularDampingRatios[3];  // +0xc0
	float m_flMaxAngularImpulses[3];  // +0xcc
	PhysicsGenericJointDesc_t(IPhysicsBody *, IPhysicsBody *);
	void SetPivot(const Vector &);
	void SetBasis(const Quaternion &);
	bool IsValid();

	// sizeof = 216
};

// src/public/vphysics2/iphysicsjointdesc.h:261
struct springparams_t {
	float constant;  // +0x0
	float naturalLength;  // +0x4
	float damping;  // +0x8
	float relativeDamping;  // +0xc
	bool useLocalPositions;  // +0x28
	bool onlyStretch;  // +0x29
	springparams_t();

	// sizeof = 44
};
