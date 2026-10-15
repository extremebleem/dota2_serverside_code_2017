// Reconstructed from DWARF by pahole; not original source.

// src/public/view_shared.h:41
class CViewSetup {
	int x;  // +0x370
	int m_nUnscaledX;  // +0x374
	int y;  // +0x378
	int m_nUnscaledY;  // +0x37c
	int width;  // +0x380
	int m_nUnscaledWidth;  // +0x384
	int height;  // +0x388
	int m_nUnscaledHeight;  // +0x38c
	bool m_bOrtho;  // +0x3a0

	float m_OrthoLeft;  // +0x3a4
	float m_OrthoTop;  // +0x3a8
	float m_OrthoRight;  // +0x3ac
	float m_OrthoBottom;  // +0x3b0
	bool m_bCustomViewMatrix;  // +0x3b4

	float fov;  // +0x3e8
	float fovViewmodel;  // +0x3ec
	float zNear;  // +0x414
	float zFar;  // +0x418
	float zNearViewmodel;  // +0x434
	float zFarViewmodel;  // +0x438
	float m_flAspectRatio;  // +0x43c
	float m_flNearBlurDepth;  // +0x440
	float m_flNearFocusDepth;  // +0x444
	float m_flFarFocusDepth;  // +0x448
	float m_flFarBlurDepth;  // +0x44c
	float m_flNearBlurRadius;  // +0x450
	float m_flFarBlurRadius;  // +0x454
	int m_nDoFQuality;  // +0x458
	float m_flShutterTime;  // +0x460
	float m_flOffCenterTop;  // +0x494
	float m_flOffCenterBottom;  // +0x498
	float m_flOffCenterLeft;  // +0x49c
	float m_flOffCenterRight;  // +0x4a0
	int m_nOverrideLODLevel;  // +0x4a4
	bool m_bOffCenter:1;  // +0x4a8:0
	bool m_bRenderToSubrectOfLargerScreen:1;  // +0x4a8:1
	bool m_bDoBloomAndToneMapping:1;  // +0x4a8:2
	bool m_bDoDepthOfField:1;  // +0x4a8:3
	bool m_bHDRTarget:1;  // +0x4a8:4
	bool m_bDrawWorldNormal:1;  // +0x4a8:5
	bool m_bCullFrontFaces:1;  // +0x4a8:6
	bool m_bCacheFullSceneState:1;  // +0x4a8:7
	bool m_bRenderFlashlightDepthTranslucents:1;  // +0x4a9:0
	bool m_bDraw3DSkyBox:1;  // +0x4a9:1
	bool m_bUseExactSpecifiedFOVAndAspectRatio:1;  // +0x4a9:2

	bool m_bEnableRadialDistortion;  // +0x4aa

	float m_flRadialDistortionK1;  // +0x4ac
	float m_flRadialDistortionK2;  // +0x4b0
	float m_flPreDistortionRenderSizeFactor;  // +0x4c4
	CViewSetup();
	~CViewSetup();
	CViewSetup & operator=(const CViewSetup &);

	// sizeof = 1232
};
