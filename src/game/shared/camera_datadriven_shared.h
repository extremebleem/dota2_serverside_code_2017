// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/camera_datadriven_shared.h:16
class CDataDrivenCameraLoader {
	enum EEaseType {
		k_EEaseType_Invalid = 0,
		k_EEaseType_Linear = 0x1,
		k_EEaseType_EaseInEaseOut = 0x2,
		k_EEaseType_EaseIn = 0x3,
		k_EEaseType_EaseOut = 0x4,
		k_EEaseType_Max = 0x5,
	};

private:

	static CUtlDict<float, int> sm_dictPlaybackDurations;
	float m_flFOWAmount;  // +0x8

	float m_flPlaybackDuration;  // +0x18
	CDataDrivenCameraLoader(IDataDrivenCameraLoaderObserver *);
	bool GetPlaybackDurationFromFile(const char *, float *);
	bool LoadFromFile(const char *);
	EEaseType GetEaseTypeFromString(const char *);
	~CDataDrivenCameraLoader();
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 32
};
