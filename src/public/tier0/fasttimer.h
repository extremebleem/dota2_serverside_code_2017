// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/fasttimer.h:21
class CCycleCount {
	uint64 m_Int64;  // +0x0
	CCycleCount();
	CCycleCount(uint64);
	void Sample();
	void Init();
	void Init(float);
	void Init(double);
	void Init(uint64);
	bool IsLessThan(const CCycleCount &);
	uint64 GetCycles64();
	uint64 GetMicroseconds64();
	double GetMicrosecondsF();
	void SetMicroseconds(uint64);
	uint64 GetMilliseconds64();
	double GetMillisecondsF();
	double GetSeconds();
	CCycleCount & operator+=(const CCycleCount &);
	void Add(const CCycleCount &, const CCycleCount &, CCycleCount &);
	void Sub(const CCycleCount &, const CCycleCount &, CCycleCount &);
	uint64 GetTimestamp();

	// sizeof = 8
};

// src/public/tier0/fasttimer.h:63
class CFastTimer {
private:

	CFastTimer();
	void Start();
	void End();
	const CCycleCount & GetDuration();
	CCycleCount GetDurationInProgress();
	uint64 GetClockSpeed();

	// sizeof = 8
};
