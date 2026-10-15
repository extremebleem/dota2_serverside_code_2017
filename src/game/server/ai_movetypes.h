// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ai_movetypes.h:92
struct AIMoveTrace_t {
	float flTotalDist;  // +0x28
	float flDistObstructed;  // +0x2c
	float flDistObstructedByGoal;  // +0x30
	float flStepUpDistance;  // +0x40
	AIMoveTrace_t();

	// sizeof = 72
};

// src/game/server/ai_movetypes.h:139
struct AILocalMoveGoal_t {
	float flSpeed;  // +0x24
	float flMaxDist;  // +0x28
	float flCurExpectedDist;  // +0x2c

	uint32 flags;  // +0x40

	bool bHasTraced;  // +0x50

	AILocalMoveGoal_t();

	// sizeof = 232
};

// src/game/server/ai_movetypes.h:198
class IAI_MovementSink {
	int ()() * * _vptr.IAI_MovementSink;  // +0x0
	IAI_MovementSink(IAI_MovementSink &);
	IAI_MovementSink(const IAI_MovementSink &);
	IAI_MovementSink();
	virtual float CalcYawSpeed();
	virtual bool OnCalcBaseMove(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnObstructionPreSteer(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnFailedSteer(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnFailedLocalNavigation(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnInsufficientStopDist(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnMoveBlocked(AIMoveResult_t *);
	virtual bool OnObstructionIsGoal(float, AIMoveResult_t *);
	virtual bool OnMoveStalled(const AILocalMoveGoal_t &);
	virtual bool OnMoveExecuteFailed(const AILocalMoveGoal_t &, const AIMoveTrace_t &, AIMotorMoveResult_t, AIMoveResult_t *);

	// vtable[0] CalcYawSpeed
	// vtable[1] OnCalcBaseMove
	// vtable[2] OnObstructionPreSteer
	// vtable[3] OnFailedSteer
	// vtable[4] OnFailedLocalNavigation
	// vtable[5] OnInsufficientStopDist
	// vtable[6] OnMoveBlocked
	// vtable[7] OnObstructionIsGoal
	// vtable[8] OnMoveStalled
	// vtable[9] OnMoveExecuteFailed
	// sizeof = 8
};

// src/game/server/ai_movetypes.h:233
class CAI_DefMovementSink : public IAI_MovementSink {
public:

	CAI_DefMovementSink(CAI_DefMovementSink &);
	CAI_DefMovementSink(const CAI_DefMovementSink &);
	CAI_DefMovementSink();
	virtual float CalcYawSpeed();
	virtual bool OnCalcBaseMove(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnObstructionPreSteer(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnFailedSteer(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnFailedLocalNavigation(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnInsufficientStopDist(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnMoveBlocked(AIMoveResult_t *);
	virtual bool OnObstructionIsGoal(float, AIMoveResult_t *);
	virtual bool OnMoveStalled(const AILocalMoveGoal_t &);
	virtual bool OnMoveExecuteFailed(const AILocalMoveGoal_t &, const AIMoveTrace_t &, AIMotorMoveResult_t, AIMoveResult_t *);

	// vtable[0] CalcYawSpeed
	// vtable[1] OnCalcBaseMove
	// vtable[2] OnObstructionPreSteer
	// vtable[3] OnFailedSteer
	// vtable[4] OnFailedLocalNavigation
	// vtable[5] OnInsufficientStopDist
	// vtable[6] OnMoveBlocked
	// vtable[7] OnObstructionIsGoal
	// vtable[8] OnMoveStalled
	// vtable[9] OnMoveExecuteFailed
	// sizeof = 8
};

// src/game/server/ai_movetypes.h:260
class CAI_ProxyMovementSink : public CAI_DefMovementSink {
public:

	~CAI_ProxyMovementSink();
	CAI_ProxyMovementSink();
	void Init(IAI_MovementSink *);
	virtual float CalcYawSpeed();
	virtual bool OnCalcBaseMove(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnObstructionPreSteer(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnFailedSteer(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnFailedLocalNavigation(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnInsufficientStopDist(AILocalMoveGoal_t *, float, AIMoveResult_t *);
	virtual bool OnMoveBlocked(AIMoveResult_t *);
	virtual bool OnObstructionIsGoal(float, AIMoveResult_t *);
	virtual bool OnMoveStalled(const AILocalMoveGoal_t &);
	virtual bool OnMoveExecuteFailed(const AILocalMoveGoal_t &, const AIMoveTrace_t &, AIMotorMoveResult_t, AIMoveResult_t *);

	// vtable[0] CalcYawSpeed
	// vtable[1] OnCalcBaseMove
	// vtable[2] OnObstructionPreSteer
	// vtable[3] OnFailedSteer
	// vtable[4] OnFailedLocalNavigation
	// vtable[5] OnInsufficientStopDist
	// vtable[6] OnMoveBlocked
	// vtable[7] OnObstructionIsGoal
	// vtable[8] OnMoveStalled
	// vtable[9] OnMoveExecuteFailed
	// sizeof = 16
};
