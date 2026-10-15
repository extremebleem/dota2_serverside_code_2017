// Reconstructed from DWARF by pahole; not original source.

// src/game/public/scenesystem/iscenelayer.h:190
class ISceneLayer {
	struct RenderTargetAttribute_t {
		HSceneViewRenderTarget m_hRenderTarget;  // +0x0
		bool m_bMSAA;  // +0x8

		uint32 m_nFlags;  // +0xc
		bool operator==(const RenderTargetAttribute_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.ISceneLayer;  // +0x0
	uint m_nLayerFlags;  // +0x2c
	int m_nClearFlags;  // +0x30

	int m_nVertexShaderGPRAllocation;  // +0x3e0

protected:

	ESceneObjectFlags m_nObjectFlagsRequiredMask;  // +0x3e8
	ESceneObjectFlags m_nObjectFlagsExcludedMask;  // +0x3f0
	char m_szDebugName[64];  // +0x3f8

	int16 m_nNumClearColors;  // +0x590

	bool m_bDeleteRenderProcedureWhenFinished;  // +0x630

	RsDepthStencilStateHandle_t m_hOverrideDepthStencilState;  // +0x638
	uint32 m_nOverrideStencilRef;  // +0x640
	float m_flSizeCullThreshold;  // +0x644

	bool m_bHasAccessToScreenDepth;  // +0x6b4
	bool m_bDisableClearScreenIfNoObjectsRendered;  // +0x6b5
	const CUtlStringToken & GetShaderMode();
	void AddStandardConstantBuffer(CUtlStringToken, ConstantBufferHandle_t);
	virtual void SetAssociatedLayer(ISceneLayer *);
	virtual CDisplayList * QueueDisplayList(IRenderContext *);
	void SetScissorRect(const Rect_t &);
	void SetClearColor(const Vector4D &, int);
	virtual int GetUniqueSceneLayerIndex();
	void SetAttr(CUtlStringToken, HRenderTexture);
	void SetAttr(CUtlStringToken, float);
	void SetAttr(CUtlStringToken, int);
	void SetAttr(CUtlStringToken, const Vector &);
	void SetAttr(CUtlStringToken, const Vector4D &);
	void SetAttr(CUtlStringToken, const VMatrix &);
	void SetAttr(CUtlStringToken, void *);
	void SetAttr(CUtlStringToken, ConstantBufferHandle_t);
	int GetIntValue(CUtlStringToken, int);
	float GetFloatValue(CUtlStringToken, float);
	Vector GetVectorValue(CUtlStringToken, Vector);
	void * GetPtrValue(CUtlStringToken, void *);
	HRenderTexture GetTextureValue(CUtlStringToken, HRenderTexture);
	void SetAttr(CUtlStringToken, HSceneViewRenderTarget, SceneLayerMSAAMode_t, uint32);
	HSceneViewRenderTarget GetRenderTargetValue(CUtlStringToken, HSceneViewRenderTarget);
	void SetOutput(const SceneLayerOutputs_t &);
	virtual const RenderTargetDesc_t & GetRenderTargetDesc();
	IProceduralLayerRenderer * GetProceduralLayerRenderer();
	virtual void SetRenderTargetDesc(const RenderTargetDesc_t &);
	void AddObjectFlagsRequiredMask(ESceneObjectFlags);
	void AddObjectFlagsExcludedMask(ESceneObjectFlags);
	void RemoveObjectFlagsRequiredMask(ESceneObjectFlags);
	void RemoveObjectFlagsExcludedMask(ESceneObjectFlags);
	ESceneObjectFlags GetObjectFlagsRequiredMask();
	ESceneObjectFlags GetObjectFlagsExcludedMask();
	const char * GetDebugName();
	CUtlStringToken GetLabel();
	void SetLabel(CUtlStringToken);
	ISceneView * GetTargetViewThatThisIsProxiedInto();
	void SetTargetViewThatThisIsProxiedInto(ISceneView *);
	void SetOverrideDepthStencilState(RsDepthStencilStateHandle_t, uint32);
	RsDepthStencilStateHandle_t GetOverrideDepthStencilState();
	uint32 GetOverrideStencilRef();
	void SetStencilBitDependency(CUtlStringToken);
	CUtlStringToken GetStencilDependency();
	virtual void DisableReflectionsAndRefractionsForObjectsInThisLayer(bool);
	virtual void OverrideFrustum(const CFrustum &);
	virtual void Override2Frustums(const CFrustum &, const CFrustum &);
	ISceneView * GetParentView();
	bool IsProxyLayer();
	virtual void SetFadeTargetLayer(ISceneLayer *);
	virtual int FindOrAllocateStencilBit(CUtlStringToken);
	virtual bool ParseStringForStencilMaskAndRefValueForRead(const char *, int *, int *);
	bool ShouldSaveDrawListsForPartitionOptimization();
	bool NeedsPerLayerViewConstants();
	void SetObjectMatchID(CUtlStringToken);
	virtual void SetTonemapOverrideScaleValue(float);
	virtual void SetAuxiliaryCameraMask(uint);
	virtual void SetCustomSortKeyFunction(LayerComputeSortKeyFunc_t *);
	void DisableClearScreenIfNoObjectsRendered();
	void DisableUnlessOtherLayerRenderedObjects(ISceneLayer *);
	ISceneLayer * GetLayerThatMustRrenderObjectsForThisLayerToBeDrawn();
	bool HasAccessToScreenDepth();
	void SetHasAccessToScreenDepth(bool);
	void SetBoundingVolumeSizeCullThresholdInPercent(float);
	float GetBoundingVolumeSizeCullThreshold();
	virtual ~ISceneLayer();
	virtual void SetDynamicContantBufferAttribute(CUtlStringToken, void *, size_t);
	ISceneLayer();

	// vtable[0] SetAssociatedLayer
	// vtable[1] QueueDisplayList
	// vtable[2] GetUniqueSceneLayerIndex
	// vtable[3] GetRenderTargetDesc
	// vtable[4] SetRenderTargetDesc
	// vtable[5] DisableReflectionsAndRefractionsForObjectsInThisLayer
	// vtable[6] OverrideFrustum
	// vtable[7] Override2Frustums
	// vtable[8] SetFadeTargetLayer
	// vtable[9] FindOrAllocateStencilBit
	// vtable[10] ParseStringForStencilMaskAndRefValueForRead
	// vtable[11] SetTonemapOverrideScaleValue
	// vtable[12] SetAuxiliaryCameraMask
	// vtable[13] SetCustomSortKeyFunction
	// vtable[16] SetDynamicContantBufferAttribute
	// sizeof = 1728
};
