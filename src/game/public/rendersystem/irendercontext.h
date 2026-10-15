// Reconstructed from DWARF by pahole; not original source.

// src/game/public/rendersystem/irendercontext.h:205
class IRenderContext {
	enum ClearSubrectResult_t {
		k_EClearedError = 0,
		k_EClearedNone = 0x1,
		k_EClearedSubrect = 0x2,
		k_EClearedTarget = 0x3,
		k_EClearedChangedRenderState = 0x80000000,
		k_EClearedSetTargetViewport = 0x40000000,
		k_EClearedSetSubrectViewport = 0x20000000,
	};

	int ()() * * _vptr.IRenderContext;  // +0x0
protected:

	const IMaterialMode * m_pMaterialStateHintMode;  // +0x330
	HRenderTexture m_hMaterialStateHintTexture;  // +0x338
	uint64 m_nMaterialStateHintKey;  // +0x340
	IRenderContext();
	virtual void SetStatesToDefault(uint32, uint32);
	virtual void BindRenderTargets(const RenderTargetDesc_t &);
	virtual void ResolveDepthStencilTarget(Rect_t *, int, int, HRenderTexture);
	virtual void ResolveRenderTarget(int, Rect_t *, int, int, HRenderTexture);
	virtual void Clear(const RenderClearInfo_t &);
	void Clear(const Vector4D *, int, int, int, int);
	void Clear(const Vector4D &, int);
	virtual ClearSubrectResult_t ClearSubrect(const RenderClearInfo_t &, int, int, int, int, bool);
	virtual void Submit();
	virtual void SubmitSecondaryDisplayList(CDisplayList *, bool);
	virtual CDisplayList * DetachCommandList();
	virtual void DependsOn(CDependencyDescriptor *);
	virtual void Satisfies(CDependencyDescriptor *);
	virtual void GetViewport(RenderViewport_t *, int);
	virtual void SetViewports(int, const RenderViewport_t *);
	virtual void SetScissorRects(int, const Rect_t *);
	void SetScissorRect(const Rect_t &);
	virtual void SetUserClipPlane(int, const Vector4D *);
	virtual void BindVertexShader(RenderShaderHandle_t, RenderInputLayout_t, const CVsInputSignatureVector *);
	virtual void BindShader(RenderShaderType_t, RenderShaderHandle_t);
	virtual void BindTexture(int, HRenderTexture, RenderTextureDimension_t, RenderShaderType_t, RenderColorSpace_t, int);
	virtual void BindMipLevelOfTexture(int, HRenderTexture, int, RenderTextureDimension_t, RenderShaderType_t, RenderColorSpace_t, int);
	virtual void BindMipLevelOfTextures(int, int, bind_texture_list_t *, RenderShaderType_t);
	virtual void SetSamplerStatePS(int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	virtual void SetSamplerStateVS(int, RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsComparison_t);
	virtual void SetSamplerState(int32, const CSamplerStateDesc *, RenderShaderType_t);
	virtual void SetSamplerStates(int, int, const CSamplerStateDesc *, RenderShaderType_t);
	virtual void SetConstantBufferData(ConstantBufferHandle_t, const void *, uint32);
	virtual void SetConstantBufferViewsData(ConstantBufferHandle_t, uint32, uint32, const void * const *, uint32);
	virtual ConstantBufferHandle_t LockDynamicConstantBuffer(uint32, DynamicLockDesc_t *);
	virtual void UnlockDynamicConstantBuffer(ConstantBufferHandle_t, uint32);
	virtual void BindConstantBuffer(RenderShaderType_t, ConstantBufferHandle_t, int, int);
	virtual void BindConstantBufferView(RenderShaderType_t, ConstantBufferHandle_t, uint32, int, int);
	virtual void SetAlphaTestState(bool, float, RsComparison_t);
	virtual RsRasterizerStateHandle_t FindOrCreateRasterizerState(const RsRasterizerStateDesc_t *);
	virtual void SetRasterizerState(RsRasterizerStateHandle_t);
	virtual RsDepthStencilStateHandle_t FindOrCreateDepthStencilState(const RsDepthStencilStateDesc_t *);
	virtual void SetDepthStencilState(RsDepthStencilStateHandle_t, uint32);
	virtual void SetOverrideDepthStencilState(RsDepthStencilStateHandle_t, uint32);
	virtual RsBlendStateHandle_t FindOrCreateBlendState(const RsBlendStateDesc_t *);
	virtual void SetBlendState(RsBlendStateHandle_t, const float *, uint32);
	virtual void SetTessellationState(bool, uint32);
	virtual void SetCullMode(RenderCullMode_t);
	virtual void FlipHandedness(bool);
	virtual void SetBlendMode(RenderBlendMode_t, const float *);
	virtual void SetZBufferMode(RenderZBufferMode_t);
	virtual void GetMaxToRender(int, int, int *, int *);
	virtual RenderInputLayout_t GetInputLayoutForVertexBuffer(VertexBufferHandle_t);
	virtual DynamicVertexBufferHandle_t LockDynamicVertexBuffer(const BufferDesc_t &, DynamicLockDesc_t *);
	virtual void UnlockDynamicVertexBuffer(DynamicVertexBufferHandle_t, int);
	virtual DynamicIndexBufferHandle_t LockDynamicIndexBuffer(const BufferDesc_t &, DynamicLockDesc_t *);
	virtual void UnlockDynamicIndexBuffer(DynamicIndexBufferHandle_t, int);
	virtual bool LockIndexBuffer(IndexBufferHandle_t, int, LockDesc_t *);
	virtual void UnlockIndexBuffer(IndexBufferHandle_t, int, LockDesc_t *);
	virtual bool LockVertexBuffer(VertexBufferHandle_t, int, LockDesc_t *);
	virtual void UnlockVertexBuffer(VertexBufferHandle_t, int, LockDesc_t *);
	virtual bool LockVertexBufferRegion(VertexBufferHandle_t, int32, int32, LockDesc_t *);
	virtual void UnlockVertexBufferRegion(VertexBufferHandle_t, int32, int32, LockDesc_t *);
	virtual bool LockIndexBufferRegion(IndexBufferHandle_t, int32, int32, LockDesc_t *);
	virtual void UnlockIndexBufferRegion(IndexBufferHandle_t, int32, int32, LockDesc_t *);
	virtual void SetVertexData(VertexBufferHandle_t, const void *, int, int);
	virtual void SetIndexData(IndexBufferHandle_t, const void *, int, int);
	virtual bool BindIndexBuffer(IndexBufferHandle_t, int);
	virtual bool BindIndexBuffer(DynamicIndexBufferHandle_t, int);
	virtual bool BindVertexBuffer(int, VertexBufferHandle_t, int, int, int);
	virtual bool BindVertexBuffer(int, DynamicVertexBufferHandle_t, int, int, int);
	virtual void SetTextureData(HRenderTexture, const CTextureDesc *, const void *, int, bool, int, const Rect3D_t *, uint32, const DataRecycleDelegate_t *);
	virtual void LockDynamicTexture(HRenderTexture, LockedDynamicTexture_t &);
	virtual void UnlockDynamicTexture(HRenderTexture);
	virtual void ReadTexturePixels(HRenderTexture, IReadTexturePixelsCallback *, bool, Rect_t *);
	virtual void GenerateMipMaps(HRenderTexture);
	virtual void CopyTexture(HRenderTexture, HRenderTexture, Rect_t *, int, int, uint, uint, uint, uint, uint, uint, CopyTextureFlags_t);
	virtual void CopyFromVolumeTexture(HRenderTexture, HRenderTexture, Rect3D_t *, int, int, int, uint, uint, uint, uint, uint, uint, CopyTextureFlags_t);
	virtual void CopyFallbackTextureData();
	virtual void Draw(RenderPrimitiveType_t, int, int);
	virtual void DrawInstanced(RenderPrimitiveType_t, int, int, int);
	virtual void DrawIndexed(RenderPrimitiveType_t, int, int, int);
	virtual void DrawIndexedInstanced(RenderPrimitiveType_t, int, int, int, int);
	virtual void Flush();
	virtual void ForceFlushGPU();
	virtual void ForceDeviceLost();
	virtual IRenderDevice * GetDevice();
	virtual void BeginPixEvent(Color, const char *);
	virtual void BeginPixEvent(const char *);
	virtual void EndPixEvent();
	virtual void PixSetMarker(Color, const char *);
	virtual void PixSetMarker(const char *);
	virtual void BeginQuery(RenderQueryHandle_t);
	virtual void EndQuery(RenderQueryHandle_t);
	virtual void SetDebugFlag(RenderDebugFlag_t, bool);
	virtual void SetDebugString(const char *, ...);
	virtual void VaSetDebugString(const char *, typedef __va_list_tag __va_list_tag *);
	virtual const char * GetDebugString();
	virtual void SetVertexShaderGPRAllocation(int);
	virtual void QueueDeviceThreadCallback(IDeviceThreadCallback *);
	virtual void MultiGpuSetGpuMask(uint);
	virtual void MultiGpuTransferTexture(HRenderTexture, HRenderTexture, uint, uint, uint, uint, const Rect_t &, const Rect_t &, bool, bool);
	virtual void SetSteamVrCompositorTexture(HRenderTexture, uint, Vector2D, Vector2D);
	IRenderContext * GetPrimaryContext();
	virtual CRenderAttributes & GetAttributesForModify();
	const CRenderAttributes & GetAttributes();
	void LockAttributes();
	void UnlockAttributes();
	const IMaterialMode * GetMaterialStateHintMode();
	HRenderTexture GetMaterialStateHintTexture();
	uint64 GetMaterialStateHintKey();
	void SetMaterialStateHint(const IMaterialMode *, HRenderTexture, uint64);
	void ResetMaterialStateHint();
	virtual ~IRenderContext();

	// vtable[0] SetStatesToDefault
	// vtable[1] BindRenderTargets
	// vtable[2] ResolveDepthStencilTarget
	// vtable[3] ResolveRenderTarget
	// vtable[4] Clear
	// vtable[5] ClearSubrect
	// vtable[6] Submit
	// vtable[7] SubmitSecondaryDisplayList
	// vtable[8] DetachCommandList
	// vtable[9] DependsOn
	// vtable[10] Satisfies
	// vtable[11] GetViewport
	// vtable[12] SetViewports
	// vtable[13] SetScissorRects
	// vtable[14] SetUserClipPlane
	// vtable[15] BindVertexShader
	// vtable[16] BindShader
	// vtable[17] BindTexture
	// vtable[18] BindMipLevelOfTexture
	// vtable[19] BindMipLevelOfTextures
	// vtable[20] SetSamplerStatePS
	// vtable[21] SetSamplerStateVS
	// vtable[22] SetSamplerState
	// vtable[23] SetSamplerStates
	// vtable[24] SetConstantBufferData
	// vtable[25] SetConstantBufferViewsData
	// vtable[26] LockDynamicConstantBuffer
	// vtable[27] UnlockDynamicConstantBuffer
	// vtable[28] BindConstantBuffer
	// vtable[29] BindConstantBufferView
	// vtable[30] SetAlphaTestState
	// vtable[31] FindOrCreateRasterizerState
	// vtable[32] SetRasterizerState
	// vtable[33] FindOrCreateDepthStencilState
	// vtable[34] SetDepthStencilState
	// vtable[35] SetOverrideDepthStencilState
	// vtable[36] FindOrCreateBlendState
	// vtable[37] SetBlendState
	// vtable[38] SetTessellationState
	// vtable[39] SetCullMode
	// vtable[40] FlipHandedness
	// vtable[41] SetBlendMode
	// vtable[42] SetZBufferMode
	// vtable[43] GetMaxToRender
	// vtable[44] GetInputLayoutForVertexBuffer
	// vtable[45] LockDynamicVertexBuffer
	// vtable[46] UnlockDynamicVertexBuffer
	// vtable[47] LockDynamicIndexBuffer
	// vtable[48] UnlockDynamicIndexBuffer
	// vtable[49] LockIndexBuffer
	// vtable[50] UnlockIndexBuffer
	// vtable[51] LockVertexBuffer
	// vtable[52] UnlockVertexBuffer
	// vtable[53] LockVertexBufferRegion
	// vtable[54] UnlockVertexBufferRegion
	// vtable[55] LockIndexBufferRegion
	// vtable[56] UnlockIndexBufferRegion
	// vtable[57] SetVertexData
	// vtable[58] SetIndexData
	// vtable[59] BindIndexBuffer
	// vtable[60] BindIndexBuffer
	// vtable[61] BindVertexBuffer
	// vtable[62] BindVertexBuffer
	// vtable[63] SetTextureData
	// vtable[64] LockDynamicTexture
	// vtable[65] UnlockDynamicTexture
	// vtable[66] ReadTexturePixels
	// vtable[67] GenerateMipMaps
	// vtable[68] CopyTexture
	// vtable[69] CopyFromVolumeTexture
	// vtable[70] CopyFallbackTextureData
	// vtable[71] Draw
	// vtable[72] DrawInstanced
	// vtable[73] DrawIndexed
	// vtable[74] DrawIndexedInstanced
	// vtable[75] Flush
	// vtable[76] ForceFlushGPU
	// vtable[77] ForceDeviceLost
	// vtable[78] GetDevice
	// vtable[79] BeginPixEvent
	// vtable[80] BeginPixEvent
	// vtable[81] EndPixEvent
	// vtable[82] PixSetMarker
	// vtable[83] PixSetMarker
	// vtable[84] BeginQuery
	// vtable[85] EndQuery
	// vtable[86] SetDebugFlag
	// vtable[87] SetDebugString
	// vtable[88] VaSetDebugString
	// vtable[89] GetDebugString
	// vtable[90] SetVertexShaderGPRAllocation
	// vtable[91] QueueDeviceThreadCallback
	// vtable[92] MultiGpuSetGpuMask
	// vtable[93] MultiGpuTransferTexture
	// vtable[94] SetSteamVrCompositorTexture
	// vtable[95] GetAttributesForModify
	// sizeof = 848
};
