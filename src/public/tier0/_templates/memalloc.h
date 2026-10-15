// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/memalloc.h:533
class CAlignedNewDeleteNoBase<1024> {
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);
	void * operator new [](size_t);
	void * operator new [](size_t, int, const char *, int);
	void operator delete [](void *);
	void operator delete [](void *, int, const char *, int);

	// sizeof = 1
};
