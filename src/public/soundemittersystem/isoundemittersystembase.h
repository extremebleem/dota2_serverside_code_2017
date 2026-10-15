// Reconstructed from DWARF by pahole; not original source.

// src/public/soundemittersystem/isoundemittersystembase.h:44
class CSoundParameters {
private:

	int channel;  // +0x0
	float volume;  // +0x4
	int pitch;  // +0x8
	int pitchlow;  // +0xc
	int pitchhigh;  // +0x10
	bool play_to_owner_only;  // +0x18
	uint8 m_nSpecialWaveFlags;  // +0x19

	int count;  // +0x1c
	int delay_msec;  // +0x28

	int m_nRandomSeed;  // +0x38

	CSoundParameters();
	~CSoundParameters();
	CSoundParameters & operator=(const CSoundParameters &);

	// sizeof = 72
};

// src/public/soundemittersystem/isoundemittersystembase.h:132
class SoundFile {
	float32 m_flDuration;  // +0x0
	uint8 gender:6;  // +0x6:0
	uint8 m_bIsLooping:1;  // +0x6:6
	uint8 available:1;  // +0x6:7
	uint8 nSpecialWaveFlags;  // +0x7
	SoundFile();
	SoundFile & operator=(const SoundFile &);

	// sizeof = 8
};

// src/public/soundemittersystem/isoundemittersystembase.h:183
class CSoundParametersInternal {
private:

	uint16 m_nSoundNames;  // +0x18
	volume_interval_t volume;  // +0x1a
	soundlevel_interval_t soundlevel;  // +0x1e
	uint16 delay_msec;  // +0x22
	uint8 channel;  // +0x24
	pitch_interval_t pitch;  // +0x25
	float32 m_flSoundDuration;  // +0x27
	bool play_to_owner_only:1;  // +0x2b:0
	bool had_missing_wave_files:1;  // +0x2b:1
	bool uses_gender_token:1;  // +0x2b:2
	bool m_bShouldPreload:1;  // +0x2b:3
	bool m_bIsLooping:1;  // +0x2b:4
	CSoundParametersInternal();
	~CSoundParametersInternal();
	void CopyFrom(const CSoundParametersInternal &);
	bool operator==(const CSoundParametersInternal &);
	void Clear();
	CUtlString VolumeToString();
	CUtlString ChannelToString();
	CUtlString SoundLevelToString();
	CUtlString PitchToString();
	void VolumeFromString(const char *);
	void ChannelFromString(const char *);
	void PitchFromString(const char *);
	void SoundLevelFromString(const char *);
	int GetChannel();
	const volume_interval_t & GetVolume();
	const pitch_interval_t & GetPitch();
	const soundlevel_interval_t & GetSoundLevel();
	int GetDelayMsec();
	bool OnlyPlayToOwner();
	bool HadMissingWaveFiles();
	bool UsesGenderToken();
	bool ShouldPreload();
	void SetChannel(int);
	void SetVolume(float, float);
	void SetPitch(float, float);
	void SetSoundLevel(float, float);
	void SetDelayMsec(int);
	void SetShouldPreload(bool);
	void SetOnlyPlayToOwner(bool);
	void SetHadMissingWaveFiles(bool);
	void SetUsesGenderToken(bool);
	void AddSoundName(const SoundFile &);
	int NumSoundNames();
	SoundFile * GetSoundNames();
	const SoundFile * GetSoundNames();
	KeyValues * GetOperatorsKV();
	void SetOperatorsKV(KeyValues *, bool);
	void InitFromGameSoundResource(const VGameSound_t *);
	KeyValues * GetGameData();
	void SetGameData(KeyValues *, bool);
	void SetDuration(float32);
	float32 GetDuration();
	void SetLooping(bool);
	bool IsLooping();
	void operator=(const CSoundParametersInternal &);
	CSoundParametersInternal(const CSoundParametersInternal &);
	void AddToTail(SoundFile * *, uint16 *, const SoundFile &);

	// sizeof = 44
} __attribute__((__packed__));
