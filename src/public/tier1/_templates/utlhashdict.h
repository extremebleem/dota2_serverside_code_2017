// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlhashdict.h:21
class CUtlHashDict<short int, true, true> {
	class CCompare<true> {
		CCompare(int);
		bool operator()(const Entry_t &, const Entry_t &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	struct Entry_t {
		const char * pszSymbol;  // +0x0
		short int value;  // +0x8

		// sizeof = 16
	};

	class CHash<true> {
		CHash(int);
		unsigned int operator()(const Entry_t &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	typedef CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<short int, true, true>::CHash<true> > CHashTable;

protected:

	CHashTable m_Elements;  // +0x0
	int m_nCount;  // +0x20
	CUtlHashDict(int, int, int);
	~CUtlHashDict();
	short int & Element(UtlHashHandle_t);
	const short int & Element(UtlHashHandle_t);
	short int & operator[](UtlHashHandle_t);
	const short int & operator[](UtlHashHandle_t);
	const char * GetElementName(UtlHashHandle_t);
	int CountElements();
	bool IsValidHandle(UtlHashHandle_t);
	UtlHashHandle_t InvalidHandle();
	UtlHashHandle_t Insert(const char *, const short int &);
	UtlHashHandle_t Insert(const char *);
	UtlHashHandle_t Find(const char *);
	bool HasElement(const char *);
	void RemoveAt(UtlHashHandle_t);
	void Remove(const char *);
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	UtlHashHandle_t First();
	UtlHashHandle_t Next(UtlHashHandle_t);
	void DumpTable();

	// sizeof = 40
};

// src/public/tier1/utlhashdict.h:21
class CUtlHashDict<ChannelElementMap_t, true, true> {
	class CCompare<true> {
		CCompare(int);
		bool operator()(const Entry_t &, const Entry_t &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	struct Entry_t {
		const char * pszSymbol;  // +0x0

		// sizeof = 24
	};

	class CHash<true> {
		CHash(int);
		unsigned int operator()(const Entry_t &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	typedef CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<true>, CUtlHashDict<ChannelElementMap_t, true, true>::CHash<true> > CHashTable;

protected:

	CHashTable m_Elements;  // +0x0
	int m_nCount;  // +0x20
	CUtlHashDict(int, int, int);
	~CUtlHashDict();
	ChannelElementMap_t & Element(UtlHashHandle_t);
	const ChannelElementMap_t & Element(UtlHashHandle_t);
	ChannelElementMap_t & operator[](UtlHashHandle_t);
	const ChannelElementMap_t & operator[](UtlHashHandle_t);
	const char * GetElementName(UtlHashHandle_t);
	int CountElements();
	bool IsValidHandle(UtlHashHandle_t);
	UtlHashHandle_t InvalidHandle();
	UtlHashHandle_t Insert(const char *, const ChannelElementMap_t &);
	UtlHashHandle_t Insert(const char *);
	UtlHashHandle_t Find(const char *);
	bool HasElement(const char *);
	void RemoveAt(UtlHashHandle_t);
	void Remove(const char *);
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	UtlHashHandle_t First();
	UtlHashHandle_t Next(UtlHashHandle_t);
	void DumpTable();

	// sizeof = 40
};

// src/public/tier1/utlhashdict.h:21
class CUtlHashDict<UserDataElement_t, true, false> {
	class CCompare<true> {
		CCompare(int);
		bool operator()(const Entry_t &, const Entry_t &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	struct Entry_t {
		const char * pszSymbol;  // +0x0

		// sizeof = 24
	};

	class CHash<true> {
		CHash(int);
		unsigned int operator()(const Entry_t &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	typedef CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<true>, CUtlHashDict<UserDataElement_t, true, false>::CHash<true> > CHashTable;

protected:

	CHashTable m_Elements;  // +0x0
	int m_nCount;  // +0x20
	CUtlHashDict(int, int, int);
	~CUtlHashDict();
	UserDataElement_t & Element(UtlHashHandle_t);
	const UserDataElement_t & Element(UtlHashHandle_t);
	UserDataElement_t & operator[](UtlHashHandle_t);
	const UserDataElement_t & operator[](UtlHashHandle_t);
	const char * GetElementName(UtlHashHandle_t);
	int CountElements();
	bool IsValidHandle(UtlHashHandle_t);
	UtlHashHandle_t InvalidHandle();
	UtlHashHandle_t Insert(const char *, const UserDataElement_t &);
	UtlHashHandle_t Insert(const char *);
	UtlHashHandle_t Find(const char *);
	bool HasElement(const char *);
	void RemoveAt(UtlHashHandle_t);
	void Remove(const char *);
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	UtlHashHandle_t First();
	UtlHashHandle_t Next(UtlHashHandle_t);
	void DumpTable();

	// sizeof = 40
};

// CUtlHashDict: 2 more instantiations (full list in INDEX.tsv)
//   CUtlHashDict<short int, true, false>
//   CUtlHashDict<const CMorphData*, false, false>
