// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/interpolatedvar.h:147
class CInterpolationContext {
private:

	bool m_bOldAllowExtrapolation;  // +0x0

	int m_nOldLastServerTick;  // +0x4

	static bool s_bAllowExtrapolation;
	static int s_nLastServerTick;
	CInterpolationContext();
	~CInterpolationContext();
	void EnableExtrapolation(bool);
	bool IsExtrapolationAllowed();
	void SetLastServerTick(int);
	int GetLastServerTick();

	// sizeof = 8
};

// src/public/tier1/interpolatedvar.h:453
class IInterpolatedVar {
	int ()() * * _vptr.IInterpolatedVar;  // +0x0
private:

	static int sm_pLastPotentialChangeTick[2][2];
	IInterpolatedVar();
	virtual ~IInterpolatedVar();
	virtual void Setup(void *, int);
	virtual void SetInterpolationAmount(InterpolatedVarPhase_t, float, int);
	virtual float GetInterpolationAmount(InterpolatedVarPhase_t);
	void SetTickInterval(float);
	float GetTickInterval();
	virtual void RestoreLastSimulationValue(InterpolatedVarPhase_t);
	bool NoteChanged(InterpolatedVarPhase_t, int);
	bool LatchChanged(InterpolatedVarPhase_t, const void *, int);
	virtual void Reset();
	virtual InterpolationResult_t Interpolate(InterpolatedVarPhase_t, float, InterpolationBehavior_t, uint32);
	virtual bool ValueChangesAfterThisTime(InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	virtual int GetFlags();
	virtual bool HasFlag(int);
	virtual void AddFlags(int);
	virtual void RemoveFlags(int);
	virtual void SetInWrappedVarLatchList(InterpolatedVarPhase_t, bool);
	virtual bool IsInWrappedVarLatchList(InterpolatedVarPhase_t);
	virtual void Copy(IInterpolatedVar *);
	virtual CUtlString GetDebugName(int);
	virtual CUtlString GetDebugBaseName();
	virtual void SetDebug(bool, int);
	virtual bool GetDebug(InterpolatedVarPhase_t);
	virtual void SetAutoSpew(bool, int);
	virtual void SetSpewIndex(int);
	virtual void SetDebugPhase(InterpolatedVarPhase_t);
	virtual void SetArrayIndexNameHelperDelegate(const CUtlDelegate<CUtlString(int)> &);
	virtual void SpewInterpolatedVar(InterpolatedVarPhase_t, float, InterpolationBehavior_t, bool, int);
	virtual int GetMaxCount();
	virtual CEntityIndex GetEntityIndex();
	virtual void SetInterpolatedVarContains(InterpolatedVarPhase_t);
	virtual InterpolatedVarPhase_t GetInterpolatedVarContains();
	virtual void SetNeedsToInterpolate(InterpolatedVarPhase_t, bool);
	virtual bool GetNeedsToInterpolate(InterpolatedVarPhase_t);
	virtual bool HasBeenSetup();
	virtual bool DoesCurrentValueMatchInterpolatedValue(InterpolatedVarPhase_t, float, InterpolationBehavior_t);
	virtual bool CheckIfInterpolationTimeIsBeforeFullInterpolationInterval(InterpolatedVarPhase_t, float);
	virtual int GetInterpolatedVarSize();
	virtual int ReadCurrentValue(void *);
	virtual int WriteCurrentValue(void *);
	virtual bool IsProcedural();
	virtual bool HasProceduralDelegates();
	virtual void SetVarTypeBit(int);
	virtual int GetVarTypeBit();
	virtual int GetExpectedLatchInterval(InterpolatedVarPhase_t);
	virtual void SetEntityIndex(CEntityIndex);
	virtual void SetInterpolationTimeType(bool, InterpolatedVarInterpolationTimeType_t);
	virtual InterpolatedVarInterpolationTimeType_t GetInterpolationTimeType();
	virtual bool IsClientAuthoritative();
	int GetLastPotentialChangeTick(InterpolatedVarPhase_t, InterpolatedVarInterpolationTimeType_t);
	void SetLastPotentialChangeTick(InterpolatedVarPhase_t, InterpolatedVarInterpolationTimeType_t, int);
	virtual bool NoteChangedTick(InterpolatedVarPhase_t, int);
	virtual bool LatchChangedTick(InterpolatedVarPhase_t, const void *, int);
	bool NoteChanged(InterpolatedVarPhase_t, float);
	bool LatchChangedTick(InterpolatedVarPhase_t, const void *, float);

	// vtable[2] Setup
	// vtable[3] SetInterpolationAmount
	// vtable[4] GetInterpolationAmount
	// vtable[5] RestoreLastSimulationValue
	// vtable[6] Reset
	// vtable[7] Interpolate
	// vtable[8] ValueChangesAfterThisTime
	// vtable[9] GetFlags
	// vtable[10] HasFlag
	// vtable[11] AddFlags
	// vtable[12] RemoveFlags
	// vtable[13] SetInWrappedVarLatchList
	// vtable[14] IsInWrappedVarLatchList
	// vtable[15] Copy
	// vtable[16] GetDebugName
	// vtable[17] GetDebugBaseName
	// vtable[18] SetDebug
	// vtable[19] GetDebug
	// vtable[20] SetAutoSpew
	// vtable[21] SetSpewIndex
	// vtable[22] SetDebugPhase
	// vtable[23] SetArrayIndexNameHelperDelegate
	// vtable[24] SpewInterpolatedVar
	// vtable[25] GetMaxCount
	// vtable[26] GetEntityIndex
	// vtable[27] SetInterpolatedVarContains
	// vtable[28] GetInterpolatedVarContains
	// vtable[29] SetNeedsToInterpolate
	// vtable[30] GetNeedsToInterpolate
	// vtable[31] HasBeenSetup
	// vtable[32] DoesCurrentValueMatchInterpolatedValue
	// vtable[33] CheckIfInterpolationTimeIsBeforeFullInterpolationInterval
	// vtable[34] GetInterpolatedVarSize
	// vtable[35] ReadCurrentValue
	// vtable[36] WriteCurrentValue
	// vtable[37] IsProcedural
	// vtable[38] HasProceduralDelegates
	// vtable[39] SetVarTypeBit
	// vtable[40] GetVarTypeBit
	// vtable[41] GetExpectedLatchInterval
	// vtable[42] SetEntityIndex
	// vtable[43] SetInterpolationTimeType
	// vtable[44] GetInterpolationTimeType
	// vtable[45] IsClientAuthoritative
	// vtable[46] NoteChangedTick
	// vtable[47] LatchChangedTick
	// sizeof = 8
};
