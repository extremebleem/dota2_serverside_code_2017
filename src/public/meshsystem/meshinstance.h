// Reconstructed from DWARF by pahole; not original source.

// src/public/meshsystem/meshinstance.h:29
struct SceneObjectOverrideBase_t {
	uint32 m_nDrawCallIndex;  // +0x0
	SceneObjectOverrideBase_t();

	// sizeof = 8
};

// src/public/meshsystem/meshinstance.h:39
struct ExtraSceneObjectStreamDesc_t : public SceneObjectOverrideBase_t {
public:

	ExtraSceneObjectStreamDesc_t();

	// sizeof = 24
};

// src/public/meshsystem/meshinstance.h:46
struct SceneObjectBakedLightingInfoDesc_t : public SceneObjectOverrideBase_t {
public:

	short unsigned int m_perInstanceBakedLightingParams[4];  // +0x8
	SceneObjectBakedLightingInfoDesc_t();

	// sizeof = 24
};

// src/public/meshsystem/meshinstance.h:52
struct MaterialOverrideDesc_t : public SceneObjectOverrideBase_t {
public:

	HMaterial m_hMaterial;  // +0x8
	MaterialOverrideDesc_t();

	// sizeof = 16
};

// src/public/meshsystem/meshinstance.h:60
union CachedSlotInfo_t {
	uint64 m_nCached64Bits;  // +0x0
};

// src/public/meshsystem/meshinstance.h:72
struct TintedCachedSlotInfo_t {
	TintedCachedSlotInfo_t();

	// sizeof = 24
};

// src/public/meshsystem/meshinstance.h:78
struct CMeshInstanceAnimatableData {
	const int16 * m_pLocalToMasterTable;  // +0x8
	float m_flFlexTimeLast;  // +0x28

	CMeshInstanceAnimatableData();
	~CMeshInstanceAnimatableData();

	// sizeof = 72
};

// src/public/meshsystem/meshinstance.h:102
class CMeshInstance {
	int ()() * * _vptr.CMeshInstance;  // +0x0
	ESceneObjectFlags m_nOriginalSceneObjectFlags;  // +0x20
	MeshGroupMask_t m_nMeshGroupMask;  // +0x30
	uint32 m_nCurrentMaterialGroup;  // +0x48
	uint16 m_nSceneObjectIndex;  // +0x4c
	LODGroupMask_t m_nLODGroupMask;  // +0x4e
	bool m_bOwnVBAndIB;  // +0x4f
	virtual void SetMaterialOverrides(HMaterial *, int);
	virtual void SetMaterialOverrides(MaterialOverrideDesc_t *, int);
	virtual void SetMaterialOverride(HMaterial, bool);
	virtual void SetMaterialGroupOverride(int, bool);
	virtual void SetMaterialGroup(uint32, bool);
	virtual void CreateSingleDrawCallMeshHelper(VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, RenderPrimitiveType_t, int, int, const Vector &, const Vector &, bool, bool);
	virtual void AppendDrawCallMeshHelper(VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, RenderPrimitiveType_t, int, int, int, int, const Vector &, const Vector &, bool, bool);
	virtual void AddExtraVertexStreams(ExtraSceneObjectStreamDesc_t *, int);
	virtual const CModel * GetModel();
	virtual HModel GetModelHandle();
	virtual void AddBakedLightingInfo(SceneObjectBakedLightingInfoDesc_t *, int);

protected:

	CMeshInstance();
	CMeshInstance(CModelMeshHandle, int, ESceneObjectFlags, CSceneObject *, MeshGroupMask_t, LODGroupMask_t);
	virtual ~CMeshInstance();
	void AllocateAnimatableData(uint32, const int16 *, int);
	void DestroyOwnedVBAndIB();
	CModelMeshHandle GetRenderMeshHandle();
	const CRenderMesh * GetRenderMesh();
	const CSceneObjectData * GetSceneObjectData();
	void GetBounds(Vector &, Vector &);
	int GetNumDrawCalls();
	const CMaterialDrawDescriptor * GetDrawCallsPtr();
	const CMaterialDrawDescriptor * GetDrawCall(int);
	void SetAndOwnDrawDataOverride(CSceneObjectData *);
	MeshGroupMask_t GetMeshGroupMask();
	LODGroupMask_t GetLODGroupMask();
	CMeshInstance * GetNext();
	const CRenderSkeleton * GetRenderSkeleton();
	const int16 * GetBoneLocalToMasterTable();
	const int16 * GetFlexControllerLocalToMasterTable();
	int GetNumBones();
	bool SetCachedSlotInfo(uint, uint, bool, CachedSlotInfo_t);
	CachedSlotInfo_t GetCachedSlotInfo();
	void AttachToSceneObjectRecursive(CSceneObject *);
	const CMorphSetData * GetMorphSetData();
	bool UseMaterialGroup(CUtlStringToken, bool);
	bool UseMaterialGroup(uint32, bool);

	// vtable[0] SetMaterialOverrides
	// vtable[1] SetMaterialOverrides
	// vtable[2] SetMaterialOverride
	// vtable[3] SetMaterialGroupOverride
	// vtable[4] SetMaterialGroup
	// vtable[5] CreateSingleDrawCallMeshHelper
	// vtable[6] AppendDrawCallMeshHelper
	// vtable[7] AddExtraVertexStreams
	// vtable[8] GetModel
	// vtable[9] GetModelHandle
	// vtable[10] AddBakedLightingInfo
	// sizeof = 80
};
