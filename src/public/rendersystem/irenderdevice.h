// Reconstructed from DWARF by pahole; not original source.

// src/public/rendersystem/irenderdevice.h:254
struct RenderDisplayMode_t {
	int m_nVersion;  // +0x0
	int m_nWidth;  // +0x4
	int m_nHeight;  // +0x8
	int m_nRefreshRateNumerator;  // +0x10
	int m_nRefreshRateDenominator;  // +0x14
	uint32 m_nFlags;  // +0x18
	RenderDisplayMode_t();

	// sizeof = 28
};

// src/public/rendersystem/irenderdevice.h:273
struct RenderDeviceInfo_t {
	int m_nVersion;  // +0x0
	int m_nBackBufferCount;  // +0x20
	uint8 m_nModeUsage;  // +0x28
	bool m_bUseStencil:1;  // +0x29:0
	bool m_bWaitForVSync:1;  // +0x29:1
	bool m_bScaleToOutputResolution:1;  // +0x29:2
	bool m_bProgressive:1;  // +0x29:3
	bool m_bUsingMultipleWindows:1;  // +0x29:4
	bool m_bIsMainWindow:1;  // +0x29:5
	RenderDeviceInfo_t();
	bool HasUsageType();
	bool IsExclusiveFullscreen();
	bool IsCooperativeFullscreen();
	bool IsBorderlessWindow();
	bool IsBorderedWindow();
	bool HasWindowBorder();
	bool HasWindowedState();
	bool DoesCoverMonitor();
	void SetExclusiveFullscreen();
	void SetCooperativeFullscreen();
	void SetBorderlessWindow();
	void SetBorderedWindow();
	void GetSettingsFlags(bool *, bool *, bool *);
	void SetSettingsFlags(bool, bool, bool);
	const char * GetModeName();
	uint32 DemoteExclusiveFullscreen();
	void RestoreExclusiveFullscreen(uint32);
	int GetWindowFlags();

	// sizeof = 44
};

// src/public/rendersystem/irenderdevice.h:487
struct RenderTargetDesc_t {
	HRenderTexture m_hDepthTarget;  // +0x40
	int m_nColorTargetIndices[8];  // +0x48
	int m_nDepthTargetIndex;  // +0x68
	short int m_nColorTargetCount;  // +0x6c
	bool m_bReadOnlyDepthStencil:1;  // +0x6f:0
	RenderTargetDesc_t();
	void Clear();
	RenderTargetDesc_t(SwapChainHandle_t, bool, bool, RenderColorSpace_t);
	RenderTargetDesc_t(HRenderTexture, HRenderTexture, RenderColorSpace_t);
	RenderTargetDesc_t(HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	RenderTargetDesc_t(HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	RenderTargetDesc_t(HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	RenderTargetDesc_t(int, HRenderTexture *, HRenderTexture, RenderColorSpace_t);
	void Init(SwapChainHandle_t, bool, bool, RenderColorSpace_t);
	void Init(HRenderTexture, HRenderTexture, RenderColorSpace_t);
	void Init(HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	void Init(HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	void Init(HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, HRenderTexture, RenderColorSpace_t);
	void Init(int, HRenderTexture *, HRenderTexture, RenderColorSpace_t);
	void Init(const RenderTargetDesc_t &);
	bool IsValid();
	void SetReadOnlyDepthStencil(bool);

	// sizeof = 112
};

// src/public/rendersystem/irenderdevice.h:636
struct RenderQueryHandle_t__ : public RenderResourceHandle_t__ {
public:

	// sizeof = 4
};

// src/public/rendersystem/irenderdevice.h:775
struct BufferDesc_t {
	int m_nElementCount;  // +0x0
	int m_nElementSizeInBytes;  // +0x4
	const char * m_pDebugName;  // +0x8
	const char * m_pBudgetGroupName;  // +0x10

	// sizeof = 24
};
