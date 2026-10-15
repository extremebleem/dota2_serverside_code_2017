// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/shareddefs.h:159
struct inputdata_t {
	CVariant value;  // +0x10
	int nOutputID;  // +0x20
	inputdata_t();

	// sizeof = 40
};

// src/game/shared/shareddefs.h:171
class CViewVectors {
	CViewVectors();
	CViewVectors(Vector, Vector, Vector, Vector, Vector, Vector, Vector, Vector, Vector);

	// sizeof = 108
};

// src/game/shared/shareddefs.h:675
struct thinkfunc_t {
private:

	BASEPTR m_think;  // +0x0
	HSCRIPT m_hFn;  // +0x10
	int m_nNextThinkTick;  // +0x1c
	int m_nLastThinkTick;  // +0x20

	static datamap_t m_DataMap;
	thinkfunc_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 40
};

// src/game/shared/shareddefs.h:802
struct FireBulletsInfo_t {
	int m_iShots;  // +0x0
	float m_flDistance;  // +0x28
	int m_iAmmoType;  // +0x2c
	int m_iTracerFreq;  // +0x30
	float m_flDamage;  // +0x34
	float m_flPlayerDamage;  // +0x38
	int m_nFlags;  // +0x3c
	float m_flDamageForceScale;  // +0x40

	bool m_bPrimaryAttack;  // +0x58

	FireBulletsInfo_t();
	FireBulletsInfo_t(int, const Vector &, const Vector &, const Vector &, float, int, bool);

	// sizeof = 104
};

// src/game/shared/shareddefs.h:868
struct StepSimulationStep {
	int nTickCount;  // +0x0
	StepSimulationStep();

	// sizeof = 32
};

// src/game/shared/shareddefs.h:875
struct StepSimulationData {
	struct History_t {
		short unsigned int m_cell[3];  // +0x18
		History_t();
		void Set(const Vector &, uint16 *, const QAngle &);

		// sizeof = 32
	};

	bool m_bOriginActive;  // +0x0
	bool m_bAnglesActive;  // +0x1

	int m_nLastProcessTickCount;  // +0x90
	short unsigned int m_networkCell[3];  // +0xa0

	StepSimulationData();

	// sizeof = 212
};

// src/game/shared/shareddefs.h:924
struct ModelScale {
	float m_flModelScaleStart;  // +0x0
	float m_flModelScaleGoal;  // +0x4
	float m_flModelScaleFinishTime;  // +0x8
	float m_flModelScaleStartTime;  // +0xc

	// sizeof = 16
};

// src/game/shared/shareddefs.h:940
struct EmitSound_t {
	int m_nChannel;  // +0x0

	const char * m_pSoundName;  // +0x8
	float m_flVolume;  // +0x10
	int m_nFlags;  // +0x18
	int m_nPitch;  // +0x1c
	const Vector * m_pOrigin;  // +0x20
	float m_flSoundTime;  // +0x28

	float * m_pflSoundDuration;  // +0x30
	bool m_bEmitCloseCaption;  // +0x38
	bool m_bWarnOnMissingCloseCaption;  // +0x39
	bool m_bWarnOnDirectWaveReference;  // +0x3a

	EmitSound_t();
	EmitSound_t(const CSoundParameters &);
	void SetSoundName(const char *);
	~EmitSound_t();

	// sizeof = 96
};

// src/game/shared/shareddefs.h:1292
struct hudtextparms_t {
private:

	static datamap_t m_DataMap;

	uint8 effect;  // +0x8
	uint8 channel;  // +0x9

	float32 x;  // +0xc
	float32 y;  // +0x10
	float32 fadeinTime;  // +0x14
	float32 fadeoutTime;  // +0x18
	float32 holdTime;  // +0x1c
	float32 fxTime;  // +0x20
	hudtextparms_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	hudtextparms_t & operator=(const hudtextparms_t &);

	// sizeof = 36
};
