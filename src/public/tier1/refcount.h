// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/refcount.h:20
class IRefCounted {
	int ()() * * _vptr.IRefCounted;  // +0x0
	IRefCounted & operator=(IRefCounted &);
	IRefCounted & operator=(const IRefCounted &);
	~IRefCounted();
	IRefCounted(IRefCounted &);
	IRefCounted(const IRefCounted &);
	IRefCounted();
	virtual int AddRef();
	virtual int Release();

	// vtable[0] AddRef
	// vtable[1] Release
	// sizeof = 8
};

// src/public/tier1/refcount.h:154
class CRefMT {
	int Increment(int *);
	int Decrement(int *);

	// sizeof = 1
};
