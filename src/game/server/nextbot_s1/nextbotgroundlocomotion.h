// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotgroundlocomotion.h:28
class NextBotGroundLocomotion : public CLocomotionBase {
public:

private:

protected:

	float m_flDesiredSpeed;  // +0xc8
	float m_flActualSpeed;  // +0xcc
	float m_flMaxRunSpeed;  // +0xd0
	float m_flForwardLean;  // +0xd4
	float m_flSideLean;  // +0xd8
	bool m_bIsJumping;  // +0xe8
	bool m_bIsJumpingAcrossGap;  // +0xe9

	EHANDLE m_hGround;  // +0xec
	bool m_bIsClimbingUpToLedge;  // +0x108

	bool m_bIsUsingFullFeetTrace;  // +0x118

	const CNavHandle<CNavLadder> m_hLadder;  // +0x120
	const CNavHandle<CNavArea> m_hLadderDismountGoalArea;  // +0x130
	bool m_bIsGoingUpLadder;  // +0x140

	float m_flMoveYaw;  // +0x16c
	float m_flAccumApproachWeights;  // +0x17c
	bool m_bRecomputePostureOnCollision;  // +0x180

	EHANDLE m_hIgnorePhysicsProp;  // +0x1a0
	Activity m_actJump;  // +0x1a4
	Activity m_actJumpAcrossGap;  // +0x1a8
	Activity m_actLadderDismount;  // +0x1ac
	NextBotGroundLocomotion(const NextBotGroundLocomotion &);

private:

	NextBotGroundLocomotion(INextBot *);
	virtual ~NextBotGroundLocomotion();
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
	virtual float GetSpeedLimit();
	virtual bool IsOnGround();
	virtual void OnLeaveGround(CBaseEntity *);
	virtual void OnLandOnGround(CBaseEntity *);
	virtual CBaseEntity * GetGround();
	virtual Vector GetGroundNormal();
	virtual void ClimbLadder(const CNavLadder *, const CNavArea *);
	virtual void DescendLadder(const CNavLadder *, const CNavArea *);
	virtual bool IsUsingLadder();
	virtual bool IsAscendingOrDescendingLadder();
	virtual void FaceTowards(const Vector &);
	virtual void SetDesiredLean(const QAngle &);
	virtual QAngle GetDesiredLean();
	virtual float GetStepHeight();
	virtual float GetMaxJumpHeight();
	virtual float GetDeathDropHeight();
	virtual float GetRunSpeed();
	virtual float GetWalkSpeed();
	virtual Vector GetVelocity();
	virtual void OnAnimationActivityComplete(Activity);
	virtual void OnMoveToSuccess();
	virtual void OnMoveToFailure(MoveToFailureType);
	virtual float GetMaxAcceleration();
	virtual float GetGravity();
	virtual float GetFrictionForward();
	virtual float GetFrictionSideways();
	virtual float GetMaxYawRate();
	virtual Vector GetMoveVector();
	void SetAcceleration(const Vector &);
	void SetVelocity(const Vector &);
	bool DidJustJump();
	virtual void UpdatePosition(const Vector &);
	virtual void UpdateGroundConstraint();
	virtual Vector ResolveCollision(const Vector &, const Vector &, int);
	virtual bool DetectCollision(trace_t *, int &, const Vector &, const Vector &, const Vector &, const Vector &);
	virtual Vector ResolveActorCollisions(const Vector &);
	virtual bool OnStandingOnNonWorldEntity(CBaseEntity &);
	virtual bool TraverseLadder();
	virtual Activity CalcClimbUpToLedgeActivity(float, float *);

protected:

	void ApplyAccumulatedApproach();

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
	// vtable[82] GetSpeedLimit
	// vtable[83] IsOnGround
	// vtable[5] OnLeaveGround
	// vtable[6] OnLandOnGround
	// vtable[84] GetGround
	// vtable[85] GetGroundNormal
	// vtable[88] ClimbLadder
	// vtable[89] DescendLadder
	// vtable[90] IsUsingLadder
	// vtable[91] IsAscendingOrDescendingLadder
	// vtable[93] FaceTowards
	// vtable[94] SetDesiredLean
	// vtable[95] GetDesiredLean
	// vtable[99] GetStepHeight
	// vtable[100] GetMaxJumpHeight
	// vtable[101] GetDeathDropHeight
	// vtable[102] GetRunSpeed
	// vtable[103] GetWalkSpeed
	// vtable[104] GetVelocity
	// vtable[13] OnAnimationActivityComplete
	// vtable[8] OnMoveToSuccess
	// vtable[9] OnMoveToFailure
	// vtable[115] GetMaxAcceleration
	// vtable[116] GetGravity
	// vtable[117] GetFrictionForward
	// vtable[118] GetFrictionSideways
	// vtable[119] GetMaxYawRate
	// vtable[120] GetMoveVector
	// vtable[121] UpdatePosition
	// vtable[122] UpdateGroundConstraint
	// vtable[123] ResolveCollision
	// vtable[124] DetectCollision
	// vtable[125] ResolveActorCollisions
	// vtable[126] OnStandingOnNonWorldEntity
	// vtable[127] TraverseLadder
	// vtable[128] CalcClimbUpToLedgeActivity
	// sizeof = 432
};
