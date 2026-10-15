// Reconstructed from DWARF by pahole; not original source.

// src/public/igameevents.h:67
class IGameEvent {
	int ()() * * _vptr.IGameEvent;  // +0x0
	IGameEvent();
	virtual ~IGameEvent();
	virtual const char * GetName();
	virtual int GetID();
	virtual bool IsReliable();
	virtual bool IsLocal();
	virtual bool IsEmpty(const char *);
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
	void SetInt(const char *, CEntityIndex);
	void SetEntityIndex(const char *, CEntityIndex);
	CEntityIndex GetEntityIndex(const char *, CEntityIndex);

	// vtable[2] GetName
	// vtable[3] GetID
	// vtable[4] IsReliable
	// vtable[5] IsLocal
	// vtable[6] IsEmpty
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
	// sizeof = 8
};

// src/public/igameevents.h:115
class IGameEventListener2 {
	int ()() * * _vptr.IGameEventListener2;  // +0x0
	IGameEventListener2(const IGameEventListener2 &);
	IGameEventListener2();
	virtual ~IGameEventListener2();
	virtual void FireGameEvent(IGameEvent *);

	// vtable[2] FireGameEvent
	// sizeof = 8
};

// src/public/igameevents.h:125
class IGameEventManager2 : public IBaseInterface {
public:

	IGameEventManager2();
	virtual ~IGameEventManager2();
	virtual int LoadEventsFromFile(const char *);
	virtual void Reset();
	virtual int AddListener(IGameEventListener2 *, const char *, bool);
	virtual bool FindListener(IGameEventListener2 *, const char *);
	virtual void RemoveListener(IGameEventListener2 *);
	virtual IGameEvent * CreateEvent(const char *, bool, int *);
	IGameEvent * CreateEvent(const char *, int *);
	virtual bool FireEvent(IGameEvent *, bool);
	virtual bool FireEventClientSide(IGameEvent *);
	virtual IGameEvent * DuplicateEvent(IGameEvent *);
	virtual void FreeEvent(IGameEvent *);
	virtual bool SerializeEvent(IGameEvent *, Source1LegacyGameEvent_t *);
	virtual IGameEvent * UnserializeEvent(const Source1LegacyGameEvent_t *);
	virtual int LookupEventId(const char *);
	virtual void PrintEventToString(IGameEvent *, CUtlString &);

	// vtable[2] LoadEventsFromFile
	// vtable[3] Reset
	// vtable[4] AddListener
	// vtable[5] FindListener
	// vtable[6] RemoveListener
	// vtable[7] CreateEvent
	// vtable[8] FireEvent
	// vtable[9] FireEventClientSide
	// vtable[10] DuplicateEvent
	// vtable[11] FreeEvent
	// vtable[12] SerializeEvent
	// vtable[13] UnserializeEvent
	// vtable[14] LookupEventId
	// vtable[15] PrintEventToString
	// sizeof = 8
};
