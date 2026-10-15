// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physconstraint_sounds.h:34
class VelocitySampler {
private:

protected:

	float m_fPrevSampleTime;  // +0xc
	float m_fIdealSampleRate;  // +0x10
	VelocitySampler();

private:

	float getSampleRate();
	void BeginSampling(const Vector &);
	void AddSample(const Vector &);
	int HasReversed(const Vector &, const float *, short unsigned int);
	void Initialize(float);
	Vector GetRelativeVelocity(IPhysicsObject *, IPhysicsObject *);
	Vector GetRelativeAngularVelocity(IPhysicsObject *, IPhysicsObject *);
	VelocitySampler & operator=(const VelocitySampler &);

	// sizeof = 20
};

// src/game/server/physconstraint_sounds.h:83
struct SimpleConstraintSoundProfile {
	enum SimpleConstraintsSoundProfileKeypoints_t {
		kMIN_THRESHOLD = 0,
		kMIN_FULL = 0x1,
		kHIGHWATER = 0x2,
	};

	enum {
		kREVERSAL_SOUND_ARRAY_SIZE = 0x3,
	};

	int ()() * * _vptr.SimpleConstraintSoundProfile;  // +0x0
private:

	float m_keyPoints[2];  // +0xc
	float m_reversalSoundThresholds[3];  // +0x14
	SimpleConstraintSoundProfile & operator=(SimpleConstraintSoundProfile &);
	SimpleConstraintSoundProfile & operator=(const SimpleConstraintSoundProfile &);
	~SimpleConstraintSoundProfile();
	SimpleConstraintSoundProfile(SimpleConstraintSoundProfile &);
	SimpleConstraintSoundProfile(const SimpleConstraintSoundProfile &);
	SimpleConstraintSoundProfile();

	float GetVolume(float);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 32
};

// src/game/server/physconstraint_sounds.h:132
class ConstraintSoundInfo {
	int ()() * * _vptr.ConstraintSoundInfo;  // +0x0
private:

	string_t m_iszTravelSoundFwd;  // +0x50
	string_t m_iszTravelSoundBack;  // +0x58
	bool m_bPlayTravelSound;  // +0x68

	bool m_bPlayReversalSound;  // +0x88
	ConstraintSoundInfo & operator=(const ConstraintSoundInfo &);
	ConstraintSoundInfo(const ConstraintSoundInfo &);
	ConstraintSoundInfo();

	~ConstraintSoundInfo();
	void OnActivate(CPhysConstraint *);
	void OnThink(CPhysConstraint *, const Vector &);
	float getThinkRate();
	void StartThinking(CPhysConstraint *, const Vector &, const Vector &);
	void StopThinking(CPhysConstraint *);
	void OnPrecache(const CPhysConstraint *, const CEntityPrecacheContext *);

protected:

	void ValidateInternals(CPhysConstraint *);
	void DeleteAllSounds();

	// vtable[0] Schema_DynamicBinding
	// sizeof = 144
};
