// Reconstructed from DWARF by pahole; not original source.

// src/public/animationsystem/ianimtagmanager.h:14
class IAnimTagListener {
	int ()() * * _vptr.IAnimTagListener;  // +0x0
	IAnimTagListener();
	virtual ~IAnimTagListener();
	virtual void OnTagEvent(const IAnimTag *, float, AnimTagStatus);

	// vtable[2] OnTagEvent
	// sizeof = 8
};
