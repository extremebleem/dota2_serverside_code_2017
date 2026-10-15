// Reconstructed from DWARF by pahole; not original source.

// src/public/utlcachedfiledata.h:27
class IBaseCacheInfo {
	int ()() * * _vptr.IBaseCacheInfo;  // +0x0
	IBaseCacheInfo(IBaseCacheInfo &);
	IBaseCacheInfo(const IBaseCacheInfo &);
	IBaseCacheInfo();
	virtual void Save(CUtlBuffer &);
	virtual void Restore(CUtlBuffer &);
	virtual void Rebuild(const char *);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[2] Rebuild
	// sizeof = 8
};
