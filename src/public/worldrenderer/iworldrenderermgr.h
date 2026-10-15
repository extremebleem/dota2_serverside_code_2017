// Reconstructed from DWARF by pahole; not original source.

// src/public/worldrenderer/iworldrenderermgr.h:64
class IComputeWorldOriginCallback {
	int ()() * * _vptr.IComputeWorldOriginCallback;  // +0x0
	~IComputeWorldOriginCallback();
	IComputeWorldOriginCallback(IComputeWorldOriginCallback &);
	IComputeWorldOriginCallback(const IComputeWorldOriginCallback &);
	IComputeWorldOriginCallback();
	virtual matrix3x4a_t ComputeWorldOrigin(const char *, SpawnGroupHandle_t, IWorld *);

	// vtable[0] ComputeWorldOrigin
	// sizeof = 8
};
