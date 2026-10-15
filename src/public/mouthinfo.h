// Reconstructed from DWARF by pahole; not original source.

// src/public/mouthinfo.h:23
class CVoiceData {
private:

	float m_flElapsed;  // +0x8
	bool m_bIgnorePhonemes;  // +0xc

	CVoiceData();
	void SetElapsedTime(float);
	float GetElapsedTime();
	void SetSource(CAudioSource *, bool);
	bool ShouldIgnorePhonemes();
	CAudioSource * GetSource();
	const CAudioSource * GetSource();

	// sizeof = 16
};

// src/public/mouthinfo.h:73
class CMouthInfo : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
	enum {
		MAX_VOICE_DATA = 0x4,
	};

public:

	float m_flAmplitude;  // +0xc
private:

	int16 m_nVoiceSources;  // +0x10
	int16 m_needsEnvelope;  // +0x12
	CMouthInfo(CEntityIndex);
	virtual ~CMouthInfo();
	void Clear();
	float GetOpenAmount();
	int GetNumVoiceSources();
	CVoiceData * GetVoiceSource(int);
	const CVoiceData * GetVoiceSource(int);
	void ClearVoiceSources();
	int GetIndexForSource(const CAudioSource *);
	bool IsSourceReferenced(const CAudioSource *);
	CVoiceData * AddSource(CAudioSource *, bool);
	void RemoveSource(CAudioSource *);
	void RemoveSourceByIndex(int);
	bool IsActive();
	bool NeedsEnvelope();
	void ActivateEnvelope();
	const CEntityIndex & GetEntityIndex();

	// sizeof = 88
};
