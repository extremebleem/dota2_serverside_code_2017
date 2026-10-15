// Reconstructed from DWARF by pahole; not original source.

// src/public/soundinfo.h:24
struct SoundInfo_t {
	enum SoundInfoInit_t {
		SOUNDINFO_SETDEFAULT = 0,
		SOUNDINFO_NO_SETDEFAULT = 0x1,
	};

	const char * pszName;  // +0x28
	float fVolume;  // +0x30
	float fDelay;  // +0x34
	float fTickTime;  // +0x38
	int nSequenceNumber;  // +0x3c
	int nChannel;  // +0x44
	int nPitch;  // +0x48
	int nFlags;  // +0x4c

	uint64 nSoundResourceId;  // +0x58
	int nRandomSeed;  // +0x64
	bool bIsAmbient;  // +0x6c
	bool bLooping;  // +0x6d

	float flVoiceMod;  // +0x70
	SoundInfo_t(SoundInfoInit_t);
	bool Less(const SoundInfo_t &, const SoundInfo_t &);
	void Set(CEntityIndex, int, const char *, const Vector &, const Vector &, float, soundlevel_t, bool, int, const Vector &, CEntityIndex, int);
	void SetDefault();
	void ClearStopFields();

	// sizeof = 120
};
