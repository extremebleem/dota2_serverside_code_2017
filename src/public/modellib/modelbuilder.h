// Reconstructed from DWARF by pahole; not original source.

// src/public/modellib/modelbuilder.h:25
class CBuilderMaterialGroup {
	CBuilderMaterialGroup();
	void SetName(const char *);
	void AddMaterial(HMaterial);
	~CBuilderMaterialGroup();

	// sizeof = 32
};

// src/public/modellib/modelbuilder.h:37
class CBuilderModelInfo {
	float m_flMass;  // +0x34
	float m_flMaxEyeDeflection;  // +0x44
	CBuilderModelInfo();
	CBuilderModelInfo & operator=(const PermModelInfo_t &);
	void FillInPermData(PermModelInfo_t *, CResourceStream *);
	~CBuilderModelInfo();

	// sizeof = 88
};

// src/public/modellib/modelbuilder.h:61
class CModelSkeletonBuilder {
private:

	CModelSkeletonBuilder();
	void Clear();
	int NumBones();
	int GetNumParentIndices();
	int GetParent(int);
	BoneFlags_t GetFlags(int);
	const char * GetBoneNameByIndex(int);
	const Vector & GetBonePos(int);
	const Quaternion & GetBoneRotation(int);
	void SetParent(int, uint32);
	void SetParent(int, const char *);
	void AddFlags(int, BoneFlags_t);
	void AddBoneSphere(int, float);
	void ClearFlags(int, BoneFlags_t);
	void SetPosParent(int, const Vector &);
	void SetRotParent(int, const Quaternion &);
	int FindOrAddBone(uint32, uint32, float, BoneFlags_t, const Vector &, const Quaternion &, const char *);
	int FindOrAddBone(const char *, const char *, float, BoneFlags_t, const Vector &, const Quaternion &);
	int FindBoneIndex(const char *);
	int FindBoneIndexByHash(uint32);
	void AddFlagToAllParentsOfBone(int, BoneFlags_t);
	void AppendRenderMeshSkeleton(const RenderSkeletonData_t *, LODGroupMask_t);
	void AppendRenderMeshSkeleton(const CRenderSkeleton *, LODGroupMask_t);
	void MarkBonesWithHitboxsAsSimBones(const CRenderMesh *);
	void MarkBonesWithAttachmentsAsSimBones(const AttachmentData_t *, int);
	void MarkBonesWithAttachmentsAsSimBones(const CRenderMesh *);
	void MarkBonesWithConstraintsAsSimBones(const CRenderMesh *);
	void AppendSkeleton(const CAnimationGroup *);
	void AppendSkeleton(const AnimationGroupResourceData_t *);
	void AppendSkeleton(const CPhysAggregateData *, bool);
	void MarkClothBones(const CFeModel *, bool);
	void AppendRetargetDst(const AnimationRetargetData_t *);
	bool AppendRetargetSrc(const AnimationGroupResourceData_t *, const AnimationRetargetData_t *, ResourceId_t);
	void Finalize(bool);
	void FillInPermData(ModelSkeletonData_t *, CResourceStream *);
	void FillInRuntimeData(CModelSkeleton *);
	ModelSkeletonData_t * CompileToPermDataPointer(CResourceStream *);
	void DestroyPermDataPointer(const ModelSkeletonData_t *);
	void FixupFlagsAndParents();
	void SortBoneList();
	void MarkSimBone(int);
	void GetBoneToWorld(matrix3x4a_t &, int);
	~CModelSkeletonBuilder();

	// sizeof = 240
};

// src/public/modellib/modelbuilder.h:132
class CModelSkeletonSorter {
private:

	const CModelSkeletonBuilder & m_skeleton;  // +0x0
	CModelSkeletonSorter(CModelSkeletonBuilder &);
	int GetBoneCount();
	bool IsIdentity();
	bool SortBones();

protected:

	void AddAllBones();
	void ForceSimBonesToAllLods();
	void PackLodBonesTogether();
	void ChainBoneFlagsToParents();
	void AddBoneAndItsParents(int, BoneFlags_t, BoneFlags_t);

private:

	void RemapArray(CUtlVector<short int, CUtlMemory<short int, int> > &);
	void RemapBones(CUtlHash<BoneHashPairing_t, bool (*)(const BoneHashPairing_t&, const BoneHashPairing_t&), unsigned int (*)(const BoneHash);
	~CModelSkeletonSorter();
	void ReorderArray<Vector>(CUtlVector<Vector, CUtlMemory<Vector, int> > &);
	void ReorderArray<Quaternion>(CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > &);
	void ReorderArray<CUtlString>(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	void ReorderArray<short int>(CUtlVector<short int, CUtlMemory<short int, int> > &);
	void ReorderArray<unsigned int>(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > &);
	void ReorderArray<float>(CUtlVector<float, CUtlMemory<float, int> > &);
	void ReorderArray<CModelSkeleton::BoneFlags_t>(CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> > &);

	// sizeof = 88
};

// src/public/modellib/modelbuilder.h:167
struct BuilderModelBoneFlexDriverControl_t {
	float m_flMin;  // +0x10
	float m_flMax;  // +0x14
	BuilderModelBoneFlexDriverControl_t();
	~BuilderModelBoneFlexDriverControl_t();

	// sizeof = 24
};

// src/public/modellib/modelbuilder.h:175
struct BuilderModelBoneFlexDriver_t {
	BuilderModelBoneFlexDriver_t();
	~BuilderModelBoneFlexDriver_t();

	// sizeof = 32
};

// src/public/modellib/modelbuilder.h:181
struct BuilderModelBoneFlexDriverList_t {
	BuilderModelBoneFlexDriverList_t();

	// sizeof = 24
};

// src/public/modellib/modelbuilder.h:186
struct BuilderModelExtPart_t : public ModelPart_t {
public:

	HModelStrong m_Model;  // +0x30
	BuilderModelExtPart_t(const BuilderModelExtPart_t &);
	~BuilderModelExtPart_t();

	// sizeof = 64
};

// src/public/modellib/modelbuilder.h:199
class CModelBuilder {
	HPhysAggregateData_InternalStrong m_refPhysicsData;  // +0xd8
	MeshGroupMask_t m_nDefaultMeshGroupMask;  // +0x140
	typedef CUtlVector<short int, CUtlMemory<short int, int> > RemappingTable_t;
	CModelBuilder();
	CModelBuilder(const PermModelData_t *);
	void SetName(const char *);
	void SetModelInfo(const CBuilderModelInfo *);
	void AddMesh(HRenderMesh_Internal, MeshGroupMask_t, LODGroupMask_t);
	void AddProceduralMesh(const char *, bool, CRenderMesh *, MeshGroupMask_t, LODGroupMask_t);
	void SetMeshGroupMaskForMesh(int, MeshGroupMask_t);
	void SetLODGroupMaskForMesh(int, LODGroupMask_t);
	void SetDefaultMeshGroupMask(MeshGroupMask_t);
	void AddExtPart(const BuilderModelExtPart_t &);
	void AddPhysicsBody(const CPhysBodyDesc &);
	void AddPhysicsBody(const char *, bool, const CPhysBodyDesc &);
	void AddPhysicsRep_Internal(HPhysAggregateData_Internal);
	void AddAnimationGroupRef(HAnimationGroup_Internal);
	void AddAnimationGroupRuntime(CAnimationGroupResource *);
	int AddMeshGroup(const char *);
	CBuilderMaterialGroup * AddMaterialGroup();
	int FindOrAddBone(uint32, uint32, float, BoneFlags_t, const Vector &, const Quaternion &, const char *);
	int FindOrAddBone(const char *, const char *, float, BoneFlags_t, const Vector &, const Quaternion &);
	void AddFlexController(const CFlexController *);
	void CreateRemappingTableForMesh(int, const CRenderMesh *, const CMorphSetData *);
	void CreateRemappingTableForMeshFromOldData(int, const CRenderMesh *, const MorphSetData_t *);
	void CreateEmptyRemappingTable(int);
	void AppendSkeletonsFromChildResources();
	void AppendFlexControllers(const CMorphSetData *);
	void AppendFlexControllersFromOldData(const MorphSetData_t *);
	void AppendFlexControllers(const CRenderMesh *);
	void AddBoneFlexDriver(const char *, int, const BuilderModelBoneFlexDriverControl_t *);
	void AddBoneFlexDrivers(const BuilderModelBoneFlexDriverList_t *);
	void InitFromPermData(const PermModelData_t *);
	void InitFromModel(const CModel *);
	void FillInPermData(PermModelData_t *, CResourceStream *);
	PermModelData_t * CompileToPermDataPointer(CResourceStream *);
	void DestroyPermDataPointer(const PermModelData_t *);
	int FindExtPartByName(const char *);

private:

	void CreateRemappingTableForMorphSetData(RemappingTable_t &, const CMorphSetData *);
	~CModelBuilder();

	// sizeof = 744
};
