// Reconstructed from DWARF by pahole; not original source.

// src/public/scenesystem/sceneobject.h:53
class CSceneObjectReference_t {
private:

	ESceneObjectFlags m_nRenderableFlags;  // +0x20
	CSceneObjectReference_t();

	// sizeof = 48
};

// src/public/scenesystem/sceneobject.h:76
class CPVSData {
	struct pvsmask_t {
	private:

		uint32 m_nOffset;  // +0x0
		uint32 m_nMask;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	uint16 m_nPVSMasks;  // +0x8
	uint16 m_nPVSFlags;  // +0xa

	CPVSData * CreatePVSNode();
	void RecomputePVSFromBounds(IPVS *, const Vector &, const Vector &);
	void RecomputePVSFromFrustum(IPVS *, const CFrustum &);
	bool IsVisible(const uint32 *);
	void CreatePVSMasks(uint32 *, int);

	// sizeof = 72
};

// src/public/scenesystem/sceneobject.h:125
struct CSceneSystemStencilState {
	CSceneSystemStencilState();

	// sizeof = 72
};

// src/public/scenesystem/sceneobject.h:149
class CSceneSystemBakedLightingInfo {
	CSceneSystemBakedLightingInfo();

	// sizeof = 64
};

// src/public/scenesystem/sceneobject.h:174
struct SecondaryViewDescriptor_t {
	float m_flFOV;  // +0x2c
	float m_flWaterDepth;  // +0x30
	int m_nDesiredResolution;  // +0x34
	SecondaryViewDescriptor_t();

	// sizeof = 56
};

// src/public/scenesystem/sceneobject.h:186
class CSecondaryViewRenderInformation {
	int m_nSecondaryViewIndex;  // +0x3c0

	CSecondaryViewRenderInformation();
	void ExpandClipRect(Vector4D &);

	// sizeof = 992
};

// src/public/scenesystem/sceneobject.h:226
struct ChildSceneObjectReference_t {
	uint32 m_nChildUpdateFlags;  // +0x4
	ChildSceneObjectReference_t();

	// sizeof = 16
};

// src/public/scenesystem/sceneobject.h:235
class CSceneObjectExtraData_t {
private:

	MeshGroupMask_t m_nCurrentMeshGroupMask;  // +0x3e8
	float m_flDepthSortBias;  // +0x408
	unsigned char m_nVisibleToPlayer[4];  // +0x40c
	uint16 m_nAlphaFade;  // +0x410
	int16 m_nViewProducerIndex;  // +0x412
	int8 m_nCurrentLOD;  // +0x414

	int32 m_nCubeMapPrecomputedHandshake;  // +0x418
	int32 m_nLightProbeVolumePrecomputedHandshake;  // +0x41c

	void Init();
	CSceneObjectExtraData_t();
	~CSceneObjectExtraData_t();

	// sizeof = 1056
};

// src/public/scenesystem/sceneobject.h:316
class CSceneObject : public IGenericInterface {
	union {
		void * m_pObjectData;  // +0x0
	};

public:

private:

	union {
		void * m_pObjectData;  // +0x8
	};
	float m_flStartFadeDistanceSquared;  // +0x20
	float m_flFarCullDistanceSquared;  // +0x24
	uint16 m_nObjectTypeFlags;  // +0x28
	uint16 m_nGameRenderCounter;  // +0x2a
	uint8 m_nMeshGroupMaskSmall;  // +0x2f
	uint8 m_nDebugLevel:2;  // +0x30:0
	uint8 m_nSizeCullBloat:2;  // +0x30:2
	uint8 m_nBoundsType:1;  // +0x30:4

	uint8 m_nID;  // +0x31
	uint8 m_nNumTransformBlocks;  // +0x32
	uint8 m_nObjectClass;  // +0x33

	ESceneObjectFlags m_nOriginalRenderableFlags;  // +0x80
	ESceneObjectFlags m_nRenderableFlags;  // +0x88
	uint32 m_hExternalOwner;  // +0x98

	static float s_flSizeCullBloatScale[4];
	CSceneObject(const CSceneObject &);

	CSceneObject();
	virtual ~CSceneObject();
	void Init();
	void Term();
	void InitObject(ISceneWorld *, ESceneObjectFlags);
	void CreateDefaultPVSNode();
	void RecomputePVS(IPVS *);
	void SetCullDistance(float);
	void SetAttributes(CRenderAttributes *);
	void SetFloatValue(const CUtlStringToken &, float);
	float GetFloatValue(const CUtlStringToken &, float);
	void DeleteFloatValue(const CUtlStringToken &);
	void SetIntValue(const CUtlStringToken &, int);
	int GetIntValue(const CUtlStringToken &, int);
	void DeleteIntValue(const CUtlStringToken &);
	void SetParentAttributes(const CRenderAttributes *);
	void SetVector2DValue(const CUtlStringToken &, Vector2D);
	Vector2D GetVector2DValue(const CUtlStringToken &, Vector2D);
	void DeleteVector2DValue(const CUtlStringToken &);
	void SetVectorValue(const CUtlStringToken &, const Vector &);
	Vector GetVectorValue(const CUtlStringToken &, Vector);
	void DeleteVectorValue(const CUtlStringToken &);
	void SetVector4DValue(const CUtlStringToken &, const Vector4D &);
	Vector4D GetVector4DValue(const CUtlStringToken &, Vector4D);
	void DeleteVector4DValue(const CUtlStringToken &);
	void SetTextureValue(const CUtlStringToken &, HRenderTexture);
	void DeleteTextureValue(const CUtlStringToken &);
	void SetTextureAttribute(CUtlStringToken, HRenderTexture);
	void SetIntAttribute(CUtlStringToken, int);
	void SetFloatAttribute(CUtlStringToken, float);
	void SetBoolAttribute(CUtlStringToken, bool);
	CRenderAttributes & RenderAttributes();
	void SetLightingOrigin(const Vector &);
	Vector GetLightingOrigin();
	void SetAlphaFade(uint16);
	uint16 GetAlphaFade();
	ISceneWorld * GetWorld();
	void SetExtraShaderData(int, const float *);
	void SetExtraTransforms(int, const matrix3x4_t *);
	int ExtraShaderDataSizeInFloats();
	const float * ExtraShaderData();
	void SetTintRGBA_Gamma(const Vector4D &);
	void SetTintRGBA(const Vector4D &);
	Vector4D GetTintRGBA();
	CUtlStringToken GetLightGroup();
	void SetLightGroup(CUtlStringToken);
	void SetCubeMapPrecomputedHandshake(int);
	void SetLightProbeVolumePrecomputedHandshake(int);
	void ClearStencilOverrideList();
	void AddStencilOverride(const CSceneSystemStencilState *, CUtlStringToken, int);
	void AddStencilOverride(const CSceneSystemStencilState *);
	const CSceneSystemStencilState * GetStencilStateOverride(const ISceneLayer *);
	const RsStencilStateOverride_t * GetHardwareOverrideBlock(RsStencilStateOverride_t *, ISceneLayer *);
	void SetVisibilityToPlayerIndex(int, bool, bool);
	bool IsVisible(vis_info_t &);
	void ClearMaterialOverrideList();
	void SetMaterialOverride(HMaterial);
	void SetMaterialOverride(HMaterial, CUtlStringToken, int);
	void SetMaterialOverrideForMeshInstances(HMaterial);
	void SetDebugLevel(int);
	void SetSecondaryViewSpecification(const SecondaryViewDescriptor_t &);
	void GetSecondaryViewSpecification(SecondaryViewDescriptor_t *);
	void UpdateFlagsBasedOnMaterial();
	void MoveToWorld(ISceneWorld *);
	ISceneWorld * GetSceneWorld();
	ISceneObjectDesc * GetDesc();
	CMeshInstance * GetMeshInstanceData();
	CSceneObjectExtraData_t * GetExtraData();
	uint32 GetID();
	void SetProcedural(bool);
	void SetBatchable(bool);
	void SetIsProcedural();
	void MirrorFlags();
	void SetOriginalFlags(ESceneObjectFlags);
	ESceneObjectFlags GetOriginalFlags();
	void ChangeFlags(ESceneObjectFlags, ESceneObjectFlags);
	void SetFlags(ESceneObjectFlags);
	ESceneObjectFlags GetFlags();
	void SetSplitScreenMask(uint32);
	void SetDrawOnlyForSplitScreenUser(int);
	bool HasFlags(ESceneObjectFlags);
	void ClearFlags(ESceneObjectFlags);
	void SetLayerMatchID(CUtlStringToken);
	void SetForceLayerID(CUtlStringToken);
	bool IsLoaded();
	bool IsRenderingEnabled();
	void SetLoaded();
	void ClearLoaded();
	void DisableRendering();
	void EnableRendering();
	void SetRenderingEnabled(bool);
	uint32 GetExternalOwnerHandle();
	void SetExternalOwnerHandle(uint32);
	void SetBounds(const Vector &, const Vector &);
	void SetBounds(const AABB_t &);
	void SetBoundsInfinite();
	void GetBounds(Vector &, Vector &);
	void GetBounds(AABB_t &);
	AABB_t GetBounds();
	Vector MinBounds();
	Vector MaxBounds();
	void SetBoundsType(ESceneObjectBoundsType);
	const CSceneObjectReference_t * GetRefDataPtr();
	float SafeSquare(float);
	void SetFadeAndCullDistance(float, float);
	float CalcFadeStartDistance();
	float CalcFadeCullDistance();
	void DisableFadeAndCull();
	ESceneObjectBoundsType GetBoundsType();
	void UpdateBoundingBoxToMatchTransform();
	float GetBoundingSphereRadius();
	void SetTransform(const matrix3x4_t &);
	void SetTransform(const CTransform &);
	void SetTransform(const CTransformUnaligned &);
	const matrix3x4_t & GetTransform();
	matrix3x4_t & GetTransform();
	void SetSortPosition(const Vector &);
	void SetObjectClass(uint8);
	uint8 GetObjectClass();
	void SetObjectClass(const char *);
	void ScheduleDirtyUpdate();
	void UnscheduleDirtyUpdate();
	void SetShouldBeDeletedBeforeWorld();
	void EnableMeshGroups(MeshGroupMask_t);
	void DisableMeshGroups(MeshGroupMask_t);
	void ResetMeshGroups(MeshGroupMask_t);
	MeshGroupMask_t GetCurrentMeshGroupMask();
	void SetLOD(int);
	void DisableLOD();
	LODGroupMask_t GetCurrentLODGroupMask();
	int GetCurrentLODLevel();
	void SetDepthSortBias(float);
	float GetDepthSortBias();
	void SetViewProducerIndex(int16);
	int16 GetViewProducerIndex();
	bool IsProcedural();
	CSceneObject * GetParent();
	void AddChildObject(CUtlStringToken, CSceneObject *, uint32);
	void RemoveChild(CSceneObject *);
	CSceneObject * FindChild(CUtlStringToken);
	virtual void UpdateDirty();
	bool CheckAgainstMeshGroupAndLODGroupMask(MeshGroupMask_t, LODGroupMask_t);
	bool HasProperty(CUtlStringToken);
	float GetSizeCullBloatScale();
	void SetSizeCullBloatScale(SceneObjectSizeCullBloat_t);
	const IMaterial2 * GetMaterialOverride(const ISceneLayer *);
	const CModel * GetModel();
	void MarkObjectNotDirty();
	void EnsureExtraData();
	const CSceneSystemStencilState * GetStateOverride<const CSceneSystemStencilState*, CSceneObjectStateOverideEntry<const CSceneSystemStencilState*> >(const CUtlVectorFixedGrowable<CSceneObjectStateOverideEntry<const CSceneSystemStencilState*>, 1ul> &, const ISceneLayer *);

	// vtable[2] UpdateDirty
	// sizeof = 160
};

// src/public/scenesystem/sceneobject.h:900
struct CMeshDrawPrimitive_t {
	union {
		void * m_pPayload;  // +0x0
	};

	uint32 m_nSortKey;  // +0x0

	union {
		void * m_pPayload;  // +0x8
	};
	const CSceneObject * m_pObject;  // +0x10
	const IMaterial2 * m_pMaterial;  // +0x18
	const CSceneSystemStencilState * m_pStencilStateOverride;  // +0x20
	int16 m_nEnvironmentMapId;  // +0x28
	int16 m_nLightProbeVolumeId;  // +0x2a

	const CSceneSystemBakedLightingInfo * m_pBakedLightingInfo;  // +0x30
	short unsigned int m_perInstanceBakedLightingParams[4];  // +0x38
	const matrix3x4_t * m_pTransform;  // +0x50
	uint16 m_nRequiredTextureSize;  // +0x58
	uint8 m_nDrawCall;  // +0x5a
	uint8 m_nObjectClassSettings;  // +0x5b
	EBatchFlags m_nBatchFlags;  // +0x5c
	CMeshDrawPrimitive_t();
	float GetAlphaFade();
	void InitForObject(const CSceneObject *, float, const ISceneLayer *, int16, int16);
	void InitForObject(const CSceneObject *, const Vector4DAligned &, const ISceneLayer *, int16, int16);
	const CMaterialDrawDescriptor * GetDrawCall();

	// sizeof = 96
};

// src/public/scenesystem/sceneobject.h:939
class ISceneObjectDesc {
	int ()() * * _vptr.ISceneObjectDesc;  // +0x0
	ISceneObjectDesc(ISceneObjectDesc &);
	ISceneObjectDesc(const ISceneObjectDesc &);
	ISceneObjectDesc();
	virtual void DrawArray(IRenderContext *, CMeshDrawPrimitive_t *, int, const ISceneView *, ISceneLayer *, SceneSystemPerFrameStats_t &);
	virtual void DrawArrayExt(IRenderContext *, CMeshDrawPrimitive_t *, int, const ISceneView *, ISceneLayer *, SceneSystemPerFrameStats_t &, const IMaterial2 *);
	virtual void DrawDebug(IRenderContext *, const CMeshDrawPrimitive_t *, const ISceneView *, ISceneLayer *, int);
	virtual void GeneratePrimitives(CSceneObject *, float, LODGroupMask_t, CMeshPrimitiveOutputBuffer &, const ISceneView *, ISceneLayer *, uint32, GeneratePrimitivesFlags_t, int, float);
	virtual void DeleteNonPooledObject(CSceneObject *);
	virtual void SetTextureAttribute(CSceneObject *, CUtlStringToken, HRenderTexture);
	virtual void SetIntAttribute(CSceneObject *, CUtlStringToken, int);
	virtual void SetFloatAttribute(CSceneObject *, CUtlStringToken, float);
	virtual void SetBoolAttribute(CSceneObject *, CUtlStringToken, bool);
	virtual void OnBeginSubmitDisplayLists();
	virtual void OnFinishingSubmissionOfDisplayLists();
	virtual void PostDisplayListSubmissionCleanup();
	virtual uint32 ModifySortKey(const CSceneObject *, uint32, const ISceneView *, ISceneLayer *);
	virtual bool HasProperty(CUtlStringToken);
	virtual void UpdateBoundingBoxToMatchTransform(CSceneObject *);

protected:

	virtual CSceneObject * Create();

	// vtable[0] DrawArray
	// vtable[1] DrawArrayExt
	// vtable[2] DrawDebug
	// vtable[3] GeneratePrimitives
	// vtable[4] DeleteNonPooledObject
	// vtable[5] SetTextureAttribute
	// vtable[6] SetIntAttribute
	// vtable[7] SetFloatAttribute
	// vtable[8] SetBoolAttribute
	// vtable[9] OnBeginSubmitDisplayLists
	// vtable[10] OnFinishingSubmissionOfDisplayLists
	// vtable[11] PostDisplayListSubmissionCleanup
	// vtable[12] ModifySortKey
	// vtable[13] HasProperty
	// vtable[14] UpdateBoundingBoxToMatchTransform
	// vtable[15] Create
	// sizeof = 8
};

// src/public/scenesystem/sceneobject.h:999
class CMeshPrimitiveOutputBuffer {
private:

	CMeshPrimitiveOutputBuffer();
	CMeshDrawPrimitive_t & operator[](int);
	int AddToTail();
	int Count();
	CMeshDrawPrimitive_t * Base();
	void OutputDrawSceneObjectWithOverriddenMaterialAndTintAndStencil(const CSceneObject *, const IMaterial2 *, const Vector4D &, const ISceneView *, ISceneLayer *, LODGroupMask_t, const CSceneSystemStencilState *, bool);

	// sizeof = 1568
};

// src/public/scenesystem/sceneobject.h:2168
class CSceneLightObject : public CSceneObject {
public:

private:

	float m_flShadowFadeMinDistSquared;  // +0x138
	float m_flShadowFadeMaxDistSquared;  // +0x13c
	bool m_bCanBeModified;  // +0x140
	CSceneLightObject(CSceneLightObject &);
	CSceneLightObject(const CSceneLightObject &);
	CSceneLightObject();
	LightDesc_t * GetLightDescForModify();
	const LightDesc_t & GetLightDesc();
	const LightDesc_t * GetLightDescPtr();
	ELightShadowMode GetShadowMode();
	void SetShadowMode(ELightShadowMode);
	void SetShadowFadeAndCullDistance(float, float);
	void DisableShadowFadeAndCull();
	void UpdateBoundsFromLightDesc();
	virtual ~CSceneLightObject();

	// sizeof = 336
};

// src/public/scenesystem/sceneobject.h:2259
class CSceneLightObjectModifyScope {
private:

	CSceneLightObjectModifyScope(CSceneLightObject *);
	~CSceneLightObjectModifyScope();

	// sizeof = 8
};

// src/public/scenesystem/sceneobject.h:2291
struct PerIrradVolumeConstantBuffer_t {
	PerIrradVolumeConstantBuffer_t();
	void SetIrradRegionStart(float, float, float);
	void SetIrradRegionSize(float, float, float);
	void SetIrradAtlasInvSize(float, float, float);
	void SetIrradVolumeAlpha(float);

	// sizeof = 432
};

// src/public/scenesystem/sceneobject.h:2570
class CSceneObjectClassTypeDeclarator {
private:

	uint8 m_nClassID;  // +0x0

	const char * m_pClassName;  // +0x8
	void CalcClassID();
	CSceneObjectClassTypeDeclarator(const char *);
	int operator int();

	// sizeof = 16
};
