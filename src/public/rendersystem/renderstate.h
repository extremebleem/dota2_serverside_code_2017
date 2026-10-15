// Reconstructed from DWARF by pahole; not original source.

// src/public/rendersystem/renderstate.h:20
struct RsRasterizerStateHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/rendersystem/renderstate.h:22
struct RsDepthStencilStateHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/rendersystem/renderstate.h:24
struct RsBlendStateHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/rendersystem/renderstate.h:175
struct RsRasterizerStateDesc_t {
	bool m_bDepthClipEnable;  // +0x2
	bool m_bMultisampleEnable;  // +0x3
	int32 m_nDepthBias;  // +0x4
	float32 m_flDepthBiasClamp;  // +0x8
	float32 m_flSlopeScaledDepthBias;  // +0xc
	RsRasterizerStateDesc_t();
	uint32 HashValue();
	bool operator==(const RsRasterizerStateDesc_t &);
	void Serialize(CUtlBuffer &);
	void Unserialize(CUtlBuffer &);

	// sizeof = 16
};

// src/public/rendersystem/renderstate.h:237
struct RsStencilStateDesc_t {
private:

	uint16 m_bStencilEnable:1;  // +0x0:0
	uint16 m_frontStencilFailOp:3;  // +0x0:1
	uint16 m_frontStencilDepthFailOp:3;  // +0x0:4
	uint16 m_frontStencilPassOp:3;  // +0x0:7
	uint16 m_frontStencilFunc:3;  // +0x0:10
	uint16 m_backStencilFailOp:3;  // +0x0:13
	uint16 m_backStencilDepthFailOp:3;  // +0x2:0
	uint16 m_backStencilPassOp:3;  // +0x2:3
	uint16 m_backStencilFunc:3;  // +0x2:6
	uint16 m_nPad:7;  // +0x2:9
	uint8 m_nStencilReadMask;  // +0x4
	uint8 m_nStencilWriteMask;  // +0x5
	RsStencilStateDesc_t();
	RsStencilStateDesc_t(bool, uint8, uint8, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t);
	bool IsStencilEnabled();
	void SetStencilEnabled(bool);
	RsStencilOp_t GetFrontStencilFailOp();
	void SetFrontStencilFailOp(RsStencilOp_t);
	RsStencilOp_t GetFrontStencilDepthFailOp();
	void SetFrontStencilDepthFailOp(RsStencilOp_t);
	RsStencilOp_t GetFrontStencilPassOp();
	void SetFrontStencilPassOp(RsStencilOp_t);
	RsComparison_t GetFrontStencilFunc();
	void SetFrontStencilFunc(RsComparison_t);
	RsStencilOp_t GetBackStencilFailOp();
	void SetBackStencilFailOp(RsStencilOp_t);
	RsStencilOp_t GetBackStencilDepthFailOp();
	void SetBackStencilDepthFailOp(RsStencilOp_t);
	RsStencilOp_t GetBackStencilPassOp();
	void SetBackStencilPassOp(RsStencilOp_t);
	RsComparison_t GetBackStencilFunc();
	void SetBackStencilFunc(RsComparison_t);

	// sizeof = 6
};

// src/public/rendersystem/renderstate.h:295
struct RsStencilStateOverride_t {
	int16 m_nStencilRefValue;  // +0x0
	RsStencilStateOverride_t();

	// sizeof = 8
};

// src/public/rendersystem/renderstate.h:302
struct RsDepthStencilStateDesc_t {
	uint8 m_bDepthTestEnable:1;  // +0x0:0
	uint8 m_bDepthWriteEnable:1;  // +0x0:1
	uint8 m_nPad0:6;  // +0x0:2
	RsDepthStencilStateDesc_t();
	RsDepthStencilStateDesc_t(bool, bool, RsComparison_t, bool, uint8, uint8, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t, RsStencilOp_t, RsStencilOp_t, RsStencilOp_t, RsComparison_t);
	uint32 HashValue();
	bool operator==(const RsDepthStencilStateDesc_t &);
	void Serialize(CUtlBuffer &);
	void Unserialize(CUtlBuffer &);

	// sizeof = 8
};

// src/public/rendersystem/renderstate.h:404
struct RsBlendStateDesc_t {
private:

	uint32 m_srcBlendBits;  // +0x0
	uint32 m_destBlendBits;  // +0x4
	uint32 m_srcBlendAlphaBits;  // +0x8
	uint32 m_destBlendAlphaBits;  // +0xc
	uint32 m_renderTargetWriteMaskBits;  // +0x10
	uint32 m_blendOpBits:30;  // +0x14:0
	uint32 m_bAlphaToCoverageEnable:1;  // +0x14:30
	uint32 m_bIndependentBlendEnable:1;  // +0x14:31
	uint32 m_blendOpAlphaBits;  // +0x18
	uint8 m_blendEnableBits;  // +0x1c
	uint8 m_srgbWriteEnableBits;  // +0x1d
	uint16 m_padding;  // +0x1e
	RsBlendStateDesc_t();
	RsBlendStateDesc_t(bool, bool, bool, RsBlendMode_t, RsBlendMode_t, RsBlendOp_t, RsBlendMode_t, RsBlendMode_t, RsBlendOp_t, uint8, bool);
	bool IsAlphaToCoverageEnabled();
	void SetAlphaToCoverageEnabled(bool);
	bool IsIndependentBlendEnabled();
	void SetIndependentBlendEnabled(bool);
	bool IsAlphaBlendEnabled(int);
	void SetAlphaBlendEnabled(bool, int);
	bool IsSrgbWriteEnabled(int);
	void SetSrgbWriteEnabled(bool, int);
	RsBlendMode_t GetSrcBlend(int);
	void SetSrcBlend(RsBlendMode_t, int);
	RsBlendMode_t GetDestBlend(int);
	void SetDestBlend(RsBlendMode_t, int);
	RsBlendMode_t GetSrcBlendAlpha(int);
	void SetSrcBlendAlpha(RsBlendMode_t, int);
	RsBlendMode_t GetDestBlendAlpha(int);
	void SetDestBlendAlpha(RsBlendMode_t, int);
	uint8 GetRenderTargetWriteMask(int);
	void SetRenderTargetWriteMask(uint8, int);
	RsBlendOp_t GetBlendOp(int);
	void SetBlendOp(RsBlendOp_t, int);
	RsBlendOp_t GetBlendOpAlpha(int);
	void SetBlendOpAlpha(RsBlendOp_t, int);
	uint32 HashValue();
	bool operator==(const RsBlendStateDesc_t &);
	void Serialize(CUtlBuffer &);
	void Unserialize(CUtlBuffer &);

	// sizeof = 32
};

// src/public/rendersystem/renderstate.h:712
struct TextureFilteringQualityTranslation_t {
	uint32 nMaxAnisoExp;  // +0x4

	// sizeof = 8
};

// src/public/rendersystem/renderstate.h:739
class CSamplerStateDescBase {
protected:

	uint32 m_nFilterMode:8;  // +0x0:0
	uint32 m_nMipLodBias:8;  // +0x0:8
	uint32 m_nMipLodBiasSign:1;  // +0x0:16
	uint32 m_nAddressU:3;  // +0x0:17
	uint32 m_nAddressV:3;  // +0x0:20
	uint32 m_nAddressW:3;  // +0x0:23
	uint32 m_nAnisoExp:3;  // +0x0:26
	uint32 m_nComparisonFunc:3;  // +0x0:29
	uint32 m_nBorderColor8Bit;  // +0x4
	uint32 m_nMinLod:6;  // +0x8:0
	uint32 m_nMaxLod:6;  // +0x8:6
	uint32 m_nFetch4Enable:1;  // +0x8:12
	uint32 m_nTrilinearThreshold:2;  // +0x8:13
	uint32 m_nUserConfigAniso:1;  // +0x8:15
	uint32 m_nPad:16;  // +0x8:16
	CSamplerStateDescBase();
	RsFilter_t GetFilterMode();
	void SetFilterMode(RsFilter_t);
	RsTextureAddressMode_t GetTextureAddressModeU();
	RsTextureAddressMode_t GetTextureAddressModeV();
	RsTextureAddressMode_t GetTextureAddressModeW();
	void SetTextureAddressModeU(RsTextureAddressMode_t);
	void SetTextureAddressModeV(RsTextureAddressMode_t);
	void SetTextureAddressModeW(RsTextureAddressMode_t);
	float32 GetMipLodBias();
	void SetMipLodBias(float32);
	uint32 GetMaxAnisotropyExp();
	uint32 GetMaxAnisotropy();
	void SetMaxAnisotropy(uint32);
	RsComparison_t GetComparisonFunc();
	void SetComparisonFunc(RsComparison_t);
	void SetBorderColor(const float32 *);
	void SetTrilinearThreshold(RsTrilinearThreshold360_t);
	RsTrilinearThreshold360_t GetTrilinearThreshold();
	void GetBorderColor(float32 *);
	uint32 GetBorderColor32Bit();
	void GetMinMaxLod(uint32 *, uint32 *);
	uint32 GetMinLod();
	uint32 GetMaxLod();
	void SetMinMaxLod(uint32, uint32);
	void SetMinLod(uint32);
	void SetMaxLod(uint32);
	bool GetFetch4Enabled();
	void SetFetch4Enabled(bool);
	uint32 HashValue();
	bool operator==(const CSamplerStateDescBase &);
	bool operator!=(const CSamplerStateDescBase &);

	// sizeof = 12
};

// src/public/rendersystem/renderstate.h:891
class CSamplerStateDesc : public CSamplerStateDescBase {
public:

	CSamplerStateDesc();
	CSamplerStateDesc(RsFilter_t, RsTextureAddressMode_t, RsTextureAddressMode_t, RsTextureAddressMode_t, float32, uint32, RsComparison_t, uint32, uint32, bool, bool, RsTrilinearThreshold360_t);
	bool operator==(const CSamplerStateDesc &);
	bool operator!=(const CSamplerStateDesc &);

	// sizeof = 12
};
