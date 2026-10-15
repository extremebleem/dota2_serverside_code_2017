// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ai_speechqueue.h:37
class CResponseQueue {
	struct CFollowupTargetSpec_t {
		EHANDLE m_hHandle;  // +0x4
		bool IsValid();
		CFollowupTargetSpec_t(const DeferredResponseTarget_t &, const EHANDLE &);
		CFollowupTargetSpec_t(const EHANDLE &);
		CFollowupTargetSpec_t(DeferredResponseTarget_t);
		CFollowupTargetSpec_t();
		CFollowupTargetSpec_t & operator=(CFollowupTargetSpec_t &);
		CFollowupTargetSpec_t & operator=(const CFollowupTargetSpec_t &);
		CFollowupTargetSpec_t(const CFollowupTargetSpec_t &);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct CDeferredResponse {
		int ()() * * _vptr.CDeferredResponse;  // +0x0
	private:

		AIConcept_t m_concept;  // +0x8
		DeferredContexts_t m_contexts;  // +0x10

		float m_fDispatchTime;  // +0x48
		EHANDLE m_hIssuer;  // +0x4c
		CDeferredResponse(CDeferredResponse &);
		CDeferredResponse(const CDeferredResponse &);
		~CDeferredResponse();
		CDeferredResponse();

		void Init(const AIConcept_t &, const CResponseCriteriaSet *, float, const CFollowupTargetSpec_t &, CBaseEntity *);
		bool IsQuashed();
		void Quash();

		// vtable[0] Schema_DynamicBinding
		// sizeof = 88
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CResponseQueue;  // +0x0
private:

	typedef CUtlFixedLinkedList<CResponseQueue::CDeferredResponse> QueueType_t;

protected:

	QueueType_t m_Queue;  // +0x8
	typedef CResponseCriteriaSet DeferredContexts_t;
	~CResponseQueue();
	CResponseQueue(CResponseQueue &);
	CResponseQueue(const CResponseQueue &);

private:

	void DeferContextsFromCriteriaSet(DeferredContexts_t &, const CResponseCriteriaSet *);
	CResponseQueue(int);
	void Add(const AIConcept_t &, const CResponseCriteriaSet *, float, const CFollowupTargetSpec_t &, CBaseEntity *);
	void Remove(const AIConcept_t &, CBaseEntity *);
	void RemoveSpeechQueuedFor(const CBaseEntity *);
	void Evacuate();
	void PerFrameDispatch();
	void AddExpresser(CAI_Expresser *);
	void RemoveExpresser(CAI_Expresser *);
	int GetNumExpresserTargets();
	CBaseEntity * GetExpresserHost(int);

protected:

	bool DispatchOneResponse(CDeferredResponse &);

private:

	bool DispatchOneResponse_ThenANY(CDeferredResponse &, CResponseCriteriaSet *, CBaseEntity *, float);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 112
};

// src/game/server/ai_speechqueue.h:170
class CResponseQueueManager : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	typedef CAutoGameSystem BaseClass;
	CResponseQueueManager(const CResponseQueueManager &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CResponseQueueManager *);
	CResponseQueueManager();
	virtual ~CResponseQueueManager();
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	CResponseQueue * GetQueue();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[11] GameDeactivate
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// sizeof = 32
};

// src/game/server/ai_speechqueue.h:244
class CAI_ExpresserWithFollowup : public CAI_Expresser {
public:

private:

protected:

	AI_ResponseFollowup * m_pPostponedFollowup;  // +0x60
	~CAI_ExpresserWithFollowup();
	CAI_ExpresserWithFollowup(CAI_ExpresserWithFollowup &);
	CAI_ExpresserWithFollowup(const CAI_ExpresserWithFollowup &);

private:

	CAI_ExpresserWithFollowup(CBaseFlex *);
	virtual bool Speak(AIConcept_t &, const char *, char *, size_t, IRecipientFilter *);
	virtual bool SpeakDispatchResponse(AIConcept_t &, AI_Response *, CResponseCriteriaSet *, IRecipientFilter *);
	virtual void SpeakDispatchFollowup(AI_ResponseFollowup &);
	virtual void OnSpeechFinished();

protected:

	void DispatchFollowupThroughQueue(const AIConcept_t &, const char *, const CFollowupTargetSpec_t &, float, CBaseEntity *);

	// vtable[1] Schema_DynamicBinding
	// vtable[6] Speak
	// vtable[2] SpeakDispatchResponse
	// vtable[7] SpeakDispatchFollowup
	// vtable[4] OnSpeechFinished
	// sizeof = 112
};

// src/game/server/ai_speechqueue.h:270
class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup {
public:

private:

	bool m_bAllowMultipleScenes;  // +0x70
	~CMultiplayer_Expresser();
	CMultiplayer_Expresser(CMultiplayer_Expresser &);
	CMultiplayer_Expresser(const CMultiplayer_Expresser &);

	CMultiplayer_Expresser(CBaseFlex *);
	virtual bool IsSpeaking();
	void AllowMultipleScenes();
	void DisallowMultipleScenes();

	// vtable[1] Schema_DynamicBinding
	// vtable[5] IsSpeaking
	// sizeof = 120
};
