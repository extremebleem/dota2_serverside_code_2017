// Reconstructed from DWARF by pahole; not original source.

// src/public/choreoobjects/choreoevent.h:35
class CEventRelativeTag {
protected:

	float m_flPercentage;  // +0x8

	CEventRelativeTag(CChoreoEvent *, const char *, float);
	CEventRelativeTag(const CEventRelativeTag &);
	const char * GetName();
	float GetPercentage();
	void SetPercentage(float);
	float GetStartTime();
	CChoreoEvent * GetOwner();
	void SetOwner(CChoreoEvent *);
	~CEventRelativeTag();
	CEventRelativeTag & operator=(const CEventRelativeTag &);

	// sizeof = 24
};

// src/public/choreoobjects/choreoevent.h:63
class CEventAbsoluteTag {
protected:

	float m_flPercentage;  // +0x8
	bool m_bLocked:1;  // +0xc:0
	bool m_bLinear:1;  // +0xc:1
	bool m_bEntry:1;  // +0xc:2
	bool m_bExit:1;  // +0xc:3

	CEventAbsoluteTag(CChoreoEvent *, const char *, float);
	CEventAbsoluteTag(const CEventAbsoluteTag &);
	const char * GetName();
	float GetPercentage();
	void SetPercentage(float);
	float GetEventTime();
	void SetEventTime(float);
	float GetAbsoluteTime();
	void SetAbsoluteTime(float);
	CChoreoEvent * GetOwner();
	void SetOwner(CChoreoEvent *);
	void SetLocked(bool);
	bool GetLocked();
	void SetLinear(bool);
	bool GetLinear();
	void SetEntry(bool);
	bool GetEntry();
	void SetExit(bool);
	bool GetExit();

	// sizeof = 24
};

// src/public/choreoobjects/choreoevent.h:110
class CFlexTimingTag : public CEventRelativeTag {
public:

protected:

	bool m_bLocked;  // +0x18
	CFlexTimingTag(CChoreoEvent *, const char *, float, bool);
	CFlexTimingTag(const CFlexTimingTag &);
	bool GetLocked();
	void SetLocked(bool);
	~CFlexTimingTag();
	CFlexTimingTag & operator=(const CFlexTimingTag &);

	// sizeof = 32
};

// src/public/choreoobjects/choreoevent.h:146
class CFlexAnimationTrack : public ICurveDataAccessor {
public:

private:

	float m_flMin;  // +0x18
	float m_flMax;  // +0x1c
	int m_nFlexControllerIndex[2];  // +0xb8
	bool m_bActive:1;  // +0xc0:0
	bool m_bCombo:1;  // +0xc0:1
	bool m_bServerSide:1;  // +0xc0:2
	bool m_bInverted:1;  // +0xc0:3
	CFlexAnimationTrack(const CFlexAnimationTrack &);
	CFlexAnimationTrack(CChoreoEvent *);
	CFlexAnimationTrack(const CFlexAnimationTrack *);
	virtual ~CFlexAnimationTrack();
	CFlexAnimationTrack & operator=(const CFlexAnimationTrack &);
	virtual float GetDuration();
	virtual bool CurveHasEndTime();
	virtual int GetDefaultCurveType();
	virtual float GetDefaultEdgeValue();
	void SetEvent(CChoreoEvent *);
	CChoreoEvent * GetEvent();
	const CChoreoEvent * GetEvent();
	void SetFlexControllerName(const char *);
	const char * GetFlexControllerName();
	void SetComboType(bool);
	bool IsComboType();
	void SetMin(float);
	void SetMax(float);
	float GetMin();
	float GetMax();
	bool IsInverted();
	void SetInverted(bool);
	bool IsTrackActive();
	void SetTrackActive(bool);
	float GetIntensity(float, FlexExpressionTrackType_t);
	void Clear();
	int GetFlexControllerIndex(FlexExpressionTrackType_t);
	LocalFlexController_t GetRawFlexControllerIndex(FlexExpressionTrackType_t);
	void SetFlexControllerIndex(LocalFlexController_t, int, FlexExpressionTrackType_t);
	float GetFracIntensity(float, FlexExpressionTrackType_t);
	float GetSampleIntensity(float);
	float GetBalanceIntensity(float);
	void SetEdgeInfo(bool, int, float);
	void GetEdgeInfo(bool, int &, float &);
	void SetEdgeActive(bool, bool);
	bool IsEdgeActive(bool);
	int GetEdgeCurveType(bool);
	float GetEdgeZeroValue(bool);
	void SetServerSide(bool);
	bool IsServerSide();
	CCurveData * GetRamp(FlexExpressionTrackType_t);
	const CCurveData * GetRamp(FlexExpressionTrackType_t);
	float GetIntensityInternal(float, FlexExpressionTrackType_t);
	void InitLeftRightEdge();

	// vtable[0] GetDuration
	// vtable[1] CurveHasEndTime
	// vtable[2] GetDefaultCurveType
	// vtable[3] GetDefaultEdgeValue
	// sizeof = 200
};

// src/public/choreoobjects/choreoevent.h:251
class CChoreoEvent : public CChoreoObjectBase, public ICurveDataAccessor {
	enum {
		UNSPECIFIED = 0,
		SECTION = 0x1,
		EXPRESSION = 0x2,
		LOOKAT = 0x3,
		MOVETO = 0x4,
		SPEAK = 0x5,
		GESTURE = 0x6,
		SEQUENCE = 0x7,
		FACE = 0x8,
		FIRETRIGGER = 0x9,
		FLEXANIMATION = 0xa,
		SUBSCENE = 0xb,
		LOOP = 0xc,
		INTERRUPT = 0xd,
		STOPPOINT = 0xe,
		PERMIT_RESPONSES = 0xf,
		GENERIC = 0x10,
		CAMERA = 0x11,
		SCRIPT = 0x12,
		NUM_TYPES = 0x13,
	};

	enum {
		MAX_TAGNAME_STRING = 0x80,
		MAX_CCTOKEN_STRING = 0x40,
	};

	enum {
		CC_MASTER = 0,
		CC_SLAVE = 0x1,
		CC_DISABLED = 0x2,
		NUM_CC_TYPES = 0x3,
	};

	enum {
		PLAYBACK = 0,
		ORIGINAL = 0x1,
		NUM_ABS_TAG_TYPES = 0x2,
	};

public:

private:

	uint8 m_fType;  // +0x18
	uint8 m_ccType;  // +0x19

	float m_flStartTime;  // +0x40
	float m_flEndTime;  // +0x44
	float m_flGestureSequenceDuration;  // +0x48
	int m_nNumLoops;  // +0x4c
	int m_nLoopsRemaining;  // +0x50

	int m_nPitch;  // +0x158
	int m_nYaw;  // +0x15c
	int m_nFwd;  // +0x160
	int m_nRight;  // +0x164
	float m_flDistanceToTarget;  // +0x174
	unsigned int m_uRequiredCombinedChecksum;  // +0x180
	int m_nNumSlaves;  // +0x184
	float m_flLastSlaveEndTime;  // +0x188

	int m_nDefaultCurveType;  // +0x1a8
	float m_flPrevCycle;  // +0x1ac
	float m_flPrevTime;  // +0x1b0
	float m_flSoundStartDelay;  // +0x1b4
	bool m_bFixedLength:1;  // +0x1b8:0
	bool m_bResumeCondition:1;  // +0x1b8:1
	bool m_bUsesTag:1;  // +0x1b8:2
	bool m_bTrackLookupSet:1;  // +0x1b8:3
	bool m_bProcessing:1;  // +0x1b8:4
	bool m_bLockBodyFacing:1;  // +0x1b8:5
	bool m_bMarkedForSave:1;  // +0x1b8:6
	bool m_bUsingCombinedSoundFile:1;  // +0x1b8:7
	bool m_bCCTokenValid:1;  // +0x1b9:0
	bool m_bCombinedUsingGenderToken:1;  // +0x1b9:1
	bool m_bSuppressCaptionAttenuation:1;  // +0x1b9:2
	bool m_bForceShortMovement:1;  // +0x1b9:3
	bool m_bSyncToFollowingGesture:1;  // +0x1b9:4
	bool m_bActive:1;  // +0x1b9:5
	bool m_bPlayOverScript:1;  // +0x1b9:6
	bool m_bHardStopSpeakEvent:1;  // +0x1b9:7
	typedef enum {
		PLAYBACK = 0,
		ORIGINAL = 0x1,
		NUM_ABS_TAG_TYPES = 0x2,
	} AbsTagType;
	void CChoreoEvent(CChoreoEvent *, CChoreoScene *);
	void CChoreoEvent(CChoreoEvent *, CChoreoScene *, EVENTTYPE, const char *, const char *);
	CChoreoEvent & operator=(CChoreoEvent *, const CChoreoEvent &);
	virtual void ~CChoreoEvent(CChoreoEvent *, int);
	virtual bool IsChoreoEvent(const CChoreoEvent *);
	virtual bool CurveHasEndTime(const CChoreoEvent *);
	virtual int GetDefaultCurveType(const CChoreoEvent *);
	virtual float GetDefaultEdgeValue(const CChoreoEvent *);
	void SaveToBuffer(CChoreoEvent *, CUtlBuffer &, CChoreoScene *, IChoreoStringPool *);
	bool RestoreFromBuffer(CChoreoEvent *, SceneBinaryVersion_t, CUtlBuffer &, CChoreoScene *, IChoreoStringPool *);
	EVENTTYPE GetType(const CChoreoEvent *);
	void SetType(CChoreoEvent *, EVENTTYPE);
	void SetName(CChoreoEvent *, const char *);
	const char * GetName(const CChoreoEvent *);
	void SetParameters(CChoreoEvent *, const char *);
	void SetParameters2(CChoreoEvent *, const char *);
	void SetParameters3(CChoreoEvent *, const char *);
	const char * GetParameters(const CChoreoEvent *);
	const char * GetParameters2(const CChoreoEvent *);
	const char * GetParameters3(const CChoreoEvent *);
	void SetStartTime(CChoreoEvent *, float);
	float GetStartTime(const CChoreoEvent *);
	void SetEndTime(CChoreoEvent *, float);
	float GetEndTime(const CChoreoEvent *);
	virtual float GetDuration(const CChoreoEvent *);
	void SetResumeCondition(CChoreoEvent *, bool);
	bool IsResumeCondition(const CChoreoEvent *);
	void SetLockBodyFacing(CChoreoEvent *, bool);
	bool IsLockBodyFacing(const CChoreoEvent *);
	void SetDistanceToTarget(CChoreoEvent *, float);
	float GetDistanceToTarget(const CChoreoEvent *);
	void SetForceShortMovement(CChoreoEvent *, bool);
	bool GetForceShortMovement(const CChoreoEvent *);
	void SetSyncToFollowingGesture(CChoreoEvent *, bool);
	bool GetSyncToFollowingGesture(const CChoreoEvent *);
	void SetPlayOverScript(CChoreoEvent *, bool);
	bool GetPlayOverScript(const CChoreoEvent *);
	const CCurveData * GetRamp(const CChoreoEvent *);
	CCurveData * GetRamp(CChoreoEvent *);
	float GetIntensity(const CChoreoEvent *, float);
	float GetCompletion(CChoreoEvent *, float);
	bool HasEndTime(const CChoreoEvent *);
	bool IsFixedLength(const CChoreoEvent *);
	void SetFixedLength(CChoreoEvent *, bool);
	void OffsetStartTime(CChoreoEvent *, float);
	void OffsetEndTime(CChoreoEvent *, float);
	void OffsetTime(CChoreoEvent *, float);
	void SnapTimes(CChoreoEvent *);
	float SnapTime(CChoreoEvent *, float);
	CChoreoScene * GetScene(CChoreoEvent *);
	const CChoreoScene * GetScene(const CChoreoEvent *);
	void SetScene(CChoreoEvent *, CChoreoScene *);
	void SetActor(CChoreoEvent *, CChoreoActor *);
	CChoreoActor * GetActor(CChoreoEvent *);
	const CChoreoActor * GetActor(const CChoreoEvent *);
	void SetChannel(CChoreoEvent *, CChoreoChannel *);
	CChoreoChannel * GetChannel(CChoreoEvent *);
	const CChoreoChannel * GetChannel(const CChoreoEvent *);
	CUtlString GetDescription(const CChoreoEvent *);
	void ClearAllRelativeTags(CChoreoEvent *);
	int GetNumRelativeTags(const CChoreoEvent *);
	CEventRelativeTag * GetRelativeTag(CChoreoEvent *, int);
	const CEventRelativeTag * GetRelativeTag(const CChoreoEvent *, int);
	CEventRelativeTag * FindRelativeTag(CChoreoEvent *, const char *);
	void AddRelativeTag(CChoreoEvent *, const char *, float);
	void RemoveRelativeTag(CChoreoEvent *, const char *);
	bool IsUsingRelativeTag(const CChoreoEvent *);
	void SetUsingRelativeTag(CChoreoEvent *, bool, const char *, const char *);
	const char * GetRelativeTagName(const CChoreoEvent *);
	const char * GetRelativeWavName(const CChoreoEvent *);
	void SetGestureSequenceDuration(CChoreoEvent *, float);
	bool GetGestureSequenceDuration(const CChoreoEvent *, float &);
	void ClearAllAbsoluteTags(CChoreoEvent *, AbsTagType);
	int GetNumAbsoluteTags(const CChoreoEvent *, AbsTagType);
	CEventAbsoluteTag * GetAbsoluteTag(CChoreoEvent *, AbsTagType, int);
	const CEventAbsoluteTag * GetAbsoluteTag(const CChoreoEvent *, AbsTagType, int);
	CEventAbsoluteTag * FindAbsoluteTag(CChoreoEvent *, AbsTagType, const char *);
	void AddAbsoluteTag(CChoreoEvent *, AbsTagType, const char *, float);
	void RemoveAbsoluteTag(CChoreoEvent *, AbsTagType, const char *);
	bool SortTags(CChoreoEvent *);
	float GetOriginalPercentageFromPlaybackPercentage(const CChoreoEvent *, float);
	float GetPlaybackPercentageFromOriginalPercentage(const CChoreoEvent *, float);
	const char * NameForAbsoluteTagType(AbsTagType);
	AbsTagType TypeForAbsoluteTagName(const char *);
	void RescaleGestureTimes(CChoreoEvent *, float, float, bool);
	bool PreventTagOverlap(CChoreoEvent *);
	CEventAbsoluteTag * FindEntryTag(CChoreoEvent *, AbsTagType);
	CEventAbsoluteTag * FindExitTag(CChoreoEvent *, AbsTagType);
	int GetNumFlexAnimationTracks(const CChoreoEvent *);
	CFlexAnimationTrack * GetFlexAnimationTrack(CChoreoEvent *, int);
	const CFlexAnimationTrack * GetFlexAnimationTrack(const CChoreoEvent *, int);
	CFlexAnimationTrack * AddTrack(CChoreoEvent *, const char *);
	CFlexAnimationTrack * FindTrack(CChoreoEvent *, const char *);
	void RemoveTrack(CChoreoEvent *, int);
	void RemoveAllTracks(CChoreoEvent *);
	void OnEndTimeChanged(CChoreoEvent *);
	bool GetTrackLookupSet(const CChoreoEvent *);
	void SetTrackLookupSet(CChoreoEvent *, bool);
	void ClearAllTimingTags(CChoreoEvent *);
	int GetNumTimingTags(const CChoreoEvent *);
	CFlexTimingTag * GetTimingTag(CChoreoEvent *, int);
	const CFlexTimingTag * GetTimingTag(const CChoreoEvent *, int);
	CFlexTimingTag * FindTimingTag(CChoreoEvent *, const char *);
	void AddTimingTag(CChoreoEvent *, const char *, float, bool);
	void RemoveTimingTag(CChoreoEvent *, const char *);
	void SetSubScene(CChoreoEvent *, CChoreoScene *);
	CChoreoScene * GetSubScene(CChoreoEvent *);
	bool IsProcessing(const CChoreoEvent *);
	void StartProcessing(CChoreoEvent *, IChoreoEventCallback *, CChoreoScene *, float);
	void ContinueProcessing(CChoreoEvent *, IChoreoEventCallback *, CChoreoScene *, float);
	void StopProcessing(CChoreoEvent *, IChoreoEventCallback *, CChoreoScene *, float);
	bool CheckProcessing(CChoreoEvent *, IChoreoEventCallback *, CChoreoScene *, float);
	void ResetProcessing(CChoreoEvent *);
	void SetMixer(CChoreoEvent *, CAudioMixer *);
	CAudioMixer * GetMixer(const CChoreoEvent *);
	void SetSoundGuid(CChoreoEvent *, SoundGuid_t);
	SoundGuid_t GetSoundGuid(const CChoreoEvent *);
	void SetHardStopSpeakEvent(CChoreoEvent *, bool);
	bool ShouldHardStopSpeakEvent(const CChoreoEvent *);
	void SetSoundStartDelay(CChoreoEvent *, float);
	float GetSoundStartDelay(const CChoreoEvent *);
	int GetPitch(const CChoreoEvent *);
	void SetPitch(CChoreoEvent *, int);
	int GetYaw(const CChoreoEvent *);
	void SetYaw(CChoreoEvent *, int);
	void SetTargetLocation(CChoreoEvent *, const Vector &);
	const Vector & GetTargetLocation(const CChoreoEvent *);
	int GetForwardDistance(const CChoreoEvent *);
	void SetForwardDistance(CChoreoEvent *, int);
	int GetRightDistance(const CChoreoEvent *);
	void SetRightDistance(CChoreoEvent *, int);
	void SetLoopCount(CChoreoEvent *, int);
	int GetLoopCount(const CChoreoEvent *);
	int GetNumLoopsRemaining(const CChoreoEvent *);
	void SetNumLoopsRemaining(CChoreoEvent *, int);
	bool IsMarkedForSave(const CChoreoEvent *);
	void SetMarkedForSave(CChoreoEvent *, bool);
	void GetMovementStyle(CChoreoEvent *, char *, int);
	void GetDistanceStyle(CChoreoEvent *, char *, int);
	void SetCloseCaptionType(CChoreoEvent *, CLOSECAPTION);
	CLOSECAPTION GetCloseCaptionType(const CChoreoEvent *);
	void SetCloseCaptionToken(CChoreoEvent *, const char *);
	const char * GetCloseCaptionToken(const CChoreoEvent *);
	void SetUsingCombinedFile(CChoreoEvent *, bool);
	bool IsUsingCombinedFile(const CChoreoEvent *);
	void SetRequiredCombinedChecksum(CChoreoEvent *, unsigned int);
	unsigned int GetRequiredCombinedChecksum(CChoreoEvent *);
	void SetNumSlaves(CChoreoEvent *, int);
	int GetNumSlaves(const CChoreoEvent *);
	void SetLastSlaveEndTime(CChoreoEvent *, float);
	float GetLastSlaveEndTime(const CChoreoEvent *);
	void SetCloseCaptionTokenValid(CChoreoEvent *, bool);
	bool GetCloseCaptionTokenValid(const CChoreoEvent *);
	bool ComputeCombinedBaseFileName(const CChoreoEvent *, char *, int, bool);
	bool IsCombinedUsingGenderToken(const CChoreoEvent *);
	void SetCombinedUsingGenderToken(CChoreoEvent *, bool);
	bool IsSuppressingCaptionAttenuation(const CChoreoEvent *);
	void SetSuppressingCaptionAttenuation(CChoreoEvent *, bool);
	int ValidateCombinedFile(CChoreoEvent *);
	bool GetPlaybackCloseCaptionToken(const CChoreoEvent *, char *, int);
	void ClearEventDependencies(CChoreoEvent *);
	void AddEventDependency(CChoreoEvent *, CChoreoEvent *);
	void GetEventDependencies(CChoreoEvent *, CUtlVector<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> > &);
	void SetActive(CChoreoEvent *, bool);
	bool GetActive(const CChoreoEvent *);
	void SetDefaultCurveType(CChoreoEvent *, int);
	EVENTTYPE TypeForName(const char *);
	const char * NameForType(EVENTTYPE);
	const char * FullNameForType(EVENTTYPE);
	CLOSECAPTION CCTypeForName(const char *);
	const char * NameForCCType(CLOSECAPTION);
	void Init(CChoreoEvent *);
	void CChoreoEvent(CChoreoEvent *, const CChoreoEvent &);
	void SaveFlexAnimationsToBuffer(CChoreoEvent *, CUtlBuffer &, IChoreoStringPool *);
	bool RestoreFlexAnimationsFromBuffer(CChoreoEvent *, SceneBinaryVersion_t, CUtlBuffer &, IChoreoStringPool *);
	float GetBoundedAbsoluteTagPercentage(const CChoreoEvent *, AbsTagType, int);
	float GetIntensityInternal(const CChoreoEvent *, float);

// vtable[0] IsChoreoEvent
// vtable[5] CurveHasEndTime
// vtable[6] GetDefaultCurveType
// vtable[7] GetDefaultEdgeValue
// vtable[8] GetDuration
};
