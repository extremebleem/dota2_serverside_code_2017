// Reconstructed from DWARF by pahole; not original source.

// src/public/modellib/model.h:35
struct BoneHashPairing_t {
	uint32 m_nBoneHash;  // +0x0
	uint16 m_nBoneIndex;  // +0x4

	// sizeof = 8
};

// src/public/modellib/model.h:52
class CModelSkeleton {
	enum BoneFlags_t {
		FLAG_NO_BONE_FLAGS = 0,
		FLAG_BONEFLEXDRIVER = 0x4,
		FLAG_CLOTH = 0x8,
		FLAG_PHYSICS = 0x10,
		FLAG_ATTACHMENT = 0x20,
		FLAG_ANIMATION = 0x40,
		FLAG_MESH = 0x80,
		FLAG_HITBOX = 0x100,
		FLAG_RETARGET_SRC = 0x200,
		FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
		FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
		FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
		FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
		FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
		FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
		FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
		FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
		FLAG_BONE_MERGE_READ = 0x40000,
		FLAG_BONE_MERGE_WRITE = 0x80000,
		FLAG_ALL_BONE_FLAGS = 0xfffff,
		BLEND_PREALIGNED = 0x100000,
		FLAG_RIGIDLENGTH = 0x200000,
		FLAG_PROCEDURAL = 0x400000,
	};

	class BoneDict_t : public CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHashPairing_t&)> {
	public:

		BoneDict_t();

		// sizeof = 48
	};
	/* tag__fprintf: const_type tag not supported! */;

	short unsigned int m_pBonesPerLod[8];  // +0x30
	typedef int16 ParentIndex_t;
	CModelSkeleton();
	void InitFromOldData(const ModelSkeletonData_t *);
	void Finalize();
	int NumBonesForLOD(int);
	int NumBones();
	int GetParent(int);
	BoneFlags_t GetFlags(int);
	const char * GetBoneNameByIndex(int);
	float Sphere(int);
	Vector GetPosParentSpace(int);
	Quaternion GetRotParentSpace(int);
	const ParentIndex_t * GetParentArray();
	/* tag__fprintf: const_type tag not supported! */;
	const float * GetSphereArray();
	void GetBindPoseParentTransform(int, matrix3x4a_t &);
	void GetBindPoseParentTransform(int, CTransform &);
	void GetBindPoseParentTransforms(int, CTransform *);
	void GetBindPoseParentTransforms(float, int, CTransform *);
	void GetBindPoseWorldTransform(const CTransform &, int, CTransform *);
	void GetBindPoseWorldTransforms(const CTransform &, int, CTransform *);
	void GetBindPoseWorldTransforms(const matrix3x4a_t &, int, matrix3x4a_t *);
	void GetBindPoseWorldTransforms(const CTransform &, int, int, matrix3x4a_t *);
	void GetBindPoseWorldTransforms(const CTransform &, float, int, CTransform *);
	void GetBindPoseWorldTransforms(const CTransform &, float, int, int, matrix3x4a_t *);
	int BuildBoneMergeList(const CModelSkeleton *, bone_merge_list_t *, int);
	int FindBoneIndex(const char *);
	int FindBoneIndexByHash(uint32);
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const CTransform &, int, const CTransform *, CTransform *);
	void GetBoneSubtree(int, CVarBitVec *);

	// sizeof = 208
};

// src/public/modellib/model.h:52
class CModelSkeleton {
	enum BoneFlags_t {
		FLAG_NO_BONE_FLAGS = 0,
		FLAG_BONEFLEXDRIVER = 0x4,
		FLAG_CLOTH = 0x8,
		FLAG_PHYSICS = 0x10,
		FLAG_ATTACHMENT = 0x20,
		FLAG_ANIMATION = 0x40,
		FLAG_MESH = 0x80,
		FLAG_HITBOX = 0x100,
		FLAG_RETARGET_SRC = 0x200,
		FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
		FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
		FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
		FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
		FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
		FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
		FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
		FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
		FLAG_BONE_MERGE_READ = 0x40000,
		FLAG_BONE_MERGE_WRITE = 0x80000,
		FLAG_ALL_BONE_FLAGS = 0xfffff,
		BLEND_PREALIGNED = 0x100000,
		FLAG_RIGIDLENGTH = 0x200000,
		FLAG_PROCEDURAL = 0x400000,
	};

	class BoneDict_t : public CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHashPairing_t&)> {
	public:

		BoneDict_t();
		~BoneDict_t();

		// sizeof = 48
	};
	/* tag__fprintf: const_type tag not supported! */;

	short unsigned int m_pBonesPerLod[8];  // +0x30
	typedef int16 ParentIndex_t;
	CModelSkeleton();
	void InitFromOldData(const ModelSkeletonData_t *);
	void Finalize();
	int NumBonesForLOD(int);
	int NumBones();
	int GetParent(int);
	BoneFlags_t GetFlags(int);
	const char * GetBoneNameByIndex(int);
	float Sphere(int);
	Vector GetPosParentSpace(int);
	Quaternion GetRotParentSpace(int);
	const ParentIndex_t * GetParentArray();
	/* tag__fprintf: const_type tag not supported! */;
	const float * GetSphereArray();
	void GetBindPoseParentTransform(int, matrix3x4a_t &);
	void GetBindPoseParentTransform(int, CTransform &);
	void GetBindPoseParentTransforms(int, CTransform *);
	void GetBindPoseParentTransforms(float, int, CTransform *);
	void GetBindPoseWorldTransform(const CTransform &, int, CTransform *);
	void GetBindPoseWorldTransforms(const CTransform &, int, CTransform *);
	void GetBindPoseWorldTransforms(const matrix3x4a_t &, int, matrix3x4a_t *);
	void GetBindPoseWorldTransforms(const CTransform &, int, int, matrix3x4a_t *);
	void GetBindPoseWorldTransforms(const CTransform &, float, int, CTransform *);
	void GetBindPoseWorldTransforms(const CTransform &, float, int, int, matrix3x4a_t *);
	int BuildBoneMergeList(const CModelSkeleton *, bone_merge_list_t *, int);
	int FindBoneIndex(const char *);
	int FindBoneIndexByHash(uint32);
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const CTransform &, int, const CTransform *, CTransform *);
	void GetBoneSubtree(int, CVarBitVec *);

	// sizeof = 208
};

// src/public/modellib/model.h:52
class CModelSkeleton {
	enum BoneFlags_t {
		FLAG_NO_BONE_FLAGS = 0,
		FLAG_BONEFLEXDRIVER = 0x4,
		FLAG_CLOTH = 0x8,
		FLAG_PHYSICS = 0x10,
		FLAG_ATTACHMENT = 0x20,
		FLAG_ANIMATION = 0x40,
		FLAG_MESH = 0x80,
		FLAG_HITBOX = 0x100,
		FLAG_RETARGET_SRC = 0x200,
		FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
		FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
		FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
		FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
		FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
		FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
		FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
		FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
		FLAG_BONE_MERGE_READ = 0x40000,
		FLAG_BONE_MERGE_WRITE = 0x80000,
		FLAG_ALL_BONE_FLAGS = 0xfffff,
		BLEND_PREALIGNED = 0x100000,
		FLAG_RIGIDLENGTH = 0x200000,
		FLAG_PROCEDURAL = 0x400000,
	};

	class BoneDict_t : public CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHashPairing_t&)> {
	public:

		BoneDict_t();
		~BoneDict_t();

		// sizeof = 48
	};
	/* tag__fprintf: const_type tag not supported! */;

	short unsigned int m_pBonesPerLod[8];  // +0x30
	typedef int16 ParentIndex_t;
	CModelSkeleton();
	void InitFromOldData(const ModelSkeletonData_t *);
	void Finalize();
	int NumBonesForLOD(int);
	int NumBones();
	int GetParent(int);
	BoneFlags_t GetFlags(int);
	const char * GetBoneNameByIndex(int);
	float Sphere(int);
	Vector GetPosParentSpace(int);
	Quaternion GetRotParentSpace(int);
	const ParentIndex_t * GetParentArray();
	/* tag__fprintf: const_type tag not supported! */;
	const float * GetSphereArray();
	void GetBindPoseParentTransform(int, matrix3x4a_t &);
	void GetBindPoseParentTransform(int, CTransform &);
	void GetBindPoseParentTransforms(int, CTransform *);
	void GetBindPoseParentTransforms(float, int, CTransform *);
	void GetBindPoseWorldTransform(const CTransform &, int, CTransform *);
	void GetBindPoseWorldTransforms(const CTransform &, int, CTransform *);
	void GetBindPoseWorldTransforms(const matrix3x4a_t &, int, matrix3x4a_t *);
	void GetBindPoseWorldTransforms(const CTransform &, int, int, matrix3x4a_t *);
	void GetBindPoseWorldTransforms(const CTransform &, float, int, CTransform *);
	void GetBindPoseWorldTransforms(const CTransform &, float, int, int, matrix3x4a_t *);
	int BuildBoneMergeList(const CModelSkeleton *, bone_merge_list_t *, int);
	int FindBoneIndex(const char *);
	int FindBoneIndexByHash(uint32);
	void ComputeParentSpaceTransformsFromWorldSpaceTransforms(const CTransform &, int, const CTransform *, CTransform *);
	void GetBoneSubtree(int, CVarBitVec *);
	~CModelSkeleton();

	// sizeof = 208
};

// src/public/modellib/model.h:159
struct DefaultMaterialGroupIndex_t {
	int m_nIndex;  // +0x8
	DefaultMaterialGroupIndex_t();

	// sizeof = 16
};

// src/public/modellib/model.h:168
struct AttachmentPairing_t {
	uint32 m_nAttachmentHash;  // +0x0

	const CAttachment * m_pAttachment;  // +0x8
	int m_nTransformIndices[3];  // +0x10
	float m_pWeights[3];  // +0x1c
	uint8 m_nAttachmentIndex;  // +0x28

	// sizeof = 48
};

// src/public/modellib/model.h:192
struct HitBoxSetAndMesh_t {
	const CHitBoxSet * m_pHitBoxSet;  // +0x0
	int m_nRenderMesh;  // +0x8

	// sizeof = 16
};

// src/public/modellib/model.h:199
struct HitBoxAndMesh_t {
	const CHitBox * m_pHitBox;  // +0x0
	int m_nRenderMesh;  // +0x8

	// sizeof = 16
};

// src/public/modellib/model.h:244
struct CModelMaterialGroup {
	CModelMaterialGroup();
	~CModelMaterialGroup();

	// sizeof = 32
};

// src/public/modellib/model.h:253
struct CModelExtPart {
	int32 m_nParent;  // +0x28

	HModelStrong m_refModel;  // +0x30
	CModelExtPart();
	~CModelExtPart();

	// sizeof = 64
};

// src/public/modellib/model.h:277
struct CBoneFlexDriverControl {
	float m_flMin;  // +0x14
	float m_flMax;  // +0x18
	CBoneFlexDriverControl();
	~CBoneFlexDriverControl();

	// sizeof = 32
};

// src/public/modellib/model.h:290
struct CBoneFlexDriver {
	CBoneFlexDriver();
	~CBoneFlexDriver();

	// sizeof = 40
};

// src/public/modellib/model.h:301
class CModel {
	struct BodyPart_t {
		MeshGroupMask_t m_nBodyPartMask;  // +0x28
		BodyPart_t();
		~BodyPart_t();

		// sizeof = 48
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CModel;  // +0x0
protected:

	float m_flMass;  // +0x48
	float m_flMaxEyeDeflection;  // +0x58

	HPhysAggregateData_InternalStrong m_refPhysicsData;  // +0xe8
	MeshGroupMask_t m_nDefaultMeshGroupMask;  // +0x138
	CUtlHash<DefaultMaterialGroupIndex_t, bool (*)(const DefaultMaterialGroupIndex_t&, const DefaultMaterialGroupIndex_t&), unsigned int (*)(const DefaultMaterialGroupIndex_t&)> m_defaultMaterialIndexMap;  // +0x2a0

	CModel(const CModel &);
	virtual int GetActivityListVersion();
	virtual void SetActivityListVersion(int);
	virtual int GetEventListVersion();
	virtual void SetEventListVersion(int);
	virtual bool IsInitialized();
	CModel();
	void InitFromV0Data(CConvertOldDiskCtx &, const PermModelData_t *);
	virtual ~CModel();
	MeshGroupMask_t GetMeshGroupMaskForMesh(int);
	MeshGroupMask_t GetDefaultMeshGroupMask();
	MeshGroupMask_t GetMaskForMeshGroup(CUtlStringToken);
	MeshGroupMask_t GetMaskForMeshGroup(const char *);
	int GetNumMeshesInMeshGroup(int);
	int GetIndexForMeshGroup(CUtlStringToken);
	int GetNumMeshGroups();
	const char * GetMeshGroupName(int);
	void GetMeshToolsGeometryInfo(int, const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> > * *);
	int GetBodyPartForName(CUtlStringToken);
	int GetBodyPartForName(const char *);
	const char * GetBodyPartName(int);
	void GetBodyPartMeshName(int, int, char *, int);
	int GetNumBodyParts();
	int GetNumBodyPartMeshes(int);
	MeshGroupMask_t GetBodyPartMask(int);
	MeshGroupMask_t GetBodyPartMeshMask(int, int);
	int FindMeshIndexForMask(int, MeshGroupMask_t);
	int GetMaterialGroupIndex(CUtlStringToken);
	int GetMaterialGroupIndex(uint32);
	HMaterial GetMaterialReplacementForGroup(int, ResourceId_t);
	CUtlStringToken GetMaterialGroupTokenForIndex(int);
	void GetMaterialGroupList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int GetNumMaterialGroups();
	const char * GetMaterialGroupName(int);
	void GetMaterialGroupMaterials(int, CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> > *);
	int numskinfamilies();
	void GetAllMaterials(CUtlVector<CWeakHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int> > &);
	bool IsTranslucent();
	bool IsTranslucentTwoPass();
	bool IsRuntimeCombined();
	ModelFlags_t GetModelFlags();
	ModelFlags_t flags();
	const char * pszName();
	const char * name();
	const char * GetModelName();
	int GetNumMeshes();
	HRenderMesh_Internal GetMeshHandle_DEPRECATED(int);
	const CRenderMesh * GetMeshData(int);
	bool HasMesh(int);
	bool HasSkinnedMeshes();
	int16 AllMeshesSkinnedToOneBone();
	void GetMeshName(int, char *, int);
	void GetMeshBounds(Vector *, Vector *);
	void GetPhysicsBounds(Vector *, Vector *);
	void GetModelRenderBounds(Vector *, Vector *);
	AABB_t GetMeshBounds();
	AABB_t GetPhysicsBounds();
	AABB_t GetModelRenderBounds();
	bool HasPhysics();
	bool HasCollision();
	const char * GetCollisionEmbeddedKeyvalues();
	const CPhysAggregateData * GetPhysicsContainer();
	HPhysAggregateData_Internal GetPhysicsHandle_Internal();
	CSmartPtr<CPhysAggregateData, CRefCountAccessor> AcquirePhysicsRef();
	LocalFlexController_t LookupFlexController(const char *);
	LocalFlexController_t NumFlexControllers();
	const char * GetFlexControllerName(LocalFlexController_t);
	const char * GetFlexControllerType(LocalFlexController_t);
	int GetFlexControllerModelToGlobal(LocalFlexController_t);
	const CFlexController * GetFlexController(LocalFlexController_t);
	void SetFlexControllerModelToGlobal(LocalFlexController_t, int);
	const int16 * GetLocalToMasterTableForMesh(int);
	bool HasAnimationDrivenFlexes();
	int GetBoneFlexDriverCount();
	int GetBoneFlexDriverBoneIndex(int);
	int GetBoneFlexDriverControllerCount(int);
	LocalFlexController_t LookupBoneFlexDriverControllerLocal(int, int);
	void GetBoneFlexDriverControllerInfo(int, int, BoneFlexComponent_t *, float *, float *);
	int GetBoneIndexForHitboxForMesh(const CHitBox *, int);
	const CHitBoxSet * FindHitboxSetByName(const char *, int);
	int FindHitboxSetIndexByName(const char *, int);
	const CHitBoxSet * GetHitboxSetByIndex(int, int);
	int GetBoneIndexForHitbox(const CHitBox *);
	int GetHitboxSetCount(int);
	void GetHitboxSetsForMeshGroupMask(CHitboxSetList &, MeshGroupMask_t, CUtlStringToken);
	void GetHitboxesForMeshGroupMask(CHitboxList &, MeshGroupMask_t, CUtlStringToken);
	int GetBoneIndexForHitbox(HitBoxAndMesh_t &);
	void SetupAttachments(const CTransform *, CTransform *);
	void SetupAttachments(const CTransform *, const CTransform &, CTransform *);
	void SetupAttachments(const matrix3x4a_t *, const matrix3x4a_t &, matrix3x4a_t *);
	bool SetupAttachmentTransform(AttachmentHandle_t, const CTransform *, CTransform &);
	bool SetupAttachmentTransform(AttachmentHandle_t, const CTransform &, const CTransform *, CTransform &);
	bool SetupAttachmentTransform(AttachmentHandle_t, const matrix3x4a_t *, matrix3x4a_t &);
	bool SetupAttachmentTransform(AttachmentHandle_t, const matrix3x4a_t &, const matrix3x4a_t *, matrix3x4a_t &);
	int GetSimAttachmentTransformIndex(AttachmentHandle_t);
	AttachmentHandle_t GetAttachmentHandleFromIndex(int);
	int GetNumAttachments();
	AttachmentHandle_t GetAttachmentHandle(CUtlStringToken);
	CUtlStringToken GetAttachmentNameToken(AttachmentHandle_t);
	void GetAttachmentData(CUtlVector<const CAttachment*, CUtlMemory<const CAttachment*, int> > &);
	AttachmentHandle_t FirstAttachmentHandle();
	AttachmentHandle_t NextAttachmentHandle(AttachmentHandle_t);
	const char * GetAttachmentName(AttachmentHandle_t);
	int GetAttachmentBoneCount(AttachmentHandle_t);
	int GetAttachmentBone(AttachmentHandle_t, int);
	void GetAttachmentOffset(AttachmentHandle_t, int, float *, Vector *, Quaternion *);
	void GetAttachmentOffset(AttachmentHandle_t, int, float *, Vector *, QAngle *);
	void GetAttachmentOffset(AttachmentHandle_t, int, float *, matrix3x4a_t *);
	uint32 GetAnimationStateSize();
	uint32 GetAnimationStateCount(AnimationStateType_t);
	uint32 GetAnimationStateOffset(AnimationStateType_t);
	bool IsDataElementNeeded(const char *, const char *);
	const CModelSkeleton & MasterSkeleton();
	int FindBoneIndex(const char *);
	int FindBoneIndexByHash(uint32);
	float GetBoneSphereRadius(uint);
	int FindUserDataIndex(const char *, int);
	int NumUserDataElements();
	int GetUserDataSizeof();
	const CAnimContainer * GetAnimContainer();
	bool IsValidAnimation(int);
	const CAnimDesc * pAnimdesc(int);
	int GetNumAnim();
	int LookupAnimation(const char *);
	const char * GetAnimationName(int);
	bool IsValidSequence(HSequence);
	HSequence FirstSequence();
	HSequence NextSequence(HSequence);
	HSequence LookupSequence(const char *);
	const ISequence * pSeqdesc(HSequence);
	const char * GetSequenceName(HSequence);
	bool IsSequenceLooping(HSequence);
	int LookupPoseParameter(const char *);
	int GetNumPoseParameters();
	const PoseParamDesc_t * pPoseParameter(int);
	const char * GetPoseParameterName(int);
	float EncodePoseParameter(int, float, float &);
	float DecodePoseParameter(int, float);
	int LookupWeightlist(const char *);
	int GetNumWeightlists();
	const ChannelWeightlist_t * pChannelWeightlist(int);
	const char * GetWeightlistName(int);
	int numikchains();
	int GetNumIKChains();
	const CAnimIKChain * pIKChain(int);
	int GetNumIKAutoplayLocks();
	const CSeqIKLock * pIKAutoplayLock(int);
	int GetNumAutoplaySequences();
	HSequence GetAutoplaySequence(int);
	int GetNodeTransition(int, int);
	int EntryNode(HSequence);
	int ExitNode(HSequence);
	const char * pszNodeName(int);
	IAnimationGraph * GetAnimationGraph();
	int RemapSeqBone(HSequence, int);
	int RemapAnimBone(int, int);
	CActivityToSequenceMapping * GetActivityToSequenceMapping();
	void InitActivityToSequence();
	int NumBonesForLOD(int);
	int NumBones();
	BoneFlags_t boneFlags(int);
	void SetBoneFlags(int, BoneFlags_t);
	void ClearBoneFlags(int, BoneFlags_t);
	const char * boneName(int);
	int boneParent(int);
	Vector bonePosParentSpace(int);
	Quaternion boneRotParentSpace(int);
	float GetXYMovementScaleAnim(int);
	void GetBindPoseWorldTransforms(const CTransform &, int, CTransform *);
	void GetBindPoseWorldTransforms(const matrix3x4a_t &, int, matrix3x4a_t *);
	void GetSequenceBounds(HSequence, Vector *, Vector *);
	int ComputeMaxLODLevelUsedByModel();
	int LODLevelForScreenSize(float);
	LODGroupMask_t GetLODMaskForMesh(int);
	int GetNumExtParts();
	CTransform GetExtPartTransform(int);
	const char * GetExtPartName(int);
	int GetExtPartParent(int);
	HModel GetExtPartModel(int);
	Vector eyeposition();
	float MaxEyeDeflection();
	const char * pszSurfaceProp();
	CUtlStringToken GetSurfaceProp();
	float mass();
	Vector hull_min();
	Vector hull_max();
	Vector view_bbmin();
	Vector view_bbmax();
	const char * KeyValueText();
	void SetupAttachment(int, const int32 *, const float *, const Vector *, const Quaternion *, const CTransform *, const CTransform &, CTransform *);
	void SetupAttachment(int, const int32 *, const float *, const Vector *, const Quaternion *, const matrix3x4a_t *, const matrix3x4a_t &, matrix3x4a_t *);
	int GetNumProceduralBones();
	const CBaseConstraint * GetProceduralBone(int);
	bool CalcProceduralBones(matrix3x4a_t *, CVarBitVec *, const float *);

	// vtable[0] GetActivityListVersion
	// vtable[1] SetActivityListVersion
	// vtable[2] GetEventListVersion
	// vtable[3] SetEventListVersion
	// vtable[4] IsInitialized
	// sizeof = 936
};

// src/public/modellib/model.h:704
struct SetNodePositionsParams_t {
	const VectorAligned * pPos;  // +0x0
	int nCount;  // +0x8
	int nFrame;  // +0x24
	SetNodePositionsParams_t();

	// sizeof = 40
};
