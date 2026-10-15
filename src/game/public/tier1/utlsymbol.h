// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/utlsymbol.h:102
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

// src/game/public/tier1/utlsymbol.h:102
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
		~CTree();

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
	typedef short unsigned int hashDecoration_t;
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

// src/game/public/tier1/utlsymbol.h:315
class CUtlFilenameSymbolTable {
	struct FileNameHandleInternal_t {
		uint16 path;  // +0x0
		uint16 file;  // +0x2
		FileNameHandleInternal_t();

		// sizeof = 4
	};

private:

	CUtlFilenameSymbolTable();
	FileNameHandle_t FindOrAddFileName(const char *);
	FileNameHandle_t FindFileName(const char *);
	int PathIndex(const FileNameHandle_t &);
	bool String(const FileNameHandle_t &, char *, int);
	void RemoveAll();
	void SpewStrings();
	bool SaveToBuffer(CUtlBuffer &);
	bool RestoreFromBuffer(CUtlBuffer &);

	// sizeof = 96
};
