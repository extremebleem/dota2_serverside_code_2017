// Reconstructed from DWARF by pahole; not original source.

// src/public/vr/ivr.h:404
struct VrFovAndClipSpace_t {
	float m_flLeftEyeFovLeft;  // +0x0
	float m_flLeftEyeFovRight;  // +0x4
	float m_flLeftEyeFovTop;  // +0x8
	float m_flLeftEyeFovBottom;  // +0xc
	float m_flRightEyeFovLeft;  // +0x10
	float m_flRightEyeFovRight;  // +0x14
	float m_flRightEyeFovTop;  // +0x18
	float m_flRightEyeFovBottom;  // +0x1c
	float m_flLeftEyeClipSpaceLeft;  // +0x20
	float m_flLeftEyeClipSpaceRight;  // +0x24
	float m_flLeftEyeClipSpaceTop;  // +0x28
	float m_flLeftEyeClipSpaceBottom;  // +0x2c
	float m_flRightEyeClipSpaceLeft;  // +0x30
	float m_flRightEyeClipSpaceRight;  // +0x34
	float m_flRightEyeClipSpaceTop;  // +0x38
	float m_flRightEyeClipSpaceBottom;  // +0x3c
	VrFovAndClipSpace_t();

	// sizeof = 64
};

// src/public/vr/ivr.h:500
struct VRSystemStats_t {
	int32 m_nVersion;  // +0x0
	float m_flFidelityLevelAverage;  // +0x4
	float m_flFidelityFPSAverage;  // +0x8
	float m_flFidelityDroppedFramesAverage;  // +0xc
	float m_flFidelityDroppedFramesCPUAverage;  // +0x10
	int32 m_nFidelityNumFrames;  // +0x14
	int32 m_nCpuModel;  // +0x18
	int32 m_nCpuVendor;  // +0x1c
	int32 m_nCpuFrequency;  // +0x20
	int32 m_nCpuNumLogicalProcessors;  // +0x24
	int32 m_nCpuNumPhysicalProcessors;  // +0x28
	int32 m_nCpuRamMB;  // +0x2c
	int32 m_nGpuVendor;  // +0x30
	int32 m_nGpuVendorID;  // +0x34
	int32 m_nGpuDeviceID;  // +0x38
	int32 m_nGpuSubSysID;  // +0x3c
	int32 m_nGpuRevision;  // +0x40
	int32 m_nGpuDXSupportLevel;  // +0x44
	int32 m_nGpuMinDXSupportLevel;  // +0x48
	int32 m_nGpuMaxDXSupportLevel;  // +0x4c
	int32 m_nGpuDriverVersionHigh;  // +0x50
	int32 m_nGpuDriverVersionLow;  // +0x54
	int32 m_nGpuRamMB;  // +0x58
	int32 m_nOsVersion;  // +0x5c
	int32 m_nOsMajorVersion;  // +0x60
	int32 m_nOsMinorVersion;  // +0x64
	int32 m_nOsBuildNumber;  // +0x68
	int32 m_nOsPlatformId;  // +0x6c
	int32 m_nMultiGpuNumGpusFound;  // +0x70
	int32 m_nMultiGpuNumGpusUsed;  // +0x74

	// sizeof = 120
};

// src/public/vr/ivr.h:555
class IVRFlyListener {
	int ()() * * _vptr.IVRFlyListener;  // +0x0
	IVRFlyListener(IVRFlyListener &);
	IVRFlyListener(const IVRFlyListener &);
	~IVRFlyListener();
	IVRFlyListener();
	virtual void VRFly_OnBegin();
	virtual void VRFly_OnEnd(const matrix3x4_t &, const matrix3x4_t &);

	// vtable[0] VRFly_OnBegin
	// vtable[1] VRFly_OnEnd
	// sizeof = 8
};
