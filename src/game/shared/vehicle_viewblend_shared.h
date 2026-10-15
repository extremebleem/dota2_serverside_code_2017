// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/vehicle_viewblend_shared.h:25
struct ViewLockData_t {
private:

	float flLockInterval;  // +0x0
	bool bLocked;  // +0x4

	float flUnlockTime;  // +0x8
	float flUnlockBlendInterval;  // +0xc

	// sizeof = 16
};

// src/game/shared/vehicle_viewblend_shared.h:48
struct ViewSmoothingData_t {
private:

	static datamap_t m_DataMap;

	bool bClampEyeAngles;  // +0x8

	float flPitchCurveZero;  // +0xc
	float flPitchCurveLinear;  // +0x10
	float flRollCurveZero;  // +0x14
	float flRollCurveLinear;  // +0x18
	float flFOV;  // +0x1c

	bool bDampenEyePosition;  // +0x40
	bool bRunningEnterExit;  // +0x41
	bool bWasRunningAnim;  // +0x42

	float flEnterExitStartTime;  // +0x44
	float flEnterExitDuration;  // +0x48
	ViewSmoothingData_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	ViewSmoothingData_t & operator=(const ViewSmoothingData_t &);

	// sizeof = 128
};
