// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/hintmessage.h:25
class CHintMessage {
	int ()() * * _vptr.CHintMessage;  // +0x0
private:

	const char * m_hintString;  // +0x8
	float m_duration;  // +0x28
	CHintMessage(const CHintMessage &);

	CHintMessage(const char *, CUtlVector<char const*, CUtlMemory<char const*, int> > *, float);
	~CHintMessage();
	float GetDuration();
	void Send(CBasePlayer *);
	bool IsEquivalent(const char *, CUtlVector<char const*, CUtlMemory<char const*, int> > *);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 48
};

// src/game/shared/hintmessage.h:49
class CHintMessageQueue {
	int ()() * * _vptr.CHintMessageQueue;  // +0x0
private:

	float m_tmMessageEnd;  // +0x8

	~CHintMessageQueue();
	CHintMessageQueue(CHintMessageQueue &);
	CHintMessageQueue(const CHintMessageQueue &);

	CHintMessageQueue(CBasePlayer *);
	void Reset();
	void Update();
	bool AddMessage(const char *, float, CUtlVector<char const*, CUtlMemory<char const*, int> > *);
	bool IsEmpty();

	// vtable[0] Schema_DynamicBinding
	// sizeof = 48
};

// src/game/shared/hintmessage.h:69
class CHintMessageTimers {
	struct hintmessagetime_t {
		int iHintID;  // +0x0

		float flMessageDuration;  // +0x20

		hintmessagetime_t(float);
		~hintmessagetime_t();

		// sizeof = 64
	};

private:

	CHintMessageTimers();
	CHintMessageTimers(CHintSystem *, CHintMessageQueue *);
	void Reset();
	void Update();
	void AddTimer(int, float, float, CUtlVector<char const*, CUtlMemory<char const*, int> > *);
	void RemoveTimer(int);
	void StartTimer(int);
	void StopTimer(int);
	int GetTimerIndex(int);

	// sizeof = 40
};

// src/game/shared/hintmessage.h:69
class CHintMessageTimers {
	struct hintmessagetime_t {
		int iHintID;  // +0x0

		float flMessageDuration;  // +0x20

		hintmessagetime_t(float);
		~hintmessagetime_t();

		// sizeof = 64
	};

private:

	CHintMessageTimers();
	CHintMessageTimers(CHintSystem *, CHintMessageQueue *);
	void Reset();
	void Update();
	void AddTimer(int, float, float, CUtlVector<char const*, CUtlMemory<char const*, int> > *);
	void RemoveTimer(int);
	void StartTimer(int);
	void StopTimer(int);
	int GetTimerIndex(int);
	~CHintMessageTimers();

	// sizeof = 40
};
