// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/skeletonanimationcontroller.h:54
class ISequenceSetup {
	int ()() * * _vptr.ISequenceSetup;  // +0x0
	ISequenceSetup(ISequenceSetup &);
	ISequenceSetup(const ISequenceSetup &);
	ISequenceSetup();
	virtual void AddAnimationDecode(float, int, const CAnimationDecodeOp *, int, const float *, EHANDLE2);

	// vtable[0] AddAnimationDecode
	// sizeof = 8
};

// src/game/shared/skeletonanimationcontroller.h:64
class ISkeletonAnimationHistoryContext {
	int ()() * * _vptr.ISkeletonAnimationHistoryContext;  // +0x0
	~ISkeletonAnimationHistoryContext();
	ISkeletonAnimationHistoryContext(ISkeletonAnimationHistoryContext &);
	ISkeletonAnimationHistoryContext(const ISkeletonAnimationHistoryContext &);
	ISkeletonAnimationHistoryContext();
	virtual void AddInterpolatedVar(IInterpolatedVar *);
	virtual void AddWrappedInterpolatedVar(IWrappedInterpolatedVarAdapter *);

	// vtable[0] AddInterpolatedVar
	// vtable[1] AddWrappedInterpolatedVar
	// sizeof = 8
};

// src/game/shared/skeletonanimationcontroller.h:71
class CSkeletonAnimationHistoryContext : public ISkeletonAnimationHistoryContext {
public:

private:

	uint8 * m_pCurrentValues;  // +0x40
	bool m_bInitialized;  // +0x48
	CSkeletonAnimationHistoryContext(const CSkeletonAnimationHistoryContext &);
	CSkeletonAnimationHistoryContext(InterpolatedVarPhase_t);
	CSkeletonAnimationHistoryContext(float, CSkeletonAnimationController *, InterpolatedVarPhase_t);
	~CSkeletonAnimationHistoryContext();
	void Init(float, CSkeletonAnimationController *);
	virtual void AddInterpolatedVar(IInterpolatedVar *);
	virtual void AddWrappedInterpolatedVar(IWrappedInterpolatedVarAdapter *);

	// vtable[0] AddInterpolatedVar
	// vtable[1] AddWrappedInterpolatedVar
	// sizeof = 80
};

// src/game/shared/skeletonanimationcontroller.h:96
class CSkeletonAnimationController {
	int ()() * * _vptr.CSkeletonAnimationController;  // +0x0
private:

	static datamap_t m_DataMap;

protected:

	CSkeletonAnimationController(const CSkeletonAnimationController &);
	CSkeletonAnimationController & operator=(const CSkeletonAnimationController &);

private:

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CSkeletonAnimationController();
	~CSkeletonAnimationController();
	virtual void SetSkeletonInstance(CSkeletonInstance *);
	virtual void Connect(CEntityInstance *);
	virtual void AddedToEntityDatabase(CEntityInstance *);
	virtual void Spawn(CEntityInstance *, const CEntityKeyValues *);
	virtual void Activate(CEntityInstance *, ActivateType_t);
	virtual void UpdateOnRemove(CEntityInstance *);
	virtual void OnSetDormant(CEntityInstance *, EntityDormancyType_t, EntityDormancyType_t);
	virtual void PreDataUpdate(CEntityInstance *, DataUpdateType_t);
	virtual void PostDataUpdate(CEntityInstance *, DataUpdateType_t);
	virtual void OnRestore(CEntityInstance *);
	virtual bool AnimationFrameAdvance(float, float, AnimationAdvanceType_t);
	virtual void DispatchAnimEvents(float, CBaseEntity *);
	virtual void SetupSequences(ISequenceSetup *);
	virtual void SetupAnimationHistoryContext(ISkeletonAnimationHistoryContext *);
	virtual void OnNewModel(const CModel *, const CModel *);
	virtual void VerifyValidity();
	virtual bool IsSequenceFinished();
	virtual bool IsTransitionInterruptible();
	virtual float SequenceDuration(HSequence);
	float SequenceDuration(const char *);
	virtual void SetPlaybackRate(float);
	virtual void SetSequence(HSequence, SetSequenceBehavior_t);
	void SetSequence(const char *, SetSequenceBehavior_t);
	virtual HSequence GetSequence();
	HSequence LookupSequence(const char *);
	CSkeletonInstance * GetSkeletonInstance();
	const CSkeletonInstance * GetSkeletonInstance();
	virtual void GetSequenceBounds(Vector *, Vector *);
	CBaseEntity * GetOwnerEntity();
	void LoopingLerp_NoCopy(AnimationOperationHistory_t &, float, const AnimationOperationHistory_t &, const AnimationOperationHistory_t &);
	void Lerp_NoCopy(AnimationOperationHistory_t &, float, const AnimationOperationHistory_t &, const AnimationOperationHistory_t &);
	void Lerp_Hermite_NoCopy(AnimationOperationHistory_t &, const AnimationOperationHistory_t &, float, const AnimationOperationHistory_t &, const AnimationOperationHistory_t &, const AnimationOperationHistory_t &);
	void LoopingLerp_Hermite_NoCopy(AnimationOperationHistory_t &, const AnimationOperationHistory_t &, float, const AnimationOperationHistory_t &, const AnimationOperationHistory_t &, const AnimationOperationHistory_t &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] HackToMakeAVTable
	// vtable[2] GetDataDescMap
	// vtable[3] SetSkeletonInstance
	// vtable[4] Connect
	// vtable[5] AddedToEntityDatabase
	// vtable[6] Spawn
	// vtable[7] Activate
	// vtable[8] UpdateOnRemove
	// vtable[9] OnSetDormant
	// vtable[10] PreDataUpdate
	// vtable[11] PostDataUpdate
	// vtable[12] OnRestore
	// vtable[13] AnimationFrameAdvance
	// vtable[14] DispatchAnimEvents
	// vtable[15] SetupSequences
	// vtable[16] SetupAnimationHistoryContext
	// vtable[17] OnNewModel
	// vtable[18] VerifyValidity
	// vtable[19] IsSequenceFinished
	// vtable[20] IsTransitionInterruptible
	// vtable[21] SequenceDuration
	// vtable[22] SetPlaybackRate
	// vtable[23] SetSequence
	// vtable[24] GetSequence
	// vtable[25] GetSequenceBounds
	// sizeof = 16
};

// src/game/shared/skeletonanimationcontroller.h:183
class CNetworkedSequenceOperation {
	class NetworkVar_m_hSequence {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flPrevCycle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flCycle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flWeight {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CNetworkedSequenceOperation;  // +0x0
	typedef CNetworkVarBase<CNetworkedQuantizedFloat, CNetworkedSequenceOperation::NetworkVar_m_flWeight> _NetworkVar_m_flWeight_t;

	_NetworkVar_m_flWeight_t m_flWeight;  // +0x14
	bool m_bSequenceChangeNetworked;  // +0x1c
	bool m_bDiscontinuity;  // +0x1d

	float32 m_flPrevCycleFromDiscontinuity;  // +0x20
private:

	float32 m_flPrevCycleForAnimEventDetection;  // +0x24

	static datamap_t m_DataMap;
	typedef CNetworkedSequenceOperation ThisClass;
	~CNetworkedSequenceOperation();
	CNetworkedSequenceOperation & operator=(const CNetworkedSequenceOperation &);
	CNetworkedSequenceOperation();
	void Spawn(CEntityInstance *, const CModel *, const CEntityKeyValues *);
	float Advance(CEntityInstance *, float, bool, const CModel *, const float *);
	bool IsClamped(float);
	float GetCycle();
	float GetPrevCycle();
	HSequence GetSequence();
	float GetWeight();
	void GetOperation(CAnimationDecodeOp *, float *);
	float GetPrevAnimEventCycle();
	void SetPrevAnimEventCycle(float);
	void ReadOpValue(AnimationOperationHistory_t *);
	int WriteOpValue(const AnimationOperationHistory_t *, IVWriteOpType_t);
	bool DidSequenceNetworkUpdateOccur();
	void OnSequenceChangeNetworked();
	void OnSequenceCycleChanged(CEntityInstance *, const float *);
	void Reset();
	CNetworkedSequenceOperation(const CNetworkedSequenceOperation &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] HackToMakeAVTable
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChanged
	// vtable[4] NetworkStateChangedLog
	// sizeof = 40
};

// src/game/shared/skeletonanimationcontroller.h:243
class CAnimationOperationWriter {
private:

	float m_flPrevCycle;  // +0x14
	float m_flCycle;  // +0x18
	float m_flWeight;  // +0x1c
	CAnimationOperationWriter(CEntityInstance *, CNetworkedSequenceOperation *);
	CAnimationOperationWriter(CSkeletonAnimationController *, CNetworkedSequenceOperation *);
	~CAnimationOperationWriter();
	void SetSequence(HSequence, SetSequenceBehavior_t);
	void SetWeight(float);
	void SetPrevCycle(float);
	void SetCycle(float);
	float GetWeight();
	float GetCycle();
	float GetPrevCycle();
	HSequence GetSequence();
	void Init(CEntityInstance *, CNetworkedSequenceOperation *);
	void LatchAnimationOperation();

	// sizeof = 32
};
