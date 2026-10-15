// Reconstructed from DWARF by pahole; not original source.

// src/public/modellib/rendermesh.h:59
struct CRenderBufferBinding {
private:

	uint64 m_hBuffer;  // +0x0
	uint32 m_nBindOffsetBytes;  // +0x8
	CRenderBufferBinding();

	CRenderBufferBinding * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CRenderBufferBinding(CKV3TransferSaveContext *);
	void KV3TransferLoad_CRenderBufferBinding(CKV3TransferLoadContext *);

	// sizeof = 16
};

// src/public/modellib/rendermesh.h:59
struct CRenderBufferBinding {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	uint64 m_hBuffer;  // +0x0
	uint32 m_nBindOffsetBytes;  // +0x8
	CRenderBufferBinding();

	CRenderBufferBinding * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CRenderBufferBinding(CKV3TransferSaveContext *);
	void KV3TransferLoad_CRenderBufferBinding(CKV3TransferLoadContext *);

	// sizeof = 16
};

// src/public/modellib/rendermesh.h:85
struct SkeletonBoneBounds_t {
private:

	SkeletonBoneBounds_t();

	SkeletonBoneBounds_t * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_SkeletonBoneBounds_t(CKV3TransferSaveContext *);
	void KV3TransferLoad_SkeletonBoneBounds_t(CKV3TransferLoadContext *);

	// sizeof = 24
};

// src/public/modellib/rendermesh.h:85
struct SkeletonBoneBounds_t {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	SkeletonBoneBounds_t();

	SkeletonBoneBounds_t * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_SkeletonBoneBounds_t(CKV3TransferSaveContext *);
	void KV3TransferLoad_SkeletonBoneBounds_t(CKV3TransferLoadContext *);
	SkeletonBoneBounds_t & operator=(const SkeletonBoneBounds_t &);

	// sizeof = 24
};

// src/public/modellib/rendermesh.h:94
struct RenderSkeletonBone_t {
private:

	float m_flSphereRadius;  // +0x58
	RenderSkeletonBone_t();

	RenderSkeletonBone_t * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_RenderSkeletonBone_t(CKV3TransferSaveContext *);
	void KV3TransferLoad_RenderSkeletonBone_t(CKV3TransferLoadContext *);

	// sizeof = 96
};

// src/public/modellib/rendermesh.h:94
struct RenderSkeletonBone_t {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	float m_flSphereRadius;  // +0x58
	RenderSkeletonBone_t();

	RenderSkeletonBone_t * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_RenderSkeletonBone_t(CKV3TransferSaveContext *);
	void KV3TransferLoad_RenderSkeletonBone_t(CKV3TransferLoadContext *);
	~RenderSkeletonBone_t();
	RenderSkeletonBone_t & operator=(const RenderSkeletonBone_t &);

	// sizeof = 96
};

// src/public/modellib/rendermesh.h:106
class CRenderSkeleton {
private:

	int m_nBoneWeightCount;  // +0x48

	CRenderSkeleton * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CRenderSkeleton(CKV3TransferSaveContext *);
	void KV3TransferLoad_CRenderSkeleton(CKV3TransferLoadContext *);
	CRenderSkeleton();
	int AddBone(RenderSkeletonBone_t &);
	int GetBoneCount();
	const RenderSkeletonBone_t * GetBone(int);
	RenderSkeletonBone_t * GetBone(int);
	void SetBoneWeightCount(int);
	int GetBoneWeightCount();
	int FindBoneIndex(uint32);
	int FindBoneIndex(const char *);
	int GetParent(int);
	void FillInPermData(RenderSkeletonData_t *, CResourceStream *);
	void InitFromOldDiskData(const RenderSkeletonData_t *);
	void RemoveBones(const CUtlVector<int, CUtlMemory<int, int> > &, const CUtlVector<int, CUtlMemory<int, int> > &);
	void TransferPostLoadFn(CKV3TransferLoadContext *);

	// sizeof = 80
};

// src/public/modellib/rendermesh.h:106
class CRenderSkeleton {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	int m_nBoneWeightCount;  // +0x48

	CRenderSkeleton * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CRenderSkeleton(CKV3TransferSaveContext *);
	void KV3TransferLoad_CRenderSkeleton(CKV3TransferLoadContext *);
	CRenderSkeleton();
	int AddBone(RenderSkeletonBone_t &);
	int GetBoneCount();
	const RenderSkeletonBone_t * GetBone(int);
	RenderSkeletonBone_t * GetBone(int);
	void SetBoneWeightCount(int);
	int GetBoneWeightCount();
	int FindBoneIndex(uint32);
	int FindBoneIndex(const char *);
	int GetParent(int);
	void FillInPermData(RenderSkeletonData_t *, CResourceStream *);
	void InitFromOldDiskData(const RenderSkeletonData_t *);
	void RemoveBones(const CUtlVector<int, CUtlMemory<int, int> > &, const CUtlVector<int, CUtlMemory<int, int> > &);
	void TransferPostLoadFn(CKV3TransferLoadContext *);
	~CRenderSkeleton();
	CRenderSkeleton & operator=(const CRenderSkeleton &);

	// sizeof = 80
};

// src/public/modellib/rendermesh.h:145
class CMaterialDrawDescriptor {
private:

	int32 m_nBaseVertex;  // +0x4
	int32 m_nVertexCount;  // +0x8
	int32 m_nStartIndex;  // +0xc
	int32 m_nIndexCount;  // +0x10
	int32 m_nStartInstance;  // +0x14
	int32 m_nInstanceCount;  // +0x18
	float32 m_flUvDensity;  // +0x1c
	uint8 m_bAlphaBlendedMaterial;  // +0x30

	short unsigned int m_perInstanceBakedLightingParams[4];  // +0x40

	const CMaterialDrawDescriptor * m_pOriginalDrawCallPtr;  // +0xb8
	HMaterialStrong m_material;  // +0xc0

	CMaterialDrawDescriptor * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CMaterialDrawDescriptor(CKV3TransferSaveContext *);
	void KV3TransferLoad_CMaterialDrawDescriptor(CKV3TransferLoadContext *);
	CMaterialDrawDescriptor();
	CMaterialDrawDescriptor(RenderPrimitiveType_t, int32, int32, int32, int32);
	CMaterialDrawDescriptor(RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32);
	CMaterialDrawDescriptor(const CMaterialDrawDescriptor &);
	CMaterialDrawDescriptor & operator=(const CMaterialDrawDescriptor &);
	~CMaterialDrawDescriptor();
	void Init(RenderPrimitiveType_t, int32, int32, int32, int32);
	void Init(RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32);
	void Init(const CMaterialDrawDescriptor &);
	void SetFlags(RenderMeshDrawPrimitiveFlags_t);
	void SetMaterial(HMaterial);
	HMaterial GetMaterial();
	const IMaterial2 * GetMaterialPtr();
	void AddVertexBuffer(VertexBufferHandle_t, uint32);
	void SetIndexBuffer(IndexBufferHandle_t, uint32);
	void AddVertexBuffer(uint64, uint32);
	void SetIndexBuffer(uint64, uint32);
	void UpdateInputLayouts();
	bool IsAlphaBlended();
	void InitFromOldDiskData(const MaterialDrawDescriptor_t *);
	void FillInPermData(MaterialDrawDescriptor_t *, CResourceStream *);
	void TransferPostSaveFn(CKV3TransferSaveContext *);
	void TransferPostLoadFn(CKV3TransferLoadContext *);

	// sizeof = 200
};

// src/public/modellib/rendermesh.h:145
class CMaterialDrawDescriptor {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	int32 m_nBaseVertex;  // +0x4
	int32 m_nVertexCount;  // +0x8
	int32 m_nStartIndex;  // +0xc
	int32 m_nIndexCount;  // +0x10
	int32 m_nStartInstance;  // +0x14
	int32 m_nInstanceCount;  // +0x18
	float32 m_flUvDensity;  // +0x1c
	uint8 m_bAlphaBlendedMaterial;  // +0x30

	short unsigned int m_perInstanceBakedLightingParams[4];  // +0x40

	const CMaterialDrawDescriptor * m_pOriginalDrawCallPtr;  // +0xb8
	HMaterialStrong m_material;  // +0xc0

	CMaterialDrawDescriptor * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CMaterialDrawDescriptor(CKV3TransferSaveContext *);
	void KV3TransferLoad_CMaterialDrawDescriptor(CKV3TransferLoadContext *);
	CMaterialDrawDescriptor();
	CMaterialDrawDescriptor(RenderPrimitiveType_t, int32, int32, int32, int32);
	CMaterialDrawDescriptor(RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32);
	CMaterialDrawDescriptor(const CMaterialDrawDescriptor &);
	CMaterialDrawDescriptor & operator=(const CMaterialDrawDescriptor &);
	~CMaterialDrawDescriptor();
	void Init(RenderPrimitiveType_t, int32, int32, int32, int32);
	void Init(RenderPrimitiveType_t, int32, int32, int32, int32, int32, int32, float32);
	void Init(const CMaterialDrawDescriptor &);
	void SetFlags(RenderMeshDrawPrimitiveFlags_t);
	void SetMaterial(HMaterial);
	HMaterial GetMaterial();
	const IMaterial2 * GetMaterialPtr();
	void AddVertexBuffer(VertexBufferHandle_t, uint32);
	void SetIndexBuffer(IndexBufferHandle_t, uint32);
	void AddVertexBuffer(uint64, uint32);
	void SetIndexBuffer(uint64, uint32);
	void UpdateInputLayouts();
	bool IsAlphaBlended();
	void InitFromOldDiskData(const MaterialDrawDescriptor_t *);
	void FillInPermData(MaterialDrawDescriptor_t *, CResourceStream *);
	void TransferPostSaveFn(CKV3TransferSaveContext *);
	void TransferPostLoadFn(CKV3TransferLoadContext *);

	// sizeof = 200
};

// src/public/modellib/rendermesh.h:225
class CSceneObjectData {
private:

	CSceneObjectData * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CSceneObjectData(CKV3TransferSaveContext *);
	void KV3TransferLoad_CSceneObjectData(CKV3TransferLoadContext *);
	CSceneObjectData();
	CSceneObjectData(const Vector &, const Vector &, RenderMeshTranslucencyType_t);
	CSceneObjectData(const SceneObjectData_t *);
	CSceneObjectData(const CSceneObjectData *);
	~CSceneObjectData();
	void Init(const Vector &, const Vector &, RenderMeshTranslucencyType_t);
	void Init(const CSceneObjectData &);
	void SetBounds(const Vector &, const Vector &);
	void AddBounds(const Vector &, const Vector &);
	void SetTranslucencyType(RenderMeshTranslucencyType_t);
	void AddDrawCall(CMaterialDrawDescriptor &);
	CMaterialDrawDescriptor * AddDrawCall();
	int GetNumDrawCalls();
	CMaterialDrawDescriptor * GetDrawCall(int);
	const CMaterialDrawDescriptor * GetDrawCall(int);
	void SetTintColor(Vector4D &);
	void UpdateInputLayouts();
	void FillInPermData(SceneObjectData_t *, CResourceStream *);
	void InitFromOldDiskData(const SceneObjectData_t *);
	CSceneObjectData(const CSceneObjectData &);

	// sizeof = 72
};

// src/public/modellib/rendermesh.h:225
class CSceneObjectData {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	CSceneObjectData * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CSceneObjectData(CKV3TransferSaveContext *);
	void KV3TransferLoad_CSceneObjectData(CKV3TransferLoadContext *);
	CSceneObjectData();
	CSceneObjectData(const Vector &, const Vector &, RenderMeshTranslucencyType_t);
	CSceneObjectData(const SceneObjectData_t *);
	CSceneObjectData(const CSceneObjectData *);
	~CSceneObjectData();
	void Init(const Vector &, const Vector &, RenderMeshTranslucencyType_t);
	void Init(const CSceneObjectData &);
	void SetBounds(const Vector &, const Vector &);
	void AddBounds(const Vector &, const Vector &);
	void SetTranslucencyType(RenderMeshTranslucencyType_t);
	void AddDrawCall(CMaterialDrawDescriptor &);
	CMaterialDrawDescriptor * AddDrawCall();
	int GetNumDrawCalls();
	CMaterialDrawDescriptor * GetDrawCall(int);
	const CMaterialDrawDescriptor * GetDrawCall(int);
	void SetTintColor(Vector4D &);
	void UpdateInputLayouts();
	void FillInPermData(SceneObjectData_t *, CResourceStream *);
	void InitFromOldDiskData(const SceneObjectData_t *);
	CSceneObjectData(const CSceneObjectData &);
	CSceneObjectData & operator=(const CSceneObjectData &);

	// sizeof = 72
};

// src/public/modellib/rendermesh.h:272
class CAttachment {
private:

	float m_influenceWeights[3];  // +0x74
	bool m_bInfluenceRootTransform[3];  // +0x80
	uint8 m_nInfluences;  // +0x83

	CAttachment * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CAttachment(CKV3TransferSaveContext *);
	void KV3TransferLoad_CAttachment(CKV3TransferLoadContext *);
	CAttachment();
	void SetName(const char *);
	bool AddInfluence(const char *, const Vector &, const Quaternion &, float, bool);
	void FillInPermData(AttachmentData_t *, CResourceStream *);
	void TransferPostLoadFn(CKV3TransferLoadContext *);

	// sizeof = 136
};

// src/public/modellib/rendermesh.h:272
class CAttachment {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	float m_influenceWeights[3];  // +0x74
	bool m_bInfluenceRootTransform[3];  // +0x80
	uint8 m_nInfluences;  // +0x83

	CAttachment * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CAttachment(CKV3TransferSaveContext *);
	void KV3TransferLoad_CAttachment(CKV3TransferLoadContext *);
	CAttachment();
	void SetName(const char *);
	bool AddInfluence(const char *, const Vector &, const Quaternion &, float, bool);
	void FillInPermData(AttachmentData_t *, CResourceStream *);
	void TransferPostLoadFn(CKV3TransferLoadContext *);
	~CAttachment();
	CAttachment(const CAttachment &);

	// sizeof = 136
};

// src/public/modellib/rendermesh.h:301
class CHitBox {
private:

	uint32 m_nBoneNameHash;  // +0x48
	int32 m_nGroupId;  // +0x4c
	uint16 m_nHitBoxIndex;  // +0x54

	bool m_bForcedTransform;  // +0x70
	bool m_bTranslationOnly;  // +0x71
	bool m_bVisible;  // +0x72
	bool m_bSelected;  // +0x73

	CHitBox * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CHitBox(CKV3TransferSaveContext *);
	void KV3TransferLoad_CHitBox(CKV3TransferLoadContext *);
	CHitBox();
	void SetName(const char *);
	void SetBoneName(const char *);
	void SetForcedTransform(const matrix3x4_t &);

	// sizeof = 120
};

// src/public/modellib/rendermesh.h:301
class CHitBox {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	uint32 m_nBoneNameHash;  // +0x48
	int32 m_nGroupId;  // +0x4c
	uint16 m_nHitBoxIndex;  // +0x54

	bool m_bForcedTransform;  // +0x70
	bool m_bTranslationOnly;  // +0x71
	bool m_bVisible;  // +0x72
	bool m_bSelected;  // +0x73

	CHitBox * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CHitBox(CKV3TransferSaveContext *);
	void KV3TransferLoad_CHitBox(CKV3TransferLoadContext *);
	CHitBox();
	void SetName(const char *);
	void SetBoneName(const char *);
	void SetForcedTransform(const matrix3x4_t &);
	~CHitBox();
	CHitBox & operator=(const CHitBox &);

	// sizeof = 120
};

// src/public/modellib/rendermesh.h:364
class CHitBoxSet {
private:

	uint32 m_nNameHash;  // +0x8

	CHitBoxSet * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CHitBoxSet(CKV3TransferSaveContext *);
	void KV3TransferLoad_CHitBoxSet(CKV3TransferLoadContext *);
	CHitBoxSet();
	CHitBoxSet(const CHitBoxSet &);
	void SetName(const char *);
	CHitBox * AddHitBox(const char *);
	void FillInPermData(HitBoxSet_t *, CResourceStream *, int &);
	void FillInPermData(HitBox_t *, const CHitBox *, CResourceStream *, int &);
	int numhitboxes();
	const CHitBox * pHitbox(int);

	// sizeof = 48
};

// src/public/modellib/rendermesh.h:364
class CHitBoxSet {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	uint32 m_nNameHash;  // +0x8

	CHitBoxSet * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CHitBoxSet(CKV3TransferSaveContext *);
	void KV3TransferLoad_CHitBoxSet(CKV3TransferLoadContext *);
	CHitBoxSet();
	CHitBoxSet(const CHitBoxSet &);
	void SetName(const char *);
	CHitBox * AddHitBox(const char *);
	void FillInPermData(HitBoxSet_t *, CResourceStream *, int &);
	void FillInPermData(HitBox_t *, const CHitBox *, CResourceStream *, int &);
	int numhitboxes();
	const CHitBox * pHitbox(int);
	~CHitBoxSet();

	// sizeof = 48
};

// src/public/modellib/rendermesh.h:364
class CHitBoxSet {
	enum {
		KV3TRANSFER_BEHAVIOR = 0x1,
	};

private:

	uint32 m_nNameHash;  // +0x8

	CHitBoxSet * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CHitBoxSet(CKV3TransferSaveContext *);
	void KV3TransferLoad_CHitBoxSet(CKV3TransferLoadContext *);
	CHitBoxSet();
	CHitBoxSet(const CHitBoxSet &);
	void SetName(const char *);
	CHitBox * AddHitBox(const char *);
	void FillInPermData(HitBoxSet_t *, CResourceStream *, int &);
	void FillInPermData(HitBox_t *, const CHitBox *, CResourceStream *, int &);
	int numhitboxes();
	const CHitBox * pHitbox(int);
	~CHitBoxSet();
	CHitBoxSet & operator=(const CHitBoxSet &);

	// sizeof = 48
};

// src/public/modellib/rendermesh.h:393
class CHitBoxSetList {
private:

	CHitBoxSetList * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CHitBoxSetList(CKV3TransferSaveContext *);
	void KV3TransferLoad_CHitBoxSetList(CKV3TransferLoadContext *);
	CHitBoxSetList();
	CHitBoxSetList(const CHitBoxSetList &);
	void MakeSetVisible(const char *);
	void MakeBoxSelected(const char *, const char *);

	// sizeof = 24
};

// src/public/modellib/rendermesh.h:414
struct TraceVertex_t {
	unsigned int m_nBoneIndices[4];  // +0x30
	float m_flBoneWeights[4];  // +0x40
	TraceVertex_t();

	// sizeof = 80
};

// src/public/modellib/rendermesh.h:424
struct TraceDataForDraw_t {
	int m_nTraceTriangles;  // +0x0
	int m_nTraceVertices;  // +0x4
	int * m_pTraceTriangleIndices;  // +0x10
	int * m_pTraceTriangleIndexRemapping;  // +0x18
	int m_nUnRemappedTraceVertexCount;  // +0x20
	int m_nSceneObjectIndex;  // +0x24
	int m_nDrawCallIndex;  // +0x28

	HMaterialStrongCopyable m_hMaterial;  // +0x30
	TraceDataForDraw_t();
	void Init();
	void GetUnRemappedVerticesAndIndices(CUtlVector<TraceVertex_t, CUtlMemory<TraceVertex_t, int> > &, CUtlVector<int, CUtlMemory<int, int> > &);

	// sizeof = 56
};

// src/public/modellib/rendermesh.h:458
class CRenderMesh {
private:

	HMorphSet_InternalStrong m_hV0MorphSet;  // +0x128
	int m_nVertexBuffers;  // +0x150
	int m_nIndexBuffers;  // +0x154
	VertexBufferHandle_t * m_pVBHandles;  // +0x158
	IndexBufferHandle_t * m_pIBHandles;  // +0x160
	bool * m_pIsCPUVB;  // +0x168
	bool * m_pIsCPUIB;  // +0x170

	CRenderMesh * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CRenderMesh(CKV3TransferSaveContext *);
	void KV3TransferLoad_CRenderMesh(CKV3TransferLoadContext *);
	CRenderMesh();
	~CRenderMesh();
	void UpdateBounds();
	void GetBounds(Vector &, Vector &);
	const CMorphSet * GetMorphSet();
	const CMorphSetData * GetMorphSetData();
	int GetNumFlexDescs();
	int GetNumFlexControllers();
	RenderMeshTranslucencyType_t GetTranslucencyType();
	int GetNumBones();
	int GetNumRemapIndices();
	int InstancePartitionIndex(CMeshInstance *);
	void AddSceneObject(CSceneObjectData &);
	CSceneObjectData * AddSceneObject();
	CAttachment * FindOrAddAttachment(const char *, bool *);
	CHitBoxSet * FindOrAddHitBoxSet(const char *, bool *);
	void AddBone(RenderSkeletonBone_t &);
	void SetMorphSet_V0Internal(HMorphSet_Internal);
	void ConvertV0MorphSetToRuntime(CConvertOldDiskCtx &);
	void InitFromOldDiskData(const PermRenderMeshData_t *);
	void FillInPermData(PermRenderMeshData_t *, CResourceStream *);
	PermRenderMeshData_t * CompileToPermDataPointer(CResourceStream *);
	void BuildHitboxIndices();
	void TransferPostSaveFn(CKV3TransferSaveContext *);
	void TransferPostLoadFn(CKV3TransferLoadContext *);
	CRenderMesh(const CRenderMesh &);
	CRenderMesh & operator=(const CRenderMesh &);

	// sizeof = 408
};

// src/public/modellib/rendermesh.h:555
struct RenderMeshInputLayoutField_t {
	unsigned char m_pSemanticName[32];  // +0x0
	int32 m_nSemanticIndex;  // +0x20
	uint32 m_Format;  // +0x24
	int32 m_nOffset;  // +0x28
	int32 m_nSlot;  // +0x2c
	int32 m_nSlotType;  // +0x30
	int32 m_nInstanceStepRate;  // +0x34

	// sizeof = 56
};

// src/public/modellib/rendermesh.h:575
struct RenderMeshBufferData_t {
	int32 m_nElementCount;  // +0x0
	int32 m_nElementSizeInBytes;  // +0x4
	RenderMeshBufferData_t();

	// sizeof = 24
};

// src/public/modellib/rendermesh.h:585
struct VBIBBlockHeader_t {
	VBIBBlockHeader_t();

	// sizeof = 16
};

// src/public/modellib/rendermesh.h:594
struct RuntimeBuffersInfo_t {
	struct BufferInfo_t {
		int32 m_nElementCount;  // +0x0
		int32 m_nElementSizeInBytes;  // +0x4
		const uint8 * m_pData;  // +0x100
		size_t m_nDataSize;  // +0x108
		BufferInfo_t();
		void InitFromV0Info(const OnDiskBufferData_t *);
		void InitFromVBIBBlock(const RenderMeshBufferData_t *);
		~BufferInfo_t();

		// sizeof = 272
	};
	/* tag__fprintf: const_type tag not supported! */;
	RuntimeBuffersInfo_t();
	void InitFromV0Info(const PermRenderMeshData_t *);
	void InitFromVBIBBlockHeader(const VBIBBlockHeader_t *);

	// sizeof = 592
};
