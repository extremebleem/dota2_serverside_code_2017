// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/miniprofiler.h:111
class CMiniProfiler : public CMicroProfiler {
public:

	CMiniProfiler();
	CMiniProfiler(const CMicroProfiler &);
	CMiniProfiler & operator=(const CMiniProfiler &);
	void SubCallee(int64);
	uint64 GetNumTimeBaseTicksInCallees();
	int64 GetNumTimeBaseTicksExclusive();
	void Reset();

	// sizeof = 16
};

// src/public/tier0/miniprofiler.h:130
class CLinkedMiniProfiler : public CMiniProfiler {
public:

	CLinkedMiniProfiler(const char *, CLinkedMiniProfiler * *, CMiniProfiler *);
	CLinkedMiniProfiler(const char *, const char *);
	CLinkedMiniProfiler * GetNext();
	const char * GetName();
	const char * GetLocation();
	~CLinkedMiniProfiler();

	// sizeof = 16
};
