// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/player/nextbotplayerbody.h:18
class PressFireButtonReply : public INextBotReply {
public:

	PressFireButtonReply();
	virtual void OnSuccess(INextBot *);

	// vtable[1] OnSuccess
	// sizeof = 8
};

// src/game/server/nextbot_s1/player/nextbotplayerbody.h:30
class PressAltFireButtonReply : public INextBotReply {
public:

	PressAltFireButtonReply();
	virtual void OnSuccess(INextBot *);

	// vtable[1] OnSuccess
	// sizeof = 8
};

// src/game/server/nextbot_s1/player/nextbotplayerbody.h:42
class PressJumpButtonReply : public INextBotReply {
public:

	PressJumpButtonReply();
	virtual void OnSuccess(INextBot *);

	// vtable[1] OnSuccess
	// sizeof = 8
};

// src/game/server/nextbot_s1/player/nextbotplayerbody.h:53
class PlayerBody : public IBody {
public:

private:

	EHANDLE m_hLookAtSubject;  // +0x6c

	bool m_bIsSightedIn;  // +0xd0
	bool m_bHasBeenSightedIn;  // +0xd1

	float m_flHeadEaseInTime;  // +0xd4

	PlayerBody(const PlayerBody &);

	PlayerBody(INextBot *);
	virtual ~PlayerBody();
	virtual void Reset();
	virtual void Upkeep();
	virtual bool SetPosition(const Vector &);
	virtual const Vector & GetEyePosition();
	virtual const Vector & GetViewVector();
	virtual void AimHeadTowards(const Vector &, const CHeadLookParams &);
	virtual void AimHeadTowards(const CBaseEntity &, const CHeadLookParams &);
	virtual bool IsHeadAimingOnTarget();
	virtual bool IsHeadSteady();
	virtual float GetHeadSteadyDuration();
	virtual float GetMaxHeadAngularVelocity();
	virtual bool StartActivity(Activity, unsigned int);
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
	Vector GetLookAtPos();

	// vtable[0] Schema_DynamicBinding
	// vtable[62] Reset
	// vtable[64] Upkeep
	// vtable[66] SetPosition
	// vtable[67] GetEyePosition
	// vtable[68] GetViewVector
	// vtable[69] AimHeadTowards
	// vtable[70] AimHeadTowards
	// vtable[71] IsHeadAimingOnTarget
	// vtable[72] IsHeadSteady
	// vtable[73] GetHeadSteadyDuration
	// vtable[76] GetMaxHeadAngularVelocity
	// vtable[77] StartActivity
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
	// sizeof = 296
};
