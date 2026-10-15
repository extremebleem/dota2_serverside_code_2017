// Reconstructed from DWARF by pahole; not original source.

// src/source1_legacy/public/vphysics/vehicles.h:30
struct vehicle_controlparams_t {
private:

	float throttle;  // +0x0
	float steering;  // +0x4
	float brake;  // +0x8
	float boost;  // +0xc
	bool handbrake;  // +0x10
	bool handbrakeLeft;  // +0x11
	bool handbrakeRight;  // +0x12
	bool brakepedal;  // +0x13
	bool bHasBrakePedal;  // +0x14
	bool bAnalogSteering;  // +0x15

	// sizeof = 24
};

// src/source1_legacy/public/vphysics/vehicles.h:46
struct vehicle_operatingparams_t {
	static datamap_t m_DataMap;

	float speed;  // +0x0
	float engineRPM;  // +0x4
	int gear;  // +0x8
	float boostDelay;  // +0xc
	int boostTimeLeft;  // +0x10
	float skidSpeed;  // +0x14
	int skidMaterial;  // +0x18
	float steeringAngle;  // +0x1c
	int wheelsNotInContact;  // +0x20
	int wheelsInContact;  // +0x24
	bool isTorqueBoosting;  // +0x28
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 44
};

// src/source1_legacy/public/vphysics/vehicles.h:67
struct vehicle_debugcarsystem_t {
	vehicle_debugcarsystem_t();

	// sizeof = 516
};

// src/source1_legacy/public/vphysics/vehicles.h:78
class IPhysicsVehicleController {
	int ()() * * _vptr.IPhysicsVehicleController;  // +0x0
	IPhysicsVehicleController();
	virtual ~IPhysicsVehicleController();
	virtual void Update(float, vehicle_controlparams_t &);
	virtual const vehicle_operatingparams_t & GetOperatingParams();
	virtual const vehicleparams_t & GetVehicleParams();
	virtual vehicleparams_t & GetVehicleParamsForChange();
	virtual float UpdateBooster(float);
	virtual int GetWheelCount();
	virtual IPhysicsObject * GetWheel(int);
	virtual bool GetWheelContactPoint(int, Vector *, int *);
	virtual void SetSpringLength(int, float);
	virtual void SetWheelFriction(int, float);
	virtual void OnVehicleEnter();
	virtual void OnVehicleExit();
	virtual void SetEngineDisabled(bool);
	virtual bool IsEngineDisabled();
	virtual void GetCarSystemDebugData(vehicle_debugcarsystem_t &);
	virtual void VehicleDataReload();

	// vtable[2] Update
	// vtable[3] GetOperatingParams
	// vtable[4] GetVehicleParams
	// vtable[5] GetVehicleParamsForChange
	// vtable[6] UpdateBooster
	// vtable[7] GetWheelCount
	// vtable[8] GetWheel
	// vtable[9] GetWheelContactPoint
	// vtable[10] SetSpringLength
	// vtable[11] SetWheelFriction
	// vtable[12] OnVehicleEnter
	// vtable[13] OnVehicleExit
	// vtable[14] SetEngineDisabled
	// vtable[15] IsEngineDisabled
	// vtable[16] GetCarSystemDebugData
	// vtable[17] VehicleDataReload
	// sizeof = 8
};

// src/source1_legacy/public/vphysics/vehicles.h:108
struct vehicle_bodyparams_t {
	static datamap_t m_DataMap;

	float massOverride;  // +0xc
	float addGravity;  // +0x10
	float tiltForce;  // +0x14
	float tiltForceHeight;  // +0x18
	float counterTorqueFactor;  // +0x1c
	float keepUprightTorque;  // +0x20
	float maxAngularVelocity;  // +0x24
	vehicle_bodyparams_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 40
};

// src/source1_legacy/public/vphysics/vehicles.h:124
struct vehicle_wheelparams_t {
	static datamap_t m_DataMap;

	float radius;  // +0x0
	float mass;  // +0x4
	float inertia;  // +0x8
	float damping;  // +0xc
	float rotdamping;  // +0x10
	float frictionScale;  // +0x14
	int materialIndex;  // +0x18
	int brakeMaterialIndex;  // +0x1c
	int skidMaterialIndex;  // +0x20
	float springAdditionalLength;  // +0x24
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 40
};

// src/source1_legacy/public/vphysics/vehicles.h:140
struct vehicle_suspensionparams_t {
	static datamap_t m_DataMap;

	float springConstant;  // +0x0
	float springDamping;  // +0x4
	float stabilizerConstant;  // +0x8
	float springDampingCompression;  // +0xc
	float maxBodyForce;  // +0x10
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 20
};

// src/source1_legacy/public/vphysics/vehicles.h:152
struct vehicle_axleparams_t {
	static datamap_t m_DataMap;

	float torqueFactor;  // +0x6c
	float brakeFactor;  // +0x70
	vehicle_axleparams_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 116
};

// src/source1_legacy/public/vphysics/vehicles.h:167
struct vehicle_steeringparams_t {
	static datamap_t m_DataMap;

	float degreesSlow;  // +0x0
	float degreesFast;  // +0x4
	float degreesBoost;  // +0x8
	float steeringRateSlow;  // +0xc
	float steeringRateFast;  // +0x10
	float steeringRestRateSlow;  // +0x14
	float steeringRestRateFast;  // +0x18
	float speedSlow;  // +0x1c
	float speedFast;  // +0x20
	float turnThrottleReduceSlow;  // +0x24
	float turnThrottleReduceFast;  // +0x28
	float brakeSteeringRateFactor;  // +0x2c
	float throttleSteeringRestRateFactor;  // +0x30
	float powerSlideAccel;  // +0x34
	float boostSteeringRestRateFactor;  // +0x38
	float boostSteeringRateFactor;  // +0x3c
	float steeringExponent;  // +0x40
	bool isSkidAllowed;  // +0x44
	bool dustCloud;  // +0x45
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 72
};

// src/source1_legacy/public/vphysics/vehicles.h:193
struct vehicle_engineparams_t {
	static datamap_t m_DataMap;

	float horsepower;  // +0x0
	float maxSpeed;  // +0x4
	float maxRevSpeed;  // +0x8
	float maxRPM;  // +0xc
	float axleRatio;  // +0x10
	float throttleTime;  // +0x14
	int gearCount;  // +0x18
	float gearRatio[6];  // +0x1c
	float shiftUpRPM;  // +0x34
	float shiftDownRPM;  // +0x38
	float boostForce;  // +0x3c
	float boostDuration;  // +0x40
	float boostDelay;  // +0x44
	float boostMaxSpeed;  // +0x48
	float autobrakeSpeedGain;  // +0x4c
	float autobrakeSpeedFactor;  // +0x50
	bool torqueBoost;  // +0x54
	bool isAutoTransmission;  // +0x55
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 88
};

// src/source1_legacy/public/vphysics/vehicles.h:221
struct vehicleparams_t {
	static datamap_t m_DataMap;

	int axleCount;  // +0x0
	int wheelsPerAxle;  // +0x4

	vehicleparams_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 672
};
