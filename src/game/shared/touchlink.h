// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/touchlink.h:24
struct touchlink_t {
	EHANDLE entityTouched;  // +0x0

	int touchStamp;  // +0x18
	int flags;  // +0x1c
private:

	static CUtlMemoryPool<touchlink_t> s_Allocator;
	touchlink_t();
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);

	// sizeof = 32
};
