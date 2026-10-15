// Reconstructed from DWARF by pahole; not original source.

// src/source1_legacy/public/vphysics/constraints.h:26
struct constraint_breakableparams_t {
private:

	float strength;  // +0x0
	float forceLimit;  // +0x4
	float torqueLimit;  // +0x8
	float bodyMassScale[2];  // +0xc
	bool isActive;  // +0x14

	void Defaults();

	// sizeof = 24
};

// src/source1_legacy/public/vphysics/constraints.h:50
struct constraint_axislimit_t {
private:

	float flMinRotation;  // +0x0
	float flMaxRotation;  // +0x4
	float flMotorTargetAngSpeed;  // +0x8
	float flMotorMaxTorque;  // +0xc

	void SetAxisLimits(float, float);
	void SetAxisMotor(float, float);
	void Defaults();

	// sizeof = 16
};

// src/source1_legacy/public/vphysics/constraints.h:109
struct constraint_ragdollparams_t {
	int parentIndex;  // +0x78
	int childIndex;  // +0x7c
	bool onlyAngularLimits;  // +0xb0
	bool isActive;  // +0xb1
	bool useClockwiseRotations;  // +0xb2
	constraint_ragdollparams_t();
	void Defaults();

	// sizeof = 180
};

// src/source1_legacy/public/vphysics/constraints.h:142
struct constraint_hingeparams_t {
private:

	constraint_hingeparams_t();

	void Defaults();
	constraint_hingeparams_t & operator=(const constraint_hingeparams_t &);

	// sizeof = 64
};

// src/source1_legacy/public/vphysics/constraints.h:185
struct constraint_fixedparams_t {
	constraint_fixedparams_t();
	void InitWithCurrentObjectState(HPhysicsBody, HPhysicsBody);
	void Defaults();

	// sizeof = 72
};

// src/source1_legacy/public/vphysics/constraints.h:206
struct constraint_ballsocketparams_t {
	constraint_ballsocketparams_t();
	void Defaults();
	void InitWithCurrentObjectState(HPhysicsBody, HPhysicsBody, const Vector &);

	// sizeof = 48
};

// src/source1_legacy/public/vphysics/constraints.h:243
struct constraint_slidingparams_t {
	float flLimitMin;  // +0x54
	float flLimitMax;  // +0x58
	float flMotorMaxForce;  // +0x5c
	float flMotorTargetSpeed;  // +0x60
	constraint_slidingparams_t();
	void Defaults();
	void InitWithCurrentObjectState(HPhysicsBody, HPhysicsBody, const Vector &);

	// sizeof = 100
};

// src/source1_legacy/public/vphysics/constraints.h:277
struct constraint_pulleyparams_t {
	float totalLength;  // +0x48
	float gearRatio;  // +0x4c
	bool isRigid;  // +0x50
	constraint_pulleyparams_t();
	void Defaults();

	// sizeof = 84
};

// src/source1_legacy/public/vphysics/constraints.h:300
struct constraint_lengthparams_t {
	float totalLength;  // +0x30
	float minLength;  // +0x34
	constraint_lengthparams_t();
	void InitWorldspace(HPhysicsBody, HPhysicsBody, const Vector &, const Vector &, bool);
	void Init(HPhysicsBody, HPhysicsBody, float, bool);
	void Defaults();

	// sizeof = 56
};

// src/source1_legacy/public/vphysics/constraints.h:351
class IPhysicsConstraint {
	int ()() * * _vptr.IPhysicsConstraint;  // +0x0
	IPhysicsConstraint();

protected:

	virtual ~IPhysicsConstraint();
	virtual void Activate();
	virtual void Deactivate();
	virtual void SetGameData(void *);
	virtual void * GetGameData();
	virtual IPhysicsObject * GetReferenceObject();
	virtual IPhysicsObject * GetAttachedObject();
	virtual bool GetConstraintParams(constraint_breakableparams_t *);
	virtual void SetMaxLinearImpulse(float);
	virtual float GetMaxLinearImpulse();
	virtual void SetMaxAngularImpulse(float);
	virtual float GetMaxAngularImpulse();
	virtual void SetBreakHandler(const CUtlDelegate<void()> &);
	virtual HPhysicsJoint GetJointHandle();

	// vtable[2] Activate
	// vtable[3] Deactivate
	// vtable[4] SetGameData
	// vtable[5] GetGameData
	// vtable[6] GetReferenceObject
	// vtable[7] GetAttachedObject
	// vtable[8] GetConstraintParams
	// vtable[9] SetMaxLinearImpulse
	// vtable[10] GetMaxLinearImpulse
	// vtable[11] SetMaxAngularImpulse
	// vtable[12] GetMaxAngularImpulse
	// vtable[13] SetBreakHandler
	// vtable[14] GetJointHandle
	// sizeof = 8
};
