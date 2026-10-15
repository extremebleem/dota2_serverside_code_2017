// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/fibertools.h:33
class CEventListNode {
	CEventListNode();

	// sizeof = 136
};

// src/public/tier0/fibertools.h:50
class CEventList : public CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, ((CEventListNode* volatile CEventListNode::*)&CEventListNode::m_pNext)> {
public:

	CEventList();

	// sizeof = 16
};

// src/public/tier0/fibertools.h:56
struct Tier0FiberLocals_t {
	Tier0FiberLocals_t();

	// sizeof = 8
};

// src/public/tier0/fibertools.h:97
class CFiber {
	enum SizeBuckets_t {
		STACKSIZE_NONE = 0,
		STACKSIZE_2KB = 0x1,
		STACKSIZE_4KB = 0x2,
		STACKSIZE_8KB = 0x3,
		STACKSIZE_16KB = 0x4,
		STACKSIZE_32KB = 0x5,
		STACKSIZE_64KB = 0x6,
		STACKSIZE_128KB = 0x7,
	};

	volatile CFiber * m_pNext;  // +0x0
protected:

	volatile JmpBuf_AlternateStack_t * m_pJmpBuf_IN;  // +0x90
	volatile JmpBuf_AlternateStack_t * m_pJmpBuf_OUT;  // +0x98
	volatile void ()(void *) * m_pCurrentJobFunc;  // +0xa8
	volatile void * m_pCurrentJobContext;  // +0xb0
	bool (*m_pResumeCondition)(void *);  // +0xb8
	void * m_pResumeConditionContext;  // +0xc0
	uint32 m_nFlags;  // +0xe8
	CInterlockedUInt m_nRefCount;  // +0xec
	ThreadId_t m_hJobsOriginatingThreadId;  // +0xf8
	size_t m_nClearedMemoryInterval;  // +0x100
	CFiber();
	CFiber(void *, size_t, bool, size_t);
	~CFiber();
	CFiber * AllocPooledFiber(SizeBuckets_t, size_t);
	uint32 AddRef();
	uint32 Release();
	void InitStackContext(void *, size_t, bool, size_t);
	void * DetachFromStackContext();
	size_t EstimateBytesUsed(size_t);
	void SetFiberJob(void (*)(void *), void *, size_t);
	void SetFiberJob(void (*)());
	bool IsReadyToResume();
	bool ResumeJob();
	void FiberYield(bool (*)(void *), void *);
	void FiberYield();
	void FiberYield(bool (*)());
	CFiber * GetCurrentFiber();
	bool HasAJob();
	bool IsYielded();
	bool IsThreadFiber();
	bool IsMemoryInFiberRange(const void *);
	bool IsRunningInThreadMemory();
	intp RunInThreadMemory(intp (*)(void *), void *);
	void WaitForJobCompletion(CEventListNode &);
	CFiber * GetPrevFiberInSameThread();
	bool IsLongJmpUnwindNodeFromFiberStart(const LongJmpUnwindLL_t *);
	const MemoryRange_t & GetStackMemoryRange();
	ThreadId_t GetJobOriginatingThreadId();
	void ConstructThreadFiber(size_t);
	void DestructThreadFiber();
	void SetThreadFiberMemoryRange(size_t);
	void ClearUnusedSpaceToFFEEFFEE(void *);

private:

	intp RunningInNewStack();
	void YieldJmp();
	void ReleasePooledFiber();

	// sizeof = 272
};

// src/public/tier0/fibertools.h:393
class CFiberThreadingRequirement {
	ThreadId_t m_hReturnToThreadIfOutermostScope;  // +0x18
	CFiberThreadingRequirement(FiberThreadingRequirement_t);
	~CFiberThreadingRequirement();
	void TransitionToRequirement(FiberThreadingRequirement_t);

	// sizeof = 32
};
