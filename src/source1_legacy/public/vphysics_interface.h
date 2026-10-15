// Reconstructed from DWARF by pahole; not original source.

// src/source1_legacy/public/vphysics_interface.h:83
class IPhysicsCollisionData {
	int ()() * * _vptr.IPhysicsCollisionData;  // +0x0
	~IPhysicsCollisionData();
	IPhysicsCollisionData(IPhysicsCollisionData &);
	IPhysicsCollisionData(const IPhysicsCollisionData &);
	IPhysicsCollisionData();
	virtual void GetSurfaceNormal(Vector &);
	virtual void GetContactPoint(Vector &);
	virtual void GetContactSpeed(Vector &);

	// vtable[0] GetSurfaceNormal
	// vtable[1] GetContactPoint
	// vtable[2] GetContactSpeed
	// sizeof = 8
};

// src/source1_legacy/public/vphysics_interface.h:92
struct vcollisionevent_t {
	IPhysicsObject * pObjects[2];  // +0x0
	bool isCollision;  // +0x18
	bool isShadowCollision;  // +0x19

	float deltaCollisionTime;  // +0x1c
	float collisionSpeed;  // +0x20

	vcollisionevent_t();
	~vcollisionevent_t();

	// sizeof = 72
};

// src/source1_legacy/public/vphysics_interface.h:122
class IPhysicsShadowController {
	int ()() * * _vptr.IPhysicsShadowController;  // +0x0
	IPhysicsShadowController();
	virtual ~IPhysicsShadowController();
	virtual void Update(const Vector &, const QAngle &, float);
	virtual void MaxSpeed(float, float);
	virtual void StepUp(float);
	virtual void SetTeleportDistance(float);
	virtual bool AllowsTranslation();
	virtual bool AllowsRotation();
	virtual void SetPhysicallyControlled(bool);
	virtual bool IsPhysicallyControlled();
	virtual void GetLastImpulse(Vector *);
	virtual void UseShadowMaterial(bool);
	virtual void ObjectMaterialChanged(int);
	virtual float GetTargetPosition(Vector *, QAngle *);
	virtual float GetTeleportDistance();
	virtual void GetMaxSpeed(float *, float *);

	// vtable[2] Update
	// vtable[3] MaxSpeed
	// vtable[4] StepUp
	// vtable[5] SetTeleportDistance
	// vtable[6] AllowsTranslation
	// vtable[7] AllowsRotation
	// vtable[8] SetPhysicallyControlled
	// vtable[9] IsPhysicallyControlled
	// vtable[10] GetLastImpulse
	// vtable[11] UseShadowMaterial
	// vtable[12] ObjectMaterialChanged
	// vtable[13] GetTargetPosition
	// vtable[14] GetTeleportDistance
	// vtable[15] GetMaxSpeed
	// sizeof = 8
};

// src/source1_legacy/public/vphysics_interface.h:176
class IPhysicsFluidController {
	int ()() * * _vptr.IPhysicsFluidController;  // +0x0
	IPhysicsFluidController();
	virtual ~IPhysicsFluidController();
	virtual void SetGameData(void *);
	virtual void * GetGameData();
	virtual void GetSurfacePlane(Vector *, float *);
	virtual float GetDensity();
	virtual void WakeAllSleepingObjects();
	virtual int GetContents();

	// vtable[2] SetGameData
	// vtable[3] GetGameData
	// vtable[4] GetSurfacePlane
	// vtable[5] GetDensity
	// vtable[6] WakeAllSleepingObjects
	// vtable[7] GetContents
	// sizeof = 8
};

// src/source1_legacy/public/vphysics_interface.h:196
struct fluidparams_t {
	float damping;  // +0x1c
	float torqueFactor;  // +0x20
	float viscosityFactor;  // +0x24
	void * pGameData;  // +0x28
	bool useAerodynamics;  // +0x30

	uint64 contents;  // +0x38
	fluidparams_t();
	fluidparams_t(const fluidparams_t &);

	// sizeof = 64
};

// src/source1_legacy/public/vphysics_interface.h:223
struct objectparams_t {
	float mass;  // +0x8
	float inertia;  // +0xc
	float damping;  // +0x10
	float rotdamping;  // +0x14
	float rotInertiaLimit;  // +0x18

	const char * pName;  // +0x20
	void * pGameData;  // +0x28
	float volume;  // +0x30
	float dragCoefficient;  // +0x34
	bool enableCollisions;  // +0x38

	// sizeof = 64
};
