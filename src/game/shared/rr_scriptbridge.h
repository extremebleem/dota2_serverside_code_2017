// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/rr_scriptbridge.h:24
class CRuleScriptBridge {
protected:

	struct CScriptResponse_t : public IRulePayload {
	public:

		CScriptResponse_t(HSCRIPT, HSCRIPT);
		virtual ~CScriptResponse_t();
		bool IsValid();
		virtual size_t GetSizeInMem();

	private:

		CScriptResponse_t(const CScriptResponse_t &);
		CScriptResponse_t & operator=(const CScriptResponse_t &);

		// vtable[2] GetSizeInMem
		// sizeof = 24
	};
	CRuleScriptBridge();
	~CRuleScriptBridge();
	bool IsInitialized();
	bool DebugInitialization();
	bool DebugMatching();
	bool InitDB();
	void TermDB();
	bool AddRuleFromScript(IResponseDB *, HSCRIPT, bool);
	CScriptAutoRef ResponseQueryToScript(const CResponseQuery *);
	bool ScriptToResponseQuery(CResponseQuery &, HSCRIPT);
	bool Binding_AddRuleFromScript(HSCRIPT);
	HSCRIPT Binding_FindBestMatch(HSCRIPT);
	HSCRIPT Binding_FindAllMatches(HSCRIPT, float);
	bool AddCriterionFromScript(CRuleBuilder &, const CScriptAutoRef &);
	void AddContextFromScript(HSCRIPT, CRuleBuilder &, const char *);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 8
};

// src/game/shared/rr_scriptbridge.h:100
class CSpeechScriptBridge {
protected:

	bool m_bInitialized;  // +0x0

	CScriptScope m_hScriptScope;  // +0x8
	struct CSpeechResponse_t : public CScriptResponse_t {
	public:

		CSpeechResponse_t(const CSpeechResponse_t &);
		CSpeechResponse_t(HSCRIPT, HSCRIPT);
		virtual ~CSpeechResponse_t();
		bool IsValid();

		// sizeof = 32
	};
	CSpeechScriptBridge();
	~CSpeechScriptBridge();
	bool Init();
	void Term();
	bool FindBestResponse(const CResponseCriteriaSet &, MatchInfo_t &, AI_Response &, IResponseFilter *);
	const CScriptScope & GetScope();
	CScriptScope & GetScope();
	bool AddRuleFromScript(IResponseDB *, HSCRIPT, bool);
	void Precache();
	bool MakeOldResponse(AI_Response *, const CSpeechResponse_t *, MatchInfo_t &);
	/* tag__fprintf: const_type tag not supported! */;
	ResponseType_t ScriptToOldResponseType(int);
	IResponseDB * DB();
	bool Script_AddDecisionRule(HSCRIPT);
	CScriptAutoRef AICriteriaSetToScript(const CResponseCriteriaSet *);
	void AICriteriaSetToScript(const CResponseCriteriaSet *, HSCRIPT);
	bool ScriptToAICriteriaSet(CResponseCriteriaSet *, HSCRIPT);
	bool UnpackScriptTableToAIResponse(AI_Response *, CResponseCriteriaSet *, AIConcept_t *, HSCRIPT);
	bool Script_FindBestResponse(HSCRIPT, HSCRIPT, HSCRIPT);
	bool Script_CommitAIResponse(HSCRIPT, HSCRIPT);
	CAI_Concept AIConceptFromCriteriaSet(const CResponseCriteriaSet &);
	HSCRIPT Script_GetExpressers();
	Symbol TranslateSymbol(const CritSymbol_t &);
	void MapOldToNewQuery(const CResponseCriteriaSet &, CResponseQuery *);
	void AddFollowupFromScript(CScriptAutoRef &, AI_Response *, AI_ResponseParams &, const char *);

	// sizeof = 40
};
