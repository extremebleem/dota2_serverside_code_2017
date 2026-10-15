// Reconstructed from DWARF by pahole; not original source.

// src/public/scenesystem/iscenesystem.h:74
struct SceneObjectBuffers_t {
	IndexBufferHandle_t m_hDebugIndexBuffer;  // +0x0
	VertexBufferHandle_t m_hDebugVertexBuffer;  // +0x8
	int m_nIndexCount;  // +0x2c
	int m_nVertexCount;  // +0x30
	SceneObjectBuffers_t();

	// sizeof = 56
};

// src/public/scenesystem/iscenesystem.h:85
struct SceneSystemPerFrameStats_t {
	uint32 m_nTrianglesRendered;  // +0x0
	uint32 m_nDrawCalls;  // +0x4
	uint32 m_nNumMaterialCompute;  // +0x8
	uint32 m_nNumMaterialSet;  // +0xc
	uint32 m_nNumVfxEval;  // +0x10
	uint32 m_nNumVfxRule;  // +0x14
	uint32 m_nMaterialChangesNonShadow;  // +0x18
	uint32 m_nMaterialChangesNonShadowInitial;  // +0x1c
	uint32 m_nMaterialChangesShadow;  // +0x20
	uint32 m_nMaterialChangesShadowInitial;  // +0x24
	uint32 m_nMaterialChangesShadowAlphaTested;  // +0x28
	uint32 m_nMaxTransformRow;  // +0x2c
	uint32 m_nNumRowsUsed;  // +0x30
	uint32 m_nNumObjectsPassingCullCheck;  // +0x34
	uint32 m_nNumBytesOfVertexDataReferenced;  // +0x38
	uint32 m_nNumVerticesReferenced;  // +0x3c
	uint32 m_nNumDisplayListsSubmitted;  // +0x40
	CInterlockedInt m_nNumViewsRendered;  // +0x44
	uint32 m_nNumResolves;  // +0x48
	uint32 m_nNumObjectsRejectedByVis;  // +0x4c
	uint32 m_nNumObjectsRejectedByOcclusionCulling;  // +0x50
	uint32 m_nNumObjectsRejectedByScreenSizeCulling;  // +0x54
	uint32 m_nNumObjectsRejectedByFading;  // +0x58
	uint32 m_nNumFadingObjects;  // +0x5c
	uint32 m_nNumUniqueMaterialsSeen;  // +0x60
	uint32 m_nNumParticleSystemsRendered;  // +0x64
	uint32 m_nNumMaterialBindsForParticles;  // +0x68
	uint32 m_nNumDrawCallsForParticles;  // +0x6c
	uint32 m_nNumOccluderBuffersRendered;  // +0x70
	float m_flOccluderRasterizationTime;  // +0x74
	uint32 m_nNumOccluders;  // +0x78
	uint32 m_nNumOccluderTriangles;  // +0x7c
	uint32 m_nNumOccluderVertices;  // +0x80
	uint32 m_nNumOccludersUndergoingClipping;  // +0x84
	uint32 m_nNumOccluderTrianglesClipped;  // +0x88
	uint32 m_nNumOccluderTrianglesCreatedWhileClipping;  // +0x8c
	uint32 m_nNumRasterizedOccluderTriangles;  // +0x90
	uint32 m_nOccluderMemoryUsed;  // +0x94
	uint32 m_nNumRenderTargetBinds;  // +0x98
	SceneSystemPerFrameStats_t();
	void Zero();
	void operator+=(SceneSystemPerFrameStats_t &);
	SceneSystemPerFrameStats_t operator+(SceneSystemPerFrameStats_t &);

	// sizeof = 156
};

// src/public/scenesystem/iscenesystem.h:219
struct vis_info_t {
	const uint32 * m_pVisBits;  // +0x0
	uint32 m_uVisBitsBufSize;  // +0x8
	float m_flVisibleRadius;  // +0xc
	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x10
	vis_info_t();
	vis_info_t(const void *, uint32, float);
	void Defaults();
	void Init(const void *, uint32, float);
	bool IsInPVS(int);
	SpawnGroupHandle_t GetSpawnGroupHandle();

	// sizeof = 24
};

// src/public/scenesystem/iscenesystem.h:387
struct SceneScratchRenderTargetInfo_t {
	union {
		int m_nWidth;  // +0x0
		int m_nDivisor;  // +0x0
	};

	union {
		int m_nWidth;  // +0x4
		int m_nDivisor;  // +0x4
	};
	int m_nHeight;  // +0x8

	SwapChainHandle_t m_hSwapChain;  // +0x10
	SceneScratchRenderTargetInfo_t();
	SceneScratchRenderTargetInfo_t(int, int, ImageFormat, RenderMultisampleType_t);
	SceneScratchRenderTargetInfo_t(SwapChainHandle_t, int, ImageFormat, RenderMultisampleType_t);
	SceneScratchRenderTargetInfo_t(ImageFormat, RenderMultisampleType_t);
	void SetSize(int, int);
	void SetSize(SwapChainHandle_t, int);
	void SetSizeToDesktopSize();

	// sizeof = 32
};
