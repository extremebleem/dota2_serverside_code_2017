// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/microprofiler.h:33
class CMicroProfilerSample {
private:

	int64 m_nTimeBaseBegin;  // +0x0
	CMicroProfilerSample();
	int64 GetElapsed();

	// sizeof = 8
};

// src/public/tier0/microprofiler.h:71
class CMicroProfiler {
	uint64 m_numTimeBaseTicks;  // +0x0
	uint64 m_numCalls;  // +0x8
	CMicroProfiler();
	CMicroProfiler(const CMicroProfiler &);
	CMicroProfiler(uint64, uint64);
	CMicroProfiler & operator=(const CMicroProfiler &);
	void Begin();
	void End();
	void End(uint64);
	void Add(uint64, uint64);
	void AddTS(uint64);
	void Add(const CMicroProfilerSample &);
	void Add(const CMicroProfiler &);
	void Reset();
	void Damp(int);
	uint64 GetNumCalls();
	uint64 GetNumTimeBaseTicks();
	float GetAverageMilliseconds();
	float GetTotalMilliseconds();
	float TimeBaseTicksToMilliseconds(uint64);
	float GetAverageTicks();
	void Accumulate(const CMicroProfiler &);

	// sizeof = 16
};

// src/public/tier0/microprofiler.h:206
class CMicroProfilerGuard : public CMicroProfilerSample {
public:

private:

	CMicroProfilerGuard(CMicroProfiler *);
	~CMicroProfilerGuard();

	// sizeof = 16
};

// src/public/tier0/microprofiler.h:221
class CMicroProfilerGuardWithCount : public CMicroProfilerSample {
public:

private:

	uint m_nCount;  // +0x10
	CMicroProfilerGuardWithCount(CMicroProfiler *, uint);
	void OverrideCount(uint);
	~CMicroProfilerGuardWithCount();

	// sizeof = 24
};
