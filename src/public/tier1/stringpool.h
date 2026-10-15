// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/stringpool.h:31
class CStringPool {
protected:

	typedef CUtlRBTree<char const*, short unsigned int, bool (*)(char const* const&, char const* const&), CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int> > CStrSet;

	CStrSet m_Strings;  // +0x10
	CStringPool(StringPoolCase_t);
	~CStringPool();
	unsigned int Count();
	const char * Allocate(const char *);
	void FreeAll();
	const char * Find(const char *);

	// sizeof = 56
};
