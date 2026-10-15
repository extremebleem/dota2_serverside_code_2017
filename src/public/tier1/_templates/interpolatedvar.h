// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/interpolatedvar.h:102
struct ProceduralDelegates_t<EnableRenderingInfo_t> {
	CUtlDelegate<void(EnableRenderingInfo_t*, int, const IInterpolatedVar*)> m_readDelegate;  // +0x0
	CUtlDelegate<void(const EnableRenderingInfo_t*, int, const IInterpolatedVar*, IVWriteOpType_t)> m_writeDelegate;  // +0x18
	ProceduralDelegates_t();
	ProceduralDelegates_t(const CUtlDelegate<void(EnableRenderingInfo_t*, int, const IInterpolatedVar*)> &, const CUtlDelegate<void(const EnableRenderingInfo_t*, int, const IInterpolatedVar*, IVWriteOpType_t)> &);

	// sizeof = 48
};

// src/public/tier1/interpolatedvar.h:228
class CInterpolatedVarHelpers<EnableRenderingInfo_t> {
	CUtlString GetValue(const EnableRenderingInfo_t *, int, int);
	CUtlString GetSpeed(float, const EnableRenderingInfo_t *, float, const EnableRenderingInfo_t *);
	bool IsIdenticalWithinTolerance(const EnableRenderingInfo_t &, const EnableRenderingInfo_t &);

	// sizeof = 1
};

// src/public/tier1/interpolatedvar.h:583
class CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> {
	void Invoke_LoopingLerp_Context_NoCopy(EnableRenderingInfo_t &, void *, float, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &);
	void Invoke_Lerp_Context_NoCopy(EnableRenderingInfo_t &, void *, float, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &);
	void Invoke_LoopingLerp_Hermite_Context_NoCopy(EnableRenderingInfo_t &, void *, const EnableRenderingInfo_t &, float, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &);
	void Invoke_Lerp_Hermite_Context_NoCopy(EnableRenderingInfo_t &, void *, const EnableRenderingInfo_t &, float, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &, const EnableRenderingInfo_t &);

	// sizeof = 1
};

// src/public/tier1/interpolatedvar.h:639
class CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > : public IInterpolatedVar {
	struct PerPhaseData_t {
		CVarHistory m_VarHistory;  // +0x0
		int m_nLastActualChangeTick;  // +0x10
		int m_nExpectedLatchIntervalTicks;  // +0x14
		float m_flInterpolationAmount;  // +0x18
		PerPhaseData_t();
		void TransferDataTo(PerPhaseData_t *);
		~PerPhaseData_t();

		// sizeof = 32
	};
	typedef CInterpolatedVarHistory<EnableRenderingInfo_t> CVarHistory;

public:

protected:

	uint32 m_nLooping;  // +0x18
	uint8 m_nFlags:3;  // +0x20:0
	uint8 m_nInWrappedVarLatchList:2;  // +0x20:3
	uint8 m_bHasServerAuthoritativeVersion:1;  // +0x20:5
	uint8 m_bIsMemcopyable:1;  // +0x20:6
	uint8 m_nInterpolationTimeType:1;  // +0x20:7
	uint8 m_nMaxCount:6;  // +0x21:0
	uint8 m_nNeedsToInterpolate:2;  // +0x21:6
	int8 m_nInterpolatedVarContains:3;  // +0x22:0
	int8 m_eVarTypeBit:3;  // +0x22:3
	uint8 m_nDebugPhase:2;  // +0x22:6
	uint8 m_bDebug:1;  // +0x23:0
	uint8 m_bAutoSpew:1;  // +0x23:1
	int8 m_nSpewIndex:6;  // +0x23:2
	typedef InterpolationRecordTyped_t<EnableRenderingInfo_t> InterpolationRecord_t;
	typedef InterpolationInfoTyped_t<EnableRenderingInfo_t> InterpolationInfo_t;
	typedef CVarHistoryPairIteratorTyped<EnableRenderingInfo_t> CVarHistoryPairIterator;
	CInterpolatedVarArrayBase(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual void Setup(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, void *, int);
	virtual void SetInterpolationAmount(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, float, int);
	virtual float GetInterpolationAmount(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);
	virtual void RestoreLastSimulationValue(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t);
	virtual int GetInterpolatedVarSize(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual int ReadCurrentValue(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , void *);
	virtual int WriteCurrentValue(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, void *);
	virtual bool NoteChangedTick(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, int);
	virtual bool LatchChangedTick(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, const void *, int);
	virtual void Reset(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *);
	virtual InterpolationResult_t Interpolate(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, float, InterpolationBehavior_t, uint32);
	virtual int GetFlags(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual bool HasFlag(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , int);
	virtual void AddFlags(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, int);
	virtual void RemoveFlags(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, int);
	virtual void SetInWrappedVarLatchList(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, bool);
	virtual bool IsInWrappedVarLatchList(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);
	virtual void Copy(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, IInterpolatedVar *);
	virtual CUtlString GetDebugName(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , int);
	virtual bool HasBeenSetup(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual bool IsProcedural(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual bool HasProceduralDelegates(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual void SetVarTypeBit(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, int);
	virtual int GetVarTypeBit(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual int GetExpectedLatchInterval(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);
	virtual bool ValueChangesAfterThisTime(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	virtual void SetDebug(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, bool, int);
	virtual bool GetDebug(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);
	virtual void SetAutoSpew(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, bool, int);
	virtual void SetSpewIndex(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, int);
	virtual void SetDebugPhase(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t);
	virtual void SetEntityIndex(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, CEntityIndex);
	virtual void SetInterpolationTimeType(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, bool, InterpolatedVarInterpolationTimeType_t);
	virtual bool IsClientAuthoritative(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual InterpolatedVarInterpolationTimeType_t GetInterpolationTimeType(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual void SpewInterpolatedVar(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, float, InterpolationBehavior_t, bool, int);
	virtual void SetInterpolatedVarContains(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t);
	virtual InterpolatedVarPhase_t GetInterpolatedVarContains(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual void SetNeedsToInterpolate(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, bool);
	virtual bool GetNeedsToInterpolate(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);
	virtual bool DoesCurrentValueMatchInterpolatedValue(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	virtual bool CheckIfInterpolationTimeIsBeforeFullInterpolationInterval(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, float);
	virtual CEntityIndex GetEntityIndex(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual CUtlString GetDebugBaseName(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	CInterpolatedVarArrayBase(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, const char *, int);
	virtual ~CInterpolatedVarArrayBase(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, int);
	void Init(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *);
	void SetDelegates(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, ProceduralDelegates_t<EnableRenderingInfo_t> *);
	bool LatchChangedTick(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, const EnableRenderingInfo_t *, int);
	InterpolationResult_t Interpolate(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, EnableRenderingInfo_t *, float, InterpolationBehavior_t, uint32);
	void ClearHistory(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t);
	void SetLooping(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, bool, int);
	void SetMaxCount(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, int);
	virtual int GetMaxCount(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	int GetNewestEntryTick(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, bool);
	bool HasHistoryValues(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);
	void SetDebugName(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, const char *);
	void SetIsMemcopyableType(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, bool);
	int GetNumHistorySamples(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);
	void GetHistoryValue(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, int, EnableRenderingInfo_t *, int *);
	void ModifyNewestEntry(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, const EnableRenderingInfo_t *);
	void ModifyEntryAtIndex(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, int, const EnableRenderingInfo_t *);
	float TicksToTime(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , int);
	int TimeToTicks(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , float);
	float RoundToTicks(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , float);
	virtual bool HasReadWriteDelegates(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual const CUtlDelegate<void(EnableRenderingInfo_t*, int, const IInterpolatedVar*)> & GetReadDelegate(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual const CUtlDelegate<void(const EnableRenderingInfo_t*, int, const IInterpolatedVar*, IVWriteOpType_t)> & GetWriteDelegate(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual void SetProceduralDelegates(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, ProceduralDelegates_t<EnableRenderingInfo_t> *);
	virtual bool HasArrayIndexHelperDelegate(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual const CUtlDelegate<CUtlString(int)> & GetArrayIndexNameHelperDelegate(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	virtual void SetArrayIndexNameHelperDelegate(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, const CUtlDelegate<CUtlString(int)> &);
	virtual void * GetContext(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	bool IsMemcopyableType(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	bool GetInterpolationInfo(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, InterpolationInfo_t *, float, InterpolationBehavior_t, InterpolationResult_t *);
	InterpolationResult_t InterpolateInternal(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, EnableRenderingInfo_t *, float, InterpolationBehavior_t);
	CUtlString SpewInterpolatedVarToString(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, float, InterpolationBehavior_t, bool, int);
	void AddToHead(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, int, const EnableRenderingInfo_t *, bool);
	void RestoreLastSimulationValueToVariable(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, EnableRenderingInfo_t *);
	int InsertHoldSample(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, int, int);
	float GetHistorySampleTime(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , const PerPhaseData_t *, float, InterpolationBehavior_t);
	/* tag__fprintf: const_type tag not supported! */;
	float GetHistorySampleTime(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	void CopyRecord(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , const CVarHistory &, InterpolationRecord_t &, int);
	/* tag__fprintf: const_type tag not supported! */;
	void Interpolate_Guts(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t, EnableRenderingInfo_t *, float, InterpolationInfo_t &);
	void RemoveEntriesPreviousTo(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t, int);
	void TimeFixup_Hermite(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolationRecord_t *, InterpolationRecord_t *, InterpolationRecord_t *);
	void _Extrapolate(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , EnableRenderingInfo_t *, const InterpolationRecord_t *, const InterpolationRecord_t *, float, float);
	/* tag__fprintf: const_type tag not supported! */;
	void _Interpolate(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , EnableRenderingInfo_t *, float, const InterpolationRecord_t *, const InterpolationRecord_t *);
	void _Interpolate_Hermite(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , EnableRenderingInfo_t *, float, InterpolationRecord_t *, InterpolationRecord_t *, InterpolationRecord_t *, bool);
	int GetPhaseCount(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	bool IsPhaseAvailable(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);
	uint8 GetDebugMaskForPhase(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);
	bool GetAutoSpew(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);
	EnableRenderingInfo_t * GetValuePtrForWrite(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *);
	const EnableRenderingInfo_t * GetValuePtr(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> );
	void SetValuePtr(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, EnableRenderingInfo_t *, int, IVWriteOpType_t);
	PerPhaseData_t * GetPerPhaseData(CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, InterpolatedVarPhase_t);
	const PerPhaseData_t * GetPerPhaseData(const CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> , InterpolatedVarPhase_t);

	// vtable[2] Setup
	// vtable[3] SetInterpolationAmount
	// vtable[4] GetInterpolationAmount
	// vtable[5] RestoreLastSimulationValue
	// vtable[34] GetInterpolatedVarSize
	// vtable[35] ReadCurrentValue
	// vtable[36] WriteCurrentValue
	// vtable[46] NoteChangedTick
	// vtable[47] LatchChangedTick
	// vtable[6] Reset
	// vtable[7] Interpolate
	// vtable[9] GetFlags
	// vtable[10] HasFlag
	// vtable[11] AddFlags
	// vtable[12] RemoveFlags
	// vtable[13] SetInWrappedVarLatchList
	// vtable[14] IsInWrappedVarLatchList
	// vtable[15] Copy
	// vtable[16] GetDebugName
	// vtable[31] HasBeenSetup
	// vtable[37] IsProcedural
	// vtable[38] HasProceduralDelegates
	// vtable[39] SetVarTypeBit
	// vtable[40] GetVarTypeBit
	// vtable[41] GetExpectedLatchInterval
	// vtable[8] ValueChangesAfterThisTime
	// vtable[18] SetDebug
	// vtable[19] GetDebug
	// vtable[20] SetAutoSpew
	// vtable[21] SetSpewIndex
	// vtable[22] SetDebugPhase
	// vtable[42] SetEntityIndex
	// vtable[43] SetInterpolationTimeType
	// vtable[45] IsClientAuthoritative
	// vtable[44] GetInterpolationTimeType
	// vtable[24] SpewInterpolatedVar
	// vtable[27] SetInterpolatedVarContains
	// vtable[28] GetInterpolatedVarContains
	// vtable[29] SetNeedsToInterpolate
	// vtable[30] GetNeedsToInterpolate
	// vtable[32] DoesCurrentValueMatchInterpolatedValue
	// vtable[33] CheckIfInterpolationTimeIsBeforeFullInterpolationInterval
	// vtable[26] GetEntityIndex
	// vtable[17] GetDebugBaseName
	// vtable[25] GetMaxCount
	// vtable[48] HasReadWriteDelegates
	// vtable[49] GetReadDelegate
	// vtable[50] GetWriteDelegate
	// vtable[51] SetProceduralDelegates
	// vtable[52] HasArrayIndexHelperDelegate
	// vtable[53] GetArrayIndexNameHelperDelegate
	// vtable[23] SetArrayIndexNameHelperDelegate
	// vtable[54] GetContext
	// sizeof = 40
};

// src/public/tier1/interpolatedvar.h:2630
class CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > : public CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > {
public:

protected:

	CUtlDelegate<void(EnableRenderingInfo_t*, int, const IInterpolatedVar*)> m_readDelegate;  // +0x28
	CUtlDelegate<void(const EnableRenderingInfo_t*, int, const IInterpolatedVar*, IVWriteOpType_t)> m_writeDelegate;  // +0x40
	CInterpolatedVarProceduralBase(CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >, CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >);
	CInterpolatedVarProceduralBase(CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >, const CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInf);
	CInterpolatedVarProceduralBase(CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >, const char *, int);
	virtual void SetProceduralDelegates(CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >, ProceduralDelegates_t<EnableRenderingInfo_t> *);
	virtual bool HasReadWriteDelegates(const CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInf);
	virtual const CUtlDelegate<void(EnableRenderingInfo_t*, int, const IInterpolatedVar*)> & GetReadDelegate(const CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInf);
	virtual const CUtlDelegate<void(const EnableRenderingInfo_t*, int, const IInterpolatedVar*, IVWriteOpType_t)> & GetWriteDelegate(const CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInf);
	virtual ~CInterpolatedVarProceduralBase(CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >, int);

	// vtable[51] SetProceduralDelegates
	// vtable[48] HasReadWriteDelegates
	// vtable[49] GetReadDelegate
	// vtable[50] GetWriteDelegate
	// sizeof = 88
};

// src/public/tier1/interpolatedvar.h:2666
class CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > : public CInterpolatedVarProceduralBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > {
public:

	CInterpolatedVarBase(CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > &);
	CInterpolatedVarBase(CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, const CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > &);
	CInterpolatedVarBase(CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, const char *, int);
	virtual void SetArrayIndexNameHelperDelegate(CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, const CUtlDelegate<CUtlString(int)> &);
	virtual bool HasArrayIndexHelperDelegate(const CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *);
	virtual const CUtlDelegate<CUtlString(int)> & GetArrayIndexNameHelperDelegate(const CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *);
	virtual ~CInterpolatedVarBase(CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > *, int);

	// vtable[23] SetArrayIndexNameHelperDelegate
	// vtable[52] HasArrayIndexHelperDelegate
	// vtable[53] GetArrayIndexNameHelperDelegate
	// sizeof = 88
};

// src/public/tier1/interpolatedvar.h:2780
class CInterpolatedVarProcedural<EnableRenderingInfo_t> : public CInterpolatedVarBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > {
public:

	CInterpolatedVarProcedural(CInterpolatedVarProcedural<EnableRenderingInfo_t> &);
	CInterpolatedVarProcedural(const CInterpolatedVarProcedural<EnableRenderingInfo_t> &);
	CInterpolatedVarProcedural(const char *, int);
	virtual ~CInterpolatedVarProcedural();

	// sizeof = 88
};
