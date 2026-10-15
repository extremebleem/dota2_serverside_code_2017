// Reconstructed from DWARF by pahole; not original source.

// src/public/animationsystem/isequence.h:31
class CSequenceAssetInfo {
	int m_nLineNumber;  // +0x20
	CSequenceAssetInfo();

	// sizeof = 40
};

// src/public/animationsystem/isequence.h:53
struct AnimEvent_t {
	float m_flFrame;  // +0x0
	float cycle;  // +0x4
	int event;  // +0x8
	int type;  // +0xc
	const char * GetOptionsString();
	const char * GetEventName();
	AnimEvent_t();

	// sizeof = 32
};

// src/public/animationsystem/isequence.h:70
struct PoseParamDesc_t {
	float m_start;  // +0x0
	float m_end;  // +0x4
	float m_loop;  // +0x8
	bool m_bLooping;  // +0xc

	int m_nIndex;  // +0x10
	unsigned int m_handle;  // +0x14

	// sizeof = 24
};

// src/public/animationsystem/isequence.h:87
class IBaseSequence {
	int ()() * * _vptr.IBaseSequence;  // +0x0
	IBaseSequence(const IBaseSequence &);
	IBaseSequence();
	virtual ~IBaseSequence();
	virtual bool IsFrameCacheable();
	virtual int MaxFrame(const float *);
	virtual void DoAnimation(CAnimationBucket &, float, float);
	virtual int NumIKRules();
	virtual void CreateIKFootstepRule(const char *, float, float);
	virtual void CreateIKTouchRule(const char *, const char *);
	virtual int NumIKLocks();
	virtual const SeqResourceIKLock_t * GetIKLock(int);
	virtual void BuildBlendlist(CAnimationBlendList *, const float *);

	// vtable[2] IsFrameCacheable
	// vtable[3] MaxFrame
	// vtable[4] DoAnimation
	// vtable[5] NumIKRules
	// vtable[6] CreateIKFootstepRule
	// vtable[7] CreateIKTouchRule
	// vtable[8] NumIKLocks
	// vtable[9] GetIKLock
	// vtable[10] BuildBlendlist
	// sizeof = 8
};

// src/public/animationsystem/isequence.h:107
class ISequence : public IBaseSequence {
public:

	ISequence();
	virtual ~ISequence();
	virtual const char * GetName();
	virtual const CModel * GetModel();
	virtual bool IsLooping();
	virtual bool IsMulti();
	virtual bool IsDelta();
	virtual bool IsHidden();
	virtual bool IsAutoplay();
	virtual bool IsSnapped();
	virtual bool IsVScript();
	virtual bool IsAnimation();
	virtual const char * KeyValueText();
	virtual int NumEvents();
	virtual const AnimEvent_t * GetEvent(int);
	virtual void GetMaxBounds(Vector *, Vector *);
	virtual bool GetAllAnimations(AnimRefVector_t &);
	virtual bool GetAllSequences(CUtlVector<HSequence, CUtlMemory<HSequence, int> > &);
	virtual int NumActivities();
	virtual const char * GetActivityName(int);
	virtual float GetActivityWeight(int);
	virtual Activity GetActivityType(int);
	virtual void SetActivityType(Activity);
	virtual void SetActivityType(int, Activity);
	virtual int NumPoseParameters();
	virtual int GetPoseParameter(int);
	virtual int NumPoseSettings();
	virtual const char * GetPoseSettingName(int);
	virtual float GetPoseSettingValue(int);
	virtual bool IsFlagSet(int);
	virtual void SetFlag(int);
	virtual void ClearFlag(int);
	virtual float GetFadeInTime();
	virtual float GetFadeOutTime();
	virtual HSequence GetNextSequence(HSequence, int *);
	virtual int GetNodeFlags();
	virtual const float * GetRagdollBoneWeights();
	virtual int EntryNode();
	virtual int ExitNode();
	virtual void SetEntryNode(int);
	virtual void SetExitNode(int);
	virtual void SetEventIndex(int, int);
	virtual void AddEventTypeFlags(int, int);
	virtual void RemoveEventTypeFlags(int, int);
	virtual float FPS(const float *);
	virtual float CPS(const float *);
	virtual float Duration(const float *);
	virtual float MovementAndDuration(float, float, const float *, Vector &);
	virtual float TotalMovementAndDuration(const float *, Vector &);
	virtual bool Movement(float, float, const float *, Vector &, QAngle &);
	virtual bool Velocity(float, const float *, Vector &);
	virtual float FindDistance(const float *, float);
	virtual int LookupPoseSetting(const char *);
	virtual bool GetAssetInfo(CSequenceAssetInfo &);

	// vtable[11] GetName
	// vtable[12] GetModel
	// vtable[13] IsLooping
	// vtable[14] IsMulti
	// vtable[15] IsDelta
	// vtable[16] IsHidden
	// vtable[17] IsAutoplay
	// vtable[18] IsSnapped
	// vtable[19] IsVScript
	// vtable[20] IsAnimation
	// vtable[21] KeyValueText
	// vtable[22] NumEvents
	// vtable[23] GetEvent
	// vtable[24] GetMaxBounds
	// vtable[25] GetAllAnimations
	// vtable[26] GetAllSequences
	// vtable[27] NumActivities
	// vtable[28] GetActivityName
	// vtable[29] GetActivityWeight
	// vtable[30] GetActivityType
	// vtable[31] SetActivityType
	// vtable[32] SetActivityType
	// vtable[33] NumPoseParameters
	// vtable[34] GetPoseParameter
	// vtable[35] NumPoseSettings
	// vtable[36] GetPoseSettingName
	// vtable[37] GetPoseSettingValue
	// vtable[38] IsFlagSet
	// vtable[39] SetFlag
	// vtable[40] ClearFlag
	// vtable[41] GetFadeInTime
	// vtable[42] GetFadeOutTime
	// vtable[43] GetNextSequence
	// vtable[44] GetNodeFlags
	// vtable[45] GetRagdollBoneWeights
	// vtable[46] EntryNode
	// vtable[47] ExitNode
	// vtable[48] SetEntryNode
	// vtable[49] SetExitNode
	// vtable[50] SetEventIndex
	// vtable[51] AddEventTypeFlags
	// vtable[52] RemoveEventTypeFlags
	// vtable[53] FPS
	// vtable[54] CPS
	// vtable[55] Duration
	// vtable[56] MovementAndDuration
	// vtable[57] TotalMovementAndDuration
	// vtable[58] Movement
	// vtable[59] Velocity
	// vtable[60] FindDistance
	// vtable[61] LookupPoseSetting
	// vtable[62] GetAssetInfo
	// sizeof = 8
};
