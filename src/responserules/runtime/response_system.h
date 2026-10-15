// Reconstructed from DWARF by pahole; not original source.

// src/responserules/runtime/response_system.h:19
class CResponseFileParser {
	struct ScriptEntry {
		unsigned char * buffer;  // +0x0
		FileNameHandle_t name;  // +0x8

		const char * currenttoken;  // +0x10
		int tokencount;  // +0x18

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	const char * m_pParseRuleName;  // +0x0
	bool m_bParseRuleValid;  // +0x8

	const CResponseSystem & m_owner;  // +0x10
	CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> > m_RootCommandHashes;  // +0x68
	typedef CUtlMap<unsigned int, void (CResponseFileParser::*)(), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> DispatchMap_t;

	DispatchMap_t m_FileDispatch;  // +0x90
	typedef CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> ParseRuleDispatchMap_t;

	ParseRuleDispatchMap_t m_RuleDispatch;  // +0xb8
	typedef CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> ParseResponseDispatchMap_t;

	ParseResponseDispatchMap_t m_ResponseDispatch;  // +0xe0
	typedef CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> ParseResponseGroupDispatchMap_t;

	ParseResponseGroupDispatchMap_t m_ResponseGroupDispatch;  // +0x108
	char token[1204];  // +0x130
	bool m_bUnget;  // +0x5e4
	CResponseFileParser(CResponseSystem &);
	void LoadFromBuffer(const char *, const char *);
	void LoadFromFile(const char *);
	void ResolveToken(Matcher &, char *, size_t, const char *);
	void ResponseWarning(const char *, ...);
	void BuildDispatchTables();
	bool Dispatch(const char *, unsigned int, DispatchMap_t &);
	bool DispatchParseRule(const char *, unsigned int, ParseRuleDispatchMap_t &, Rule &);
	bool DispatchParseResponse(const char *, unsigned int, ParseResponseDispatchMap_t &, ParserResponse &, ResponseGroup &, ResponseParams *);
	bool DispatchParseResponseGroup(const char *, unsigned int, ParseResponseGroupDispatchMap_t &, const char *, ResponseGroup &, ResponseParams &);
	bool ParseToken();
	void Unget();
	bool TokenWaiting();
	void PushScript(const char *, unsigned char *);
	void PopScript();
	bool IsRootCommand(unsigned int);
	bool IsRootCommand();
	void ParseOneResponse(const char *, ResponseGroup &, ResponseParams *);
	void ParseInclude();
	void ParseResponse();
	void ParseCriterion();
	void ParseRule();
	void ParseEnumeration();
	void ParseRule_MatchOnce(Rule &);
	void ParseRule_ApplyContextToWorld(Rule &);
	void ParseRule_ApplyContext(Rule &);
	void ParseRule_Response(Rule &);
	void ParseRule_Criteria(Rule &);
	void ParseResponse_Weight(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_PreDelay(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_NoDelay(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_DefaultDelay(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_Delay(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_SpeakOnce(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_NoScene(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_StopOnNonIdle(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_Odds(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_RespeakDelay(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_WeaponDelay(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_Soundlevel(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_DisplayFirst(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_DisplayLast(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_Fire(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_Then(ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponseGroup_Start(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_PreDelay(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_NoDelay(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_DefaultDelay(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_Delay(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_SpeakOnce(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_NoScene(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_StopOnNonIdle(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_Odds(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_RespeakDelay(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_WeaponDelay(const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_Soundlevel(const char *, ResponseGroup &, ResponseParams &);
	int ParseOneCriterion(const char *);
	void GetCurrentScript(char *, size_t);
	int GetCurrentToken();
	void SetCurrentScript(const char *);
	~CResponseFileParser();

	// sizeof = 1512
};

// src/responserules/runtime/response_system.h:19
class CResponseFileParser {
	struct ScriptEntry {
		unsigned char * buffer;  // +0x0
		FileNameHandle_t name;  // +0x8

		const char * currenttoken;  // +0x10
		int tokencount;  // +0x18

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	const char * m_pParseRuleName;  // +0x0
	bool m_bParseRuleValid;  // +0x8

	const CResponseSystem & m_owner;  // +0x10
	CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> > m_RootCommandHashes;  // +0x68
	typedef CUtlMap<unsigned int, void (CResponseFileParser::*)(), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> DispatchMap_t;

	DispatchMap_t m_FileDispatch;  // +0x90
	typedef CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> ParseRuleDispatchMap_t;

	ParseRuleDispatchMap_t m_RuleDispatch;  // +0xb8
	typedef CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> ParseResponseDispatchMap_t;

	ParseResponseDispatchMap_t m_ResponseDispatch;  // +0xe0
	typedef CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&), short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> ParseResponseGroupDispatchMap_t;

	ParseResponseGroupDispatchMap_t m_ResponseGroupDispatch;  // +0x108
	char token[1204];  // +0x130
	bool m_bUnget;  // +0x5e4
	typedef struct {
		void (*__pfn)();  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} pfnResponseDispatch;

	typedef struct {
		void (*__pfn)(CResponseFileParser *, Rule &);  // +0x0
		long int __delta;  // +0x8

	} pfnParseRuleDispatch;

	typedef struct {
		void (*__pfn)(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);  // +0x0
		long int __delta;  // +0x8

	} pfnParseResponseDispatch;

	typedef struct {
		void (*__pfn)(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);  // +0x0
		long int __delta;  // +0x8

	} pfnParseResponseGroupDispatch;
	void CResponseFileParser(CResponseFileParser *, CResponseSystem &);
	void LoadFromBuffer(CResponseFileParser *, const char *, const char *);
	void LoadFromFile(CResponseFileParser *, const char *);
	void ResolveToken(CResponseFileParser *, Matcher &, char *, size_t, const char *);
	void ResponseWarning(CResponseFileParser *, const char *, ...);
	void BuildDispatchTables(CResponseFileParser *);
	bool Dispatch(CResponseFileParser *, const char *, unsigned int, DispatchMap_t &);
	bool DispatchParseRule(CResponseFileParser *, const char *, unsigned int, ParseRuleDispatchMap_t &, Rule &);
	bool DispatchParseResponse(CResponseFileParser *, const char *, unsigned int, ParseResponseDispatchMap_t &, ParserResponse &, ResponseGroup &, ResponseParams *);
	bool DispatchParseResponseGroup(CResponseFileParser *, const char *, unsigned int, ParseResponseGroupDispatchMap_t &, const char *, ResponseGroup &, ResponseParams &);
	bool ParseToken(CResponseFileParser *);
	void Unget(CResponseFileParser *);
	bool TokenWaiting(CResponseFileParser *);
	void PushScript(CResponseFileParser *, const char *, unsigned char *);
	void PopScript(CResponseFileParser *);
	bool IsRootCommand(const CResponseFileParser *, unsigned int);
	bool IsRootCommand(const CResponseFileParser *);
	void ParseOneResponse(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams *);
	void ParseInclude(CResponseFileParser *);
	void ParseResponse(CResponseFileParser *);
	void ParseCriterion(CResponseFileParser *);
	void ParseRule(CResponseFileParser *);
	void ParseEnumeration(CResponseFileParser *);
	void ParseRule_MatchOnce(CResponseFileParser *, Rule &);
	void ParseRule_ApplyContextToWorld(CResponseFileParser *, Rule &);
	void ParseRule_ApplyContext(CResponseFileParser *, Rule &);
	void ParseRule_Response(CResponseFileParser *, Rule &);
	void ParseRule_Criteria(CResponseFileParser *, Rule &);
	void ParseResponse_Weight(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_PreDelay(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_NoDelay(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_DefaultDelay(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_Delay(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_SpeakOnce(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_NoScene(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_StopOnNonIdle(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_Odds(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_RespeakDelay(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_WeaponDelay(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_Soundlevel(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_DisplayFirst(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_DisplayLast(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_Fire(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponse_Then(CResponseFileParser *, ParserResponse &, ResponseGroup &, ResponseParams *);
	void ParseResponseGroup_Start(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_PreDelay(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_NoDelay(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_DefaultDelay(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_Delay(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_SpeakOnce(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_NoScene(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_StopOnNonIdle(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_Odds(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_RespeakDelay(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_WeaponDelay(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	void ParseResponseGroup_Soundlevel(CResponseFileParser *, const char *, ResponseGroup &, ResponseParams &);
	int ParseOneCriterion(CResponseFileParser *, const char *);
	void GetCurrentScript(CResponseFileParser *, char *, size_t);
	int GetCurrentToken(const CResponseFileParser *);
	void SetCurrentScript(CResponseFileParser *, const char *);
};

// src/responserules/runtime/response_system.h:208
class CResponseSystem : public IResponseSystem, public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
	struct Enumeration {
		float value;  // +0x0

		// sizeof = 4
	};

	struct PendingCriterionRule {
		PendingCriterionRule();
		~PendingCriterionRule();

		// sizeof = 24
	};

	struct ResponseSearchResult {
		ResponseSearchResult();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

public:

	bool m_bCustomManagable;  // +0x50c8
	typedef CUtlLinkedList<CRR_Concept, short unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CRR_Concept, short unsigned int>, unsigned int> > ExcludeList_t;

	static ExcludeList_t m_DebugExcludeList;
	CResponseSystem(const CResponseSystem &);
	CResponseSystem();
	virtual ~CResponseSystem();
	virtual bool FindBestResponse(const CResponseCriteriaSet &, CRR_Response &, IResponseFilter *);
	virtual void GetAllResponses(CUtlVector<CRR_Response, CUtlMemory<CRR_Response, int> > *);
	virtual void DumpRules();
	void SpewDebugInfo(const CResponseCriteriaSet &, CRR_Response &, bool);
	bool IsCustomManagable();
	void Clear();
	void DumpDictionary(const char *);
	CResponseFileParser * GetParser();
	void LoadFromFile(const char *);
	void ResetResponseGroups();
	virtual const char * GetScriptFile();
	void LoadFromBuffer(const char *, const char *);
	float LookForCriteria(const CResponseCriteriaSet &, int);
	float RecursiveLookForCriteria(const CResponseCriteriaSet &, Criteria *);
	void CopyRuleFrom(Rule *, tIndex, CResponseSystem *);
	void CopyCriteriaFrom(Rule *, Rule *, CResponseSystem *);
	void CopyResponsesFrom(Rule *, Rule *, CResponseSystem *);
	void CopyEnumerationsFrom(CResponseSystem *);
	bool Compare(const char *, Criteria *, bool);
	void ComputeMatcher(Criteria *, Matcher &);
	float LookupEnumeration(const char *, bool &);
	tIndex FindBestMatchingRule(const CResponseCriteriaSet &, bool, float &);
	float ScoreCriteriaAgainstRule(const CResponseCriteriaSet &, tRuleDict &, int, bool);
	float RecursiveScoreSubcriteriaAgainstRule(const CResponseCriteriaSet &, Criteria *, bool &, bool);
	float ScoreCriteriaAgainstRuleCriteria(const CResponseCriteriaSet &, int, bool &, bool);
	void FakeDepletes(ResponseGroup *, IResponseFilter *);
	void RevertFakedDepletes(ResponseGroup *);
	bool GetBestResponse(ResponseSearchResult &, Rule *, bool, IResponseFilter *);
	bool ResolveResponse(ResponseSearchResult &, int, const char *, bool, IResponseFilter *);
	int SelectWeightedResponseFromResponseGroup(ResponseGroup *, IResponseFilter *);
	void DescribeResponseGroup(ResponseGroup *, int, int);
	void DebugPrint(int, const char *, ...);
	void ResponseWarning(const char *, ...);
	bool PassesClassnameDebugFilter(const CResponseCriteriaSet &);

private:

	bool CompareUsingMatcherDota(const char *, Matcher &, bool);
	bool CompareUsingMatcherL4D(const char *, Matcher &, bool);
	bool CompareUsingMatcherNew(const char *, Matcher &, bool);

	// vtable[2] FindBestResponse
	// vtable[3] GetAllResponses
	// vtable[5] DumpRules
	// vtable[6] GetScriptFile
	// sizeof = 20688
};
