// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/vprof.h:354
class CVProfNode {
private:

	static int s_iCurrentUniqueNodeID;
	const tchar * m_pszName;  // +0x0
	int m_iPrevL2CacheMiss;  // +0x10
	int m_iCurL2CacheMiss;  // +0x14
	int m_iTotalL2CacheMiss;  // +0x18

	int m_nRecursions;  // +0x20
	unsigned int m_nCurFrameCalls;  // +0x24
	unsigned int m_nPrevFrameCalls;  // +0x30

	unsigned int m_nTotalCalls;  // +0x40

	int m_BudgetGroupID;  // +0x70
	int m_iClientData;  // +0x74
	int m_iUniqueNodeID;  // +0x78
	CVProfNode(const tchar *, int, CVProfNode *, const tchar *, int);
	~CVProfNode();
	CVProfNode * GetSubNode(const tchar *, int, const tchar *, int);
	CVProfNode * GetSubNode(const tchar *, int, const tchar *);
	CVProfNode * GetVParent();
	CVProfNode * GetVSibling();
	CVProfNode * GetVPrevSibling();
	CVProfNode * GetVChild();
	void MarkFrame();
	void ResetPeak();
	void Pause();
	void Resume();
	void Reset();
	void EnterScope();
	bool ExitScope();
	const tchar * GetName();
	int GetBudgetGroupID();
	void SetBudgetGroupID(int);
	int GetCurCalls();
	double GetCurTime();
	int GetPrevCalls();
	double GetPrevTime();
	int GetTotalCalls();
	double GetTotalTime();
	double GetPeakTime();
	double GetCurTimeLessChildren();
	double GetPrevTimeLessChildren();
	double GetTotalTimeLessChildren();
	int GetPrevL2CacheMissLessChildren();
	int GetPrevLoadHitStoreLessChildren();
	void ClearPrevTime();
	int GetL2CacheMisses();
	void SetCurFrameTime(long unsigned int);
	void SetClientData(int);
	int GetClientData();
	void SetUniqueNodeID(int);
	int GetUniqueNodeID();

	// sizeof = 128
};

// src/public/tier0/vprof.h:556
class CVProfile {
	class CBudgetGroup {
		tchar * m_pName;  // +0x0
		int m_BudgetFlags;  // +0x8

		// sizeof = 16
	};

	struct DeferredFunctionElem_t {
		DeferredFrameBoundaryFunc_t pFunc;  // +0x0
		void * pUserData;  // +0x8

		// sizeof = 16
	};
	typedef void (*DeferredFrameBoundaryFunc_t)(void *);

protected:

	bool m_bVTuneGroupEnabled;  // +0x0

	int m_nVTuneGroupID;  // +0x4
	int m_GroupIDStack[1024];  // +0x8
	int m_GroupIDStackDepth;  // +0x1008

	int m_enabled;  // +0x1020
	bool m_fAtRoot;  // +0x1024

	int m_nFrames;  // +0x10b0
	int m_ProfileDetailLevel;  // +0x10b4
	int m_pausedEnabledDepth;  // +0x10b8

	double m_flStartTime;  // +0x10c0
	double m_flStopTime;  // +0x10c8
	double m_flPauseStartTime;  // +0x10d0
	double m_flTotalPauseTime;  // +0x10d8
	int m_nBudgetGroupNamesAllocated;  // +0x10e8
	int m_nBudgetGroupNames;  // +0x10ec
	void (*m_pNumBudgetGroupsChangedCallBack)();  // +0x10f0
	bool m_bPMEInit;  // +0x10f8
	bool m_bPMEEnabled;  // +0x10f9

	int m_Counters[256];  // +0x10fc
	char m_CounterGroups[256];  // +0x14fc

	tchar * m_CounterNames[256];  // +0x1600
	int m_NumCounters;  // +0x1e00

	ThreadId_t m_TargetThreadId;  // +0x1e18
	typedef void (*StreamOut_t)(const char *, ...);

	StreamOut_t m_pOutputStream;  // +0x1e20
private:

	unsigned int m_nDeferredToFrameBoundaryCount;  // +0x1e68
	CVProfile();
	~CVProfile();
	void Term();
	void Start();
	void Stop();
	void SetTargetThreadId(ThreadId_t);
	ThreadId_t GetTargetThreadId();
	bool InTargetThread();
	void CalcBudgetGroupTimes_Recursive(CVProfNode *, uint32 *, int, float);
	void CalcBudgetGroupL2CacheMisses_Recursive(CVProfNode *, uint32 *, int, float);
	void CalcBudgetGroupLHS_Recursive(CVProfNode *, uint32 *, int, float);
	void EnterScope(const tchar *, int, const tchar *, bool);
	void EnterScope(const tchar *, int, const tchar *, bool, int);
	void ExitScope();
	void MarkFrame();
	void ResetPeaks();
	void Pause();
	void Resume();
	void Reset();
	bool IsEnabled();
	int GetDetailLevel();
	bool AtRoot();
	bool AddDeferredFunction(DeferredFrameBoundaryFunc_t, void *);
	bool RemoveDeferredFunction(DeferredFrameBoundaryFunc_t, void *);
	void EnableVTuneGroup(const tchar *);
	void DisableVTuneGroup();
	void PushGroup(int);
	void PopGroup();
	int NumFramesSampled();
	double GetPeakFrameTime();
	double GetTotalTimeSampled();
	double GetTimeLastFrame();
	double GetTotalSecondsSampled();
	double GetTotalWallClockSecondsSampled();
	CVProfNode * GetRoot();
	CVProfNode * FindNode(CVProfNode *, const tchar *);
	CVProfNode * GetCurrentNode();
	void SetOutputStream(StreamOut_t);
	void OutputReport(int, const tchar *, int);
	const tchar * GetBudgetGroupName(int);
	int GetBudgetGroupFlags(int);
	int GetNumBudgetGroups();
	void GetBudgetGroupColor(int, int &, int &, int &, int &);
	int BudgetGroupNameToBudgetGroupID(const tchar *);
	int BudgetGroupNameToBudgetGroupID(const tchar *, int);
	void RegisterNumBudgetGroupsChangedCallBack(void (*)());
	int BudgetGroupNameToBudgetGroupIDNoCreate(const tchar *);
	void HideBudgetGroup(int, bool);
	void HideBudgetGroup(const tchar *, bool);
	int * FindOrCreateCounter(const tchar *, CounterGroup_t);
	void ResetCounters(CounterGroup_t);
	int GetNumCounters();
	const CMicroProfiler & GetScopeProfiler();
	const tchar * GetCounterName(int);
	int GetCounterValue(int);
	const tchar * GetCounterNameAndValue(int, int &);
	CounterGroup_t GetCounterGroup(int);
	void PMEInitialized(bool);
	void PMEEnable(bool);
	bool UsePME();

protected:

	void FreeNodes_R(CVProfNode *);
	bool VTuneGroupEnabled();
	int VTuneGroupID();
	void SumTimes(const tchar *, int, CVProfSummingContext &);
	void SumTimes(CVProfNode *, int, CVProfSummingContext &);
	void DumpNodes(CVProfNode *, int, bool, CVProfSummingContext &);
	int FindBudgetGroupName(const tchar *);
	int AddBudgetGroupName(const tchar *, int);

private:

	void ExecuteDeferredFunctions();

	// sizeof = 7792
};

// src/public/tier0/vprof.h:922
class CVProfScope : public CVProfSnMarkerScope {
public:

private:

	bool m_bEnabled;  // +0x0
	CVProfScope(const tchar *, int, const tchar *, bool, int);
	~CVProfScope();

	// sizeof = 1
};

// src/public/tier0/vprof.h:1519
class CVProfCounter {
private:

	int * m_pCounter;  // +0x0
	CVProfCounter(const tchar *, CounterGroup_t);
	~CVProfCounter();
	void Increment(int);

	// sizeof = 8
};
