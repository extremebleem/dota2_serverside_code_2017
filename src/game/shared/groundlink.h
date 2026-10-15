// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/groundlink.h:19
struct groundlink_t {
	EHANDLE entity;  // +0x0

private:

	static CUtlMemoryPool<groundlink_t> s_Allocator;
	groundlink_t();
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);

	// sizeof = 24
};
