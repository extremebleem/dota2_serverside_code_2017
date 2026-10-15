// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/memalloc.h:63
class IMemAlloc {
	enum EInitFillType {
		k_EInitFillAlloc = 0,
		k_EInitFillFree = 0x1,
		k_EInitFillMoved = 0x2,
	};

	enum EBlockState {
		k_EBlockStateAllocated = 0,
		k_EBlockStateFree = 0x1,
		k_EBlockStateOwned = 0x2,
		k_EBlockStateCorrupt = 0x3,
		k_EBlockStateInvalid = 0x4,
		k_EBlockStateNoTracking = 0x5,
		k_EBlockStateUnknown = 0x6,
	};

	enum EHeapMode {
		k_EHeapModeStandard = 0,
		k_EHeapModeStandardLightMemoryDebug = 0x1,
		k_EHeapModeStandardFullMemoryDebug = 0x2,
		k_EHeapModeCrtHeap = 0x3,
		k_EHeapModeProcessHeap = 0x4,
		k_EHeapModeDebugHeap = 0x5,
	};

	int ()() * * _vptr.IMemAlloc;  // +0x0
	IMemAlloc();
	virtual void * Alloc(size_t);
	virtual void * Realloc(void *, size_t);
	virtual void Free(void *);
	virtual void * Alloc(size_t, const AllocInfo_t &);
	virtual void * Realloc(void *, size_t, const AllocInfo_t &);
	virtual void Free(void *, const AllocInfo_t &);
	virtual int32 CrtSetBreakAlloc(int32);
	virtual int CrtSetReportMode(int, int);
	virtual int CrtIsValidHeapPointer(const void *);
	virtual int CrtIsValidPointer(const void *, unsigned int, int);
	virtual int CrtCheckMemory();
	virtual int CrtSetDbgFlag(int);
	virtual void CrtMemCheckpoint(_CrtMemState *);
	virtual void * CrtSetReportFile(int, void *);
	virtual void * CrtSetReportHook(void *);
	virtual int CrtDbgReport(int, const char *, int, const char *, const char *);
	virtual size_t GetSize(void *);
	virtual void DumpStats(const char *);
	virtual void DumpBlockStats(void *);
	virtual size_t ComputeMemoryUsedBy(const char *, int);
	virtual void GlobalMemoryStatus(size_t *, size_t *);
	virtual void PushAllocDbgInfo(const char *, int, bool);
	virtual void PopAllocDbgInfo();
	virtual void GetActualDbgInfo(const char * &, int &);
	virtual uint32 RecordAllocation(size_t);
	virtual void RecordFree(uint32, size_t);
	virtual MemStdInfo_t * LockAllocStatsForCurrentStack(uint32 *, int);
	virtual MemStdInfo_t * LockAllocStats(uint32);
	virtual void UnlockAllocStats(uint32);
	virtual uint32 GetDebugInfoSize();
	virtual void SaveDebugInfo(void *);
	virtual void RestoreDebugInfo(const void *);
	virtual void InitDebugInfo(void *, const char *, int);
	virtual void CompactHeap();
	virtual void CompactIncremental();
	virtual void OutOfMemory(size_t);
	virtual void * InitFillMemory(void *, size_t, EInitFillType, void *);
	virtual EBlockState GetBlockState(const void *);
	virtual EBlockState VerifyBlockState(const void *, EBlockState);
	virtual EHeapMode GetHeapMode();
	virtual size_t SetAllocWarnLimit(size_t);
	virtual size_t SetAllocFailLimit(size_t);
	virtual ~IMemAlloc();
	virtual void GetStatsString(char *, int);

	// vtable[0] Alloc
	// vtable[1] Realloc
	// vtable[2] Free
	// vtable[3] Alloc
	// vtable[4] Realloc
	// vtable[5] Free
	// vtable[6] CrtSetBreakAlloc
	// vtable[7] CrtSetReportMode
	// vtable[8] CrtIsValidHeapPointer
	// vtable[9] CrtIsValidPointer
	// vtable[10] CrtCheckMemory
	// vtable[11] CrtSetDbgFlag
	// vtable[12] CrtMemCheckpoint
	// vtable[13] CrtSetReportFile
	// vtable[14] CrtSetReportHook
	// vtable[15] CrtDbgReport
	// vtable[16] GetSize
	// vtable[17] DumpStats
	// vtable[18] DumpBlockStats
	// vtable[19] ComputeMemoryUsedBy
	// vtable[20] GlobalMemoryStatus
	// vtable[21] PushAllocDbgInfo
	// vtable[22] PopAllocDbgInfo
	// vtable[23] GetActualDbgInfo
	// vtable[24] RecordAllocation
	// vtable[25] RecordFree
	// vtable[26] LockAllocStatsForCurrentStack
	// vtable[27] LockAllocStats
	// vtable[28] UnlockAllocStats
	// vtable[29] GetDebugInfoSize
	// vtable[30] SaveDebugInfo
	// vtable[31] RestoreDebugInfo
	// vtable[32] InitDebugInfo
	// vtable[33] CompactHeap
	// vtable[34] CompactIncremental
	// vtable[35] OutOfMemory
	// vtable[36] InitFillMemory
	// vtable[37] GetBlockState
	// vtable[38] VerifyBlockState
	// vtable[39] GetHeapMode
	// vtable[40] SetAllocWarnLimit
	// vtable[41] SetAllocFailLimit
	// vtable[44] GetStatsString
	// sizeof = 8
};

// src/public/tier0/memalloc.h:263
struct AllocInfo_t {
	const char * m_pFileName;  // +0x8
	int m_nLine;  // +0x10
	bool m_bIsArrayNewDelete;  // +0x14
	AllocInfo_t(ModuleMemInfo_t *, const char *, int, bool);

private:

	AllocInfo_t();

	// sizeof = 24
};

// src/public/tier0/memalloc.h:1039
class CMemZeroOnNew {
	void * operator new(size_t);
	void * operator new(size_t, void *);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);
	void * operator new [](size_t);
	void * operator new [](size_t, int, const char *, int);
	void operator delete [](void *);
	void operator delete [](void *, int, const char *, int);

	// sizeof = 1
};
