// Reconstructed from DWARF by pahole; not original source.

// src/responserules/runtime/response_types_internal.h:25
class Matcher {
	float maxval;  // +0x0
	float minval;  // +0x4
	bool valid:1;  // +0x8:0
	bool isnumeric:1;  // +0x8:1
	bool notequal:1;  // +0x8:2
	bool usemin:1;  // +0x8:3
	bool minequals:1;  // +0x8:4
	bool usemax:1;  // +0x8:5
	bool maxequals:1;  // +0x8:6

private:

	Matcher();
	void Describe();
	void SetToken(const char *);
	const char * GetToken();
	void SetRaw(const char *);
	const char * GetRaw();
	Matcher & operator=(const Matcher &);

	// sizeof = 13
} __attribute__((__packed__));

// src/responserules/runtime/response_types_internal.h:57
struct Criteria {
	const char * value;  // +0x8
	bool required;  // +0x12

	Criteria();
	Criteria & operator=(const Criteria &);
	Criteria(const Criteria &);
	~Criteria();
	bool IsSubCriteriaType();

	// sizeof = 48
};

// src/responserules/runtime/response_types_internal.h:87
struct ParserResponse {
	static datamap_t m_DataMap;

	uint8 depletioncount;  // +0x50
	uint8 type:6;  // +0x51:0
	uint8 first:1;  // +0x51:6
	uint8 last:1;  // +0x51:7
	const char * value;  // +0x52
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	ParserResponse();
	ParserResponse(const ParserResponse &);
	ParserResponse & operator=(const ParserResponse &);
	~ParserResponse();
	ResponseType_t GetType();

	// sizeof = 90
} __attribute__((__packed__));

// src/responserules/runtime/response_types_internal.h:114
struct ResponseGroup {
	static datamap_t m_DataMap;

	bool m_bEnabled;  // +0x10
	uint8 m_nCurrentIndex;  // +0x11
	uint8 m_nDepletionCount;  // +0x12
	bool m_bDepleteBeforeRepeat:1;  // +0x13:0
	bool m_bHasFirst:1;  // +0x13:1
	bool m_bHasLast:1;  // +0x13:2
	bool m_bSequential:1;  // +0x13:3
	bool m_bNoRepeat:1;  // +0x13:4
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	ResponseGroup();
	ResponseGroup(const ResponseGroup &);
	ResponseGroup & operator=(const ResponseGroup &);
	bool HasUndepletedChoices();
	void MarkResponseUsed(int);
	void ResetDepletionCount();
	void Reset();
	bool HasUndepletedFirst(int &);
	bool HasUndepletedLast(int &);
	bool ShouldCheckRepeats();
	int GetDepletionCount();
	bool IsSequential();
	void SetSequential(bool);
	bool IsNoRepeat();
	void SetNoRepeat(bool);
	bool IsEnabled();
	void SetEnabled(bool);
	int GetCurrentIndex();
	void SetCurrentIndex(uint8);
	~ResponseGroup();

	// sizeof = 20
} __attribute__((__packed__));

// src/responserules/runtime/response_types_internal.h:300
struct Rule {
	const char * m_szContext;  // +0x20
	uint8 m_nForceWeight;  // +0x28
	bool m_bApplyContextToWorld:1;  // +0x29:0
	bool m_bMatchOnce:1;  // +0x29:1
	bool m_bEnabled:1;  // +0x29:2
	Rule();
	Rule(const Rule &);
	~Rule();
	Rule & operator=(const Rule &);
	void SetContext(const char *);
	const char * GetContext();
	bool IsEnabled();
	void Disable();
	bool IsMatchOnce();
	bool IsApplyContextToWorld();
	const char * GetValueForRuleCriterionByName(CResponseSystem *, const CUtlSymbol &);
	const Criteria * GetPointerForRuleCriterionByName(CResponseSystem *, const CUtlSymbol &);

private:

	const char * RecursiveGetValueForRuleCriterionByName(CResponseSystem *, const Criteria *, const CUtlSymbol &);
	const Criteria * RecursiveGetPointerForRuleCriterionByName(CResponseSystem *, const Criteria *, const CUtlSymbol &);

	// sizeof = 42
} __attribute__((__packed__));

// src/responserules/runtime/response_types_internal.h:397
struct ResponseRulePartition {
	enum {
		N_RESPONSE_PARTITIONS = 0x100,
		kIDX_ELEM_MASK = 0x1fff,
	};

private:

	typedef CResponseDict<Rule*, short unsigned int> tRuleDict;
	typedef uint32 tIndex;
	ResponseRulePartition();
	~ResponseRulePartition();
	tRuleDict & GetDictForRule(CResponseSystem *, Rule *);
	void GetDictsForCriteria(CUtlVectorFixed<CResponseDict<Rule*, short unsigned int>*, 2ul> *, const CResponseCriteriaSet &);
	void RemoveAll();
	Rule & operator[](tIndex);
	int Count();
	const char * GetElementName(const tIndex &);
	/* tag__fprintf: const_type tag not supported! */;
	tIndex IndexFromDictElem(tRuleDict *, int);
	tIndex First();
	tIndex Next(const tIndex &);
	bool IsValid(const tIndex &);
	tIndex InvalidIdx();
	unsigned int BucketFromIdx(const tIndex &);
	unsigned int PartFromIdx(const tIndex &);
	unsigned int GetBucketForSpeakerAndConcept(const char *, const char *, const char *);

	// sizeof = 20480
};
