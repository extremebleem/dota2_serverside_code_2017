// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotlocomotioninterface.h:22
class ILocomotionBase {
	ILocomotionBase();

	// sizeof = 1
};

// src/game/server/nextbot_s1/nextbotlocomotioninterface.h:40
class CLocomotionBase : public ILocomotionBase, public INextBotComponent {
	enum TraverseWhenType {
		IMMEDIATELY = 0,
		EVENTUALLY = 0x1,
	};

public:

private:

	float m_flSpeed;  // +0x38
	float m_flGroundSpeed;  // +0x3c
	bool m_bIsStuck;  // +0x40

	CLocomotionBase(const CLocomotionBase &);

	CLocomotionBase(INextBot *);
	virtual ~CLocomotionBase();
	virtual void Reset();
	virtual void Update();
	virtual const char * GetName();
	virtual void Approach(const Vector &, float);
	virtual void DriveTo(const Vector &);
	virtual bool ClimbUpToLedge(const Vector &, const Vector &, const CBaseEntity *);
	virtual void JumpAcrossGap(const Vector &, const Vector &);
	virtual void Jump();
	virtual bool IsClimbingOrJumping();
	virtual bool IsClimbingUpToLedge();
	virtual bool IsJumpingAcrossGap();
	virtual bool IsScrambling();
	virtual void Run();
	virtual void Walk();
	virtual void Stop();
	virtual bool IsRunning();
	virtual void SetDesiredSpeed(float);
	virtual float GetDesiredSpeed();
	virtual void SetSpeedLimit(float);
	virtual float GetSpeedLimit();
	virtual bool IsOnGround();
	virtual void OnLeaveGround(CBaseEntity *);
	virtual void OnLandOnGround(CBaseEntity *);
	virtual CBaseEntity * GetGround();
	virtual Vector GetGroundNormal();
	virtual float GetGroundSpeed();
	virtual Vector GetGroundMotionVector();
	virtual void ClimbLadder(const CNavLadder *, const CNavArea *);
	virtual void DescendLadder(const CNavLadder *, const CNavArea *);
	virtual bool IsUsingLadder();
	virtual bool IsAscendingOrDescendingLadder();
	virtual bool IsAbleToAutoCenterOnLadder();
	virtual void FaceTowards(const Vector &);
	virtual void SetDesiredLean(const QAngle &);
	virtual QAngle GetDesiredLean();
	virtual bool IsAbleToJumpAcrossGaps();
	virtual bool IsAbleToClimb();
	virtual Vector GetFeet();
	virtual float GetStepHeight();
	virtual float GetMaxJumpHeight();
	virtual float GetDeathDropHeight();
	virtual float GetRunSpeed();
	virtual float GetWalkSpeed();
	virtual Vector GetVelocity();
	virtual float GetSpeed();
	virtual Vector GetMotionVector();
	virtual bool IsAreaTraversable(const CNavArea *);
	virtual float GetTraversableSlopeLimit();
	virtual bool IsPotentiallyTraversable(const Vector &, const Vector &, TraverseWhenType, float *);
	bool HasPotentialGap(const Vector &, const Vector &, float *);
	bool IsGap(const Vector &, const Vector &);
	virtual bool IsEntityTraversable(CBaseEntity *, TraverseWhenType);
	bool IsStuck();
	virtual float GetStuckDuration();
	virtual void ClearStuckStatus(const char *);
	virtual bool IsAttemptingToMove();

protected:

	virtual void AdjustPosture(const Vector &);
	void StuckMonitor();

	// vtable[0] Schema_DynamicBinding
	// vtable[62] Reset
	// vtable[63] Update
	// vtable[65] GetName
	// vtable[66] Approach
	// vtable[67] DriveTo
	// vtable[68] ClimbUpToLedge
	// vtable[69] JumpAcrossGap
	// vtable[70] Jump
	// vtable[71] IsClimbingOrJumping
	// vtable[72] IsClimbingUpToLedge
	// vtable[73] IsJumpingAcrossGap
	// vtable[74] IsScrambling
	// vtable[75] Run
	// vtable[76] Walk
	// vtable[77] Stop
	// vtable[78] IsRunning
	// vtable[79] SetDesiredSpeed
	// vtable[80] GetDesiredSpeed
	// vtable[81] SetSpeedLimit
	// vtable[82] GetSpeedLimit
	// vtable[83] IsOnGround
	// vtable[5] OnLeaveGround
	// vtable[6] OnLandOnGround
	// vtable[84] GetGround
	// vtable[85] GetGroundNormal
	// vtable[86] GetGroundSpeed
	// vtable[87] GetGroundMotionVector
	// vtable[88] ClimbLadder
	// vtable[89] DescendLadder
	// vtable[90] IsUsingLadder
	// vtable[91] IsAscendingOrDescendingLadder
	// vtable[92] IsAbleToAutoCenterOnLadder
	// vtable[93] FaceTowards
	// vtable[94] SetDesiredLean
	// vtable[95] GetDesiredLean
	// vtable[96] IsAbleToJumpAcrossGaps
	// vtable[97] IsAbleToClimb
	// vtable[98] GetFeet
	// vtable[99] GetStepHeight
	// vtable[100] GetMaxJumpHeight
	// vtable[101] GetDeathDropHeight
	// vtable[102] GetRunSpeed
	// vtable[103] GetWalkSpeed
	// vtable[104] GetVelocity
	// vtable[105] GetSpeed
	// vtable[106] GetMotionVector
	// vtable[107] IsAreaTraversable
	// vtable[108] GetTraversableSlopeLimit
	// vtable[109] IsPotentiallyTraversable
	// vtable[110] IsEntityTraversable
	// vtable[111] GetStuckDuration
	// vtable[112] ClearStuckStatus
	// vtable[113] IsAttemptingToMove
	// vtable[114] AdjustPosture
	// sizeof = 144
};
