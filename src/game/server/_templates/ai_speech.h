// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ai_speech.h:115
class CSchemaTypeOf<CAI_ExpresserSink> {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/game/server/ai_speech.h:279
class CAI_ExpresserHost<CBasePlayer> : public CBasePlayer, protected CAI_ExpresserSink {
public:

protected:

	CAI_ExpresserHost(CAI_ExpresserHost<CBasePlayer> &);
	CAI_ExpresserHost(CAI_ExpresserHost<CBasePlayer> &);
	CAI_ExpresserHost();
	virtual void NoteSpeaking(float, float);
	virtual bool Speak(AIConcept_t, const char *, char *, size_t, IRecipientFilter *);
	virtual bool Speak(AIConcept_t, CResponseCriteriaSet *, char *, size_t, IRecipientFilter *);
	virtual bool SpeakIfAllowed(AIConcept_t, const char *, bool, char *, size_t);
	virtual bool SpeakIfAllowed(AIConcept_t, CResponseCriteriaSet *, bool, char *, size_t);
	void GatherCriteria(CResponseCriteriaSet *, const AIConcept_t &, const char *);
	bool FindResponse(AI_Response &, AIConcept_t &, CResponseCriteriaSet *);
	bool SpeakDispatchResponse(AIConcept_t, AI_Response *, CResponseCriteriaSet *);
	virtual void PostSpeakDispatchResponse(AIConcept_t, AI_Response *);
	float GetResponseDuration(AI_Response *);
	float GetTimeSpeechComplete();
	bool IsSpeaking();
	virtual bool CanSpeak();
	bool CanSpeakAfterMyself();
	void SetSpokeConcept(AIConcept_t, AI_Response *, bool);
	float GetTimeSpokeConcept(AIConcept_t);
	bool SpokeConcept(AIConcept_t);
	int PlaySentence(const char *, float, float, soundlevel_t, CBaseEntity *);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual IResponseSystem * GetResponseSystem();
	virtual void DispatchResponse(const char *);
	virtual ~CAI_ExpresserHost();

	// vtable[542] NoteSpeaking
	// vtable[543] Speak
	// vtable[544] Speak
	// vtable[545] SpeakIfAllowed
	// vtable[546] SpeakIfAllowed
	// vtable[547] PostSpeakDispatchResponse
	// vtable[495] CanSpeak
	// vtable[159] ModifyOrAppendCriteria
	// vtable[73] GetResponseSystem
	// vtable[548] DispatchResponse
	// sizeof = 4496
};

// src/game/server/ai_speech.h:279
class CAI_ExpresserHost<CFlexExpresserShim> : public CFlexExpresserShim, protected CAI_ExpresserSink {
public:

protected:

	CAI_ExpresserHost(CAI_ExpresserHost<CFlexExpresserShim> &);
	CAI_ExpresserHost(CAI_ExpresserHost<CFlexExpresserShim> &);
	CAI_ExpresserHost();
	virtual void NoteSpeaking(float, float);
	virtual bool Speak(AIConcept_t, const char *, char *, size_t, IRecipientFilter *);
	virtual bool Speak(AIConcept_t, CResponseCriteriaSet *, char *, size_t, IRecipientFilter *);
	virtual bool SpeakIfAllowed(AIConcept_t, const char *, bool, char *, size_t);
	virtual bool SpeakIfAllowed(AIConcept_t, CResponseCriteriaSet *, bool, char *, size_t);
	void GatherCriteria(CResponseCriteriaSet *, const AIConcept_t &, const char *);
	bool FindResponse(AI_Response &, AIConcept_t &, CResponseCriteriaSet *);
	bool SpeakDispatchResponse(AIConcept_t, AI_Response *, CResponseCriteriaSet *);
	virtual void PostSpeakDispatchResponse(AIConcept_t, AI_Response *);
	float GetResponseDuration(AI_Response *);
	float GetTimeSpeechComplete();
	bool IsSpeaking();
	bool CanSpeak();
	bool CanSpeakAfterMyself();
	void SetSpokeConcept(AIConcept_t, AI_Response *, bool);
	float GetTimeSpokeConcept(AIConcept_t);
	bool SpokeConcept(AIConcept_t);
	int PlaySentence(const char *, float, float, soundlevel_t, CBaseEntity *);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual IResponseSystem * GetResponseSystem();
	virtual void DispatchResponse(const char *);
	virtual ~CAI_ExpresserHost();

	// vtable[263] NoteSpeaking
	// vtable[264] Speak
	// vtable[265] Speak
	// vtable[266] SpeakIfAllowed
	// vtable[267] SpeakIfAllowed
	// vtable[268] PostSpeakDispatchResponse
	// vtable[159] ModifyOrAppendCriteria
	// vtable[73] GetResponseSystem
	// vtable[269] DispatchResponse
	// sizeof = 9624
};

// src/game/server/ai_speech.h:321
struct CallRegisterFunctionForClass_t<CAI_ExpresserHost<CBasePlayer> > {
	void Call(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};

// src/game/server/ai_speech.h:321
struct CallRegisterFunctionForClass_t<CAI_ExpresserHost<CFlexExpresserShim> > {
	void Call(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};
