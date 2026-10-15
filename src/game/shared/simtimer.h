// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/simtimer.h:23
class CSimpleSimTimer {
private:

	static datamap_t m_DataMap;

protected:

	float m_next;  // +0x0
private:

	CSimpleSimTimer();
	void Force();
	bool Expired();
	float Delay(float);
	float GetNext();
	void Set(float);
	void Set(float, float);
	void SetRange(float, float);
	float GetRemaining();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 4
};

// src/game/shared/simtimer.h:87
class CSimTimer : public CSimpleSimTimer {
public:

private:

	static datamap_t m_DataMap;

	float m_interval;  // +0x4

	CSimTimer(float, bool);
	void Set(float, bool);
	void Reset(float);
	float GetInterval();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 8
};

// src/game/shared/simtimer.h:129
class CRandSimTimer : public CSimpleSimTimer {
public:

	static datamap_t m_DataMap;

private:

	float m_minInterval;  // +0x4
	float m_maxInterval;  // +0x8
	CRandSimTimer(float, float, bool);
	void Set(float, float, bool);
	void Reset();
	float GetMinInterval();
	float GetMaxInterval();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 12
};

// src/game/shared/simtimer.h:182
class CStopwatchBase : public CSimpleSimTimer {
public:

	int ()() * * _vptr.CStopwatchBase;  // +0x0

private:

	static datamap_t m_DataMap;

protected:

	bool m_fIsRunning;  // +0xc
	~CStopwatchBase();
	CStopwatchBase(CStopwatchBase &);
	CStopwatchBase(const CStopwatchBase &);

private:

	CStopwatchBase();
	bool IsRunning();
	void Stop();
	bool Expired();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CStopwatchBase & operator=(const CStopwatchBase &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 16
};

// src/game/shared/simtimer.h:236
class CStopwatch : public CStopwatchBase {
public:

	static datamap_t m_DataMap;

private:

	float m_interval;  // +0x10
	CStopwatch(CStopwatch &);
	CStopwatch(const CStopwatch &);
	CStopwatch(float);
	void Set(float);
	void Start(float);
	void Start();
	float GetInterval();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 24
};

// src/game/shared/simtimer.h:273
class CRandStopwatch : public CStopwatchBase {
public:

private:

	static datamap_t m_DataMap;

	float m_minInterval;  // +0x10
	float m_maxInterval;  // +0x14

	CRandStopwatch(float, float);
	void Set(float, float);
	void Start(float, float);
	void Start();
	float GetInterval();
	float GetMinInterval();
	float GetMaxInterval();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 24
};
