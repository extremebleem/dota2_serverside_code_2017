// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/interpolatedvar_wrapped.h:43
class CInterpolationTimeContext {
	float m_flInterpolationTime[2];  // +0x8
	bool m_bIngoreInterpolationAmount;  // +0x10
	CInterpolationTimeContext();
	void Init(float, InterpolatedVarPhase_t, InterpolationTimeContextType_t);

	// sizeof = 20
};

// src/public/tier1/interpolatedvar_wrapped.h:74
class IWrappedInterpolatedVar {
	struct CWrappedIVHashElement_t {
		LastChangeTickDelegate_t m_ChangeTick;  // +0x8
		CWrappedIVHashElement_t(IWrappedInterpolatedVarLatch *, const LastChangeTickDelegate_t &, IInterpolatedVar *);
		CWrappedIVHashElement_t();

		// sizeof = 40
	};

	class CWrappedInterpolatedVarArrayBaseHashFuncs {
		CWrappedInterpolatedVarArrayBaseHashFuncs(int);
		bool operator()(const CWrappedIVHashElement_t &, const CWrappedIVHashElement_t &);
		unsigned int operator()(const CWrappedIVHashElement_t &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	class InterpolatedVarLatchList_t : public CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs> {
	public:

		InterpolatedVarLatchList_t();
		~InterpolatedVarLatchList_t();

		// sizeof = 32
	};

	struct State_t {
		State_t();
		void PushInterpolationContext(const CInterpolationTimeContext &);
		void PopInterpolationContext();
		const CInterpolationTimeContext & GetInterpolationContext();
		~State_t();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct WorkItem_t {
		// sizeof = 16
	};
	static InterpolatedVarLatchList_t s_LatchList[2][2];
	static State_t s_WrappedInterpolatedVarState;
	void AddToLatchList(IWrappedInterpolatedVarLatch *, const LastChangeTickDelegate_t &, IInterpolatedVar &, InterpolatedVarPhase_t);
	void RemoveFromLatchList(IInterpolatedVar &, InterpolatedVarPhase_t);
	void ProcessWorkItem(WorkItem_t &);
	void LatchVariables(InterpolatedVarPhase_t, InterpolatedVarInterpolationTimeType_t, bool);
	InterpolatedVarPhase_t GetInterpolationPhase();
	bool IsLookingAtHistoricalSamples();
	InterpolatedVarPhase_t GetHistoryWrittenToForPhase(IInterpolatedVar &);
	InterpolatedVarPhase_t GetHistoryInterpolatedFromForPhase(IInterpolatedVar &);
	void SetInterpolationContext(CInterpolationTimeContext *);
	void PushInterpolationContext(const CInterpolationTimeContext &);
	void PopInterpolationContext();
	float GetInterpolationTime(InterpolatedVarInterpolationTimeType_t);
	bool ShouldIgnoreInterpolationAmount();

	// sizeof = 1
};

// src/public/tier1/interpolatedvar_wrapped.h:365
class CInterpolationContextScopeGuard {
private:

	bool m_bActive;  // +0x14
	CInterpolationContextScopeGuard(float, InterpolatedVarPhase_t, bool);
	~CInterpolationContextScopeGuard();
	void Release();

	// sizeof = 24
};

// src/public/tier1/interpolatedvar_wrapped.h:1284
class IWrappedInterpolatedVarAdapter {
	int ()() * * _vptr.IWrappedInterpolatedVarAdapter;  // +0x0
	IWrappedInterpolatedVarAdapter();
	virtual ~IWrappedInterpolatedVarAdapter();
	virtual void SetActive(bool);
	virtual CUtlString GetDebugName(int);
	virtual IInterpolatedVar * GetVar();
	virtual void CopyFrom(IWrappedInterpolatedVarAdapter *);
	virtual bool IsReadyToDraw(float);
	virtual void SetInterpolationAmount(InterpolatedVarPhase_t, float, int);
	virtual int GetVarTypeBit();
	virtual int GetMaxCount();
	virtual const void * GetWrappedVar();
	virtual void SetInterpolationTimeType(bool, InterpolatedVarInterpolationTimeType_t);
	virtual InterpolatedVarInterpolationTimeType_t GetInterpolationTimeType();
	virtual void AddToLatchList();
	virtual void Reset();
	virtual void SetEntityIndex(CEntityIndex);
	virtual CEntityIndex GetEntityIndex();
	virtual float GetInterpolationAmount(InterpolatedVarPhase_t);

	// vtable[2] SetActive
	// vtable[3] GetDebugName
	// vtable[4] GetVar
	// vtable[5] CopyFrom
	// vtable[6] IsReadyToDraw
	// vtable[7] SetInterpolationAmount
	// vtable[8] GetVarTypeBit
	// vtable[9] GetMaxCount
	// vtable[10] GetWrappedVar
	// vtable[11] SetInterpolationTimeType
	// vtable[12] GetInterpolationTimeType
	// vtable[13] AddToLatchList
	// vtable[14] Reset
	// vtable[15] SetEntityIndex
	// vtable[16] GetEntityIndex
	// vtable[17] GetInterpolationAmount
	// sizeof = 8
};
