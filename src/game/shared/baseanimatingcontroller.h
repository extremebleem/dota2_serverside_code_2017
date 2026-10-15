// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseanimatingcontroller.h:67
class CBaseAnimatingController : public CSkeletonAnimationController, public IAnimationStateGraphOwner {
	class NetworkVar_m_flPlaybackRate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flPoseParameter {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_bClientSideAnimation {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nNewSequenceParity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nResetEventsParity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

	static datamap_t m_DataMap;

	class NetworkVar_m_baseLayer : public CNetworkedSequenceOperation {
	public:

		NetworkVar_m_baseLayer(NetworkVar_m_baseLayer &);
		NetworkVar_m_baseLayer(const NetworkVar_m_baseLayer &);
		NetworkVar_m_baseLayer & operator=(NetworkVar_m_baseLayer &);
		NetworkVar_m_baseLayer & operator=(const NetworkVar_m_baseLayer &);
		~NetworkVar_m_baseLayer();
		NetworkVar_m_baseLayer();
		void CopyFrom(const CNetworkedSequenceOperation &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[2] NetworkStateChanged
		// vtable[4] NetworkStateChangedLog
		// vtable[3] NetworkStateChanged
		// sizeof = 40
	};

protected:

	bool m_bSequenceFinished;  // +0x40

	float m_flGroundSpeed;  // +0x44
	float m_flLastEventCycle;  // +0x48
	float m_flLastEventAnimTime;  // +0x4c
	typedef CNetworkVarBase<CNetworkedQuantizedFloat, CBaseAnimatingController::NetworkVar_m_flPlaybackRate> _NetworkVar_m_flPlaybackRate_t;

	_NetworkVar_m_flPlaybackRate_t m_flPlaybackRate;  // +0x50
	float m_flPrevAnimTime;  // +0x58
	bool m_bEnableIK;  // +0xbd
	bool m_bNetworkedAnimationInputsChanged;  // +0xbe

	float m_flIKGroundContactTime;  // +0xc8
	float m_flIKGroundMinHeight;  // +0xcc
	float m_flIKGroundMaxHeight;  // +0xd0
	float m_flEstIkFloor;  // +0xd4
	float m_flEstIkOffset;  // +0xd8

	int m_iIKCounter;  // +0xe8
	float m_flCachedSequenceCycleRate;  // +0xec
	float m_flCachedGroundSpeed;  // +0xf0
	float m_flCachedOneMinusLastVisibleCycle;  // +0xf4
	bool m_bModelHasNoPoseParams;  // +0xf8
	bool m_bNotifyWhenSequenceFinished;  // +0xf9

private:

	typedef CSkeletonAnimationController BaseClass;
	typedef CBaseAnimatingController ThisClass;
	typedef ThisClass ThisClass_m_baseLayer;
	CBaseAnimatingController(const CBaseAnimatingController &);
	CBaseAnimatingController & operator=(const CBaseAnimatingController &);
	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Connect(CEntityInstance *);
	virtual void AddedToEntityDatabase(CEntityInstance *);
	virtual void Spawn(CEntityInstance *, const CEntityKeyValues *);
	virtual void Activate(CEntityInstance *, ActivateType_t);
	virtual void PostDataUpdate(CEntityInstance *, DataUpdateType_t);
	virtual void UpdateOnRemove(CEntityInstance *);
	virtual void OnSetDormant(CEntityInstance *, EntityDormancyType_t, EntityDormancyType_t);
	virtual bool AnimationFrameAdvance(float, float, AnimationAdvanceType_t);
	virtual void DispatchAnimEvents(float, CBaseEntity *);
	virtual void SetupSequences(ISequenceSetup *);
	virtual void SetupAnimationHistoryContext(ISkeletonAnimationHistoryContext *);
	virtual void OnNewModel(const CModel *, const CModel *);
	void UpdateIK(uint32 *, const CTransform *, matrix3x4a_t *, int, float);
	virtual void GetSequenceBounds(Vector *, Vector *);
	virtual void UpdateParameters(IAnimParameterListInstance *);
	CBaseAnimatingController();
	~CBaseAnimatingController();
	bool IsSequenceDebugging();
	virtual void SetSkeletonInstance(CSkeletonInstance *);
	const CModel * GetModelPtr();
	void SetCycle(float);
	void SetPrevCycle(float);
	float GetCycle();
	float GetPrevCycle();
	float GetAnimTimeInterval();
	void ResetPrevAnimTime();
	float GetPrevAnimTime();
	void UseClientSideAnimation(bool);
	bool IsUsingClientSideAnimation();
	bool AnimationFrameAdvanceManual(float, float);
	bool IsValidSequence(HSequence);
	float GetPlaybackRate();
	virtual void SetPlaybackRate(float);
	void StopAnimation();
	virtual HSequence GetSequence();
	virtual void SetSequence(HSequence, SetSequenceBehavior_t);
	void SetSequence(HSequence);
	void ResetSequence(HSequence);
	virtual bool IsSequenceFinished();
	virtual bool IsTransitionInterruptible();
	bool IsSequenceLooping(const CModel *, HSequence);
	bool IsSequenceLooping(HSequence);
	bool SequenceLoops();
	void NotifyWhenSequenceFinishes(bool);
	float SequenceDuration();
	float SequenceDuration(const CModel *, HSequence);
	virtual float SequenceDuration(HSequence);
	float GetSequenceCycleRate(const CModel *, HSequence);
	float GetSequenceCycleRate(HSequence);
	float GetLastVisibleCycle(const CModel *, HSequence, float);
	float GetLastVisibleCycle(HSequence, float);
	float GetSequenceGroundSpeed(const CModel *, HSequence);
	float GetSequenceGroundSpeed(HSequence);
	float GetGroundSpeed();
	float GetSequenceCycleRate(const CModel *);
	float GetLastVisibleCycle(const CModel *, float);
	float GetSequenceGroundSpeed(const CModel *);
	void SetGroundSpeed(float);
	float GetSequenceMoveYaw(HSequence);
	float GetSequenceMoveDist(const CModel *, HSequence);
	float GetSequenceMoveDist(HSequence);
	void GetSequenceLinearMotion(HSequence, Vector *);
	const char * GetSequenceName(HSequence);
	HSequence LookupSequence(const char *);
	HSequence FindTransitionSequence(HSequence, HSequence, int *);
	bool GotoSequence(HSequence, float, float, HSequence, HSequence &, float &, int &);
	float GetInstantaneousVelocity(float);
	float GetEntryVelocity(HSequence);
	float GetExitVelocity(HSequence);
	KeyValues * GetSequenceKeyValues(HSequence);
	void ResetSequenceInfo();
	void ResetSequenceLooping();
	void ResetActivityIndexes();
	HSequence SelectWeightedSequence(Activity);
	HSequence SelectWeightedSequence(Activity, HSequence);
	HSequence SelectWeightedSequenceFromModifiers(Activity, const CUtlSymbol *, int);
	HSequence SelectHeaviestSequence(Activity);
	const char * GetSequenceActivityName(HSequence);
	Activity GetSequenceActivity(HSequence);
	Activity LookupActivity(const char *);
	int LookupPoseParameter(const char *);
	float SetPoseParameter(const char *, float);
	float SetPoseParameter(int, float);
	float GetPoseParameter(const char *);
	float GetPoseParameter(int);
	float GetPoseParameterNormalized(int);
	bool GetPoseParameterRange(int, float &, float &);
	bool HasPoseParameter(HSequence, const char *);
	bool HasPoseParameter(HSequence, int);
	float EdgeLimitPoseParameter(int, float, float);
	int GetNumPoseParameters();
	const float * GetPoseParameterArray();
	void ResetEventIndexes();
	bool HasAnimEvent(HSequence, int);
	void SetSequenceOverride(ISequenceOverride *);
	void OnNetworkSequenceChanged(HSequence);
	void OnNetworkCycleReset();
	void DescribeSequences(const char *);
	virtual void GatherSequences(CUtlVector<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> > &, CUtlVector<TransitioningLaterMetaInfo_t, CUtlMemory<TransitioningLaterMetaInfo_t, int> > &);
	void QueuedOnNetworkSequenceChanged(CEntityHandle, HSequence);
	void QueuedOnNetworkCycleReset(CEntityHandle);
	void QueuedSetPlaybackRate(CEntityHandle, float);
	void CopyAnimationDataFrom(CBaseAnimatingController *);
	void ResetClientsideFrame();
	void UpdateGameAnimations();
	LocalFlexController_t GetNumFlexControllers();
	const char * GetFlexDescFacs(int);
	const char * GetFlexControllerName(LocalFlexController_t);
	const char * GetFlexControllerType(LocalFlexController_t);
	Vector GetGroundSpeedVelocity();
	bool GetIntervalMovement(float, bool &, Vector &, QAngle &);
	bool GetSequenceMovement(HSequence, float, float, Vector &, QAngle &);
	float GetMovementFrame(float);
	bool HasMovement(HSequence);
	void AddBaseAnimatingInterpolatedVars();
	void RemoveBaseAnimatingInterpolatedVars();
	void ResetPoseParameterInterpolation();
	void CopySequenceTransitions(CBaseAnimatingController *);
	void GetBlendedLinearVelocity(Vector *);
	void OnTeleported();
	void EnableIK(bool);
	void ResetIK();
	bool IsIKActive();
	void UpdateIKLocks(float);
	void CalculateIKLocks(float);
	void SetIKGroundContactInfo(float, float);
	float GetEstIkOffset();
	void UpdateStepOrigin();
	const CNetworkedSequenceOperation * GetBaseLayer();
	void AdvanceSequenceTransitioner(float);
	void ClearAnimationTransitions();
	int GetSequenceParity();
	void MarkCachedSequenceDataDirty();
	void OnClientSideAnimationChanged();
	void OnPlaybackRateChanged(CEntityInstance *, const CNetworkedQuantizedFloat *);
	void OnBaseLayerSequenceChanged(CEntityInstance *, const uint16 *);
	CUtlString PoseParameterNameHelper(int);
	void AnimationFrameAdvanceInternal(const CModel *, float, float);
	void OnSequenceChangeNetworked();
	void OnNetworkedAnimationChanged();
	void OnPoseParameterChanged();
	void OnClientSideAnimCycleReset(CEntityInstance *, const int *);
	void InitStepHeightAdjust();
	float GetOneMinusLastVisibleCycle(const CModel *, HSequence);
	void SetPoseParameterInterpolatorLooping(const CModel *);

protected:

	const char * GetDebugName();
	const Vector & GetLocalOrigin();
	QAngle GetLocalAngles();
	const Vector & GetAbsOrigin();
	QAngle GetAbsAngles();
	const matrix3x4a_t & EntityToWorldTransform();
	CEntityInstance * GetMoveParent();
	float GetModelScale();
	const char * GetClassname();
	int DetectAnimEvents(float, float, int, animevent_t *);
	void SetSortAnimTimeList(const animevent_t *);
	bool SortByEventTime(const int &, const int &);
	void ClientSideAnimationChanged();
	void AddToClientSideAnimationList();
	void RemoveFromClientSideAnimationList();
	float GetInterpolatedTime();
	void DetectAnimEventReset();
	int GetOffset_m_baseLayer();

	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[26] NetworkStateChanged
	// vtable[27] NetworkStateChanged
	// vtable[28] NetworkStateChangedLog
	// vtable[2] GetDataDescMap
	// vtable[4] Connect
	// vtable[5] AddedToEntityDatabase
	// vtable[6] Spawn
	// vtable[7] Activate
	// vtable[11] PostDataUpdate
	// vtable[8] UpdateOnRemove
	// vtable[9] OnSetDormant
	// vtable[13] AnimationFrameAdvance
	// vtable[14] DispatchAnimEvents
	// vtable[15] SetupSequences
	// vtable[16] SetupAnimationHistoryContext
	// vtable[17] OnNewModel
	// vtable[25] GetSequenceBounds
	// vtable[29] UpdateParameters
	// vtable[3] SetSkeletonInstance
	// vtable[22] SetPlaybackRate
	// vtable[24] GetSequence
	// vtable[23] SetSequence
	// vtable[19] IsSequenceFinished
	// vtable[20] IsTransitionInterruptible
	// vtable[21] SequenceDuration
	// vtable[30] GatherSequences
	// vtable[0] Schema_DynamicBinding
	// vtable[1] HackToMakeAVTable
	// sizeof = 608
};

// src/game/shared/baseanimatingcontroller.h:567
class CBodyComponentBaseAnimating : public CBodyComponentSkeletonInstance {
public:

	class NetworkVar_m_animationController : public CBaseAnimatingController {
	public:

		~NetworkVar_m_animationController();
		NetworkVar_m_animationController(NetworkVar_m_animationController &);
		NetworkVar_m_animationController(const NetworkVar_m_animationController &);
		NetworkVar_m_animationController();
		void CopyFrom(const CBaseAnimatingController &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[26] NetworkStateChanged
		// vtable[28] NetworkStateChangedLog
		// vtable[27] NetworkStateChanged
		// sizeof = 608
	};

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;

	static datamap_t m_DataMap;
	typedef ThisClass ThisClass_m_animationController;
	typedef CBodyComponentSkeletonInstance BaseClass;
	typedef CBodyComponentBaseAnimating ThisClass;
	CBodyComponentBaseAnimating();
	virtual CSkeletonAnimationController * GetAnimationController();
	int GetOffset_m_animationController();
	virtual void SetAnimationSequence(HSequence);
	virtual void SetAnimationSequence(const char *);
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	/* tag__fprintf: const_type tag not supported! */;
	~CBodyComponentBaseAnimating();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] GetAnimationController
	// vtable[1] SetAnimationSequence
	// vtable[2] SetAnimationSequence
	// vtable[3] Schema_DynamicBinding
	// vtable[4] HackToMakeAVTable
	// vtable[5] GetDataDescMap
	// sizeof = 1520
};
