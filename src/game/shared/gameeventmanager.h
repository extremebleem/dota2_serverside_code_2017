// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gameeventmanager.h:23
class CGameEventCallback {
	int m_nListenerType;  // +0x8

	// sizeof = 16
};

// src/game/shared/gameeventmanager.h:30
class CGameEventDescriptor {
	int eventid;  // +0x0
	int elementIndex;  // +0x4
	bool local;  // +0x28
	bool reliable;  // +0x29

	int numSerialized;  // +0x2c
	int numUnSerialized;  // +0x30
	int totalSerializedBits;  // +0x34
	int totalUnserializedBits;  // +0x38
	CGameEventDescriptor();

	// sizeof = 64
};

// src/game/shared/gameeventmanager.h:62
class CGameEvent : public IGameEvent {
public:

	CGameEvent(const CGameEvent &);
	CGameEvent(CGameEventDescriptor *, const char *);
	virtual ~CGameEvent();
	virtual const char * GetName();
	virtual int GetID();
	virtual bool IsEmpty(const char *);
	virtual bool IsLocal();
	virtual bool IsReliable();
	virtual bool GetBool(const char *, bool);
	virtual int GetInt(const char *, int);
	virtual uint64 GetUint64(const char *, uint64);
	virtual float GetFloat(const char *, float);
	virtual const char * GetString(const char *, const char *);
	virtual const void * GetPtr(const char *);
	virtual void SetBool(const char *, bool);
	virtual void SetInt(const char *, int);
	virtual void SetUint64(const char *, uint64);
	virtual void SetFloat(const char *, float);
	virtual void SetString(const char *, const char *);
	virtual void SetPtr(const char *, const void *);
	virtual KeyValues * GetDataKeys();

	// vtable[2] GetName
	// vtable[3] GetID
	// vtable[6] IsEmpty
	// vtable[5] IsLocal
	// vtable[4] IsReliable
	// vtable[7] GetBool
	// vtable[8] GetInt
	// vtable[9] GetUint64
	// vtable[10] GetFloat
	// vtable[11] GetString
	// vtable[12] GetPtr
	// vtable[13] SetBool
	// vtable[14] SetInt
	// vtable[15] SetUint64
	// vtable[16] SetFloat
	// vtable[17] SetString
	// vtable[18] SetPtr
	// vtable[19] GetDataKeys
	// sizeof = 24
};

// src/game/shared/gameeventmanager.h:96
class Source1LegacyGameEventList_t : public CNetMessagePB<205, CMsgSource1LegacyGameEventList, (SignonGroup_t)10u, (NetChannelBufType_t)1, true> {
public:

	Source1LegacyGameEventList_t(Source1LegacyGameEventList_t &);
	Source1LegacyGameEventList_t(const Source1LegacyGameEventList_t &);
	Source1LegacyGameEventList_t();
	virtual ~Source1LegacyGameEventList_t();

	// sizeof = 48
};

// src/game/shared/gameeventmanager.h:98
class Source1LegacyGameEvent_t : public CNetMessagePB<207, CMsgSource1LegacyGameEvent, (SignonGroup_t)5u, (NetChannelBufType_t)1, true> {
public:

	Source1LegacyGameEvent_t(Source1LegacyGameEvent_t &);
	Source1LegacyGameEvent_t(const Source1LegacyGameEvent_t &);
	Source1LegacyGameEvent_t();
	virtual ~Source1LegacyGameEvent_t();

	// sizeof = 64
};

// src/game/shared/gameeventmanager.h:104
class CGameEventManager : public IGameEventManager2 {
	enum {
		SERVERSIDE = 0,
		CLIENTSIDE = 0x1,
		CLIENTSTUB = 0x2,
	};

	enum {
		TYPE_LOCAL = 0,
		TYPE_STRING = 0x1,
		TYPE_FLOAT = 0x2,
		TYPE_LONG = 0x3,
		TYPE_SHORT = 0x4,
		TYPE_BYTE = 0x5,
		TYPE_BOOL = 0x6,
		TYPE_UINT64 = 0x7,
	};

public:

protected:

	bool m_bClientListenersChanged;  // +0xe0
	CGameEventManager(const CGameEventManager &);
	CGameEventManager();
	virtual ~CGameEventManager();
	virtual int LoadEventsFromFile(const char *);
	virtual void Reset();
	virtual int AddListener(IGameEventListener2 *, const char *, bool);
	virtual bool FindListener(IGameEventListener2 *, const char *);
	virtual void RemoveListener(IGameEventListener2 *);
	virtual IGameEvent * CreateEvent(const char *, bool, int *);
	virtual IGameEvent * DuplicateEvent(IGameEvent *);
	virtual bool FireEvent(IGameEvent *, bool);
	virtual bool FireEventClientSide(IGameEvent *);
	virtual void FreeEvent(IGameEvent *);
	virtual bool SerializeEvent(IGameEvent *, Source1LegacyGameEvent_t *);
	virtual IGameEvent * UnserializeEvent(const Source1LegacyGameEvent_t *);
	virtual int LookupEventId(const char *);
	virtual void PrintEventToString(IGameEvent *, CUtlString &);
	int GetInvalidDescriptorID();
	bool Init();
	void Shutdown();
	void ReloadEventDefinitions();
	int AddListener(IGameEventListener2 *, CGameEventDescriptor *, int);
	CGameEventDescriptor * GetEventDescriptor(const char *, int *);
	CGameEventDescriptor * GetEventDescriptor(IGameEvent *);
	CGameEventDescriptor * GetEventDescriptor(int);
	void WriteEventList(Source1LegacyGameEventList_t *);
	bool ParseEventList(const Source1LegacyGameEventList_t *);
	void WriteListenEventList(Source1LegacyListenEvents_t *);
	bool HasClientListenersChanged(bool);
	void ConPrintEvent(IGameEvent *);
	void UpdateListenEventList(CSplitScreenSlot);
	IGameEvent * CreateEvent(CGameEventDescriptor *, const char *);
	bool RegisterEvent(KeyValues *);
	void UnregisterEvent(int);
	bool FireEventIntern(IGameEvent *, bool, bool);
	CGameEventCallback * FindEventListener(IGameEventListener2 *);

	// vtable[2] LoadEventsFromFile
	// vtable[3] Reset
	// vtable[4] AddListener
	// vtable[5] FindListener
	// vtable[6] RemoveListener
	// vtable[7] CreateEvent
	// vtable[10] DuplicateEvent
	// vtable[8] FireEvent
	// vtable[9] FireEventClientSide
	// vtable[11] FreeEvent
	// vtable[12] SerializeEvent
	// vtable[13] UnserializeEvent
	// vtable[14] LookupEventId
	// vtable[15] PrintEventToString
	// sizeof = 232
};
