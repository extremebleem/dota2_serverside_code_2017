// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/timedeventmgr.h:28
class IEventRegisterCallback {
	int ()() * * _vptr.IEventRegisterCallback;  // +0x0
	~IEventRegisterCallback();
	IEventRegisterCallback(IEventRegisterCallback &);
	IEventRegisterCallback(const IEventRegisterCallback &);
	IEventRegisterCallback & operator=(IEventRegisterCallback &);
	IEventRegisterCallback & operator=(const IEventRegisterCallback &);
	IEventRegisterCallback();
	virtual void FireEvent();

	// vtable[0] FireEvent
	// sizeof = 8
};

// src/game/shared/timedeventmgr.h:35
class CEventRegister {
private:

	float m_flNextEventTime;  // +0x10
	float m_flUpdateInterval;  // +0x14
	bool m_bRegistered;  // +0x18
	CEventRegister();
	~CEventRegister();
	void Init(CTimedEventMgr *, IEventRegisterCallback *);
	void SetUpdateInterval(float);
	void StopUpdates();
	bool IsRegistered();
	void Reregister();
	void Term();

	// sizeof = 32
};

// src/game/shared/timedeventmgr.h:70
class CTimedEventMgr {
private:

	CTimedEventMgr();
	void FireEvents();
	void RegisterForNextEvent(CEventRegister *);
	void RemoveEvent(CEventRegister *);

	// sizeof = 32
};
