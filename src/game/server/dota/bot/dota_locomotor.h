// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_locomotor.h:14
struct CDOTA_TurnData {
	float m_flMaxTurnSpeed;  // +0x0
	float m_flTurnAcceleration;  // +0x4
	float m_flTurnDeceleration;  // +0x8
	float m_flImmediateMovementAngle;  // +0xc
	float m_flFullTurnMovementAngle;  // +0x10
	float m_flCastAngle180;  // +0x14
	float m_flCastAngle135;  // +0x18
	float m_flCastAngle90;  // +0x1c
	float m_flCastAngle45;  // +0x20
	float m_flCastAngle11;  // +0x24

	// sizeof = 40
};

// src/game/server/dota/bot/dota_locomotor.h:31
class CDOTALocomotor : public CLocomotionBase {
public:

private:

	bool m_bMoving;  // +0x90

	float m_flGroundMoveSpeed;  // +0xac
	bool m_bFacing;  // +0xb0

	float m_flFacingAngle;  // +0xb4

	bool m_bMotionControllerUpdateInProgress;  // +0xd0
	bool m_bMotionControllerRemoved;  // +0xd1

	bool m_bMostRecentMotionIsFromMotionControllers;  // +0xf4

	float m_flYawVelocity;  // +0x104
	float m_positionHistoryX[119];  // +0x108
	float m_positionHistoryY[119];  // +0x2e4
	int m_nPositionHistoryIndex;  // +0x4c0
	int m_nFrameLastUpdated;  // +0x4c4

	bool m_bIsLeashed;  // +0x4f0

	float m_flMaxDistanceFromLeashPoint;  // +0x4f4
	CDOTALocomotor(CDOTALocomotor &);
	CDOTALocomotor(const CDOTALocomotor &);
	CDOTALocomotor(CDOTA_BaseNPC *);
	virtual void Update();
	virtual const char * GetName();
	virtual void Approach(const Vector &, float);
	virtual Vector GetFeet();
	virtual float GetStepHeight();
	virtual float GetMaxJumpHeight();
	virtual float GetDeathDropHeight();
	virtual bool IsAbleToJumpAcrossGaps();
	virtual bool IsAbleToClimb();
	virtual void FaceTowards(const Vector &);
	void SetDestinationVector(Vector);
	void StopMovement(bool);
	bool IsMoving();
	virtual void Stop();
	virtual void FaceTowards(float);
	bool IsFacingLocation(const Vector &, float);
	void StopFacing();
	bool ShouldTurnAnimate();
	bool IsMovementStunned();
	void UpdateFacing(CDOTA_BaseNPC *);
	void SetGroundMoveSpeed(float);
	float GetGroundMoveSpeed();
	void SetLastTargetPosition(const Vector &);
	Vector GetLastTargetPosition();
	bool ApplyHorizontalMotionController(CHorizontalMotionController *, bool);
	bool ApplyVerticalMotionController(CVerticalMotionController *, bool);
	void RemoveHorizontalMotionController(CHorizontalMotionController *);
	void RemoveVerticalMotionController(CVerticalMotionController *);
	void InterruptMotionControllers(bool);
	void InterruptHorizontalMotionController(bool);
	void InterruptVerticalMotionController(bool);
	bool IsCurrentlyMotionControlled();
	bool IsCurrentlyHorizontalMotionControlled();
	bool IsCurrentlyVerticalMotionControlled();
	bool IsMostRecentMotionFromMotionControllers();
	bool MotionControllersIgnoreIntermediateMovement();
	bool HasMotionControllerWithHigherPriority(int);
	bool IsPhasedFromMotionControl();
	void SetMotionControlStartPosition(Vector);
	Vector GetMotionControlStartPosition();
	Vector GetCurrentVelocityForTargeting();
	Vector GetPositionInPastForTargeting(float);
	Vector GetAverageVelocityOverTime(float);
	float GetAverageVelocityStability();
	Vector GetCurrentTargetVelocity();
	void WipePositionHistoryToCurrentPosition();
	void GetTurnData(CDOTA_TurnData &, float);
	float GetCastAngle(CDOTA_BaseNPC *, const Vector &);
	float GetFacingAngle();
	Vector GetPositionLastFrame();
	void SetLeash(bool, float, Vector);
	bool IsLeashedMovementPrevented(Vector);
	bool IsTurnPrevented(CDOTA_BaseNPC *);
	void PostRemoveMotionController(bool);
	void RecordPositionInHistory();
	void InitializeTurnDataEntries();
	CDOTA_BaseNPC * GetMe();
	void UpdateStandardMovement(CDOTA_BaseNPC *);
	void UpdateMotionControlledMovement(CDOTA_BaseNPC *);
	void DoTriggerSweep(CDOTA_BaseNPC *);
	virtual ~CDOTALocomotor();

	// vtable[63] Update
	// vtable[65] GetName
	// vtable[66] Approach
	// vtable[98] GetFeet
	// vtable[99] GetStepHeight
	// vtable[100] GetMaxJumpHeight
	// vtable[101] GetDeathDropHeight
	// vtable[96] IsAbleToJumpAcrossGaps
	// vtable[97] IsAbleToClimb
	// vtable[93] FaceTowards
	// vtable[77] Stop
	// vtable[115] FaceTowards
	// sizeof = 1288
};

// src/game/server/dota/bot/dota_locomotor.h:224
class CHorizontalMotionController {
	int ()() * * _vptr.CHorizontalMotionController;  // +0x0
private:

	int m_nPriority;  // +0x8
	CHorizontalMotionController(CHorizontalMotionController &);
	CHorizontalMotionController(const CHorizontalMotionController &);
	~CHorizontalMotionController();

	CHorizontalMotionController(int);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IgnoresIntermediateMovement();
	virtual bool IsPhasedWhileMotionControlled();
	int GetPriority();
	void SetPriority(int);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] UpdateHorizontalMotion
	// vtable[2] OnHorizontalMotionInterrupted
	// vtable[3] IsHorizontalMotionValidToApply
	// vtable[4] IgnoresIntermediateMovement
	// vtable[5] IsPhasedWhileMotionControlled
	// sizeof = 16
};

// src/game/server/dota/bot/dota_locomotor.h:246
class CVerticalMotionController {
	int ()() * * _vptr.CVerticalMotionController;  // +0x0
private:

	int m_nPriority;  // +0x8
	CVerticalMotionController(CVerticalMotionController &);
	CVerticalMotionController(const CVerticalMotionController &);
	~CVerticalMotionController();

	CVerticalMotionController(int);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IgnoresIntermediateMovement();
	int GetPriority();
	void SetPriority(int);
	bool UpdateSimpleAirTime(CDOTA_BaseNPC *, float, float, float, float);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] UpdateVerticalMotion
	// vtable[2] OnVerticalMotionInterrupted
	// vtable[3] IsVerticalMotionValidToApply
	// vtable[4] IgnoresIntermediateMovement
	// sizeof = 16
};
