// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/soundenvelope.h:32
struct envelopePoint_t {
	float amplitudeMin;  // +0x0
	float amplitudeMax;  // +0x4
	float durationMin;  // +0x8
	float durationMax;  // +0xc

	// sizeof = 16
};

// src/game/shared/soundenvelope.h:39
struct envelopeDescription_t {
	int nNumPoints;  // +0x8

	// sizeof = 16
};

// src/game/shared/soundenvelope.h:47
class CSoundEnvelopeController {
	int ()() * * _vptr.CSoundEnvelopeController;  // +0x0
	CSoundEnvelopeController(CSoundEnvelopeController &);
	CSoundEnvelopeController(const CSoundEnvelopeController &);
	~CSoundEnvelopeController();
	CSoundEnvelopeController();
	virtual void SystemReset();
	virtual void SystemUpdate();
	virtual void Play(CSoundPatch *, float, float, float);
	virtual void CommandAdd(CSoundPatch *, float, soundcommands_t, float, float);
	virtual void CommandClear(CSoundPatch *);
	virtual void ShutdownSoundPatch(CSoundPatch *);
	virtual CSoundPatch * SoundCreate(IRecipientFilter &, CEntityIndex, const char *);
	virtual CSoundPatch * SoundCreate(IRecipientFilter &, CEntityIndex, int, const char *, float, float);
	virtual CSoundPatch * SoundCreate(IRecipientFilter &, CEntityIndex, int, const char *, float, const Vector *, float);
	virtual CSoundPatch * SoundCreate(IRecipientFilter &, CEntityIndex, int, const char *);
	virtual CSoundPatch * SoundCreate(IRecipientFilter &, CEntityIndex, const EmitSound_t &);
	virtual void SoundDestroy(CSoundPatch *);
	virtual void SoundChangePitch(CSoundPatch *, float, float);
	virtual void SoundChangeVolume(CSoundPatch *, float, float);
	virtual void SoundFadeOut(CSoundPatch *, float, bool);
	virtual float SoundGetPitch(CSoundPatch *);
	virtual float SoundGetVolume(CSoundPatch *);
	virtual float SoundPlayEnvelope(CSoundPatch *, soundcommands_t, envelopePoint_t *, int);
	virtual float SoundPlayEnvelope(CSoundPatch *, soundcommands_t, envelopeDescription_t *);
	virtual void CheckLoopingSoundsForPlayer(CBasePlayer *);
	virtual string_t SoundGetName(CSoundPatch *);
	virtual string_t SoundGetScriptName(CSoundPatch *);
	CSoundEnvelopeController & GetController();
	virtual void SoundSetCloseCaptionDuration(CSoundPatch *, float);
	virtual void SoundSetOrigin(CSoundPatch *, const Vector *);

	// vtable[0] SystemReset
	// vtable[1] SystemUpdate
	// vtable[2] Play
	// vtable[3] CommandAdd
	// vtable[4] CommandClear
	// vtable[5] ShutdownSoundPatch
	// vtable[6] SoundCreate
	// vtable[7] SoundCreate
	// vtable[8] SoundCreate
	// vtable[9] SoundCreate
	// vtable[10] SoundCreate
	// vtable[11] SoundDestroy
	// vtable[12] SoundChangePitch
	// vtable[13] SoundChangeVolume
	// vtable[14] SoundFadeOut
	// vtable[15] SoundGetPitch
	// vtable[16] SoundGetVolume
	// vtable[17] SoundPlayEnvelope
	// vtable[18] SoundPlayEnvelope
	// vtable[19] CheckLoopingSoundsForPlayer
	// vtable[20] SoundGetName
	// vtable[21] SoundGetScriptName
	// vtable[22] SoundSetCloseCaptionDuration
	// vtable[23] SoundSetOrigin
	// sizeof = 8
};
