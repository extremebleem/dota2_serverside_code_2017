// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysics2/interface.h:83
struct VPhysContactImpactStrength_t {
	float m_flTangentImpact;  // +0x0
	float m_flNormalImpact;  // +0x4
	VPhysContactImpactStrength_t();

	// sizeof = 8
};

// src/public/vphysics2/interface.h:103
class IVPhysics2 : public IAppSystem {
public:

	IVPhysics2();
	virtual ~IVPhysics2();
	virtual IVPhysics2World * CreateWorld(uint);
	virtual void DestroyWorld(IVPhysXWorld *);
	virtual int NumWorlds();
	virtual IVPhysXWorld * GetWorld(int);
	virtual void DumpState(const CCommand &);
	virtual const IPhysSurfacePropertyController * GetSurfacePropertyController();
	virtual IPhysIntersectionDictionary * GetIntersectionDictionary();
	virtual HPhysicsShape CreateSphereShape(const Vector &, float);
	virtual HPhysicsShape CreateCapsuleShape(const Vector &, const Vector &, float);
	virtual HPhysicsShape CreateHullShape(const RnHull_t *);
	virtual HPhysicsShape CreateMeshShape(const RnMesh_t *);
	virtual void DestroyShape(HPhysicsShape);
	virtual RnLinearCastResult_t LinearCast(const CTransform &, const CGJKProxy &, const Vector &, const CTransform &, const CGJKProxy &, const Vector &, float, float);
	virtual RnConvexCastResult_t ConvexCast(const RnSweptTransform_t &, HPhysicsShape, const RnSweptTransform_t &, HPhysicsShape, const CUtlVector<RnIteration_t, CUtlMemory<RnIteration_t, int> > &);
	virtual RnDistanceQueryResult_t ClosestPoints(const CTransform &, HPhysicsShape, const CTransform &, HPhysicsShape);
	virtual RnHull_t * HullCreateBox(const Vector &, const Vector &, CResourceStream *, RnHull_t *);
	virtual RnHull_t * HullCreateCone(const Vector &, const Vector &, float, CResourceStream *, RnHull_t *);
	virtual RnHull_t * HullCreateCylinder(const Vector &, const Vector &, float, CResourceStream *, RnHull_t *);
	virtual RnHull_t * HullCreate(int, const Vector *, CResourceStream *, RnHull_t *, RnHullSimplificationParams_t *);
	virtual RnHull_t * HullCreate(CMesh *, CResourceStream *, RnHull_t *, RnHullSimplificationParams_t *);
	virtual void HullDestroy(RnHull_t *, CResourceStream *, bool);
	virtual void HullClone(RnHull_t *, const RnHull_t &, CResourceStream *);
	virtual RnMesh_t * MeshCreate(int, const uint *, const uint8 *, int, const Vector *, CResourceStream *, RnMesh_t *);
	virtual RnMesh_t * MeshCreate(CMesh *, CResourceStream *, RnMesh_t *);
	virtual void MeshDestroy(RnMesh_t *, CResourceStream *, bool);
	virtual void MeshClone(RnMesh_t *, const RnMesh_t &, CResourceStream *);
	virtual void EnableVisualDebugger(bool);
	virtual void SetVisualDebugCameraHint(int, const CFrustum &);
	virtual RnHull_t * HullCreateRandom(int, float, float, CResourceStream *, RnHull_t *);
	virtual Stats_t & GetProfileStats();
	virtual void ResetProfileStats();
	virtual void StartConComm(IVConComm *);
	virtual void UpdateConComm();
	virtual bool IsConCommActive();
	virtual bool IsMultiThreaded();
	virtual void SetMultiThreaded(bool);
	virtual bool IsSimdEnabled();
	virtual void SetSimdEnabled(bool);
	virtual void SetWorldContext(IVPhysics2World *);
	virtual IVPhysics2World * GetWorldContext();
	virtual bool CreateDebugSceneObject(const DebugSceneObjectParams_t &, SceneObjectBuffers_t *);
	virtual void DestroyDebugSceneObject(CSceneAnimatableObject *);
	virtual void CreateDebugMeshes(const DebugTraceDataParams_t &, PhysicsDebugMeshBuffers_t *, PhysicsDebugMeshBuffers_t *);
	virtual void GetSnoopStats(CUtlVector<RnWorldSnoopStats_t, CUtlMemory<RnWorldSnoopStats_t, int> > *);
	virtual float GetDistanceBetweenHulls(const Vector *, int, const Vector *, int);
	virtual float GetDistanceBetweenHulls(const matrix3x4_t &, const Vector *, int, const matrix3x4_t &, const Vector *, int);
	virtual CSmartPtr<CPhysAggregateData, CRefCountAccessor> CreateAggregateDataFromDiskData(const VPhysXAggregateData_t *, uintp);
	virtual uint64 ParseInteractionLayerList(const char *);
	virtual void Draw(ISceneViewDebugOverlays *);
	virtual HPhysicsSoftbody CreateSoftbody(const CFeModel *);
	virtual void DestroySoftbody(HPhysicsSoftbody);
	virtual HMaterial GetWellKnownMaterial(PhysicsDebugMaterialId_t);
	virtual IFnPhysicsContact * ConstructFnPhysicsContact(void *, int);
	virtual IFnPhysicsWeldJoint * ConstructFnPhysicsWeldJoint(void *, int);
	virtual IFnPhysicsPrismaticJoint * ConstructFnPhysicsPrismaticJoint(void *, int);
	virtual IFnPhysicsRevoluteJoint * ConstructFnPhysicsRevoluteJoint(void *, int);
	virtual IFnPhysicsConicalJoint * ConstructFnPhysicsConicalJoint(void *, int);
	virtual IFnPhysicsSpringJoint * ConstructFnPhysicsSpringJoint(void *, int);
	virtual IFnPhysicsBevelGearJoint * ConstructFnPhysicsBevelGearJoint(void *, int);
	virtual IFnPhysicsHullShape * ConstructFnPhysicsHullShape(void *, int);
	virtual IFnPhysicsMeshShape * ConstructFnPhysicsMeshShape(void *, int);
	virtual void UpdateConCommParams(PhysicsWorldUpdateConCommParams_t &);
	virtual VPhysContactImpactStrength_t ComputeImpactStrength(const VPhysIntersectionNotification_t &);
	virtual CSmartPtr<IPhysSerialStreamSnapshot, CRefCountAccessor> DecodeSerialStreamSnapshot(IPhysSerialStreamSnapshot *, const void *, uint, IDataDescConvertor *);
	virtual uint GetPostFlushDataEvents(void *);
	virtual uint GetSerialStreamDataDesc(void *);
	virtual CSmartPtr<IDataDescConvertor, CRefCountAccessor> GetSerialStreamDataDescConvertor(const void *);
	virtual void StepBeginReadOnlySimulation(IVPhysics2World * *, int, float, int);
	virtual void AddSnoopObservers(int);

	// vtable[13] CreateWorld
	// vtable[14] DestroyWorld
	// vtable[15] NumWorlds
	// vtable[16] GetWorld
	// vtable[17] DumpState
	// vtable[18] GetSurfacePropertyController
	// vtable[19] GetIntersectionDictionary
	// vtable[20] CreateSphereShape
	// vtable[21] CreateCapsuleShape
	// vtable[22] CreateHullShape
	// vtable[23] CreateMeshShape
	// vtable[24] DestroyShape
	// vtable[25] LinearCast
	// vtable[26] ConvexCast
	// vtable[27] ClosestPoints
	// vtable[28] HullCreateBox
	// vtable[29] HullCreateCone
	// vtable[30] HullCreateCylinder
	// vtable[31] HullCreate
	// vtable[32] HullCreate
	// vtable[33] HullDestroy
	// vtable[34] HullClone
	// vtable[35] MeshCreate
	// vtable[36] MeshCreate
	// vtable[37] MeshDestroy
	// vtable[38] MeshClone
	// vtable[39] EnableVisualDebugger
	// vtable[40] SetVisualDebugCameraHint
	// vtable[41] HullCreateRandom
	// vtable[42] GetProfileStats
	// vtable[43] ResetProfileStats
	// vtable[44] StartConComm
	// vtable[45] UpdateConComm
	// vtable[46] IsConCommActive
	// vtable[47] IsMultiThreaded
	// vtable[48] SetMultiThreaded
	// vtable[49] IsSimdEnabled
	// vtable[50] SetSimdEnabled
	// vtable[51] SetWorldContext
	// vtable[52] GetWorldContext
	// vtable[53] CreateDebugSceneObject
	// vtable[54] DestroyDebugSceneObject
	// vtable[55] CreateDebugMeshes
	// vtable[56] GetSnoopStats
	// vtable[57] GetDistanceBetweenHulls
	// vtable[58] GetDistanceBetweenHulls
	// vtable[59] CreateAggregateDataFromDiskData
	// vtable[60] ParseInteractionLayerList
	// vtable[61] Draw
	// vtable[62] CreateSoftbody
	// vtable[63] DestroySoftbody
	// vtable[64] GetWellKnownMaterial
	// vtable[65] ConstructFnPhysicsContact
	// vtable[66] ConstructFnPhysicsWeldJoint
	// vtable[67] ConstructFnPhysicsPrismaticJoint
	// vtable[68] ConstructFnPhysicsRevoluteJoint
	// vtable[69] ConstructFnPhysicsConicalJoint
	// vtable[70] ConstructFnPhysicsSpringJoint
	// vtable[71] ConstructFnPhysicsBevelGearJoint
	// vtable[72] ConstructFnPhysicsHullShape
	// vtable[73] ConstructFnPhysicsMeshShape
	// vtable[74] UpdateConCommParams
	// vtable[75] ComputeImpactStrength
	// vtable[76] DecodeSerialStreamSnapshot
	// vtable[77] GetPostFlushDataEvents
	// vtable[78] GetSerialStreamDataDesc
	// vtable[79] GetSerialStreamDataDescConvertor
	// vtable[80] StepBeginReadOnlySimulation
	// vtable[81] AddSnoopObservers
	// sizeof = 32
};

// src/public/vphysics2/interface.h:257
class IMotionEvent {
	enum simresult_e {
		SIM_NOTHING = 0,
		SIM_LOCAL_ACCELERATION = 0x1,
		SIM_LOCAL_FORCE = 0x2,
		SIM_GLOBAL_ACCELERATION = 0x3,
		SIM_GLOBAL_FORCE = 0x4,
	};

	int ()() * * _vptr.IMotionEvent;  // +0x0
	IMotionEvent(IMotionEvent &);
	IMotionEvent(const IMotionEvent &);
	IMotionEvent();
	virtual simresult_e Simulate(IPhysicsMotionController *, IPhysicsObject *, float, Vector &, AngularImpulse &);
	IMotionEvent & operator=(const IMotionEvent &);

	// vtable[0] Simulate
	// sizeof = 8
};

// src/public/vphysics2/interface.h:257
class IMotionEvent {
	enum simresult_e {
		SIM_NOTHING = 0,
		SIM_LOCAL_ACCELERATION = 0x1,
		SIM_LOCAL_FORCE = 0x2,
		SIM_GLOBAL_ACCELERATION = 0x3,
		SIM_GLOBAL_FORCE = 0x4,
	};

	int ()() * * _vptr.IMotionEvent;  // +0x0
	~IMotionEvent();
	IMotionEvent(IMotionEvent &);
	IMotionEvent(const IMotionEvent &);
	IMotionEvent();
	virtual simresult_e Simulate(IPhysicsMotionController *, IPhysicsObject *, float, Vector &, AngularImpulse &);
	IMotionEvent & operator=(const IMotionEvent &);

	// vtable[0] Simulate
	// sizeof = 8
};

// src/public/vphysics2/interface.h:273
class IPhysicsMotionController {
	int ()() * * _vptr.IPhysicsMotionController;  // +0x0
	IPhysicsMotionController();
	virtual ~IPhysicsMotionController();
	virtual void SetEventHandler(IMotionEvent *);
	virtual void Update(float);
	virtual void AttachObject(HPhysicsBody, bool);
	virtual void DetachObject(HPhysicsBody);
	virtual int CountObjects();
	virtual void GetObjects(HPhysicsBody *);
	virtual void ClearObjects();
	virtual void WakeObjects();

	// vtable[2] SetEventHandler
	// vtable[3] Update
	// vtable[4] AttachObject
	// vtable[5] DetachObject
	// vtable[6] CountObjects
	// vtable[7] GetObjects
	// vtable[8] ClearObjects
	// vtable[9] WakeObjects
	// sizeof = 8
};

// src/public/vphysics2/interface.h:298
struct VPhysIntersectionNotification_t {
	uint32 m_Reason;  // +0x0

	unsigned int m_nEntityHandle[2];  // +0x18
	VPhysIntersectionNotification_t();
	VPhysContactImpactStrength_t ComputeImpactStrength();

	// sizeof = 160
};

// src/public/vphysics2/interface.h:326
class IVPhysXWorld {
	int ()() * * _vptr.IVPhysXWorld;  // +0x0
	IVPhysXWorld(const IVPhysXWorld &);
	IVPhysXWorld();
	virtual ~IVPhysXWorld();
	virtual uint GetCreateFlags();
	virtual const char * GetDeviceName();
	virtual void DumpState(const CCommand &);
	virtual int Save(CUtlBuffer &);
	virtual int Restore(WorldRestoreParams_t &);
	virtual uint GetDebugLayers();
	virtual void SetDebugLayers(uint);
	virtual IPhysicsObject * CreatePolyObject(const CPhysCollide *, CUtlStringToken, const Vector &, const QAngle &, objectparams_t *);
	virtual IPhysicsMotionController * CreateMotionController(IMotionEvent *);
	virtual void DestroyMotionController(IPhysicsMotionController *);
	virtual int GetAggregateCount();
	virtual void GetActiveAggregateInstances(CUtlVector<IPhysAggregateInstance*, CUtlMemory<IPhysAggregateInstance*, int> > &);
	virtual IPhysAggregateInstance * GetAggregate(int);
	virtual IPhysAggregateInstance * CreateAggregateInstance(const CPhysAggregateData *, const CTransform &, float, uint, VPhysicsMotionType_t);
	virtual IPhysAggregateInstance * CreateAggregateInstance();
	virtual void DestroyAggregateInstance(IPhysAggregateInstance *);
	virtual IPhysIntersectionController * GetIntersectionController();
	virtual const CUtlVector<VPhysIntersectionNotification_t, CUtlMemory<VPhysIntersectionNotification_t, int> > & GetIntersectionNotifications();
	virtual void AddProfileStats(int, uint64, int);
	virtual void ClearIntersectionNotifications();
	virtual void SetGravity(const Vector &);
	virtual const VectorAligned & GetGravity();
	virtual void StepBeginReadOnlySimulation(float);
	virtual void StepEndReadOnlyGetResults(VPhysXWorldStepResults *);
	virtual void ExecuteDelayedDeletions();
	virtual HPhysicsBody CreateActor_Sphere(const Vector &, float, uint64);
	virtual HPhysicsBody CreateActor_Box(const Vector &, const Vector &, uint64);
	virtual IPhysAggregateInstance * CreateAggregate_Sphere(const Vector &, float, uint64, VPhysicsMotionType_t);
	virtual IPhysAggregateInstance * CreateAggregate_Box(const Vector &, const Vector &, uint64, VPhysicsMotionType_t);
	virtual void FlushCallbacks();
	virtual void CleanupDeleteList();
	virtual void Clear();
	virtual void Draw(ISceneViewDebugOverlays *);
	virtual void UpdateSceneObjects(CCallQueue &);
	virtual void HintSimRateChange(float);
	virtual HPhysicsJoint CreateHingeConstraint(HPhysicsBody, HPhysicsBody, const Vector &, const Vector &);
	virtual HPhysicsJoint CreateBallsocketConstraint(HPhysicsBody, HPhysicsBody, const constraint_ballsocketparams_t &);
	virtual HPhysicsJoint CreateRagdollConstraint(HPhysicsBody, HPhysicsBody, const matrix3x4_t &, const constraint_ragdollparams_t &);
	virtual HPhysicsJoint CreatePulleyConstraint(HPhysicsBody, HPhysicsBody, const constraint_pulleyparams_t &);
	virtual HPhysicsJoint CreateDistanceConstraint(HPhysicsBody, HPhysicsBody, const constraint_lengthparams_t &);
	virtual HPhysicsJoint CreatePrismaticConstraint(HPhysicsBody, HPhysicsBody, const constraint_slidingparams_t &);
	virtual HPhysicsJoint CreateFixedConstraint(HPhysicsBody, HPhysicsBody, const constraint_fixedparams_t &);
	virtual IPhysicsSpring * CreateSpring(HPhysicsBody, HPhysicsBody, const springparams_t &);
	virtual void DestroySpring(IPhysicsSpring *);
	virtual bool DisableCollisionsOnEntityPair(uint, uint);
	virtual void EnableCollisionsOnEntityPair(uint, uint);
	virtual bool IsEntityPairDisabled(uint, uint);
	virtual void RemoveAllPairsForEntityId(uint);
	virtual bool DoesEntityHaveCollisionPairs(uint);

	// vtable[2] GetCreateFlags
	// vtable[3] GetDeviceName
	// vtable[4] DumpState
	// vtable[5] Save
	// vtable[6] Restore
	// vtable[7] GetDebugLayers
	// vtable[8] SetDebugLayers
	// vtable[9] CreatePolyObject
	// vtable[10] CreateMotionController
	// vtable[11] DestroyMotionController
	// vtable[12] GetAggregateCount
	// vtable[13] GetActiveAggregateInstances
	// vtable[14] GetAggregate
	// vtable[15] CreateAggregateInstance
	// vtable[16] CreateAggregateInstance
	// vtable[17] DestroyAggregateInstance
	// vtable[18] GetIntersectionController
	// vtable[19] GetIntersectionNotifications
	// vtable[20] AddProfileStats
	// vtable[21] ClearIntersectionNotifications
	// vtable[22] SetGravity
	// vtable[23] GetGravity
	// vtable[24] StepBeginReadOnlySimulation
	// vtable[25] StepEndReadOnlyGetResults
	// vtable[26] ExecuteDelayedDeletions
	// vtable[27] CreateActor_Sphere
	// vtable[28] CreateActor_Box
	// vtable[29] CreateAggregate_Sphere
	// vtable[30] CreateAggregate_Box
	// vtable[31] FlushCallbacks
	// vtable[32] CleanupDeleteList
	// vtable[33] Clear
	// vtable[34] Draw
	// vtable[35] UpdateSceneObjects
	// vtable[36] HintSimRateChange
	// vtable[37] CreateHingeConstraint
	// vtable[38] CreateBallsocketConstraint
	// vtable[39] CreateRagdollConstraint
	// vtable[40] CreatePulleyConstraint
	// vtable[41] CreateDistanceConstraint
	// vtable[42] CreatePrismaticConstraint
	// vtable[43] CreateFixedConstraint
	// vtable[44] CreateSpring
	// vtable[45] DestroySpring
	// vtable[46] DisableCollisionsOnEntityPair
	// vtable[47] EnableCollisionsOnEntityPair
	// vtable[48] IsEntityPairDisabled
	// vtable[49] RemoveAllPairsForEntityId
	// vtable[50] DoesEntityHaveCollisionPairs
	// sizeof = 8
};

// src/public/vphysics2/interface.h:415
class IPhysicsWorldEventListener {
	int ()() * * _vptr.IPhysicsWorldEventListener;  // +0x0
	IPhysicsWorldEventListener(IPhysicsWorldEventListener &);
	IPhysicsWorldEventListener(const IPhysicsWorldEventListener &);
	~IPhysicsWorldEventListener();
	IPhysicsWorldEventListener();
	virtual void OnWorldRequiresDebugRendering(IVPhysXWorld *, bool);

	// vtable[0] OnWorldRequiresDebugRendering
	// sizeof = 8
};

// src/public/vphysics2/interface.h:726
struct physsaveparams_t {
	void * pObject;  // +0x8

	// sizeof = 24
};

// src/public/vphysics2/interface.h:733
struct physrestoreparams_t {
	void * * ppObject;  // +0x8
	void * pGameData;  // +0x10
	const CPhysAggregateData * m_pCollisionModel;  // +0x18
	uint64 m_nGameSceneNodeHandle;  // +0x28

	// sizeof = 56
};

// src/public/vphysics2/interface.h:744
struct physrecreateparams_t {
	void * pOldObject;  // +0x0
	void * pNewObject;  // +0x8

	// sizeof = 16
};

// src/public/vphysics2/interface.h:750
struct physprerestoreparams_t {
	int recreatedObjectCount;  // +0x0

	// sizeof = 24
};
