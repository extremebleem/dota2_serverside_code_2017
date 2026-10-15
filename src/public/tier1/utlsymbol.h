// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlsymbol.h:35
class CUtlSymbol {
protected:

	UtlSymId_t m_Id;  // +0x0
	static CUtlSymbolTableMT * s_pSymbolTable;
	static bool s_bAllowStaticSymbolTable;
	CUtlSymbol();
	CUtlSymbol(UtlSymId_t);
	CUtlSymbol(const char *);
	CUtlSymbol(const CUtlSymbol &);
	CUtlSymbol & operator=(const CUtlSymbol &);
	bool operator==(const CUtlSymbol &);
	bool operator==(const char *);
	bool IsValid();
	const UtlSymId_t operator const UtlSymId_t();
	const char * String();
	void DisableStaticSymbolTable();
	void Initialize();
	CUtlSymbolTableMT * CurrTable();

	// sizeof = 2
};

// src/public/tier1/utlsymbol.h:102
class CUtlSymbolTable {
	class CStringPoolIndex {
		short unsigned int m_iPool;  // +0x0
		short unsigned int m_iOffset;  // +0x2
		CStringPoolIndex();
		CStringPoolIndex(short unsigned int, short unsigned int);
		bool operator==(const CStringPoolIndex &);

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CLess {
		CLess(int);
		bool operator!();
		bool operator()(const CStringPoolIndex &, const CStringPoolIndex &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CTree : public CUtlRBTree<CUtlSymbolTable::CStringPoolIndex, short unsigned int, CUtlSymbolTable::CLess, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int> > {
	public:

		CTree(int, int);

		// sizeof = 40
	};

	struct StringPool_t {
		int m_TotalLen;  // +0x0
		int m_SpaceUsed;  // +0x4
		char m_Data[1];  // +0x8

		// sizeof = 12
	};

protected:

	bool m_bInsensitive;  // +0x28

	short unsigned int m_nUserSearchStringHash;  // +0x2a

	const char * m_pUserSearchString;  // +0x30
	CUtlSymbolTable(int, int, bool);
	~CUtlSymbolTable();
	CUtlSymbol AddString(const char *);
	CUtlSymbol AddString(const char *, int);
	int AddStringElement(const char *);
	CUtlSymbol Find(const char *);
	CUtlSymbol Find(const char *, int);
	bool HasElement(const char *);
	bool HasElement(const char *, int);
	const char * String(CUtlSymbol);
	void RemoveAll();
	int GetNumStrings();
	int GetElements(int, int, CUtlSymbol *);
	const char * GetElementString(int);
	size_t GetMemoryUsage();

private:

	int FindPoolWithSpace(int);
	const char * StringFromIndex(const CStringPoolIndex &);
	const char * DecoratedStringFromIndex(const CStringPoolIndex &);

	// sizeof = 80
};

// src/public/tier1/utlsymbol.h:258
class CUtlSymbolTableMT : public CUtlSymbolTable {
public:

private:

	CUtlSymbolTableMT(int, int, bool);
	CUtlSymbol AddString(const char *);
	CUtlSymbol Find(const char *);
	const char * String(CUtlSymbol);

	// sizeof = 416
};
