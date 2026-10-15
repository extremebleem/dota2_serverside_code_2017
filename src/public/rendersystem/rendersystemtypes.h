// Reconstructed from DWARF by pahole; not original source.

// src/public/rendersystem/rendersystemtypes.h:21
struct RenderResourceHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/rendersystem/rendersystemtypes.h:28
struct SwapChainHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/rendersystem/rendersystemtypes.h:35
struct VertexBufferHandle_t__ : public RenderResourceHandle_t__ {
public:

	// sizeof = 4
};

// src/public/rendersystem/rendersystemtypes.h:36
struct IndexBufferHandle_t__ : public RenderResourceHandle_t__ {
public:

	// sizeof = 4
};

// src/public/rendersystem/rendersystemtypes.h:44
struct DynamicVertexBufferHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/rendersystem/rendersystemtypes.h:45
struct DynamicIndexBufferHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/rendersystem/rendersystemtypes.h:54
struct ConstantBufferHandle_t__ : public RenderResourceHandle_t__ {
public:

	// sizeof = 4
};

// src/public/rendersystem/rendersystemtypes.h:60
struct RenderShaderHandle_t__ : public RenderResourceHandle_t__ {
public:

	// sizeof = 4
};

// src/public/rendersystem/rendersystemtypes.h:144
struct RenderInputLayoutField_t {
private:

	unsigned char m_pSemanticName[32];  // +0x0
	int32 m_nSemanticIndex;  // +0x20
	uint32 m_Format;  // +0x24
	int32 m_nOffset;  // +0x28
	int32 m_nSlot;  // +0x2c
	int32 m_nInstanceStepRate;  // +0x34

	// sizeof = 56
};

// src/public/rendersystem/rendersystemtypes.h:229
struct VsInputSignatureElement_t {
private:

	char m_pName[64];  // +0x0
	char m_pSemantic[64];  // +0x40
	char m_pD3DSemanticName[64];  // +0x80
	int m_nD3DSemanticIndex;  // +0xc0

	VsInputSignatureElement_t();

	// sizeof = 196
};

// src/public/rendersystem/rendersystemtypes.h:258
struct RenderViewport_t {
	int m_nVersion;  // +0x0
	int m_nTopLeftX;  // +0x4
	int m_nTopLeftY;  // +0x8
	int m_nWidth;  // +0xc
	int m_nHeight;  // +0x10
	float m_flMinZ;  // +0x14
	float m_flMaxZ;  // +0x18
	RenderViewport_t();
	RenderViewport_t(int, int, int, int, float, float);
	void Init();
	void Init(int, int, int, int, float, float);
	void Init(const Rect_t &, float, float);
	Rect_t GetRect();
	bool IsValid();
	bool IsEqual(const RenderViewport_t &);
	float NormalizedXCoordRelative(int);
	float NormalizedYCoordRelative(int);
	Vector ConvertPixelCoordinateToNDCCoordinates(float, float, float);

	// sizeof = 28
};
