// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/player/nextbotplayerlocomotion.h:21
class PlayerLocomotion : public CLocomotionBase {
	enum LadderState {
		NO_LADDER = 0,
		APPROACHING_ASCENDING_LADDER = 0x1,
		APPROACHING_DESCENDING_LADDER = 0x2,
		ASCENDING_LADDER = 0x3,
		DESCENDING_LADDER = 0x4,
		DISMOUNTING_LADDER_TOP = 0x5,
		DISMOUNTING_LADDER_BOTTOM = 0x6,
	};

public:

private:

	bool m_bIsJumping;  // +0x98

	bool m_bIsClimbingUpToLedge;  // +0xb8
	bool m_bIsJumpingAcrossGap;  // +0xb9

	bool m_bHasLeftTheGround;  // +0xc8

	float m_flFacingEaseInTime;  // +0xcc
	float m_flDesiredSpeed;  // +0xd0
	float m_flSpeedLimitMin;  // +0xd4
	float m_flSpeedLimitMax;  // +0xd8
	const CNavLadder * m_ladderInfo;  // +0xe0
	const CNavArea * m_ladderDismountGoal;  // +0xe8
	PlayerLocomotion(const PlayerLocomotion &);

	PlayerLocomotion(INextBot *);
	virtual ~PlayerLocomotion();
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
	virtual void Run();
	virtual void Walk();
	virtual void Stop();
	virtual bool IsRunning();
	virtual void SetDesiredSpeed(float);
	virtual float GetDesiredSpeed();
	virtual bool IsOnGround();
	virtual CBaseEntity * GetGround();
	virtual Vector GetGroundNormal();
	virtual void ClimbLadder(const CNavLadder *, const CNavArea *);
	virtual void DescendLadder(const CNavLadder *, const CNavArea *);
	virtual bool IsUsingLadder();
	virtual bool IsAscendingOrDescendingLadder();
	virtual void FaceTowards(const Vector &);
	virtual void SetDesiredLean(const QAngle &);
	virtual QAngle GetDesiredLean();
	virtual Vector GetFeet();
	virtual float GetStepHeight();
	virtual float GetMaxJumpHeight();
	virtual float GetDeathDropHeight();
	virtual float GetRunSpeed();
	virtual float GetWalkSpeed();
	virtual Vector GetVelocity();
	virtual void SetMinimumSpeedLimit(float);
	virtual void SetMaximumSpeedLimit(float);
	virtual bool IsAbleToAutoCenterOnLadder();

protected:

	virtual void AdjustPosture(const Vector &);

private:

	bool TraverseLadder();
	LadderState ApproachAscendingLadder();
	LadderState ApproachDescendingLadder();
	LadderState AscendLadder();
	LadderState DescendLadder();
	LadderState DismountLadderTop();
	LadderState DismountLadderBottom();
	bool IsClimbPossible(INextBot *, const CBaseEntity *);

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
	// vtable[75] Run
	// vtable[76] Walk
	// vtable[77] Stop
	// vtable[78] IsRunning
	// vtable[79] SetDesiredSpeed
	// vtable[80] GetDesiredSpeed
	// vtable[83] IsOnGround
	// vtable[84] GetGround
	// vtable[85] GetGroundNormal
	// vtable[88] ClimbLadder
	// vtable[89] DescendLadder
	// vtable[90] IsUsingLadder
	// vtable[91] IsAscendingOrDescendingLadder
	// vtable[93] FaceTowards
	// vtable[94] SetDesiredLean
	// vtable[95] GetDesiredLean
	// vtable[98] GetFeet
	// vtable[99] GetStepHeight
	// vtable[100] GetMaxJumpHeight
	// vtable[101] GetDeathDropHeight
	// vtable[102] GetRunSpeed
	// vtable[103] GetWalkSpeed
	// vtable[104] GetVelocity
	// vtable[115] SetMinimumSpeedLimit
	// vtable[116] SetMaximumSpeedLimit
	// vtable[92] IsAbleToAutoCenterOnLadder
	// vtable[114] AdjustPosture
	// sizeof = 264
};
