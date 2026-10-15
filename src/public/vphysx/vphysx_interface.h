// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysx/vphysx_interface.h:50
class CMemoryChain {
	int ()() * * _vptr.CMemoryChain;  // +0x0
	CMemoryChain(const CMemoryChain &);
	CMemoryChain();
	virtual ~CMemoryChain();

	// sizeof = 16
};

// src/public/vphysx/vphysx_interface.h:73
class IPhysAggregateInstance {
	struct PartDesc_t {
		HPhysicsBody m_hBody;  // +0x0
		int m_nIndex;  // +0x8
		PartDesc_t();
		HPhysicsBody operator HPhysicsBody();
		int operator int();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.IPhysAggregateInstance;  // +0x0
	void * m_pSkeleton;  // +0x8
	bool m_bIsAxisAligned;  // +0x10
	IPhysAggregateInstance();
	virtual ~IPhysAggregateInstance();
	virtual void SetEntityHandle(uint64);
	virtual uint64 GetEntityHandle();
	virtual uint32 GetEntityID();
	virtual void SetCallbackFlags(short unsigned int);
	virtual short unsigned int GetCallbackFlags();
	virtual bool IsAttachedToBone();
	virtual void SetVelocity(const Vector &);
	virtual int GetNumParts();
	int GetPartCount();
	virtual HPhysicsBody GetPartHandle(int);
	virtual const CTransform GetPartTransform(int);
	virtual HPhysicsJoint GetJointHandle(int);
	virtual int GetJointCount();
	virtual void SetPartTransform(CUtlStringToken, const CTransform &);
	virtual void Clear();
	virtual const PartDesc_t AddPart();
	virtual const PartDesc_t GetPart(int);
	virtual void RemovePart(int);
	virtual const char * GetPartName(int);
	virtual uint32 GetPartNameHash(int);
	virtual HPhysicsBody GetPartByNameHash(uint32);
	virtual void DisableNonDynamicJoints();
	virtual void SetCollisionAttributes(const RnCollisionAttr_t &);
	virtual uint SetMotionType(VPhysicsMotionType_t);
	virtual uint GetMotionTypeMask();
	virtual uint GetTransformStates();
	virtual void EnableAutoSleeping();
	virtual void DisableAutoSleeping();
	virtual void WakeUp();
	virtual void PutToSleep();
	virtual bool IsAsleep();
	virtual void SetRootTransformOnKinematics(const CTransform &, float);
	virtual void SetRootTransformOnKinematics(matrix3x4_t, float);
	virtual void SetRootTransformOnDynamics(const CTransform &);
	virtual void SetRootTransformOnDynamics(matrix3x4_t);
	virtual void SetDebugName(const char *);
	virtual void GetRootTransform(CTransform *);
	virtual float Sweep(const Vector &);
	virtual float SweepAndSettle(const Vector &);
	virtual void ChangeBodyGroup(const CPhysAggregateData *, const CTransform &, VPhysicsMotionType_t);
	virtual const CPhysAggregateData * GetData();
	virtual void SetAngularVelocity(const Vector &);
	virtual void GetBbox(AABB_t *);
	virtual void GetBboxFromProxies(AABB_t *);
	virtual void GetBboxAfterMotion(const CTransform &, AABB_t *);
	virtual void GetBboxAfterRootTransform(const CTransform &, AABB_t *);
	void GetBboxAfterWorldTransform(const matrix3x4_t &, AABB_t *);
	virtual const Vector & GetOrigin();
	virtual void Dump(IFileSystem *);
	virtual void AppendDebugInfo(CUtlString &);
	virtual void SetJointFriction(float);
	virtual void Own(CMemoryChain *);
	virtual float GetTotalMass();
	virtual void SetTotalMass(float);
	virtual void SetParams(const objectparams_t &);
	virtual void SetMassPriority(int8);
	virtual void SetLinearDrag(float);
	virtual void SetAngularDrag(float);
	virtual void SetLinearDamping(float);
	virtual void SetAngularDamping(float);
	virtual void ScaleInertia(float);
	virtual void ForgetJoints();
	virtual void ForgetParts();
	virtual float GetScale();
	virtual bool SetSurfaceProperties(CUtlStringToken);
	virtual bool GetSleepState();
	virtual void UpdateSleepState();
	virtual float DistanceToPoint(const Vector &);
	virtual float DistanceToAggregate(const IPhysAggregateInstance *);
	virtual CSweepResult SweepShape(const CTransform &, const CTransform &, const AABB_t &, const RnQueryAttr_t &);
	virtual CSweepResult SweepShape(const CTransform &, const CTransform &, const RnSphere_t &, const RnQueryAttr_t &);
	virtual CSweepResult SweepShape(const CTransform &, const CTransform &, const RnCapsule_t &, const RnQueryAttr_t &);
	virtual CSweepResult SweepShape(const CTransform &, const CTransform &, const RnHull_t &, const RnQueryAttr_t &);
	virtual bool CheckShapeOverlap(const CTransform &, const AABB_t &, const RnQueryAttr_t &);
	virtual bool CheckShapeOverlap(const CTransform &, const RnSphere_t &, const RnQueryAttr_t &);
	virtual bool CheckShapeOverlap(const CTransform &, const RnCapsule_t &, const RnQueryAttr_t &);
	virtual bool CheckShapeOverlap(const CTransform &, const RnHull_t &, const RnQueryAttr_t &);
	virtual bool CheckOverlap(const IPhysAggregateInstance *);
	virtual void Rescale(float);
	virtual void GetTouchingEntities(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &);
	virtual void DestroyShapes();
	virtual void DestroyBodies();
	virtual void DestroyJoints();
	virtual void DestroyContacts();
	virtual bool IsConstrainted(uint);
	virtual void SetContactSoftness(int8);

	// vtable[2] SetEntityHandle
	// vtable[3] GetEntityHandle
	// vtable[4] GetEntityID
	// vtable[5] SetCallbackFlags
	// vtable[6] GetCallbackFlags
	// vtable[7] IsAttachedToBone
	// vtable[8] SetVelocity
	// vtable[9] GetNumParts
	// vtable[10] GetPartHandle
	// vtable[11] GetPartTransform
	// vtable[12] GetJointHandle
	// vtable[13] GetJointCount
	// vtable[14] SetPartTransform
	// vtable[15] Clear
	// vtable[16] AddPart
	// vtable[17] GetPart
	// vtable[18] RemovePart
	// vtable[19] GetPartName
	// vtable[20] GetPartNameHash
	// vtable[21] GetPartByNameHash
	// vtable[22] DisableNonDynamicJoints
	// vtable[23] SetCollisionAttributes
	// vtable[24] SetMotionType
	// vtable[25] GetMotionTypeMask
	// vtable[26] GetTransformStates
	// vtable[27] EnableAutoSleeping
	// vtable[28] DisableAutoSleeping
	// vtable[29] WakeUp
	// vtable[30] PutToSleep
	// vtable[31] IsAsleep
	// vtable[32] SetRootTransformOnKinematics
	// vtable[33] SetRootTransformOnKinematics
	// vtable[34] SetRootTransformOnDynamics
	// vtable[35] SetRootTransformOnDynamics
	// vtable[36] SetDebugName
	// vtable[37] GetRootTransform
	// vtable[38] Sweep
	// vtable[39] SweepAndSettle
	// vtable[40] ChangeBodyGroup
	// vtable[41] GetData
	// vtable[42] SetAngularVelocity
	// vtable[43] GetBbox
	// vtable[44] GetBboxFromProxies
	// vtable[45] GetBboxAfterMotion
	// vtable[46] GetBboxAfterRootTransform
	// vtable[47] GetOrigin
	// vtable[48] Dump
	// vtable[49] AppendDebugInfo
	// vtable[50] SetJointFriction
	// vtable[51] Own
	// vtable[52] GetTotalMass
	// vtable[53] SetTotalMass
	// vtable[54] SetParams
	// vtable[55] SetMassPriority
	// vtable[56] SetLinearDrag
	// vtable[57] SetAngularDrag
	// vtable[58] SetLinearDamping
	// vtable[59] SetAngularDamping
	// vtable[60] ScaleInertia
	// vtable[61] ForgetJoints
	// vtable[62] ForgetParts
	// vtable[63] GetScale
	// vtable[64] SetSurfaceProperties
	// vtable[65] GetSleepState
	// vtable[66] UpdateSleepState
	// vtable[67] DistanceToPoint
	// vtable[68] DistanceToAggregate
	// vtable[69] SweepShape
	// vtable[70] SweepShape
	// vtable[71] SweepShape
	// vtable[72] SweepShape
	// vtable[73] CheckShapeOverlap
	// vtable[74] CheckShapeOverlap
	// vtable[75] CheckShapeOverlap
	// vtable[76] CheckShapeOverlap
	// vtable[77] CheckOverlap
	// vtable[78] Rescale
	// vtable[79] GetTouchingEntities
	// vtable[80] DestroyShapes
	// vtable[81] DestroyBodies
	// vtable[82] DestroyJoints
	// vtable[83] DestroyContacts
	// vtable[84] IsConstrainted
	// vtable[85] SetContactSoftness
	// sizeof = 24
};

// src/public/vphysx/vphysx_interface.h:73
class IPhysAggregateInstance {
	struct PartDesc_t {
		HPhysicsBody m_hBody;  // +0x0
		int m_nIndex;  // +0x8
		PartDesc_t();
		HPhysicsBody operator HPhysicsBody();
		int operator int();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum FlagEnum_t {
		FLAG_DYNAMIC = 0x1,
		FLAG_KINEMATIC = 0x2,
	};

	int ()() * * _vptr.IPhysAggregateInstance;  // +0x0
	void * m_pSkeleton;  // +0x8
	bool m_bIsAxisAligned;  // +0x10
	IPhysAggregateInstance();
	virtual ~IPhysAggregateInstance();
	virtual void SetEntityHandle(uint64);
	virtual uint64 GetEntityHandle();
	virtual uint32 GetEntityID();
	virtual void SetCallbackFlags(short unsigned int);
	virtual short unsigned int GetCallbackFlags();
	virtual bool IsAttachedToBone();
	virtual void SetVelocity(const Vector &);
	virtual int GetNumParts();
	int GetPartCount();
	virtual HPhysicsBody GetPartHandle(int);
	virtual const CTransform GetPartTransform(int);
	virtual HPhysicsJoint GetJointHandle(int);
	virtual int GetJointCount();
	virtual void SetPartTransform(CUtlStringToken, const CTransform &);
	virtual void Clear();
	virtual const PartDesc_t AddPart();
	virtual const PartDesc_t GetPart(int);
	virtual void RemovePart(int);
	virtual const char * GetPartName(int);
	virtual uint32 GetPartNameHash(int);
	virtual HPhysicsBody GetPartByNameHash(uint32);
	virtual void DisableNonDynamicJoints();
	virtual void SetCollisionAttributes(const RnCollisionAttr_t &);
	virtual uint SetMotionType(VPhysicsMotionType_t);
	virtual uint GetMotionTypeMask();
	virtual uint GetTransformStates();
	virtual void EnableAutoSleeping();
	virtual void DisableAutoSleeping();
	virtual void WakeUp();
	virtual void PutToSleep();
	virtual bool IsAsleep();
	virtual void SetRootTransformOnKinematics(const CTransform &, float);
	virtual void SetRootTransformOnKinematics(matrix3x4_t, float);
	virtual void SetRootTransformOnDynamics(const CTransform &);
	virtual void SetRootTransformOnDynamics(matrix3x4_t);
	virtual void SetDebugName(const char *);
	virtual void GetRootTransform(CTransform *);
	virtual float Sweep(const Vector &);
	virtual float SweepAndSettle(const Vector &);
	virtual void ChangeBodyGroup(const CPhysAggregateData *, const CTransform &, VPhysicsMotionType_t);
	virtual const CPhysAggregateData * GetData();
	virtual void SetAngularVelocity(const Vector &);
	virtual void GetBbox(AABB_t *);
	virtual void GetBboxFromProxies(AABB_t *);
	virtual void GetBboxAfterMotion(const CTransform &, AABB_t *);
	virtual void GetBboxAfterRootTransform(const CTransform &, AABB_t *);
	void GetBboxAfterWorldTransform(const matrix3x4_t &, AABB_t *);
	virtual const Vector & GetOrigin();
	virtual void Dump(IFileSystem *);
	virtual void AppendDebugInfo(CUtlString &);
	virtual void SetJointFriction(float);
	virtual void Own(CMemoryChain *);
	virtual float GetTotalMass();
	virtual void SetTotalMass(float);
	virtual void SetParams(const objectparams_t &);
	virtual void SetMassPriority(int8);
	virtual void SetLinearDrag(float);
	virtual void SetAngularDrag(float);
	virtual void SetLinearDamping(float);
	virtual void SetAngularDamping(float);
	virtual void ScaleInertia(float);
	virtual void ForgetJoints();
	virtual void ForgetParts();
	virtual float GetScale();
	virtual bool SetSurfaceProperties(CUtlStringToken);
	virtual bool GetSleepState();
	virtual void UpdateSleepState();
	virtual float DistanceToPoint(const Vector &);
	virtual float DistanceToAggregate(const IPhysAggregateInstance *);
	virtual CSweepResult SweepShape(const CTransform &, const CTransform &, const AABB_t &, const RnQueryAttr_t &);
	virtual CSweepResult SweepShape(const CTransform &, const CTransform &, const RnSphere_t &, const RnQueryAttr_t &);
	virtual CSweepResult SweepShape(const CTransform &, const CTransform &, const RnCapsule_t &, const RnQueryAttr_t &);
	virtual CSweepResult SweepShape(const CTransform &, const CTransform &, const RnHull_t &, const RnQueryAttr_t &);
	virtual bool CheckShapeOverlap(const CTransform &, const AABB_t &, const RnQueryAttr_t &);
	virtual bool CheckShapeOverlap(const CTransform &, const RnSphere_t &, const RnQueryAttr_t &);
	virtual bool CheckShapeOverlap(const CTransform &, const RnCapsule_t &, const RnQueryAttr_t &);
	virtual bool CheckShapeOverlap(const CTransform &, const RnHull_t &, const RnQueryAttr_t &);
	virtual bool CheckOverlap(const IPhysAggregateInstance *);
	virtual void Rescale(float);
	virtual void GetTouchingEntities(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &);
	virtual void DestroyShapes();
	virtual void DestroyBodies();
	virtual void DestroyJoints();
	virtual void DestroyContacts();
	virtual bool IsConstrainted(uint);
	virtual void SetContactSoftness(int8);

	// vtable[2] SetEntityHandle
	// vtable[3] GetEntityHandle
	// vtable[4] GetEntityID
	// vtable[5] SetCallbackFlags
	// vtable[6] GetCallbackFlags
	// vtable[7] IsAttachedToBone
	// vtable[8] SetVelocity
	// vtable[9] GetNumParts
	// vtable[10] GetPartHandle
	// vtable[11] GetPartTransform
	// vtable[12] GetJointHandle
	// vtable[13] GetJointCount
	// vtable[14] SetPartTransform
	// vtable[15] Clear
	// vtable[16] AddPart
	// vtable[17] GetPart
	// vtable[18] RemovePart
	// vtable[19] GetPartName
	// vtable[20] GetPartNameHash
	// vtable[21] GetPartByNameHash
	// vtable[22] DisableNonDynamicJoints
	// vtable[23] SetCollisionAttributes
	// vtable[24] SetMotionType
	// vtable[25] GetMotionTypeMask
	// vtable[26] GetTransformStates
	// vtable[27] EnableAutoSleeping
	// vtable[28] DisableAutoSleeping
	// vtable[29] WakeUp
	// vtable[30] PutToSleep
	// vtable[31] IsAsleep
	// vtable[32] SetRootTransformOnKinematics
	// vtable[33] SetRootTransformOnKinematics
	// vtable[34] SetRootTransformOnDynamics
	// vtable[35] SetRootTransformOnDynamics
	// vtable[36] SetDebugName
	// vtable[37] GetRootTransform
	// vtable[38] Sweep
	// vtable[39] SweepAndSettle
	// vtable[40] ChangeBodyGroup
	// vtable[41] GetData
	// vtable[42] SetAngularVelocity
	// vtable[43] GetBbox
	// vtable[44] GetBboxFromProxies
	// vtable[45] GetBboxAfterMotion
	// vtable[46] GetBboxAfterRootTransform
	// vtable[47] GetOrigin
	// vtable[48] Dump
	// vtable[49] AppendDebugInfo
	// vtable[50] SetJointFriction
	// vtable[51] Own
	// vtable[52] GetTotalMass
	// vtable[53] SetTotalMass
	// vtable[54] SetParams
	// vtable[55] SetMassPriority
	// vtable[56] SetLinearDrag
	// vtable[57] SetAngularDrag
	// vtable[58] SetLinearDamping
	// vtable[59] SetAngularDamping
	// vtable[60] ScaleInertia
	// vtable[61] ForgetJoints
	// vtable[62] ForgetParts
	// vtable[63] GetScale
	// vtable[64] SetSurfaceProperties
	// vtable[65] GetSleepState
	// vtable[66] UpdateSleepState
	// vtable[67] DistanceToPoint
	// vtable[68] DistanceToAggregate
	// vtable[69] SweepShape
	// vtable[70] SweepShape
	// vtable[71] SweepShape
	// vtable[72] SweepShape
	// vtable[73] CheckShapeOverlap
	// vtable[74] CheckShapeOverlap
	// vtable[75] CheckShapeOverlap
	// vtable[76] CheckShapeOverlap
	// vtable[77] CheckOverlap
	// vtable[78] Rescale
	// vtable[79] GetTouchingEntities
	// vtable[80] DestroyShapes
	// vtable[81] DestroyBodies
	// vtable[82] DestroyJoints
	// vtable[83] DestroyContacts
	// vtable[84] IsConstrainted
	// vtable[85] SetContactSoftness
	// sizeof = 24
};

// src/public/vphysx/vphysx_interface.h:250
class IPhysSurfacePropertyController {
	int ()() * * _vptr.IPhysSurfacePropertyController;  // +0x0
	IPhysSurfacePropertyController();
	virtual ~IPhysSurfacePropertyController();
	virtual const CPhysSurfaceProperties * FindSurfaceProperties(CUtlStringToken, bool *);
	virtual int GetSurfacePropCount();
	virtual const CPhysSurfaceProperties * GetSurfaceProperty(int);
	virtual void GetSurfacePropertiesNames(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual const CPhysSurfaceProperties * GetDefaultSurfaceProperties();

	// vtable[2] FindSurfaceProperties
	// vtable[3] GetSurfacePropCount
	// vtable[4] GetSurfaceProperty
	// vtable[5] GetSurfacePropertiesNames
	// vtable[6] GetDefaultSurfaceProperties
	// sizeof = 8
};

// src/public/vphysx/vphysx_interface.h:276
struct VPhysXWorldStepResults {
	VPhysXWorldStepResults();

	// sizeof = 72
};
