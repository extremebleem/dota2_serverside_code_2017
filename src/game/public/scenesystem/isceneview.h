// Reconstructed from DWARF by pahole; not original source.

// src/game/public/scenesystem/isceneview.h:206
class ISceneView {
	struct WorldList_t {
		const uint32 * m_pVisBits;  // +0x8

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.ISceneView;  // +0x0

private:

protected:

	ISceneView();
	virtual const char * GetDebugName();
	virtual ISceneLayer * AddRenderLayer(const char *, const RenderViewport_t &, const CUtlStringToken &, ISceneLayer *);
	virtual ISceneLayer * AddProceduralLayer(const char *, const RenderViewport_t &, IProceduralLayerRenderer *, ISceneLayer *, bool);
	virtual ISceneLayer * AddClearLayer(const char *, const RenderViewport_t &, int, ISceneLayer *);
	virtual ISceneLayer * AddProxyLayer(const char *, ISceneLayer *, ISceneLayer *);
	virtual ISceneLayer * AddLabelLayer(const char *);
	virtual bool HasLabelLayer(CUtlStringToken);
	virtual void MoveLayerToBeAfterLabel(CUtlStringToken, ISceneLayer *, bool);
	virtual void MoveLayerToBeAfterLayer(ISceneLayer *, ISceneLayer *);
	virtual ISceneLayer * AddSimplePostProcessingLayer(const char *, const RenderViewport_t &, const IMaterial2 *, const RenderTargetDesc_t &, ISceneLayer *, bool);
	virtual ISceneLayer * AddResolveRenderTargetLayer(const char *, const RenderViewport_t &, int, int, int, int, HSceneViewRenderTarget, ISceneLayer *);
	virtual ISceneLayer * AddResolveDepthStencilLayer(const char *, const RenderViewport_t &, int, int, int, HSceneViewRenderTarget, ISceneLayer *);
	virtual void AddWorldToRenderList(ISceneWorld *, const uint32 *);
	virtual void AddSceneObjectToRenderList(CSceneObject *);
	virtual void SetUserDataPtr(void *);
	virtual void * GetUserDataPtr();
	const CFrustum & GetFrustum();
	const CFrustum & GetCullFrustum();
	const RenderViewport_t & GetMainViewport();
	void SetFrustum(const CFrustum &);
	void SetCullFrustum(const CFrustum &);
	void SetMainViewport(const RenderViewport_t &);
	uint32 CalculateSortKey(const Vector &, bool, float);
	uint32 CalculateSortKey(const Vector &, const Vector &, bool, float);
	uint32 CalculateSortKey(const AABB_t &, bool, float);
	virtual void SetNextPtr(ISceneView *);
	virtual ISceneView * GetNextPtr();
	virtual SwapChainHandle_t GetSwapChain();
	virtual ~ISceneView();
	virtual ISceneLayer * AddDebugInfoLayer(const char *, const RenderViewport_t &, uint);
	virtual void PushNamedRenderTargetScope(const char *);
	virtual void PopNamedRenderTargetScope();
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(const char *, HRenderTexture, SceneViewRenderTargetFlags_t);
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(const char *, SwapChainHandle_t, SwapChainBuffer_t, SceneViewRenderTargetFlags_t);
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(const char *, const SceneViewRenderTargetInfo_t &, SceneViewRenderTargetFlags_t);
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(const char *, const char *);
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(const char *, HSceneViewRenderTarget);
	virtual HSceneViewRenderTarget FindOrCreateRenderTarget(const char *, ISceneView *, HSceneViewRenderTarget, SceneViewRenderTargetUsageFlags_t);
	virtual HSceneViewRenderTarget FindRenderTarget(const char *);
	virtual ISceneLayer * AddSimplePostProcessingLayer(const char *, const RenderViewport_t &, const IMaterial2 *, const SceneLayerOutputs_t &, ISceneLayer *, bool);
	virtual void AddFlags(uint32);
	virtual const TonemapState_t & GetTonemapState();
	virtual void SetTonemapState(const TonemapState_t &);
	virtual void SetFogstate(const SceneFogParams_t &);
	virtual void SetSplitscreenView(int);
	virtual void SetDefaultLayerObjectRequiredFlags(ESceneObjectFlags);
	virtual void SetDefaultLayerObjectExcludedFlags(ESceneObjectFlags);
	virtual ESceneObjectFlags GetDefaultLayerObjectRequiredFlags();
	virtual ESceneObjectFlags GetDefaultLayerObjectExcludedFlags();
	virtual ISceneLayer * GetFinalOutputLayer();
	virtual void GetRenderTargetInfo(HSceneViewRenderTarget, SceneViewRenderTargetInfo_t *);
	virtual ISceneLayer * AddBlitTextureToTargetLayer(const char *, HSceneViewRenderTarget, const RenderViewport_t &, const RenderViewport_t &, const SceneLayerOutputs_t &, Vector4D *, bool, RsBlendStateDesc_t *, Vector4D *);
	virtual uint32 GetFlags();
	virtual void MarkRenderTargetRead(HSceneViewRenderTarget);
	virtual HRenderTexture GetRenderTargetTexture(HSceneViewRenderTarget);
	virtual void ForceIdenticalDimensions(HSceneViewRenderTarget, HSceneViewRenderTarget);
	virtual ISceneLayer * CloneLayer(const char *, ISceneLayer *, ISceneLayer *);
	virtual void SetUserClipPlane(int, const VPlane &);
	virtual void ComputeScreenCorners(Vector *);
	virtual void ComputeEyeRays(Vector *);
	virtual void SetShadowsEnabled(bool);
	virtual ISceneViewDebugOverlays * GetDebugOverlayList();
	virtual const CRenderAttributes & GetRenderAttributes();
	virtual CRenderAttributes & GetRenderAttributes();
	virtual void SetDynamicViewTemplate(CUtlStringToken, ISceneView *);
	virtual ISceneView * GetDynamicViewTemplate(CUtlStringToken);
	virtual bool IsTemplate();
	virtual ISceneView * Duplicate(ISceneView *, int, bool);
	virtual CViewId GetViewId();
	virtual void ComputeRenderTargetAllocations();
	virtual void SetBoundingVolumeSizeCullThresholdInPercent(float);
	virtual void SetDistanceScaleForLODAndCulling(float);
	virtual float GetSquaredDistanceScaleForLODAndCulling();
	virtual void EnableOcclusionCulling(bool);
	virtual void SetPlayerViewingIndex(int);
	virtual void SetViewAsThirdPerson(bool);
	virtual void SetOtherViewToUseScratchRenderTargetsFrom(ISceneView *);
	virtual int GetPriority();
	virtual void SetPriority(int);
	virtual void SetParent(ISceneView *);
	virtual ISceneView * GetParent();
	virtual void CopyWorldsAndVisFrom(ISceneView *, const Vector &, vis_type_t);
	virtual void CopyWorldsFrom(ISceneView *);
	virtual void AddDependentView(ISceneView *, int);
	virtual const CSecondaryViewRenderInformation * GetSecondaryViewRenderInfo(int);
	virtual void AddAuxiliaryRenderCamera(const CFrustum &);
	virtual void SetOverrideLODLevel(int);
	virtual int GetOverrideLODLevel();
	virtual void CopyRenderTargetOutputsAndViewportFromPreviousLayer(ISceneLayer *);
	virtual void SetIssueSortIndex(int);
	void SetPreviousFrameFrustum(const CFrustum &);
	const CFrustum & GetPreviousFrameFrustum();
	int NumWorldsToRender();
	CSceneWorld * GetWorldToRender(int);
	const uint32 * GetWorldToRenderVisBits(int);
	bool WillRenderWorld(CSceneWorld *);
	void SetWorldToRenderVisBits(int, const uint32 *);

	// vtable[0] GetDebugName
	// vtable[1] AddRenderLayer
	// vtable[2] AddProceduralLayer
	// vtable[3] AddClearLayer
	// vtable[4] AddProxyLayer
	// vtable[5] AddLabelLayer
	// vtable[6] HasLabelLayer
	// vtable[7] MoveLayerToBeAfterLabel
	// vtable[8] MoveLayerToBeAfterLayer
	// vtable[9] AddSimplePostProcessingLayer
	// vtable[10] AddResolveRenderTargetLayer
	// vtable[11] AddResolveDepthStencilLayer
	// vtable[12] AddWorldToRenderList
	// vtable[13] AddSceneObjectToRenderList
	// vtable[14] SetUserDataPtr
	// vtable[15] GetUserDataPtr
	// vtable[16] SetNextPtr
	// vtable[17] GetNextPtr
	// vtable[18] GetSwapChain
	// vtable[21] AddDebugInfoLayer
	// vtable[22] PushNamedRenderTargetScope
	// vtable[23] PopNamedRenderTargetScope
	// vtable[24] FindOrCreateRenderTarget
	// vtable[25] FindOrCreateRenderTarget
	// vtable[26] FindOrCreateRenderTarget
	// vtable[27] FindOrCreateRenderTarget
	// vtable[28] FindOrCreateRenderTarget
	// vtable[29] FindOrCreateRenderTarget
	// vtable[30] FindRenderTarget
	// vtable[31] AddSimplePostProcessingLayer
	// vtable[32] AddFlags
	// vtable[33] GetTonemapState
	// vtable[34] SetTonemapState
	// vtable[35] SetFogstate
	// vtable[36] SetSplitscreenView
	// vtable[37] SetDefaultLayerObjectRequiredFlags
	// vtable[38] SetDefaultLayerObjectExcludedFlags
	// vtable[39] GetDefaultLayerObjectRequiredFlags
	// vtable[40] GetDefaultLayerObjectExcludedFlags
	// vtable[41] GetFinalOutputLayer
	// vtable[42] GetRenderTargetInfo
	// vtable[43] AddBlitTextureToTargetLayer
	// vtable[44] GetFlags
	// vtable[45] MarkRenderTargetRead
	// vtable[46] GetRenderTargetTexture
	// vtable[47] ForceIdenticalDimensions
	// vtable[48] CloneLayer
	// vtable[49] SetUserClipPlane
	// vtable[50] ComputeScreenCorners
	// vtable[51] ComputeEyeRays
	// vtable[52] SetShadowsEnabled
	// vtable[53] GetDebugOverlayList
	// vtable[54] GetRenderAttributes
	// vtable[55] GetRenderAttributes
	// vtable[56] SetDynamicViewTemplate
	// vtable[57] GetDynamicViewTemplate
	// vtable[58] IsTemplate
	// vtable[59] Duplicate
	// vtable[60] GetViewId
	// vtable[61] ComputeRenderTargetAllocations
	// vtable[62] SetBoundingVolumeSizeCullThresholdInPercent
	// vtable[63] SetDistanceScaleForLODAndCulling
	// vtable[64] GetSquaredDistanceScaleForLODAndCulling
	// vtable[65] EnableOcclusionCulling
	// vtable[66] SetPlayerViewingIndex
	// vtable[67] SetViewAsThirdPerson
	// vtable[68] SetOtherViewToUseScratchRenderTargetsFrom
	// vtable[69] GetPriority
	// vtable[70] SetPriority
	// vtable[71] SetParent
	// vtable[72] GetParent
	// vtable[73] CopyWorldsAndVisFrom
	// vtable[74] CopyWorldsFrom
	// vtable[75] AddDependentView
	// vtable[76] GetSecondaryViewRenderInfo
	// vtable[77] AddAuxiliaryRenderCamera
	// vtable[78] SetOverrideLODLevel
	// vtable[79] GetOverrideLODLevel
	// vtable[80] CopyRenderTargetOutputsAndViewportFromPreviousLayer
	// vtable[81] SetIssueSortIndex
	// sizeof = 2976
};
