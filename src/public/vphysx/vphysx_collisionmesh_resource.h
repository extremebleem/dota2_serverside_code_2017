// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysx/vphysx_collisionmesh_resource.h:30
struct VPhysics2ShapeDef_t {
private:

	VPhysics2ShapeDef_t();

	AABB_t GetBbox();
	int GetTriangulation(Vector *);
	int AppendTriangulation(CUtlVector<Vector, CUtlMemory<Vector, int> > &);
	void SetDesc(const RnShapeDesc_t &);
	void GetMeshes(CUtlVector<CMesh*, CUtlMemory<CMesh*, int> > &, const CResourceArray<unsigned int> &, const CResourceArray<VPhysXCollisionAttributes_t> &);
	void GetMeshes(CUtlVector<CMesh*, CUtlMemory<CMesh*, int> > &, const CPhysAggregateData *);

	// sizeof = 40
};

// src/public/vphysx/vphysx_collisionmesh_resource.h:54
struct VPhysXBodyPart_t {
private:

	uint32 m_nFlags;  // +0x0
	float32 m_flMass;  // +0x4
	uint16 m_nCollisionAttributeIndex;  // +0x3c
	uint16 m_nReserved;  // +0x3e
	float m_flInertiaScale;  // +0x40
	float m_flLinearDamping;  // +0x44
	float m_flAngularDamping;  // +0x48
	VPhysXBodyPart_t();

	// sizeof = 76
};

// src/public/vphysx/vphysx_collisionmesh_resource.h:88
struct VPhysXCollisionAttributes_t {
private:

	uint32 m_CollisionGroup;  // +0x0
	VPhysXCollisionAttributes_t();

	// sizeof = 56
};

// src/public/vphysx/vphysx_collisionmesh_resource.h:108
struct VPhysXRange_t {
private:

	float32 m_flMin;  // +0x0
	float32 m_flMax;  // +0x4

	VPhysXRange_t();
	VPhysXRange_t(float, float);

	// sizeof = 8
};

// src/public/vphysx/vphysx_collisionmesh_resource.h:126
struct VPhysXConstraintParams_t {
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

	// sizeof = 248
};

// src/public/vphysx/vphysx_collisionmesh_resource.h:201
struct VPhysXConstraint2_t {
private:

	uint32 m_nFlags;  // +0x0
	uint16 m_nParent;  // +0x4
	uint16 m_nChild;  // +0x6
	VPhysXConstraint2_t();

	// sizeof = 256
};

// src/public/vphysx/vphysx_collisionmesh_resource.h:216
struct VPhysXJoint_t {
private:

	uint16 m_nType;  // +0x0
	uint16 m_nBody1;  // +0x2
	uint16 m_nBody2;  // +0x4
	uint16 m_nFlags;  // +0x6

	bool m_bEnableLinearLimit;  // +0x50

	bool m_bEnableLinearMotor;  // +0x5c

	float m_flMaxForce;  // +0x6c
	bool m_bEnableSwingLimit;  // +0x70

	bool m_bEnableTwistLimit;  // +0x7c

	bool m_bEnableAngularMotor;  // +0x88

	float m_flMaxTorque;  // +0x98
	float m_flLinearFrequency;  // +0x9c
	float m_flLinearDampingRatio;  // +0xa0
	float m_flAngularFrequency;  // +0xa4
	float m_flAngularDampingRatio;  // +0xa8
	VPhysXJoint_t();

	// sizeof = 176
};

// src/public/vphysx/vphysx_collisionmesh_resource.h:274
struct VPhysXAggregateData_t {
private:

	uint16 m_nFlags;  // +0x0
	uint16 m_nRefCounter;  // +0x2
	VPhysXAggregateData_t();

	uint32 GetChecksum();
	int GetBoneCount();
	const char * GetBoneName(int);
	int FindBodyPartByHash(uint);
	int GetPartCount();

	// sizeof = 108
};
