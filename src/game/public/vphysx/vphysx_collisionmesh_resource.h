// Reconstructed from DWARF by pahole; not original source.

// src/game/public/vphysx/vphysx_collisionmesh_resource.h:54
struct VPhysXBodyPart_t {
	enum VPhysXFlagEnum_t {
		FLAG_STATIC = 0x1,
		FLAG_KINEMATIC = 0x2,
		FLAG_JOINT = 0x4,
		FLAG_MASS = 0x8,
	};

private:

	uint32 m_nFlags;  // +0x0
	float32 m_flMass;  // +0x4
	uint16 m_nCollisionAttributeIndex;  // +0x3c
	uint16 m_nReserved;  // +0x3e
	float m_flInertiaScale;  // +0x40
	float m_flLinearDamping;  // +0x44
	float m_flAngularDamping;  // +0x48
	VPhysXBodyPart_t();

	/* tag__fprintf: const_type tag not supported! */;
	VPhysXBodyPart_t & operator=(const VPhysXBodyPart_t &);

	// sizeof = 76
};

// src/game/public/vphysx/vphysx_collisionmesh_resource.h:126
struct VPhysXConstraintParams_t {
	enum EnumFlags0_t {
		FLAG0_SHIFT_INTERPENETRATE = 0,
		FLAG0_SHIFT_CONSTRAIN = 0x1,
		FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
		FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3,
	};

private:

	int8 m_nType;  // +0x0
	int8 m_nTranslateMotion;  // +0x1
	int8 m_nRotateMotion;  // +0x2
	int8 m_nFlags;  // +0x3
	float32 m_maxForce;  // +0x3c
	float32 m_maxTorque;  // +0x40
	float32 m_linearLimitValue;  // +0x44
	float32 m_linearLimitRestitution;  // +0x48
	float32 m_linearLimitSpring;  // +0x4c
	float32 m_linearLimitDamping;  // +0x50
	float32 m_twistLowLimitValue;  // +0x54
	float32 m_twistLowLimitRestitution;  // +0x58
	float32 m_twistLowLimitSpring;  // +0x5c
	float32 m_twistLowLimitDamping;  // +0x60
	float32 m_twistHighLimitValue;  // +0x64
	float32 m_twistHighLimitRestitution;  // +0x68
	float32 m_twistHighLimitSpring;  // +0x6c
	float32 m_twistHighLimitDamping;  // +0x70
	float32 m_swing1LimitValue;  // +0x74
	float32 m_swing1LimitRestitution;  // +0x78
	float32 m_swing1LimitSpring;  // +0x7c
	float32 m_swing1LimitDamping;  // +0x80
	float32 m_swing2LimitValue;  // +0x84
	float32 m_swing2LimitRestitution;  // +0x88
	float32 m_swing2LimitSpring;  // +0x8c
	float32 m_swing2LimitDamping;  // +0x90
	float32 m_driveSpringX;  // +0xbc
	float32 m_driveSpringY;  // +0xc0
	float32 m_driveSpringZ;  // +0xc4
	float32 m_driveDampingX;  // +0xc8
	float32 m_driveDampingY;  // +0xcc
	float32 m_driveDampingZ;  // +0xd0
	float32 m_driveSpringTwist;  // +0xd4
	float32 m_driveSpringSwing;  // +0xd8
	float32 m_driveSpringSlerp;  // +0xdc
	float32 m_driveDampingTwist;  // +0xe0
	float32 m_driveDampingSwing;  // +0xe4
	float32 m_driveDampingSlerp;  // +0xe8
	int32 m_solverIterationCount;  // +0xec
	float32 m_projectionLinearTolerance;  // +0xf0
	float32 m_projectionAngularTolerance;  // +0xf4
	VPhysXConstraintParams_t();

	/* tag__fprintf: const_type tag not supported! */;
	VPhysXConstraintParams_t & operator=(const VPhysXConstraintParams_t &);

	// sizeof = 248
};

// src/game/public/vphysx/vphysx_collisionmesh_resource.h:256
struct PhysSoftbodyDesc_t {
private:

	PhysSoftbodyDesc_t();

	PhysSoftbodyDesc_t & operator=(const PhysSoftbodyDesc_t &);

	// sizeof = 48
};

// src/game/public/vphysx/vphysx_collisionmesh_resource.h:274
struct VPhysXAggregateData_t {
	enum VPhysXFlagEnum_t {
		FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
		FLAG_LEVEL_COLLISION = 0x10,
		FLAG_IGNORE_SCALE = 0x20,
	};

private:

	uint16 m_nFlags;  // +0x0
	uint16 m_nRefCounter;  // +0x2
	VPhysXAggregateData_t();

	uint32 GetChecksum();
	int GetBoneCount();
	const char * GetBoneName(int);
	int FindBodyPartByHash(uint);
	int GetPartCount();
	/* tag__fprintf: const_type tag not supported! */;
	VPhysXAggregateData_t & operator=(const VPhysXAggregateData_t &);

	// sizeof = 108
};
