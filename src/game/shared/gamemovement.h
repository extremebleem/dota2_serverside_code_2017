// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamemovement.h:35
class CGameMovement : public IGameMovement {
	enum {
		GROUND = 0,
		STUCK = 0x1,
		LADDER = 0x2,
		LADDER_WEDGE = 0x3,
	};

	enum {
		MAX_PC_CACHE_SLOTS = 0x3,
	};

public:

protected:

	int m_nOldWaterLevel;  // +0x18
	float m_flWaterEntryTime;  // +0x1c
	int m_nOnLadder;  // +0x20
	long long unsigned int m_CachedGetPointContents[65][3];  // +0x48
	bool m_bSpeedCropped;  // +0xf84
	bool m_bProcessingMovement;  // +0xf85
	bool m_bInStuckTest;  // +0xf86

	CUtlMap<CEntityIndex, float, short unsigned int, bool (*)(const CEntityIndex&, const CEntityIndex&)> m_mapLastVelocitySpewTime;  // +0xf88
	float m_flStuckCheckTime[66][2];  // +0xfb0
	int m_nTraceCount;  // +0x11c0
	typedef enum {
		GROUND = 0,
		STUCK = 0x1,
		LADDER = 0x2,
		LADDER_WEDGE = 0x3,
	} IntervalType_t;
	void CGameMovement(CGameMovement *, CGameMovement &);
	void CGameMovement(CGameMovement *, const CGameMovement &);
	void CGameMovement(CGameMovement *);
	virtual bool Init(CGameMovement *);
	virtual void Shutdown(CGameMovement *);
	virtual void Reset(CGameMovement *);
	virtual void ProcessMovement(CGameMovement *, CBasePlayer *, CMoveData *);
	virtual void StartTrackPredictionErrors(CGameMovement *, CBasePlayer *);
	virtual void FinishTrackPredictionErrors(CGameMovement *, CBasePlayer *);
	virtual void DiffPrint(CGameMovement *, const char *, ...);
	virtual const Vector & GetPlayerMins(const CGameMovement *, bool);
	virtual const Vector & GetPlayerMaxs(const CGameMovement *, bool);
	virtual const Vector & GetPlayerViewOffset(const CGameMovement *, bool);
	virtual float GetMinGroundNormalZ(const CGameMovement *);
	virtual void TracePlayerBBox(CGameMovement *, const Vector &, const Vector &, uint64, int, trace_t &);
	void GameMovementTraceHull(CGameMovement *, const Vector &, const Vector &, const Vector &, const Vector &, uint64, CTraceFilter *, trace_t *);
	virtual uint64 PlayerSolidMask(const CGameMovement *, bool, CBasePlayer *);
	CMoveData * GetMoveData(CGameMovement *);
	virtual void PlayerMove(CGameMovement *);
	void FinishMove(CGameMovement *);
	virtual float CalcRoll(CGameMovement *, const QAngle &, const Vector &, float, float);
	virtual void DecayPunchAngle(CGameMovement *);
	virtual void CheckWaterJump(CGameMovement *);
	virtual void WaterMove(CGameMovement *);
	virtual bool CanPlayerSwim(CGameMovement *);
	virtual void WaterJump(CGameMovement *);
	virtual void Friction(CGameMovement *);
	virtual void AirAccelerate(CGameMovement *, Vector &, float, float);
	virtual void AirMove(CGameMovement *);
	virtual bool CanAccelerate(CGameMovement *);
	void Accelerate(CGameMovement *, Vector &, float, float);
	virtual void WalkMove(CGameMovement *);
	virtual bool CanStayOnGround(const CGameMovement *);
	virtual void StayOnGround(CGameMovement *);
	virtual void FullWalkMove(CGameMovement *);
	virtual void OnTryPlayerMoveCollision(CGameMovement *, trace_t &);
	virtual const Vector & GetPlayerMins(const CGameMovement *);
	virtual const Vector & GetPlayerMaxs(const CGameMovement *);
	virtual int GetCheckInterval(CGameMovement *, IntervalType_t);
	bool CheckInterval(CGameMovement *, IntervalType_t);
	virtual void StartGravity(CGameMovement *);
	virtual void FinishGravity(CGameMovement *);
	virtual void AddGravity(CGameMovement *);
	void FullNoClipMove(CGameMovement *, float, float);
	virtual bool CheckJumpButton(CGameMovement *);
	virtual void CheckLungeButton(CGameMovement *);
	virtual void FullTossMove(CGameMovement *);
	void FullObserverMove(CGameMovement *);
	virtual void FullLadderMove(CGameMovement *);
	virtual void FullCustomMove(CGameMovement *);
	virtual int TryPlayerMove(CGameMovement *, Vector *, trace_t *);
	virtual int TryAirPlayerMove(CGameMovement *);
	virtual void HandleCustomCollision(CGameMovement *, const Vector &, const Vector &, trace_t *);
	virtual bool LadderMove(CGameMovement *);
	virtual bool OnLadder(CGameMovement *, trace_t &);
	virtual float LadderDistance(const CGameMovement *);
	virtual uint64 LadderMask(const CGameMovement *);
	virtual float ClimbSpeed(const CGameMovement *);
	virtual float LadderLateralMultiplier(const CGameMovement *);
	void CheckVelocity(CGameMovement *, const char *);
	void PushEntity(CGameMovement *, Vector &, trace_t *);
	virtual int ClipVelocity(CGameMovement *, Vector &, Vector &, Vector &, float);
	int CheckStuck(CGameMovement *);
	virtual bool CanBeStuck(CGameMovement *);
	virtual bool CheckWater(CGameMovement *);
	virtual void GetWaterCheckPosition(CGameMovement *, int, Vector *);
	virtual void CategorizePosition(CGameMovement *, bool);
	virtual void CheckParameters(CGameMovement *);
	virtual void ReduceTimers(CGameMovement *);
	virtual void CheckFalling(CGameMovement *);
	virtual void PlayerRoughLandingEffects(CGameMovement *, float);
	void PlayerWaterSounds(CGameMovement *);
	void ResetGetWaterContentsForPointCache(CGameMovement *);
	uint64 GetWaterContentsForPointCached(CGameMovement *, const Vector &, int);
	virtual void Duck(CGameMovement *);
	virtual void HandleDuckingSpeedCrop(CGameMovement *);
	virtual void FinishUnDuck(CGameMovement *);
	virtual void FinishDuck(CGameMovement *);
	virtual bool CanUnduck(CGameMovement *);
	virtual void UpdateDuckJumpEyeOffset(CGameMovement *);
	virtual bool CanUnDuckJump(CGameMovement *, trace_t &);
	virtual void StartUnDuckJump(CGameMovement *);
	virtual void FinishUnDuckJump(CGameMovement *, trace_t &);
	virtual void SetDuckedEyeOffset(CGameMovement *, float);
	virtual void FixPlayerCrouchStuck(CGameMovement *, bool);
	float SplineFraction(CGameMovement *, float, float);
	virtual void CategorizeGroundSurface(CGameMovement *, trace_t &);
	virtual bool InWater(CGameMovement *);
	void IsometricMove(CGameMovement *);
	virtual CBaseHandle TestPlayerPosition(CGameMovement *, const Vector &, int, trace_t &);
	virtual void PlaySwimSound(CGameMovement *);
	bool IsDead(const CGameMovement *);
	float ComputeConstraintSpeedFactor(CGameMovement *);
	virtual void SetGroundEntity(CGameMovement *, trace_t *);
	virtual void StepMove(CGameMovement *, Vector &, trace_t &);
	virtual CTraceFilter * LockTraceFilter(CGameMovement *, int);
	virtual void UnlockTraceFilter(CGameMovement *, CTraceFilter * &);
	void PerformFlyCollisionResolution(CGameMovement *, trace_t &, Vector &);
	virtual bool GameHasLadders(const CGameMovement *);
	virtual void ~CGameMovement(CGameMovement *, int);

// vtable[2] Init
// vtable[3] Shutdown
// vtable[5] Reset
// vtable[4] ProcessMovement
// vtable[6] StartTrackPredictionErrors
// vtable[7] FinishTrackPredictionErrors
// vtable[8] DiffPrint
// vtable[9] GetPlayerMins
// vtable[10] GetPlayerMaxs
// vtable[11] GetPlayerViewOffset
// vtable[12] GetMinGroundNormalZ
// vtable[13] TracePlayerBBox
// vtable[14] PlayerSolidMask
// vtable[15] PlayerMove
// vtable[16] CalcRoll
// vtable[17] DecayPunchAngle
// vtable[18] CheckWaterJump
// vtable[19] WaterMove
// vtable[20] CanPlayerSwim
// vtable[21] WaterJump
// vtable[22] Friction
// vtable[23] AirAccelerate
// vtable[24] AirMove
// vtable[25] CanAccelerate
// vtable[26] WalkMove
// vtable[27] CanStayOnGround
// vtable[28] StayOnGround
// vtable[29] FullWalkMove
// vtable[30] OnTryPlayerMoveCollision
// vtable[31] GetPlayerMins
// vtable[32] GetPlayerMaxs
// vtable[33] GetCheckInterval
// vtable[34] StartGravity
// vtable[35] FinishGravity
// vtable[36] AddGravity
// vtable[37] CheckJumpButton
// vtable[38] CheckLungeButton
// vtable[39] FullTossMove
// vtable[40] FullLadderMove
// vtable[41] FullCustomMove
// vtable[42] TryPlayerMove
// vtable[43] TryAirPlayerMove
// vtable[44] HandleCustomCollision
// vtable[45] LadderMove
// vtable[46] OnLadder
// vtable[47] LadderDistance
// vtable[48] LadderMask
// vtable[49] ClimbSpeed
// vtable[50] LadderLateralMultiplier
// vtable[51] ClipVelocity
// vtable[52] CanBeStuck
// vtable[53] CheckWater
// vtable[54] GetWaterCheckPosition
// vtable[55] CategorizePosition
// vtable[56] CheckParameters
// vtable[57] ReduceTimers
// vtable[58] CheckFalling
// vtable[59] PlayerRoughLandingEffects
// vtable[60] Duck
// vtable[61] HandleDuckingSpeedCrop
// vtable[62] FinishUnDuck
// vtable[63] FinishDuck
// vtable[64] CanUnduck
// vtable[65] UpdateDuckJumpEyeOffset
// vtable[66] CanUnDuckJump
// vtable[67] StartUnDuckJump
// vtable[68] FinishUnDuckJump
// vtable[69] SetDuckedEyeOffset
// vtable[70] FixPlayerCrouchStuck
// vtable[71] CategorizeGroundSurface
// vtable[72] InWater
// vtable[73] TestPlayerPosition
// vtable[74] PlaySwimSound
// vtable[75] SetGroundEntity
// vtable[76] StepMove
// vtable[77] LockTraceFilter
// vtable[78] UnlockTraceFilter
// vtable[79] GameHasLadders
};
