// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/base_playeranimstate.h:39
class CModAnimConfig {
	float m_flMaxBodyYawDegrees;  // +0x0
	float m_flMinBodyYawDegrees;  // +0x4
	LegAnimType_t m_LegAnimType;  // +0x8
	bool m_bUseAimSequences;  // +0xc

	// sizeof = 16
};

// src/game/shared/base_playeranimstate.h:62
class CBasePlayerAnimState : virtual public IPlayerAnimState {
	enum {
		TURN_NONE = 0,
		TURN_LEFT = 0x1,
		TURN_RIGHT = 0x2,
	};

	enum {
		NUM_FLEX_MAPPINGS = 0x4,
	};

public:

protected:

	float m_flEyeYaw;  // +0x28
	float m_flEyePitch;  // +0x2c

	float m_flGoalFeetYaw;  // +0x48
	bool m_isBackpedaling;  // +0x4c

	int m_poseParamMoveX;  // +0x50
	int m_poseParamMoveY;  // +0x54
	int m_poseParamMoveYaw;  // +0x58
	int m_poseParamHeadPitch;  // +0x5c
	int m_poseParamBodyPitch;  // +0x60
	int m_poseParamHeadYaw;  // +0x64
	int m_poseParamBodyYaw;  // +0x68
	float m_flCurrentFeetYaw;  // +0x6c
	bool m_bCurrentFeetYawInitialized;  // +0x70

	float m_flCurrentTorsoYaw;  // +0x74
	float m_flLastYaw;  // +0x78
	float m_flLastTurnTime;  // +0x7c
	int m_nTurningInPlace;  // +0x80
	float m_flLastBodyHeadTurnTime;  // +0x98
	float m_flLastEyeYaw;  // +0x9c
	float m_flSnapBodyToEyesTime;  // +0xa0
	float m_flLastMoveYaw;  // +0xa4
private:

	float m_flMaxGroundSpeed;  // +0xa8
	float m_flLastAnimationStateClearTime;  // +0xac
	Activity m_eCurrentMainSequenceActivity;  // +0xb8
	float m_flGaitYaw;  // +0xbc
	float m_flStoredCycle;  // +0xc0
	int m_flexPoseParameters[4];  // +0xd4

	CBasePlayerAnimState(int, const void * *, const CBasePlayerAnimState &);
	CBasePlayerAnimState(int, const void * *);
	virtual ~CBasePlayerAnimState(int, const void * *);
	void Init(CBaseAnimatingOverlay *, const CModAnimConfig &);
	virtual void Release();
	virtual void OnNewModel();
	virtual void Update(float, float);
	virtual void ClearAnimationState();
	virtual void ClearAnimationLayers();
	virtual const QAngle & GetRenderAngles();
	virtual void OnMainActivityChanged(Activity, Activity);
	virtual bool ShouldUpdateAnimState();
	virtual void ComputeSequences(const CModel *);
	virtual Activity CalcMainActivity();
	virtual HSequence CalcAimLayerSequence(float *, float *, bool);
	virtual bool ShouldChangeSequences();
	virtual bool ShouldBlendAimSequenceToIdle();
	virtual float SetOuterBodyYaw(float);
	virtual bool CanThePlayerMove();
	virtual float GetCurrentMaxGroundSpeed();
	void DebugShowAnimStateFull(int);
	virtual int DebugShowAnimState(int);
	void AnimStatePrintf(int, const char *, ...);
	void AnimStateLog(const char *, ...);
	virtual float CalcMovementPlaybackRate(bool *);
	virtual Activity TranslateActivity(Activity);
	virtual Activity UnTranslateActivity(Activity);
	virtual HSequence SelectWeightedSequence(Activity);
	virtual void CachePoseParameters();
	CBaseAnimatingOverlay * GetOuter();
	void RestartMainSequence();
	virtual float GetFeetYawRate();

protected:

	virtual HSequence CalcSequenceIndex(const char *, ...);
	Activity GetCurrentMainSequenceActivity();
	void GetOuterAbsVelocity(Vector &);
	float GetOuterXYSpeed();
	float TimeSinceLastAnimationStateClear();
	float GetEyeYaw();
	void SetOuterPoseParameter(int, float);
	bool IsDebugPlayer();
	virtual void OnFeetFixedUp();
	virtual void UpdateAnimConfig(CModAnimConfig *);
	virtual int ConvergeAngles(float, float, float, float, float &);
	virtual void ComputePoseParam_MoveYaw(const CModel *);
	virtual void ComputePoseParam_BodyPitch(const CModel *);
	virtual void ComputePoseParam_BodyYaw();
	virtual void ComputePoseParam_FlexAnim(const CModel *);
	virtual void UpdateFootYaws();
	virtual bool ForceFeetToEyes();
	virtual void ResetGroundSpeed();
	virtual bool ShouldResetGroundSpeed(Activity, Activity);
	float SnapYawTo(float);
	float ConvergePoseParams(float, int, int);
	float SnapPoseParams(int, int, float, float);
	virtual bool CanPoseParamsConverge(int, int);

private:

	void UpdateProneState();
	const char * GetWeaponSuffix();
	Activity BodyYawTranslateActivity(Activity);
	void EstimateYaw();
	virtual bool ShouldResetMainSequence(HSequence, HSequence);
	void ComputeMainSequence();
	void ComputeAimSequence();
	void ComputePlaybackRate();
	void UpdateInterpolators();
	float GetInterpolatedGroundSpeed();
	void UpdateAimSequenceLayers(float, int, bool, CSequenceTransitioner *, float);
	void OptimizeLayerWeights(int, int);

	// vtable[0] Release
	// vtable[1] OnNewModel
	// vtable[2] Update
	// vtable[3] ClearAnimationState
	// vtable[8] ClearAnimationLayers
	// vtable[4] GetRenderAngles
	// vtable[5] OnMainActivityChanged
	// vtable[9] ShouldUpdateAnimState
	// vtable[10] ComputeSequences
	// vtable[11] CalcMainActivity
	// vtable[12] CalcAimLayerSequence
	// vtable[13] ShouldChangeSequences
	// vtable[14] ShouldBlendAimSequenceToIdle
	// vtable[15] SetOuterBodyYaw
	// vtable[16] CanThePlayerMove
	// vtable[17] GetCurrentMaxGroundSpeed
	// vtable[18] DebugShowAnimState
	// vtable[19] CalcMovementPlaybackRate
	// vtable[20] TranslateActivity
	// vtable[21] UnTranslateActivity
	// vtable[22] SelectWeightedSequence
	// vtable[23] CachePoseParameters
	// vtable[24] GetFeetYawRate
	// vtable[25] CalcSequenceIndex
	// vtable[26] OnFeetFixedUp
	// vtable[27] UpdateAnimConfig
	// vtable[28] ConvergeAngles
	// vtable[29] ComputePoseParam_MoveYaw
	// vtable[30] ComputePoseParam_BodyPitch
	// vtable[31] ComputePoseParam_BodyYaw
	// vtable[32] ComputePoseParam_FlexAnim
	// vtable[33] UpdateFootYaws
	// vtable[34] ForceFeetToEyes
	// vtable[35] ResetGroundSpeed
	// vtable[36] ShouldResetGroundSpeed
	// vtable[37] CanPoseParamsConverge
	// vtable[38] ShouldResetMainSequence

	// sizeof = 312
};
