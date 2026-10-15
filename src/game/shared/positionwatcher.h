// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/positionwatcher.h:16
class IWatcherCallback {
	int ()() * * _vptr.IWatcherCallback;  // +0x0
	IWatcherCallback(const IWatcherCallback &);
	IWatcherCallback();
	virtual ~IWatcherCallback();

	// sizeof = 8
};

// src/game/shared/positionwatcher.h:22
class IPositionWatcher : public IWatcherCallback {
public:

	IPositionWatcher(IPositionWatcher &);
	IPositionWatcher(const IPositionWatcher &);
	IPositionWatcher();
	virtual void NotifyPositionChanged(CBaseEntity *);
	virtual ~IPositionWatcher();

	// vtable[2] NotifyPositionChanged
	// sizeof = 8
};

// src/game/shared/positionwatcher.h:38
class IVPhysicsWatcher : public IWatcherCallback {
public:

	IVPhysicsWatcher(IVPhysicsWatcher &);
	IVPhysicsWatcher(const IVPhysicsWatcher &);
	IVPhysicsWatcher();
	virtual void NotifyVPhysicsStateChanged(IPhysicsObject *, CBaseEntity *, bool);
	virtual void NotifyMotionState(CBaseEntity *, bool);
	virtual ~IVPhysicsWatcher();

	// vtable[2] NotifyVPhysicsStateChanged
	// vtable[3] NotifyMotionState
	// sizeof = 8
};

// src/game/shared/positionwatcher.h:54
class CWatcherList {
private:

	short unsigned int m_list;  // +0x0
	~CWatcherList();
	void Init();
	void NotifyPositionChanged(CBaseEntity *);
	void NotifyVPhysicsStateChanged(IPhysicsObject *, CBaseEntity *, bool);
	void NotifyMotionState(CBaseEntity *, bool);
	void AddToList(CBaseEntity *);
	void RemoveWatcher(CBaseEntity *);
	int GetCallbackObjects(IWatcherCallback * *, int);
	short unsigned int Find(CBaseEntity *);

	// sizeof = 2
};
