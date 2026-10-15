// Reconstructed from DWARF by pahole; not original source.

// src/public/responserules/response_types.h:64
struct ResponseFollowup {
private:

	const char * followup_concept;  // +0x0
	const char * followup_contexts;  // +0x8
	float followup_delay;  // +0x10
	const char * followup_target;  // +0x14
	const char * followup_entityiotarget;  // +0x1c
	const char * followup_entityioinput;  // +0x24
	float followup_entityiodelay;  // +0x2c
	bool bFired;  // +0x30

	bool IsValid();
	void Invalidate();
	void SetFired(bool);
	bool HasBeenFired();
	ResponseFollowup();
	ResponseFollowup(char *, char *, float, char *, char *, char *, float);

	// sizeof = 49
} __attribute__((__packed__));

// src/public/responserules/response_types.h:122
struct ResponseParams {
private:

	static datamap_t m_DataMap;

	responseparams_interval_t delay;  // +0x0
	responseparams_interval_t respeakdelay;  // +0x4
	responseparams_interval_t weapondelay;  // +0x8
	responseparams_interval_t predelay;  // +0xc
	short int odds;  // +0x10
	short int flags;  // +0x12
	uint8 soundlevel;  // +0x14

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	ResponseParams();

	// sizeof = 29
} __attribute__((__packed__));

// src/public/responserules/response_types.h:122
struct ResponseParams {
	enum {
		RG_DELAYAFTERSPEAK = 0x1,
		RG_SPEAKONCE = 0x2,
		RG_ODDS = 0x4,
		RG_RESPEAKDELAY = 0x8,
		RG_SOUNDLEVEL = 0x10,
		RG_DONT_USE_SCENE = 0x20,
		RG_STOP_ON_NONIDLE = 0x40,
		RG_WEAPONDELAY = 0x80,
		RG_DELAYBEFORESPEAK = 0x100,
	};

private:

	static datamap_t m_DataMap;

	responseparams_interval_t delay;  // +0x0
	responseparams_interval_t respeakdelay;  // +0x4
	responseparams_interval_t weapondelay;  // +0x8
	responseparams_interval_t predelay;  // +0xc
	short int odds;  // +0x10
	short int flags;  // +0x12
	uint8 soundlevel;  // +0x14

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	ResponseParams();

	// sizeof = 29
} __attribute__((__packed__));

// src/public/responserules/response_types.h:169
class CResponseCriteriaSet {
	struct CritEntry_t {
		CritSymbol_t criterianame;  // +0x0
		char value[64];  // +0x2

		float weight;  // +0x44
		CritEntry_t();
		CritEntry_t(const CritEntry_t &);
		CritEntry_t & operator=(const CritEntry_t &);
		bool LessFunc(const CritEntry_t &, const CritEntry_t &);
		void SetValue(const char *);

		// sizeof = 72
	};
	typedef CUtlSymbol CritSymbol_t;
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CResponseCriteriaSet;  // +0x0
private:

	static const char kAPPLYTOWORLDPREFIX = 36;
	static CUtlSymbolTable * sm_pCriteriaSymbols;
	typedef CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> > Dict_t;

	Dict_t m_Lookup;  // +0x8
	int m_nNumPrefixedContexts;  // +0x30
	bool m_bOverrideOnAppend;  // +0x34

	CResponseCriteriaSet();
	CResponseCriteriaSet(const CResponseCriteriaSet &);
	CResponseCriteriaSet(const char *, const char *);
	~CResponseCriteriaSet();
	void AppendCriteria(CritSymbol_t, const char *, float);
	void AppendCriteria(const char *, const char *, float);
	void AppendCriteria(CritSymbol_t, float, float);
	void AppendCriteria(const char *, float, float);
	void RemoveCriteria(const char *);
	void Describe(CUtlBuffer *);
	int GetCount();
	int FindCriterionIndex(CritSymbol_t);
	int FindCriterionIndex(const char *);
	bool IsValidIndex(int);
	CritSymbol_t GetNameSymbol(int);
	const char * GetName(int);
	const char * GetValue(int);
	float GetWeight(int);
	CritSymbol_t ComputeCriteriaSymbol(const char *);
	const char * SymbolToStr(const CritSymbol_t &);
	/* tag__fprintf: const_type tag not supported! */;
	void IterateOverAllSymbols(const CUtlDelegate<bool(CUtlSymbol, char const*)> &);
	void Merge(const CResponseCriteriaSet *);
	void Merge(const char *);
	void WriteToEntity(CEntityIdentity *);
	void EnsureCapacity(int);
	void Reset();
	void OverrideOnAppend(bool);
	int Head();
	int Next(int);
	int InterceptWorldSetContexts(CResponseCriteriaSet *);
	void SetCriteriaSymbolTable(CUtlSymbolTable *);
	void RemoveCriteria(int, bool);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 56
};

// src/public/responserules/response_types.h:319
class CRR_Response {
private:

	static datamap_t m_DataMap;

protected:

	uint8 m_Type;  // +0x0
	char m_szResponseName[192];  // +0x1
	char m_szMatchingRule[128];  // +0xc1

	float m_fMatchScore;  // +0x170

	char * m_szSpeakerContext;  // +0x178
	char * m_szWorldContext;  // +0x180
private:

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CRR_Response();
	CRR_Response(const CRR_Response &);
	CRR_Response & operator=(const CRR_Response &);
	~CRR_Response();
	void operator delete(void *);
	void CopyFrom(const CRR_Response &);
	void InitEmpty();
	void GetName(char *, size_t);
	void GetResponse(char *, size_t);
	const ResponseParams * GetParams();
	ResponseType_t GetType();
	soundlevel_t GetSoundLevel();
	float GetRespeakDelay();
	float GetWeaponDelay();
	bool GetSpeakOnce();
	bool ShouldntUseScene();
	bool ShouldBreakOnNonIdle();
	int GetOdds();
	float GetDelay();
	float GetPreDelay();
	HSCRIPT GetScript();
	void SetScript(const HSCRIPT &);
	bool IsEmpty();
	void SetSpeakerContext(const char *);
	void SetWorldContext(const char *);
	const char * GetSpeakerContext();
	const char * GetWorldContext();
	float GetMatchScore();
	void SetMatchScore(float);
	void Describe(const CResponseCriteriaSet *);
	void Init(ResponseType_t, const char *, const ResponseParams &, const char *, const char *, const char *);
	void InitFollowup(const char *, const char *, float, const char *);
	const char * DescribeResponse(ResponseType_t);
	const char * ResponseName();

	// sizeof = 448
};

// src/public/responserules/response_types.h:319
class CRR_Response {
	enum ResponseEnum_t {
		MAX_RESPONSE_NAME = 0xc0,
		MAX_RULE_NAME = 0x80,
	};

private:

	static datamap_t m_DataMap;

protected:

	uint8 m_Type;  // +0x0
	char m_szResponseName[192];  // +0x1
	char m_szMatchingRule[128];  // +0xc1

	float m_fMatchScore;  // +0x170

	char * m_szSpeakerContext;  // +0x178
	char * m_szWorldContext;  // +0x180
private:

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CRR_Response();
	CRR_Response(const CRR_Response &);
	CRR_Response & operator=(const CRR_Response &);
	~CRR_Response();
	void operator delete(void *);
	void CopyFrom(const CRR_Response &);
	void InitEmpty();
	void GetName(char *, size_t);
	void GetResponse(char *, size_t);
	const ResponseParams * GetParams();
	ResponseType_t GetType();
	soundlevel_t GetSoundLevel();
	float GetRespeakDelay();
	float GetWeaponDelay();
	bool GetSpeakOnce();
	bool ShouldntUseScene();
	bool ShouldBreakOnNonIdle();
	int GetOdds();
	float GetDelay();
	float GetPreDelay();
	HSCRIPT GetScript();
	void SetScript(const HSCRIPT &);
	bool IsEmpty();
	void SetSpeakerContext(const char *);
	void SetWorldContext(const char *);
	const char * GetSpeakerContext();
	const char * GetWorldContext();
	float GetMatchScore();
	void SetMatchScore(float);
	void Describe(const CResponseCriteriaSet *);
	void Init(ResponseType_t, const char *, const ResponseParams &, const char *, const char *, const char *);
	void InitFollowup(const char *, const char *, float, const char *);
	const char * DescribeResponse(ResponseType_t);
	const char * ResponseName();

	// sizeof = 448
};

// src/public/responserules/response_types.h:319
class CRR_Response {
	enum ResponseEnum_t {
		MAX_RESPONSE_NAME = 0xc0,
		MAX_RULE_NAME = 0x80,
	};

private:

	static datamap_t m_DataMap;

protected:

	uint8 m_Type;  // +0x0
	char m_szResponseName[192];  // +0x1
	char m_szMatchingRule[128];  // +0xc1

	float m_fMatchScore;  // +0x170

	char * m_szSpeakerContext;  // +0x178
	char * m_szWorldContext;  // +0x180
private:

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CRR_Response();
	CRR_Response(const CRR_Response &);
	CRR_Response & operator=(const CRR_Response &);
	~CRR_Response();
	void operator delete(void *);
	void CopyFrom(const CRR_Response &);
	void InitEmpty();
	void GetName(char *, size_t);
	void GetResponse(char *, size_t);
	const ResponseParams * GetParams();
	ResponseType_t GetType();
	soundlevel_t GetSoundLevel();
	float GetRespeakDelay();
	float GetWeaponDelay();
	bool GetSpeakOnce();
	bool ShouldntUseScene();
	bool ShouldBreakOnNonIdle();
	int GetOdds();
	float GetDelay();
	float GetPreDelay();
	HSCRIPT GetScript();
	void SetScript(const HSCRIPT &);
	bool IsEmpty();
	void SetSpeakerContext(const char *);
	void SetWorldContext(const char *);
	const char * GetSpeakerContext();
	const char * GetWorldContext();
	float GetMatchScore();
	void SetMatchScore(float);
	void Describe(const CResponseCriteriaSet *);
	void Init(ResponseType_t, const char *, const ResponseParams &, const char *, const char *, const char *);
	void InitFollowup(const char *, const char *, float, const char *);
	const char * DescribeResponse(ResponseType_t);
	const char * ResponseName();
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 448
};

// src/public/responserules/response_types.h:408
class IResponseFilter {
	int ()() * * _vptr.IResponseFilter;  // +0x0
	~IResponseFilter();
	IResponseFilter(IResponseFilter &);
	IResponseFilter(const IResponseFilter &);
	IResponseFilter();
	virtual bool IsValidResponse(ResponseType_t, const char *);

	// vtable[0] IsValidResponse
	// sizeof = 8
};

// src/public/responserules/response_types.h:414
class IResponseSystem {
	int ()() * * _vptr.IResponseSystem;  // +0x0
	IResponseSystem();
	virtual ~IResponseSystem();
	virtual bool FindBestResponse(const CResponseCriteriaSet &, CRR_Response &, IResponseFilter *);
	virtual void GetAllResponses(CUtlVector<CRR_Response, CUtlMemory<CRR_Response, int> > *);
	virtual void PrecacheResponses(bool);

	// vtable[2] FindBestResponse
	// vtable[3] GetAllResponses
	// vtable[4] PrecacheResponses
	// sizeof = 8
};
