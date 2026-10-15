// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/skeletoninstance.h:54
struct GameDrivenFlexWeight_t {
	float m_flValue;  // +0x0
	float m_flStartTime;  // +0x4
	float m_flLastChangeTime;  // +0x8
	GameDrivenFlexWeight_t();

	// sizeof = 12
};

// src/game/shared/skeletoninstance.h:64
class CSkeletonBoneSetupHelper {
private:

	HModel m_hModel;  // +0x0

	EHANDLE2 m_hOwningEntity;  // +0xa0
	CSkeletonBoneSetupHelper(InterpolatedVarPhase_t);
	CSkeletonBoneSetupHelper(HModel, EHANDLE2, InterpolatedVarPhase_t);
	void SetBaseAnimationLayer(HSequence, float);
	void SetRootTransform(const matrix3x4a_t &);
	void SetBoneTransformOverrides(int, const CTransform *, const float *);
	int GetBoneCount();
	void ComputeWorldSpaceBones(float, BoneFlags_t, CWritableBoneAccessor<matrix3x4a_t> &);
	const matrix3x4a_t & GetRootTransform();
	void AddAnimationDecode(float, int, const CAnimationDecodeOp *, int, const float *, EHANDLE2);

	// sizeof = 176
};

// src/game/shared/skeletoninstance.h:111
class IAttachmentOverride {
	int ()() * * _vptr.IAttachmentOverride;  // +0x0
	IAttachmentOverride(IAttachmentOverride &);
	IAttachmentOverride(const IAttachmentOverride &);
	~IAttachmentOverride();
	IAttachmentOverride();
	virtual AttachmentOverrideResult_t LookupOverrideAttachment(CUtlStringToken, AttachmentHandle_t *);
	virtual AttachmentOverrideResult_t GetOverrideAttachment(AttachmentHandle_t, matrix3x4_t *, bool *);

	// vtable[0] LookupOverrideAttachment
	// vtable[1] GetOverrideAttachment
	// sizeof = 8
};

// src/game/shared/skeletoninstance.h:131
class IBoneTransformOverride {
	int ()() * * _vptr.IBoneTransformOverride;  // +0x0
	IBoneTransformOverride(IBoneTransformOverride &);
	IBoneTransformOverride(const IBoneTransformOverride &);
	~IBoneTransformOverride();
	IBoneTransformOverride();
	virtual BoneTransformOverrideResult_t GetBoneTransformOverride(const CSkeletonInstance *, int, const CBoneAccessor<CTransform> &, const CBoneAccessor<matrix3x4a_t> &, bool *, void *, matrix3x4a_t *);
	virtual int GetScratchMemorySize(const CSkeletonInstance *);

	// vtable[0] GetBoneTransformOverride
	// vtable[1] GetScratchMemorySize
	// sizeof = 8
};

// src/game/shared/skeletoninstance.h:152
class CSimulationState {
private:

	uint32 * m_pReadableBones;  // +0x8
	int m_nTotalTransformCount;  // +0x10
	int m_nBoneCount;  // +0x14
	int m_nAttachmentCount;  // +0x18
	CSimulationState();
	~CSimulationState();
	void Init(HModel);
	void Shutdown();
	int GetTotalTransformCount();
	int GetBoneCount();
	int GetAttachmentCount();
	void MarkAllBonesDirty();
	const uint32 * GetReadableBones();
	uint32 * GetReadableBonesForModify();
	CBoneAccessor<matrix3x4a_t> GetWorldSpaceBones();
	CWritableBoneAccessor<matrix3x4a_t> GetWorldSpaceBonesForModify();
	const matrix3x4a_t * GetWorldSpaceAttachments();
	matrix3x4a_t * GetWorldSpaceAttachmentsForModify();
	void TransferStateTo(CSimulationState &);

	// sizeof = 32
};

// src/game/shared/skeletoninstance.h:197
class CCompositeParentSpaceState : public CAnimationState {
	struct InterpolatedBoneTransform_t {
		float m_flWeight;  // +0x20
		InterpolatedBoneTransform_t();

		// sizeof = 48
	};

public:

private:

	float * m_pInterpolatedBoneTransformWeights;  // +0x28
	bool m_bHasValidBoneTransformData;  // +0x38
	bool m_bShouldAllocateBoneTransforms;  // +0x39
	bool m_bShouldUseInterpolatedBoneTransforms;  // +0x3a

	typedef CAnimationState BaseClass;
	CCompositeParentSpaceState();
	~CCompositeParentSpaceState();
	void Realloc(HModel);
	CCompositeParentSpaceState & operator=(const CCompositeParentSpaceState &);
	bool operator==(const CCompositeParentSpaceState &);
	bool IsIdenticalWithinTolerance(const CCompositeParentSpaceState &);
	CUtlString GetDebugString();
	CUtlString GetDebugSpeedString(float, float, const CCompositeParentSpaceState *);
	void LerpFrom(const CCompositeParentSpaceState *, const CCompositeParentSpaceState *, float);
	bool HasValidBoneTransformData();
	void SetHasValidBoneTransformData(bool);
	const float * GetInterpolatedBoneTransformWeights();
	void CopyBoneTransformWeights(const CCompositeParentSpaceState *);
	const InterpolatedBoneTransform_t * GetInterpolatedBoneTransforms();
	/* tag__fprintf: const_type tag not supported! */;
	void TransferStateTo(CCompositeParentSpaceState &);
	void SetShouldAllocateBoneTransforms(bool);
	CBoneAccessor<CTransform> GetBones();
	CWritableBoneAccessor<CTransform> GetBonesForModify();
	CompositeParentSpaceTransformType_t GetTransformType();
	void SetTransformType(CompositeParentSpaceTransformType_t);
	void UpdateInterpolatedDataAllocation(bool);

	// sizeof = 64
};

// src/game/shared/skeletoninstance.h:245
class CClothSnapshotState {
	const CFeModel * m_pFeModel;  // +0x0
	HPhysicsSoftbody m_hSoftbody;  // +0x8
	float m_flTime;  // +0x28

	CClothSnapshotState();
	bool IsIdenticalWithinTolerance(const CClothSnapshotState &);
	bool operator==(const CClothSnapshotState &);
	void LerpFrom(const CClothSnapshotState *, const CClothSnapshotState *, float);
	void LerpHermiteFrom(const CClothSnapshotState &, float, const CClothSnapshotState &, const CClothSnapshotState &, const CClothSnapshotState &);
	CUtlString GetDebugString();
	CUtlString GetDebugSpeedString(float, float, const CClothSnapshotState *);
	void Purge();
	~CClothSnapshotState();
	CClothSnapshotState & operator=(const CClothSnapshotState &);

	// sizeof = 72
};

// src/game/shared/skeletoninstance.h:267
class CModelState {
	class NetworkVar_m_hModel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_MeshGroupMask {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nIdealMotionType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CModelState;  // +0x0

	static datamap_t m_DataMap;

private:

	string_t m_ModelName;  // +0xa8
	HModel m_hNewModel;  // +0xb0

	SceneObjectUpdaterHandle_t m_hSceneObjectUpdater;  // +0xd0
	HPhysicsSoftbody m_hCloth2;  // +0xe0

	int m_nDebugIndex;  // +0x178
	int16 m_nTotalBoneCount;  // +0x17c
	int16 m_nPhysBoneCount;  // +0x17e
	int8 m_nForceLOD;  // +0x181
	bool m_bIsJiggleBonesEnabled;  // +0x182
	int8 m_nClothUpdateFlags;  // +0x183
	bool m_bHasCloth;  // +0x185
	bool m_bHasProceduralBones;  // +0x186
	bool m_bHasFlexProceduralBones;  // +0x187

	typedef CModelState ThisClass;
	CModelState(const CModelState &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	VPhysicsMotionType_t GetMotionType();
	void SetMotionType(VPhysicsMotionType_t);
	~CModelState();
	void LoopingLerp_NoCopy(CClothSnapshotState &, float, const CClothSnapshotState &, const CClothSnapshotState &);
	void Lerp_NoCopy(CClothSnapshotState &, float, const CClothSnapshotState &, const CClothSnapshotState &);
	void LoopingLerp_Hermite_NoCopy(CClothSnapshotState &, const CClothSnapshotState &, float, const CClothSnapshotState &, const CClothSnapshotState &, const CClothSnapshotState &);
	void Lerp_Hermite_NoCopy(CClothSnapshotState &, const CClothSnapshotState &, float, const CClothSnapshotState &, const CClothSnapshotState &, const CClothSnapshotState &);
	CModelState();
	void SetupJointState();
	void CleanupJointState();
	void SetupModel(CModelState *, CSkeletonInstance *, const matrix3x4a_t &);
	void CleanupModel(CSkeletonInstance *);
	void SetupRendering(CSkeletonInstance *, const matrix3x4a_t &, SceneObjectUpdaterHandle_t);
	void SetupPhysics(CSkeletonInstance *, SolidType_t);
	void SetupPhysics(MeshGroupMask_t, CSkeletonInstance *, SolidType_t, CPhysAggregateData *);
	void DoSetupPhysics(CSkeletonInstance *);
	void DoSetupCloth(CSkeletonInstance *);
	void OnClothReloaded(HPhysicsSoftbody);
	void ReadClothSnapshotState(CClothSnapshotState *, int, const IInterpolatedVar *);
	void WriteClothSnapshotState(const CClothSnapshotState *, int, const IInterpolatedVar *, IVWriteOpType_t);
	void CleanupRendering(CSkeletonInstance *);
	void CleanupPhysics(CSkeletonInstance *);
	void CleanupCloth(CSkeletonInstance *);
	VPhysicsMotionType_t ComputeActualMotionType();
	bool ComputeHierarchyBoneFlags();
	void ComputeModelBoneFlags(const CModel *);
	void ExtendBoneFlags(const CModel *);
	void ConstructClothBoneMap(const CFeModel *);
	void ComputeBoneFlagsAssociatedWithCloth();
	void ComputeBoneFlagsAssociatedWithCloth(const CFeModel *);
	CSkeletonInstance * GetSkeletonInstance();
	const CSkeletonInstance * GetSkeletonInstance();
	void SetBindPose();
	void CopyStateTo(CSkeletonInstance *, CModelState &);
	void OnModelChanged(CEntityInstance *, const HModel *);
	void OnMeshGroupMaskChanged(CEntityInstance *, const MeshGroupMask_t *);
	void OnMotionTypeChanged();
	void GetRenderBounds(Vector *, Vector *);
	void GetRenderBoundsWorldSpace(Vector *, Vector *);
	bool IsEntityNetworkable();
	void UpdateMotionTypeOfAggregate(bool);
	void SetScale(CSkeletonInstance *, float);
	void ConstructPhysicsBoneMap();
	void DestructPhysicsBoneMap();
	void CreateInterpolatedVars();
	void DestroyInterpolatedVars();
	void SetModel(HModel);
	void UpdateModelCachedValues();
	const int16 * GetBoneIndexToPhysicsBoneIndex();
	const int16 * GetPhysicsBoneIndexToBoneIndex();
	const int16 * GetSkeletonBoneToClothParticleIndex();
	const int16 * GetClothParticleToSkeletonBoneIndex();
	const BoneFlags_t * GetBoneFlagsPropogatedToRoot();
	const BoneFlags_t * GetBoneFlagsPropogatedToLeaves();
	CThreadFastMutex & GetBoneComputationMutex();
	bool IsAnyBoneFlagsIncludingChildrenSet(int, BoneFlags_t);
	void SetBoneFlagsIncludingChildren(int, BoneFlags_t);
	IPhysAggregateInstance * VPhysicsGetAggregate();

	// vtable[0] HackToMakeAVTable
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// vtable[4] Schema_DynamicBinding
	// sizeof = 400
};

// src/game/shared/skeletoninstance.h:444
class CSkeletonInstance : public CGameSceneNode, public ISceneAnimatableProceduralBoneTransforms {
	class NetworkVar_m_bIsRenderingEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsAnimationEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_materialGroup {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nHitboxSet {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

	static datamap_t m_DataMap;

	class NetworkVar_m_modelState : public CModelState {
	public:

		NetworkVar_m_modelState(NetworkVar_m_modelState &);
		NetworkVar_m_modelState(const NetworkVar_m_modelState &);
		~NetworkVar_m_modelState();
		NetworkVar_m_modelState();
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 400
	};

private:

	bool m_bDisableSolidCollisionsForHierarchy:1;  // +0x2d2:0
	bool m_bDirtyMotionType:1;  // +0x2d2:1
	bool m_bIsGeneratingLatchedParentSpaceState:1;  // +0x2d2:2
	bool m_bMarkedForKinematicUpdate:1;  // +0x2d2:3
	bool m_bMarkedForHierarchyJointUpdate:1;  // +0x2d2:4

	HGameResourceManifest m_hCurrentlyAsyncLoadingModel;  // +0x2f8

	typedef CGameSceneNode BaseClass;
	typedef CSkeletonInstance ThisClass;
	typedef ThisClass ThisClass_m_modelState;
	CSkeletonInstance(const CSkeletonInstance &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CSkeletonInstance();
	virtual ~CSkeletonInstance();
	virtual void Connect(const char *, CEntityInstance *);
	virtual void AddedToEntityDatabase(CEntityInstance *);
	virtual bool Spawn(CEntityInstance *, const char *, const CEntityKeyValues *);
	virtual void Activate(CEntityInstance *, ActivateType_t);
	virtual void UpdateOnRemove(CEntityInstance *);
	virtual void OnSetDormant(CEntityInstance *, EntityDormancyType_t, EntityDormancyType_t);
	virtual CSkeletonInstance * GetSkeletonInstance();
	virtual const CSkeletonInstance * GetSkeletonInstance();
	void SetAnimationController(CSkeletonAnimationController *);
	CSkeletonAnimationController * GetAnimationController();
	const CSkeletonAnimationController * GetAnimationController();
	void SetModel(HModel);
	HModel GetModel();
	const CModel * GetModelData();
	string_t GetModelName();
	void SetModelAsync(const char *);
	const InterpolatedBoneTransform_t * GetInterpolatedSimulationBones();
	bool HasAllocatedInterpolatedSimulationBones();
	void SetRenderingEnabled(bool);
	bool IsRenderingEnabled();
	void SetAnimationEnabled(bool);
	bool IsAnimationEnabled();
	void SetSingleMeshGroup(CUtlStringToken);
	void SetMeshGroupMask(MeshGroupMask_t);
	MeshGroupMask_t GetMeshGroupMask();
	void SetMaterialGroup(CUtlStringToken);
	CUtlStringToken GetMaterialGroup();
	AttachmentHandle_t LookupAttachment(CUtlStringToken);
	void SetupAttachmentTransform(AttachmentHandle_t, CTransform &, CTransform *, CTransform *);
	const char * GetAttachmentName(AttachmentHandle_t);
	CUtlStringToken GetAttachmentNameToken(AttachmentHandle_t);
	const matrix3x4a_t * GetWorldSpaceAttachments();
	int GetAttachmentCount();
	AttachmentHandle_t LookupAttachment(const char *);
	AttachmentHandle_t LookupRandomAttachment(const char *);
	bool GetAttachment(const char *, Vector &);
	bool GetAttachment(const char *, Vector &, QAngle &);
	bool GetAttachment(AttachmentHandle_t, Vector &);
	bool GetAttachment(AttachmentHandle_t, Vector &, QAngle &);
	bool GetAttachment(AttachmentHandle_t, matrix3x4_t &);
	int GetAttachmentBoneCount(AttachmentHandle_t);
	int GetAttachmentBone(AttachmentHandle_t, int);
	bool GetAttachment(const char *, Vector &, Vector *, Vector *, Vector *);
	bool GetAttachment(AttachmentHandle_t, Vector &, Vector *, Vector *, Vector *);
	bool GetAttachmentLocal(const char *, Vector &, QAngle &);
	bool GetAttachmentLocal(AttachmentHandle_t, Vector &);
	bool GetAttachmentLocal(AttachmentHandle_t, Vector &, QAngle &);
	bool GetAttachmentLocal(AttachmentHandle_t, matrix3x4_t &);
	void SetAttachmentOverride(IAttachmentOverride *);
	bool IsAttachmentOverridden(AttachmentHandle_t);
	AttachmentHandle_t FirstAttachmentHandle();
	AttachmentHandle_t NextAttachmentHandle(AttachmentHandle_t);
	CBoneAccessor<CTransform> GetAnimationParentSpaceBones(BoneFlags_t);
	CBoneAccessor<CTransform> GetCompositeParentSpaceBones(BoneFlags_t);
	CBoneAccessor<matrix3x4a_t> GetWorldSpaceBones(BoneFlags_t);
	CompositeParentSpaceTransformType_t GetCompositeParentSpaceTransformType();
	bool IsRigidSkeleton();
	bool HasPhysics();
	bool HasRendering();
	void SetupPhysics();
	void SetupPhysics(SolidType_t, CPhysAggregateData *);
	void CleanupPhysics();
	void CleanupCloth();
	void OnClothReloaded(HPhysicsSoftbody);
	HSequence LookupSequence(const char *);
	bool GetWorldSpaceTransform(const char *, matrix3x4a_t *);
	const matrix3x4a_t & GetWorldSpaceTransform(int);
	void GetWorldSpaceTransform(matrix3x4a_t *);
	void GetRootBoneToWorldTransform(matrix3x4a_t *);
	void GetRenderBounds(Vector *, Vector *);
	void GetRenderBoundsWorldSpace(Vector *, Vector *);
	IPhysAggregateInstance * VPhysicsGetAggregate();
	void CollisionRulesChanged(const RnCollisionAttr_t &);
	void SetRenderingOptimization(ERenderingOptimization_t);
	ERenderingOptimization_t GetRenderingOptimization();
	bool HasRenderedSinceLastClientTick();
	bool DidRenderLastFrame();
	virtual void SetBoneTransformsInSceneObject(CSceneAnimatableObject *, LODGroupMask_t);
	CAnimationState * GetAnimationState(BoneFlags_t);
	const CAnimationState * GetAnimationState(BoneFlags_t);
	CCompositeParentSpaceState * GetCompositeParentSpaceState(BoneFlags_t);
	const CCompositeParentSpaceState * GetCompositeParentSpaceState(BoneFlags_t);
	CSimulationState * GetWorldSpaceState(BoneFlags_t);
	const CSimulationState * GetWorldSpaceState(BoneFlags_t);
	bool HasNonAnimationDrivenBones();
	int LookupBone(const char *);
	int GetNumBones();
	int GetRootBoneMergeBone();
	const CTransform & GetAnimationStateParentSpaceTransform(int);
	matrix3x4a_t GetAnimationStateWorldSpaceTransform(const matrix3x4_t &, int);
	int GetAnimationStateWorldSpaceTransforms(const matrix3x4_t &, int, matrix3x4_t *, BoneFlags_t);
	CSkeletonInstance * GetParentSkeletonInstance();
	CSceneObject * GetSceneObject();
	void SetBindPose();
	bool IsBodySkeleton();
	Vector OBBMins();
	Vector OBBMaxs();
	void GetOBB(Vector *, Vector *);
	void GetWorldSpaceAABB(Vector *, Vector *);
	int GetHitboxSetList(CHitboxSetList &, CUtlStringToken);
	int GetHitBoxList(CHitboxList &, CUtlStringToken);
	int GetHitBoxListAndTransforms(CHitboxList &, CHitboxTransformList &, CUtlStringToken);
	bool GetWorldSpaceHitboxBounds(Vector *, Vector *, CUtlStringToken);
	bool GetPoseSpaceHitboxBounds(Vector *, Vector *, const matrix3x4a_t *, CUtlStringToken);
	bool TraceRayAgainstHitboxes(const Ray_t &, CGameTrace *, CUtlStringToken, const int *, int);
	bool SweepShapeAgainstHitboxes(const CTransform &, const CTransform &, const RnSphere_t &, CGameSweep *, CUtlStringToken);
	bool SweepShapeAgainstHitboxes(const CTransform &, const CTransform &, const RnCapsule_t &, CGameSweep *, CUtlStringToken);
	bool SweepShapeAgainstHitboxes(const CTransform &, const CTransform &, const RnHull_t &, CGameSweep *, CUtlStringToken);
	const CHitBox * GetHitboxByIndex(int);
	void DebugShowHitboxes(CUtlStringToken, Color);
	void SetHitboxSet(int);
	void SetHitboxSetByName(const char *);
	int GetHitboxSet();
	const char * GetHitboxSetName();
	int GetHitboxSetCount();
	VPhysicsMotionType_t GetMotionType();
	void SetMotionType(VPhysicsMotionType_t);
	void MarkForKinematicUpdate(bool);
	bool IsMarkedForKinematicUpdate();
	void MarkForHierarchyJointUpdate(bool);
	bool IsMarkedForHierarchyJointUpdate();
	void SetVelocity(const Vector &);
	void SetAngularVelocity(const Vector &);
	virtual void InvalidatePhysicsRecursive(uint32);
	virtual void SetAnimationParentSpaceStateDirty();
	virtual void SetCompositeParentSpaceStateDirty();
	virtual void SetCompositeWorldSpaceStateDirty();
	int GetNumFlexControllers();
	const char * GetFlexControllerName(LocalFlexController_t);
	const char * GetFlexControllerType(LocalFlexController_t);
	int GetFlexControllerWeights(int, float *);
	void SetBoneTransformOverride(IBoneTransformOverride *);
	void RecomputePhysicsBoneMap();
	int GetPhysicsBoneCount();
	void CopyTransformsToCloth(HPhysicsSoftbody);
	void CopyTransformsToCloth();
	void SetupBones(int, CSkeletonInstance * *, BoneFlags_t, bool);
	CJiggleBones * GetJiggleBones();
	const CJiggleBones * GetJiggleBones();
	void EnableJiggleBones(bool);
	const int16 * GetBoneIndexToPhysicsBoneIndex();
	const int16 * GetPhysicsBoneIndexToBoneIndex();
	const int16 * GetSkeletonBoneToClothParticleIndex();
	const int16 * GetClothParticleToSkeletonBoneIndex();
	int16 FindBoneIndexForPhysicsBoneIndex(int);
	int ComputeWorldSpaceBonesAtTime(float, CWritableBoneAccessor<matrix3x4a_t> &, BoneFlags_t);
	void GetBoneMergeBoneToRoot(matrix3x4a_t *);
	void ForceLOD(int);
	int GetForceLOD();
	ClothHandle_t GetClothHandle();
	HPhysicsSoftbody GetCloth();
	void SetClothFrozen(bool);
	void SetClothFrozenInLocalSpace(bool);
	void SetClothDisabled(bool);
	void FlushClothUpdates(HPhysicsSoftbody, bool);
	bool HasCloth();
	bool HasActiveCloth();
	void UpdatePhysicsScale();
	virtual void PerformInvalidatePhysicsRecursive(uint32);
	void DirtyHierarchyBoneFlags();
	void UpdateHierarchyBoneFlags(bool);
	void OnRenderingEnableChanged(CEntityInstance *, const bool *);
	void OnMaterialGroupChanged(CEntityInstance *, const CUtlStringToken *);
	virtual void PostInstanceSpawn(CUtlVector<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> > &);
	virtual void PostDataUpdate(DataUpdateType_t, CUtlVector<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> > &);
	virtual void OnRestore(CUtlVector<CSkeletonAnimationController*, CUtlMemory<CSkeletonAnimationController*, int> > &);
	virtual void OnHierarchyChanged(bool);
	virtual HierarchyType_t DetermineHierarchyAttachType(CUtlStringToken);
	void CalcWorldSpaceBones(BoneFlags_t);
	void CalcWorldSpaceAttachments();
	void CalcParentSpaceState(BoneFlags_t);
	void CalcAnimationState(BoneFlags_t);
	void SetModelNameFromModel(HModel);
	AnimationProcessingType_t GetAnimationProcessingType();
	void AddAnimationDecode(CAnimationDecodeContext &, const uint32 *);
	void ReadParentSpaceState(CCompositeParentSpaceState *, int, const IInterpolatedVar *);
	void WriteParentSpaceState(const CCompositeParentSpaceState *, int, const IInterpolatedVar *, IVWriteOpType_t);
	void ApplyIKBones(uint32 *, CBoneAccessor<CTransform> &, CWritableBoneAccessor<matrix3x4a_t> &);
	void ApplyClothBones(CWritableBoneAccessor<matrix3x4a_t> &);
	bool BuildTransformations(BoneFlags_t);
	void BuildInterpolatedTransformations(BoneFlags_t);
	void CalculateWorldTransforms_R(const CModel *, const matrix3x4a_t &, BoneFlags_t, int, CBoneAccessor<CTransform> &, CWritableBoneAccessor<CTransform> &, CWritableBoneAccessor<matrix3x4a_t> &);
	void DestroySetModelAsyncRequest();
	void OnAsyncModelLoaded(HGameResourceManifest, HModel);
	CSkeletonInstance & operator=(const CSkeletonInstance &);
	bool GetWorldSpaceTransform(int, matrix3x4a_t *);
	int GetOffset_m_modelState();

	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] HackToMakeAVTable
	// vtable[23] NetworkStateChanged
	// vtable[24] NetworkStateChanged
	// vtable[25] NetworkStateChangedLog
	// vtable[26] GetDataDescMap
	// vtable[4] Connect
	// vtable[3] AddedToEntityDatabase
	// vtable[5] Spawn
	// vtable[6] Activate
	// vtable[7] UpdateOnRemove
	// vtable[8] OnSetDormant
	// vtable[9] GetSkeletonInstance
	// vtable[10] GetSkeletonInstance
	// vtable[27] SetBoneTransformsInSceneObject
	// vtable[11] InvalidatePhysicsRecursive
	// vtable[12] SetAnimationParentSpaceStateDirty
	// vtable[13] SetCompositeParentSpaceStateDirty
	// vtable[14] SetCompositeWorldSpaceStateDirty
	// vtable[15] PerformInvalidatePhysicsRecursive
	// vtable[18] PostInstanceSpawn
	// vtable[19] PostDataUpdate
	// vtable[20] OnRestore
	// vtable[16] OnHierarchyChanged
	// vtable[21] DetermineHierarchyAttachType
	// vtable[22] Schema_DynamicBinding
	// sizeof = 784
};
