// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/stringpool.h:31
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

// src/game/public/tier1/stringpool.h:60
class CCountedStringPool {
	struct hash_item_t {
		const char * m_pString;  // +0x0
		short unsigned int m_nNextElement;  // +0x8
		unsigned char m_nReferenceCount;  // +0xa
		unsigned char m_pad;  // +0xb

		// sizeof = 16
	};

	enum {
		INVALID_ELEMENT = 0,
		MAX_REFERENCE = 0xff,
		HASH_TABLE_SIZE = 0x400,
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CCountedStringPool;  // +0x0
	short unsigned int m_FreeListStart;  // +0x38

	CCountedStringPool(const CCountedStringPool &);
	CCountedStringPool(StringPoolCase_t);
	virtual ~CCountedStringPool();
	void FreeAll();
	const char * FindString(const char *);
	const char * ReferenceString(const char *);
	void DereferenceString(const char *);
	short unsigned int FindStringHandle(const char *);
	short unsigned int ReferenceStringHandle(const char *);
	const char * HandleToString(short unsigned int);
	void SpewStrings();
	unsigned int Hash(const char *);
	bool SaveToBuffer(CUtlBuffer &);
	bool RestoreFromBuffer(CUtlBuffer &);

	// sizeof = 64
};
