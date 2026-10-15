// Reconstructed from DWARF by pahole; not original source.

// src/public/responserules/rrlib1to2.h:25
class Crr2LibPort {
	class CUtlTextBuffer : public CUtlBuffer {
	public:

		CUtlTextBuffer();
		CUtlTextBuffer(const char *);

		// sizeof = 80
	};

protected:

	FileHandle_t m_hLogFile;  // +0x0
	const IResponseDB * m_pDB;  // +0x8
private:

	Crr2LibPort(const char *, bool);
	~Crr2LibPort();
	IResponseDB * DB();
	Crr2LibPort * CreateNewRRDBFromOld(CResponseSystem *, bool, bool);
	bool FindBestResponse(const CResponseCriteriaSet &, MatchInfo_t &, IResponseFilter *);
	void rr2Warning(const CUtlTextBuffer &);
	/* tag__fprintf: const_type tag not supported! */;
	void rr2Warning(const char *, ...);

protected:

	Symbol TranslateSymbol(const CritSymbol_t &);
	void MapOldToNewQuery(const CResponseCriteriaSet &, CResponseQuery *);
	bool MatchResultToResponseReturn(const MatchInfo_t &, CRR_Response &, IResponseFilter *);

	// sizeof = 16
};

// src/public/responserules/rrlib1to2.h:25
class Crr2LibPort {
	enum {
		bLogToFile = 0,
	};

	class CUtlTextBuffer : public CUtlBuffer {
	public:

		CUtlTextBuffer();
		CUtlTextBuffer(const char *);
		~CUtlTextBuffer();

		// sizeof = 80
	};

protected:

	FileHandle_t m_hLogFile;  // +0x0
	const IResponseDB * m_pDB;  // +0x8
private:

	Crr2LibPort(const char *, bool);
	~Crr2LibPort();
	IResponseDB * DB();
	Crr2LibPort * CreateNewRRDBFromOld(CResponseSystem *, bool, bool);
	bool FindBestResponse(const CResponseCriteriaSet &, MatchInfo_t &, IResponseFilter *);
	void rr2Warning(const CUtlTextBuffer &);
	/* tag__fprintf: const_type tag not supported! */;
	void rr2Warning(const char *, ...);

protected:

	Symbol TranslateSymbol(const CritSymbol_t &);
	void MapOldToNewQuery(const CResponseCriteriaSet &, CResponseQuery *);
	bool MatchResultToResponseReturn(const MatchInfo_t &, CRR_Response &, IResponseFilter *);

	// sizeof = 16
};

// src/public/responserules/rrlib1to2.h:96
class Crr2Payload : public IRulePayload {
public:

protected:

	const const char * m_pName;  // +0x8
	Crr2Payload(Crr2Payload &);
	Crr2Payload(const Crr2Payload &);
	Crr2Payload(const char *, int);
	void Compact();
	void AddResponse(const ResponseGroup &);
	ResponseGroup & rg(int);
	const ResponseGroup & rg(int);
	ResponseGroup & operator[](int);
	const ResponseGroup & operator[](int);
	int Count();
	const char * Name();
	virtual size_t GetSizeInMem();
	virtual ~Crr2Payload();

	// vtable[2] GetSizeInMem
	// sizeof = 40
};
