// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/eventqueue.h:22
class IEventQueuedMessage {
	int ()() * * _vptr.IEventQueuedMessage;  // +0x0
	IEventQueuedMessage();
	virtual ~IEventQueuedMessage();
	virtual void Dispatch();
	virtual bool DispatchWithReturnValue();

	// vtable[2] Dispatch
	// vtable[3] DispatchWithReturnValue
	// sizeof = 8
};
