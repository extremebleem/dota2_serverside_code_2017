// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_animstate.h:28
struct GestureSlot_t {
	int m_iGestureSlot;  // +0x0
	Activity m_iActivity;  // +0x4
	bool m_bAutoKill;  // +0x8
	bool m_bActive;  // +0x9

	float m_fFadeIn;  // +0x18
	float m_fFadeOut;  // +0x1c
	float m_flAnimTime;  // +0x20
	float m_flAnimStartTime;  // +0x24
	bool m_bFadeAndDie;  // +0x28

	float m_flStartWeight;  // +0x2c
	float m_flStartFadeTime;  // +0x30
	float m_flSuppressedWeight;  // +0x34

	// sizeof = 56
};

// src/game/shared/dota/dota_animstate.h:54
class CDOTAAnimState {
	int ()() * * _vptr.CDOTAAnimState;  // +0x0
protected:

	int m_nGestureTriggeredUnitAnim;  // +0x28
	bool m_bSuppressConstantLayer;  // +0x2c

	int m_nGestureSlotForSuppression;  // +0x30
	CDOTAAnimState(const CDOTAAnimState &);
	CDOTAAnimState();
	CDOTAAnimState(CDOTA_BaseNPC *);
	~CDOTAAnimState();
	virtual void ClearAnimationState();
	virtual void Update();
	virtual void Release();
	void OnNewModel(HModel, HModel);
	void ResetGestureSlots();
	void ResetGestureSlot(int);
	void ResetGesture(Activity);
	void RestartGesture(int, Activity, bool, HSequence, float, float, float);
	void ResetSlotActivity(int, Activity);
	void ResetGestureBySequence(HSequence);
	void SetGesturePlaybackRate(int, float);
	CAnimationLayer * GetAnimationLayerForSlot(int);
	GestureSlot_t * GetGestureinSlot(int);
	float GetIntervalTime(int);
	bool IsGestureSlotActive(int);
	void FadeAndDestroyGesture(Activity, int);
	void FadeAndDestroySlot(int);
	void SuppressConstantLayer(bool, int);
	bool IsSuppressingConstantLayer();
	virtual void Init(CDOTA_BaseNPC *);
	CDOTA_BaseNPC * GetBaseUnit();
	virtual HSequence SelectWeightedSequence(Activity);
	bool InitGestureSlots();
	void ShutdownGestureSlots();
	bool IsGestureSlotPlayingActivity(int, Activity);
	bool IsGestureSlotPlayingSequence(int, HSequence);
	void AddToGestureSlot(int, Activity, bool, HSequence, float, float);
	void ComputeGestureSequence(const CModel *);
	void UpdateGestureLayer(const CModel *, GestureSlot_t *);
	void DebugGestureInfo();
	void RunGestureSlotAnimEventsToCompletion(GestureSlot_t *);
	virtual void PlayFlinchGesture(Activity);
	virtual void ComputeSequences(const CModel *);
	void ComputeMainSequence();
	void ComputeFireSequence();
	void ComputeDeployedSequence();
	bool ShouldUpdateAnimState();

	// vtable[0] ClearAnimationState
	// vtable[1] Update
	// vtable[2] Release
	// vtable[3] Init
	// vtable[4] SelectWeightedSequence
	// vtable[5] PlayFlinchGesture
	// vtable[6] ComputeSequences
	// sizeof = 56
};
