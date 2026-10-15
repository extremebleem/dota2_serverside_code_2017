// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_speech.h:138
class CDOTA_Response {
	AI_Response m_Response;  // +0x0
	float m_flLastSpokenTime;  // +0x1c0
	CDOTA_Response();
	~CDOTA_Response();

	// sizeof = 456
};

// src/game/shared/dota/dota_speech.h:151
class CDOTA_SpeechConcept {
	float m_flConceptMuteTime;  // +0x18
	CDOTA_SpeechConcept();
	CDOTA_Response * FindResponse(const char *);
	~CDOTA_SpeechConcept();

	// sizeof = 32
};

// src/game/shared/dota/dota_speech.h:171
class IDOTA_SpeechQueuedCallback {
	int ()() * * _vptr.IDOTA_SpeechQueuedCallback;  // +0x0
	IDOTA_SpeechQueuedCallback(const IDOTA_SpeechQueuedCallback &);
	IDOTA_SpeechQueuedCallback();
	virtual void Go(CDOTA_Speech *, bool, CDOTA_SpeechConceptQueued &);
	virtual ~IDOTA_SpeechQueuedCallback();

	// vtable[0] Go
	// sizeof = 8
};

// src/game/shared/dota/dota_speech.h:181
class CDOTA_SpeechConceptQueued {
	int iConcept;  // +0x38
	int iRecipientType;  // +0x3c

	bool m_bInvalidatedByConcepts;  // +0x58
	bool m_bMuteable;  // +0x59

protected:

	CDOTA_SpeechConceptQueued();
	~CDOTA_SpeechConceptQueued();
	void AddCallback(IDOTA_SpeechQueuedCallback *);
	void ExecuteCallback(CDOTA_Speech *, bool);
	void RemoveCallback();

	// sizeof = 144
};

// src/game/shared/dota/dota_speech.h:287
class CDOTA_Speech : public IResponseFilter {
	typedef SpeechSource_t SpeechSource_t;

public:

private:

	float m_flLastTimeAcceptedSpeak;  // +0x8
	float m_flStopTalkTime;  // +0xc
	int m_iActiveConcept;  // +0x10
	int m_iRecipientType;  // +0x14

	EHANDLE m_hScene;  // +0xb0
	bool m_bNetworkToClient;  // +0xb4

	CDOTA_Speech(const CDOTA_Speech &);
	CDOTA_Speech();
	~CDOTA_Speech();
	void SetMatchRulesOnClient(bool);
	bool SpeakConcept(int, CResponseCriteriaSet *, int, SpeechSource_t *, bool, bool, CUtlVector<CBasePlayer*, CUtlMemory<CBasePlayer*, int> > *);
	void QueueConcept(int, float, CResponseCriteriaSet *, int, bool, IDOTA_SpeechQueuedCallback *, SpeechSource_t *, bool);
	void Think();
	bool CanSpeak(int, int);
	bool IsSpeaking();
	float GetStopTalkTime();
	float GetRemainingSpeechTime();
	CDOTA_BaseNPC * GetOuter();
	void SetOuter(CDOTA_BaseNPC *);
	void NoteSpeaking(float, float);
	bool Speak(const char *, float, int, int, soundlevel_t, SpeechSource_t *, AI_ResponseFollowup *, const CResponseCriteriaSet *, bool, CUtlVector<CBasePlayer*, CUtlMemory<CBasePlayer*, int> > *);
	float GetConceptDefaultMuteTime(int);
	float GetSoundLevelForConcept(int);
	int GetActiveConcept();
	bool ShouldSpeakConceptWhileDead(int);
	virtual bool IsValidResponse(ResponseType_t, const char *);
	int GetUserMessageTypeForConcept(int);
	bool IsConceptHighPriority(int);
	bool IsConceptLowPriority(int);
	int GetActiveConceptRecipientType();
	void SpeechSourceToNetFilter(CRecipientFilter *, int, SpeechSource_t *, CUtlVector<CBasePlayer*, CUtlMemory<CBasePlayer*, int> > *);
	void ModifyOrAppendGlobalCriteria(CResponseCriteriaSet &);
	void PopulateQueuedConceptStruct(int, float, CResponseCriteriaSet *, int, bool, IDOTA_SpeechQueuedCallback *, SpeechSource_t *, bool);
	void SpeakQueuedConceptAndSetupCallback();

	// vtable[0] IsValidResponse
	// sizeof = 1432
};

// src/game/shared/dota/dota_speech.h:395
class CDOTA_SpeechHandle {
	typedef SpeechSource_t SpeechSource_t;
	~CDOTA_SpeechHandle();
	CDOTA_SpeechHandle();
	void Init(CDOTA_BaseNPC *);
	bool Speak(const char *, float, int, int, soundlevel_t, SpeechSource_t *, AI_ResponseFollowup *, const CResponseCriteriaSet *, bool, CUtlVector<CBasePlayer*, CUtlMemory<CBasePlayer*, int> > *);
	bool SpeakConcept(int, CResponseCriteriaSet *, int, SpeechSource_t *, bool, bool, CUtlVector<CBasePlayer*, CUtlMemory<CBasePlayer*, int> > *);
	void QueueConcept(int, float, CResponseCriteriaSet *, int, bool, IDOTA_SpeechQueuedCallback *, SpeechSource_t *, bool);
	void SetMatchRulesOnClient(bool);
	void Think();
	int GetUserMessageTypeForConcept(int);
	float GetStopTalkTime();
	bool CanSpeak(int, int);
	bool IsSpeaking();
	int GetActiveConcept();

	// sizeof = 8
};

// src/game/shared/dota/dota_speech.h:493
class CDOTA_SpeechCallbackForwardToPlayersAnnouncer : public IDOTA_SpeechQueuedCallback {
public:

protected:

	CDOTA_SpeechCallbackForwardToPlayersAnnouncer(CBasePlayer *);
	virtual void Go(CDOTA_Speech *, bool, CDOTA_SpeechConceptQueued &);
	void MakeNetworkFilter(CRecipientFilter &);
	virtual ~CDOTA_SpeechCallbackForwardToPlayersAnnouncer();

	// vtable[0] Go
	// sizeof = 16
};

// src/game/shared/dota/dota_speech.h:515
class CResponseQueryNetworking {
private:

	static INetworkStringTable * sm_pStringTableResponseKeys;
	CResponseQueryNetworking();
	int CritSymbolToNetworkIdx(const CritSymbol_t &);
	CritSymbol_t NetworkIdxToCritSymbol(int);
	const char * NetworkIdxToString(int);
	void PrecacheKnownSymbols();
	void UnserializeCriteriaSet(CResponseCriteriaSet &, const CDOTAResponseQuerySerialized &);
	void NetworkSpeakConcept(CBaseEntity *, CResponseCriteriaSet &, IRecipientFilter &, int, int);
	void NetworkSpeakConcept(CBaseEntity *, CResponseCriteriaSet &, int, int, SpeechSource_t *, CUtlVector<CBasePlayer*, CUtlMemory<CBasePlayer*, int> > *);
	void PopulateNetworkedQuery(CDOTAResponseQuerySerialized *, CResponseCriteriaSet &);
	bool lambdaAddKeyToNetworkStringTable(CritSymbol_t, const char *);

	// sizeof = 1
};
