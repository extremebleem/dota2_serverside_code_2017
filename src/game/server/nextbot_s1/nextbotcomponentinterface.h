// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotcomponentinterface.h:21
class INextBotReply {
	enum FailureReason {
		DENIED = 0,
		INTERRUPTED = 0x1,
		FAILED = 0x2,
	};

	int ()() * * _vptr.INextBotReply;  // +0x0
private:

	INextBotReply & operator=(INextBotReply &);
	INextBotReply & operator=(const INextBotReply &);
	~INextBotReply();
	INextBotReply(INextBotReply &);
	INextBotReply(const INextBotReply &);
	INextBotReply();

	virtual void OnSuccess(INextBot *);
	virtual void OnFail(INextBot *, FailureReason);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] OnSuccess
	// vtable[2] OnFail
	// sizeof = 8
};

// src/game/server/nextbot_s1/nextbotcomponentinterface.h:21
class INextBotReply {
	enum FailureReason {
		DENIED = 0,
		INTERRUPTED = 0x1,
		FAILED = 0x2,
	};

	int ()() * * _vptr.INextBotReply;  // +0x0
private:

	INextBotReply(INextBotReply &);
	INextBotReply(const INextBotReply &);
	INextBotReply();

	virtual void OnSuccess(INextBot *);
	virtual void OnFail(INextBot *, FailureReason);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] OnSuccess
	// vtable[2] OnFail
	// sizeof = 8
};

// src/game/server/nextbot_s1/nextbotcomponentinterface.h:41
class INextBotComponent : public INextBotEventResponder {
public:

private:

	float m_lastUpdateTime;  // +0x8
	float m_curInterval;  // +0xc
	INextBotComponent(const INextBotComponent &);

	INextBotComponent(INextBot *);
	virtual ~INextBotComponent();
	virtual void Reset();
	virtual void Update();
	virtual void Upkeep();
	virtual const char * GetName();
	bool ComputeUpdateInterval(float);
	float GetUpdateInterval();
	INextBot * GetBot();

	// vtable[0] Schema_DynamicBinding
	// vtable[62] Reset
	// vtable[63] Update
	// vtable[64] Upkeep
	// vtable[65] GetName
	// sizeof = 32
};
