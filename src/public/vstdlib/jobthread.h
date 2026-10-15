// Reconstructed from DWARF by pahole; not original source.

// src/public/vstdlib/jobthread.h:128
struct ThreadPoolStartParams_t {
	int nThreads;  // +0x0
	int nThreadsMax;  // +0x4
	int nStackSize;  // +0xc
	int iThreadPriority;  // +0x10
	int iAffinityTable[64];  // +0x14
	bool bIOThreads:1;  // +0x114:0
	bool bUseAffinityTable:1;  // +0x114:1
	bool bExecOnThreadPoolThreadsOnly:1;  // +0x114:2
	ThreadPoolStartParams_t(bool, unsigned int, int *, ThreeState_t, unsigned int, int);

	// sizeof = 280
};

// src/public/vstdlib/jobthread.h:225
class IThreadPool : public IRefCounted {
public:

	IThreadPool();
	virtual ~IThreadPool();
	virtual bool Start(const ThreadPoolStartParams_t &);
	virtual bool Stop(int);
	virtual unsigned int GetJobCount();
	virtual int NumThreads();
	virtual int NumIdleThreads();
	virtual bool IsCurrentThreadInPool();
	virtual int SuspendExecution();
	virtual int ResumeExecution();
	virtual bool YieldWait(JobWaitItem_t *, JobWaitExtra_t *, int, bool, uint32);
	virtual bool YieldWait(CJob * *, int, bool, uint32);
	virtual void Yield(uint32);
	bool YieldWait(JobWaitObject_t *, uint32);
	bool YieldWait(CJob *, uint32);
	virtual bool YieldSingleJob();
	virtual void AddJob(CJob *);
	virtual void AddFunctor(CFunctor *, CJob * *, const char *, unsigned int);
	virtual void ChangePriority(CJob *, JobPriority_t);
	int ExecuteAll(JobId_t, JobFilter_t);
	virtual int ExecuteToPriority(JobPriority_t, JobId_t, JobFilter_t);
	virtual int AbortAll(JobId_t, JobFilter_t);
	virtual void AddPerFrameJob(CJob *);

private:

	virtual void AddFunctorInternal(CFunctor *, CJob * *, const char *, unsigned int);
	virtual CJob * GetDummyJob();
	virtual void Distribute(bool, int *);
	virtual bool Start(const ThreadPoolStartParams_t &, const char *);
	virtual bool YieldWaitPerFrameJobs();

	// vtable[4] Start
	// vtable[5] Stop
	// vtable[6] GetJobCount
	// vtable[7] NumThreads
	// vtable[8] NumIdleThreads
	// vtable[9] IsCurrentThreadInPool
	// vtable[10] SuspendExecution
	// vtable[11] ResumeExecution
	// vtable[12] YieldWait
	// vtable[13] YieldWait
	// vtable[14] Yield
	// vtable[15] YieldSingleJob
	// vtable[16] AddJob
	// vtable[17] AddFunctor
	// vtable[18] ChangePriority
	// vtable[19] ExecuteToPriority
	// vtable[20] AbortAll
	// vtable[21] AddPerFrameJob
	// vtable[22] AddFunctorInternal
	// vtable[23] GetDummyJob
	// vtable[24] Distribute
	// vtable[25] Start
	// vtable[26] YieldWaitPerFrameJobs
	// sizeof = 8
};

// src/public/vstdlib/jobthread.h:514
struct ThreadPoolData_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/vstdlib/jobthread.h:517
class CJob : public CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > {
public:

private:

	unsigned char m_flags;  // +0x60
	char m_iServicingThread;  // +0x61
	short int m_reserved;  // +0x62

	ThreadPoolData_t m_ThreadPoolData;  // +0x68
	JobEvent_t * m_pCompleteEvent;  // +0x78
	char m_szDescription[32];  // +0x80
	CJob(JobPriority_t);
	virtual ~CJob();
	void SetPriority(JobPriority_t);
	JobPriority_t GetPriority();
	void SetFlags(uint32);
	uint32 GetFlags();
	void SetServiceThread(int);
	int GetServiceThread();
	void ClearServiceThread();
	bool Executed();
	bool CanExecute();
	bool IsFinished();
	JobStatus_t GetStatus();
	bool WaitForFinish(uint32);
	bool WaitForFinishAndRelease(uint32);
	void CreateCompleteWaitItem(JobWaitItem_t *, JobWaitExtra_t *);
	JobStatus_t Execute();
	JobStatus_t ExecuteAndRelease();
	JobStatus_t TryExecute();
	JobStatus_t Abort(bool);
	virtual const char * Describe();
	virtual void SetDescription(const char *);
	virtual bool MatchJobId(JobId_t);
	bool TryLock();
	void Lock();
	void Unlock();
	CJob(const CJob &);
	void operator=(const CJob &);
	virtual void DoExecute();
	virtual JobStatus_t DoAbort(bool);
	virtual void DoCleanup();

	// vtable[4] Describe
	// vtable[5] SetDescription
	// vtable[6] MatchJobId
	// vtable[7] DoExecute
	// vtable[8] DoAbort
	// vtable[9] DoCleanup
	// sizeof = 160
};

// src/public/vstdlib/jobthread.h:887
class CParallelProcessorAbstract_Base {
protected:

	int m_nMaxJobThreads;  // +0x8

	CInterlockedInt m_nQueuedJobs;  // +0x18
	CInterlockedInt m_nActiveWorkers;  // +0x1c
	int GetMaxJobs();
	int GetQueuedJobCount();
	CJob * GetJob(int);
	int GetActiveWorkers();
	IThreadPool * GetThreadPool();
	CParallelProcessorAbstract_Base(IThreadPool *);

	// sizeof = 32
};

// src/public/vstdlib/jobthread.h:950
class CDefaultParallelController {
	const char * Description();
	size_t GetScratchSpaceRequired(int);
	void ParallelProcessStarting(void *, size_t, int);
	void ParallelProcessFinished(void *, size_t, int);

	// sizeof = 1
};
