// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotbodyinterface.h:19
class CHeadLookParams {
	enum HeadLookPriority_t {
		BORING = 0,
		INTERESTING = 0x1,
		IMPORTANT = 0x2,
		CRITICAL = 0x3,
		MANDATORY = 0x4,
	};

private:

	float m_flLookDuration;  // +0x4
	const char * m_pReasonStr;  // +0x10
	bool m_bWaitForSteady;  // +0x18

	float m_flEaseInTime;  // +0x1c

	static CHeadLookParams ms_Defaults;

	CHeadLookParams(HeadLookPriority_t, float, INextBotReply *, const char *, bool, float);

	// sizeof = 32
};

// src/game/server/nextbot_s1/nextbotbodyinterface.h:19
class CHeadLookParams {
	enum HeadLookPriority_t {
		BORING = 0,
		INTERESTING = 0x1,
		IMPORTANT = 0x2,
		CRITICAL = 0x3,
		MANDATORY = 0x4,
	};

private:

	float m_flLookDuration;  // +0x4
	const char * m_pReasonStr;  // +0x10
	bool m_bWaitForSteady;  // +0x18

	float m_flEaseInTime;  // +0x1c

	static CHeadLookParams ms_Defaults;

	CHeadLookParams(HeadLookPriority_t, float, INextBotReply *, const char *, bool, float);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 32
};

// src/game/server/nextbot_s1/nextbotbodyinterface.h:63
class IBody : public INextBotComponent {
	enum ActivityType {
		MOTION_CONTROLLED_XY = 0x1,
		MOTION_CONTROLLED_Z = 0x2,
		ACTIVITY_UNINTERRUPTIBLE = 0x4,
		ACTIVITY_TRANSITORY = 0x8,
		ENTINDEX_PLAYBACK_RATE = 0x10,
	};

	enum PostureType {
		STAND = 0,
		CROUCH = 0x1,
		SIT = 0x2,
		CRAWL = 0x3,
		LIE = 0x4,
	};

	enum ArousalType {
		NEUTRAL = 0,
		ALERT = 0x1,
		INTENSE = 0x2,
	};

public:

private:

	IBody(const IBody &);

	IBody(INextBot *);
	virtual ~IBody();
	virtual void Reset();
	virtual void Update();
	virtual const char * GetName();
	virtual bool SetPosition(const Vector &);
	virtual const Vector & GetEyePosition();
	virtual const Vector & GetViewVector();
	virtual void AimHeadTowards(const Vector &, const CHeadLookParams &);
	virtual void AimHeadTowards(const CBaseEntity &, const CHeadLookParams &);
	virtual bool IsHeadAimingOnTarget();
	virtual bool IsHeadSteady();
	virtual float GetHeadSteadyDuration();
	virtual float GetHeadAimSubjectLeadTime();
	virtual float GetHeadAimTrackingInterval();
	virtual float GetMaxHeadAngularVelocity();
	virtual bool StartActivity(Activity, unsigned int);
	virtual HSequence SelectAnimationSequence(Activity);
	virtual Activity GetActivity();
	virtual bool IsActivity(Activity);
	virtual bool HasActivityType(unsigned int);
	virtual void SetDesiredPosture(PostureType);
	virtual PostureType GetDesiredPosture();
	virtual bool IsDesiredPosture(PostureType);
	virtual bool IsInDesiredPosture();
	virtual PostureType GetActualPosture();
	virtual bool IsActualPosture(PostureType);
	virtual bool IsPostureMobile();
	virtual bool IsPostureChanging();
	virtual void SetArousal(ArousalType);
	virtual ArousalType GetArousal();
	virtual bool IsArousal(ArousalType);
	virtual float GetHullWidth();
	virtual float GetHullHeight();
	virtual float GetStandHullHeight();
	virtual float GetCrouchHullHeight();
	virtual const Vector & GetHullMins();
	virtual const Vector & GetHullMaxs();
	virtual uint64 GetSolidMask();
	virtual CBaseEntity * GetEntity();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[62] Reset
	// vtable[63] Update
	// vtable[65] GetName
	// vtable[66] SetPosition
	// vtable[67] GetEyePosition
	// vtable[68] GetViewVector
	// vtable[69] AimHeadTowards
	// vtable[70] AimHeadTowards
	// vtable[71] IsHeadAimingOnTarget
	// vtable[72] IsHeadSteady
	// vtable[73] GetHeadSteadyDuration
	// vtable[74] GetHeadAimSubjectLeadTime
	// vtable[75] GetHeadAimTrackingInterval
	// vtable[76] GetMaxHeadAngularVelocity
	// vtable[77] StartActivity
	// vtable[78] SelectAnimationSequence
	// vtable[79] GetActivity
	// vtable[80] IsActivity
	// vtable[81] HasActivityType
	// vtable[82] SetDesiredPosture
	// vtable[83] GetDesiredPosture
	// vtable[84] IsDesiredPosture
	// vtable[85] IsInDesiredPosture
	// vtable[86] GetActualPosture
	// vtable[87] IsActualPosture
	// vtable[88] IsPostureMobile
	// vtable[89] IsPostureChanging
	// vtable[90] SetArousal
	// vtable[91] GetArousal
	// vtable[92] IsArousal
	// vtable[93] GetHullWidth
	// vtable[94] GetHullHeight
	// vtable[95] GetStandHullHeight
	// vtable[96] GetCrouchHullHeight
	// vtable[97] GetHullMins
	// vtable[98] GetHullMaxs
	// vtable[99] GetSolidMask
	// vtable[100] GetEntity
	// sizeof = 32
};
