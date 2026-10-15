// Reconstructed from DWARF by pahole; not original source.

// src/public/worldrenderer/iworld.h:26
struct StreamingIrradVolumeHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/worldrenderer/iworld.h:27
struct StreamingPrtMatrixHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/worldrenderer/iworld.h:28
struct PrtLightHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/worldrenderer/iworld.h:29
struct QueryLightHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/worldrenderer/iworld.h:30
struct EnvironmentMapHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/worldrenderer/iworld.h:52
class IStreamingPrtMatrixMgr {
	int ()() * * _vptr.IStreamingPrtMatrixMgr;  // +0x0
	IStreamingPrtMatrixMgr();
	virtual StreamingPrtMatrixHandle_t CreatePrtMatrix(HPRTMatrix);
	virtual void DestroyPrtMatrix(StreamingPrtMatrixHandle_t);
	virtual bool IsPrtMatrixReady(StreamingPrtMatrixHandle_t);
	virtual void SetPrtMatrixRelightingTarget(StreamingPrtMatrixHandle_t, HRenderTexture, const Rect3D_t &);
	virtual void GetPrtMatrixSamplePositionsAndNormals(CUtlVector<Vector, CUtlMemory<Vector, int> > *, CUtlVector<Vector, CUtlMemory<Vector, int> > *, StreamingPrtMatrixHandle_t);
	virtual void SetPrtMatrixSampleMaterials(StreamingPrtMatrixHandle_t, int, int, const Vector *, const Vector *);
	virtual HMaterial GetDefaultSampleMaterial(StreamingPrtMatrixHandle_t, int);
	virtual bool FrameUpdate(uint64);
	virtual PrtLightHandle_t CreateLight(const LightDesc_t &, PrtMatrixLightType_t);
	virtual void UpdateLight(PrtLightHandle_t, const LightDesc_t &);
	virtual void DestroyLight(PrtLightHandle_t);
	virtual void SetSkyRadianceValues(const Vector *, int);
	virtual void SetPrtRayTracingEnvironment(const RayTracingEnvironment *);
	virtual ~IStreamingPrtMatrixMgr();

	// vtable[0] CreatePrtMatrix
	// vtable[1] DestroyPrtMatrix
	// vtable[2] IsPrtMatrixReady
	// vtable[3] SetPrtMatrixRelightingTarget
	// vtable[4] GetPrtMatrixSamplePositionsAndNormals
	// vtable[5] SetPrtMatrixSampleMaterials
	// vtable[6] GetDefaultSampleMaterial
	// vtable[7] FrameUpdate
	// vtable[8] CreateLight
	// vtable[9] UpdateLight
	// vtable[10] DestroyLight
	// vtable[11] SetSkyRadianceValues
	// vtable[12] SetPrtRayTracingEnvironment
	// sizeof = 8
};

// src/public/worldrenderer/iworld.h:93
class IStreamingIrradVolumeMgr {
	int ()() * * _vptr.IStreamingIrradVolumeMgr;  // +0x0
	IStreamingIrradVolumeMgr();
	virtual StreamingIrradVolumeHandle_t CreateIrradVolume(const IrradVolume_t &, ISceneWorld *);
	virtual void DestroyStreamingIrradVolume(StreamingIrradVolumeHandle_t);
	virtual void GetIrradVolumeData(IrradVolume_t *, StreamingIrradVolumeHandle_t);
	virtual void SetIrradVolumeData(StreamingIrradVolumeHandle_t, const IrradVolume_t &);
	virtual void InitializePrtMatrixRelighting(int64);
	virtual IStreamingPrtMatrixMgr * GetStreamingPrtMatrixMgr();
	virtual GlobalIlluminationMethod_t GlobalIlluminationMethod();
	virtual void SetGlobalIlluminationMethod(GlobalIlluminationMethod_t);
	virtual void SetViewer(int, const CFrustum &);
	virtual void SetViewers(const CFrustum *, int);
	virtual void FrameUpdate();
	virtual bool IsVisible(StreamingIrradVolumeHandle_t);
	virtual float GetVisibilityRating(StreamingIrradVolumeHandle_t);
	virtual StreamingPrtMatrixHandle_t StreamingPrtMatrixHandle(StreamingIrradVolumeHandle_t);
	virtual bool IsLoadingIrradianceVolumes();
	virtual ~IStreamingIrradVolumeMgr();

	// vtable[0] CreateIrradVolume
	// vtable[1] DestroyStreamingIrradVolume
	// vtable[2] GetIrradVolumeData
	// vtable[3] SetIrradVolumeData
	// vtable[4] InitializePrtMatrixRelighting
	// vtable[5] GetStreamingPrtMatrixMgr
	// vtable[6] GlobalIlluminationMethod
	// vtable[7] SetGlobalIlluminationMethod
	// vtable[8] SetViewer
	// vtable[9] SetViewers
	// vtable[10] FrameUpdate
	// vtable[11] IsVisible
	// vtable[12] GetVisibilityRating
	// vtable[13] StreamingPrtMatrixHandle
	// vtable[14] IsLoadingIrradianceVolumes
	// sizeof = 8
};

// src/public/worldrenderer/iworld.h:137
class IStreamingEnvironmentMapMgr {
	int ()() * * _vptr.IStreamingEnvironmentMapMgr;  // +0x0
	IStreamingEnvironmentMapMgr();
	virtual int EnvironmentMapFaceSize();
	virtual int EnvironmentMapFaceRenderSize();
	virtual ImageFormat EnvironmentMapImageFormat();
	virtual ImageFormat EnvironmentMapStorageImageFormat();
	virtual bool EnvironmentMapStorageImageFormatIsLinear();
	virtual int EnvironmentMapNumFaces();
	virtual QAngle EnvironmentMapCameraOrientation(int, const matrix3x4_t &);
	virtual float EnvironmentMapCameraFOV(int);
	virtual const char * EnvironmentMapFaceName(int);
	virtual const Vector EnvironmentMapPosition(EnvironmentMapHandle_t);
	virtual const matrix3x4_t & EnvironmentMapTransform(EnvironmentMapHandle_t);
	virtual float EnvironmentMapCameraZNear(EnvironmentMapHandle_t);
	virtual float EnvironmentMapCameraZFar(EnvironmentMapHandle_t);
	virtual bool EnvironmentMapSkyRelightEnabled(EnvironmentMapHandle_t);
	virtual const AABB_t & EnvironmentMapBoxProjection(EnvironmentMapHandle_t);
	virtual float EnvironmentMapInfluenceRadius(EnvironmentMapHandle_t);
	virtual HRenderTexture GetEnvMapTextureArray();
	virtual EnvironmentMapHandle_t CreateEnvironmentMap();
	virtual void DestroyEnvironmentMap(EnvironmentMapHandle_t);
	virtual void SetEnvironmentMapTransform(EnvironmentMapHandle_t, const matrix3x4_t &);
	virtual void SetEnvironmentMapCameraZNear(EnvironmentMapHandle_t, float);
	virtual void SetEnvironmentMapCameraZFar(EnvironmentMapHandle_t, float);
	virtual void SetEnvironmentMapTexture(EnvironmentMapHandle_t, HRenderTexture);
	virtual void SetEnvironmentMapSceneWorld(EnvironmentMapHandle_t, ISceneWorld *);
	virtual void SetEnvironmentMapDynamicUpdateEnabled(EnvironmentMapHandle_t, bool);
	virtual void SetEnvironmentMapFaceSize(EnvironmentMapHandle_t, int);
	virtual void SetEnvironmentMapBoxProjection(EnvironmentMapHandle_t, const AABB_t &);
	virtual void SetEnvironmentMapInfluenceRadius(EnvironmentMapHandle_t, float);
	virtual void SetEnvironmentMapSkyRelightEnabled(EnvironmentMapHandle_t, bool);
	virtual void SetEnvironmentMapAttachedCubeMapCross(EnvironmentMapHandle_t, FloatBitMap_t *);
	virtual void SetEnvironmentMapDirty(EnvironmentMapHandle_t);
	virtual bool UpdateEnvironmentMapFace(EnvironmentMapHandle_t, HRenderTexture, int);
	virtual void SetAllDynamicEnvironmentMapsDirty();
	virtual bool GetDirtiestEnvironmentMapFace(EnvironmentMapHandle_t &, int &);
	virtual EnvironmentMapHandle_t GetDirtiestEnvironmentMap();
	virtual void SetCubeMapReceivingEnabled(bool);
	virtual void SetViewer(int, const CFrustum &);
	virtual void SetViewers(const CFrustum *, int);
	virtual void FrameUpdate();
	virtual HRenderTexture NearestEnvironmentMap(const Vector &);
	virtual ~IStreamingEnvironmentMapMgr();

	// vtable[0] EnvironmentMapFaceSize
	// vtable[1] EnvironmentMapFaceRenderSize
	// vtable[2] EnvironmentMapImageFormat
	// vtable[3] EnvironmentMapStorageImageFormat
	// vtable[4] EnvironmentMapStorageImageFormatIsLinear
	// vtable[5] EnvironmentMapNumFaces
	// vtable[6] EnvironmentMapCameraOrientation
	// vtable[7] EnvironmentMapCameraFOV
	// vtable[8] EnvironmentMapFaceName
	// vtable[9] EnvironmentMapPosition
	// vtable[10] EnvironmentMapTransform
	// vtable[11] EnvironmentMapCameraZNear
	// vtable[12] EnvironmentMapCameraZFar
	// vtable[13] EnvironmentMapSkyRelightEnabled
	// vtable[14] EnvironmentMapBoxProjection
	// vtable[15] EnvironmentMapInfluenceRadius
	// vtable[16] GetEnvMapTextureArray
	// vtable[17] CreateEnvironmentMap
	// vtable[18] DestroyEnvironmentMap
	// vtable[19] SetEnvironmentMapTransform
	// vtable[20] SetEnvironmentMapCameraZNear
	// vtable[21] SetEnvironmentMapCameraZFar
	// vtable[22] SetEnvironmentMapTexture
	// vtable[23] SetEnvironmentMapSceneWorld
	// vtable[24] SetEnvironmentMapDynamicUpdateEnabled
	// vtable[25] SetEnvironmentMapFaceSize
	// vtable[26] SetEnvironmentMapBoxProjection
	// vtable[27] SetEnvironmentMapInfluenceRadius
	// vtable[28] SetEnvironmentMapSkyRelightEnabled
	// vtable[29] SetEnvironmentMapAttachedCubeMapCross
	// vtable[30] SetEnvironmentMapDirty
	// vtable[31] UpdateEnvironmentMapFace
	// vtable[32] SetAllDynamicEnvironmentMapsDirty
	// vtable[33] GetDirtiestEnvironmentMapFace
	// vtable[34] GetDirtiestEnvironmentMap
	// vtable[35] SetCubeMapReceivingEnabled
	// vtable[36] SetViewer
	// vtable[37] SetViewers
	// vtable[38] FrameUpdate
	// vtable[39] NearestEnvironmentMap
	// sizeof = 8
};

// src/public/worldrenderer/iworld.h:215
class ILightQueryVisibilityTest {
	int ()() * * _vptr.ILightQueryVisibilityTest;  // +0x0
	ILightQueryVisibilityTest();
	virtual float QueryVisibility(const Vector &, const LightDesc_t &, uint32);
	virtual ~ILightQueryVisibilityTest();

	// vtable[0] QueryVisibility
	// sizeof = 8
};

// src/public/worldrenderer/iworld.h:227
class ILightQuery {
	int ()() * * _vptr.ILightQuery;  // +0x0
	ILightQuery();
	virtual Vector GetLightForPoint(int, const Vector &, uint32);
	virtual Vector GetLightForPoint(int, const Vector &, const Vector &, uint32);
	virtual void GetLightForPoint(Vector &, int, const Vector &, uint32);
	virtual QueryLightHandle_t QueryLightCreate();
	virtual void QueryLightDestroy(QueryLightHandle_t);
	virtual void QueryLightEnable(QueryLightHandle_t, bool);
	virtual bool QueryLightEnabled(QueryLightHandle_t);
	virtual void QueryLightSetDesc(QueryLightHandle_t, const LightDesc_t &);
	virtual const LightDesc_t & QueryLightGetDesc(QueryLightHandle_t);
	virtual QueryLightHandle_t QueryIrradCreate(const IrradVolume_t &);
	virtual void QueryIrradDestroy(QueryLightHandle_t);
	virtual void QueryAddWorldLights(HWorldLighting);
	virtual void SetVisibilityTest(const ILightQueryVisibilityTest *);
	virtual const ILightQueryVisibilityTest * GetVisibilityTest();
	virtual ~ILightQuery();

	// vtable[0] GetLightForPoint
	// vtable[1] GetLightForPoint
	// vtable[2] GetLightForPoint
	// vtable[3] QueryLightCreate
	// vtable[4] QueryLightDestroy
	// vtable[5] QueryLightEnable
	// vtable[6] QueryLightEnabled
	// vtable[7] QueryLightSetDesc
	// vtable[8] QueryLightGetDesc
	// vtable[9] QueryIrradCreate
	// vtable[10] QueryIrradDestroy
	// vtable[11] QueryAddWorldLights
	// vtable[12] SetVisibilityTest
	// vtable[13] GetVisibilityTest
	// sizeof = 8
};
