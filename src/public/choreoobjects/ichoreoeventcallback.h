// Reconstructed from DWARF by pahole; not original source.

// src/public/choreoobjects/ichoreoeventcallback.h:24
class IChoreoEventCallback {
	int ()() * * _vptr.IChoreoEventCallback;  // +0x0
	IChoreoEventCallback(IChoreoEventCallback &);
	IChoreoEventCallback(const IChoreoEventCallback &);
	~IChoreoEventCallback();
	IChoreoEventCallback();
	virtual void StartEvent(float, CChoreoScene *, CChoreoEvent *);
	virtual void EndEvent(float, CChoreoScene *, CChoreoEvent *);
	virtual void ProcessEvent(float, CChoreoScene *, CChoreoEvent *);
	virtual bool CheckEvent(float, CChoreoScene *, CChoreoEvent *);

	// vtable[0] StartEvent
	// vtable[1] EndEvent
	// vtable[2] ProcessEvent
	// vtable[3] CheckEvent
	// sizeof = 8
};
