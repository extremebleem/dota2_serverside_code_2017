// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlvector.h:35
struct base_vector_t {
	base_vector_t();

	// sizeof = 1
};

// src/public/tier1/utlvector.h:603
class CUtlVectorUltraConservativeAllocator {
	void * Alloc(size_t);
	void * Realloc(void *, size_t);
	void Free(void *);
	size_t GetSize(void *);

	// sizeof = 1
};

// src/public/tier1/utlvector.h:2307
class CUtlStringList : public CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > {
public:

	CUtlStringList();
	CUtlStringList(const char *, const char *);
	CUtlStringList(const char *, const char * *, int);
	~CUtlStringList();

	// sizeof = 24
};
