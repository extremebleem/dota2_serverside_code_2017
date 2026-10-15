// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlstringmap.h:14
class CUtlStringMap<CUtlString, CUtlSymbolTable> {
private:

	typedef UtlSymId_t IndexType_t;
	CUtlStringMap(bool, int, int);
	CUtlString & operator[](const char *);
	CUtlString & operator[](UtlSymId_t);
	const CUtlString & operator[](UtlSymId_t);
	unsigned int Count();
	bool Defined(const char *);
	UtlSymId_t Find(const char *);
	UtlSymId_t AddString(const char *);
	UtlSymId_t Insert(const char *, const CUtlString &);
	UtlSymId_t InsertOrReplace(const char *, const CUtlString &);
	IndexType_t First();
	IndexType_t Next(IndexType_t);
	UtlSymId_t InvalidIndex();
	bool IsValidIndex(IndexType_t);
	int GetNumStrings();
	const char * String(int);
	const char * GetElementName(int);
	void Clear();
	void Purge();
	void PurgeAndDeleteElements();
	~CUtlStringMap();

	// sizeof = 104
};

// src/public/tier1/utlstringmap.h:14
class CUtlStringMap<IGameSystem::FactoryInfo_t, CUtlSymbolTable> {
private:

	typedef UtlSymId_t IndexType_t;
	CUtlStringMap(bool, int, int);
	FactoryInfo_t & operator[](const char *);
	FactoryInfo_t & operator[](UtlSymId_t);
	const FactoryInfo_t & operator[](UtlSymId_t);
	unsigned int Count();
	bool Defined(const char *);
	UtlSymId_t Find(const char *);
	UtlSymId_t AddString(const char *);
	UtlSymId_t Insert(const char *, const FactoryInfo_t &);
	UtlSymId_t InsertOrReplace(const char *, const FactoryInfo_t &);
	IndexType_t First();
	IndexType_t Next(IndexType_t);
	UtlSymId_t InvalidIndex();
	bool IsValidIndex(IndexType_t);
	int GetNumStrings();
	const char * String(int);
	const char * GetElementName(int);
	void Clear();
	void Purge();
	void PurgeAndDeleteElements();
	~CUtlStringMap();

	// sizeof = 104
};

// src/public/tier1/utlstringmap.h:14
class CUtlStringMap<CCustomGameEventManager::CCustomGameEventInfo*, CUtlSymbolTable> {
private:

	typedef UtlSymId_t IndexType_t;
	CUtlStringMap(bool, int, int);
	CCustomGameEventInfo * & operator[](const char *);
	CCustomGameEventInfo * & operator[](UtlSymId_t);
	CCustomGameEventInfo * const & operator[](UtlSymId_t);
	unsigned int Count();
	bool Defined(const char *);
	UtlSymId_t Find(const char *);
	UtlSymId_t AddString(const char *);
	UtlSymId_t Insert(const char *, CCustomGameEventInfo * const &);
	UtlSymId_t InsertOrReplace(const char *, CCustomGameEventInfo * const &);
	IndexType_t First();
	IndexType_t Next(IndexType_t);
	UtlSymId_t InvalidIndex();
	bool IsValidIndex(IndexType_t);
	int GetNumStrings();
	const char * String(int);
	const char * GetElementName(int);
	void Clear();
	void Purge();
	void PurgeAndDeleteElements();
	~CUtlStringMap();

	// sizeof = 104
};

// CUtlStringMap: 13 more instantiations (full list in INDEX.tsv)
//   CUtlStringMap<CCompressedResourceManifest::CompressedResourceName_t, CUtlSymbolTable>
//   CUtlStringMap<CBreakModelsPrecached::BreakModelInfo_t, CUtlSymbolTable>
//   CUtlStringMap<int, CUtlSymbolTable>
//   CUtlStringMap<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >*, CUtlSymbolTable>
//   CUtlStringMap<PredictionIdRange_t, CUtlSymbolTable>
//   CUtlStringMap<CUtlSymbolLarge, CUtlSymbolTable>
//   CUtlStringMap<DOTAEventMysteryVOGroup_t, CUtlSymbolTable>
//   CUtlStringMap<IModifierFactory*, CUtlSymbolTable>
//   CUtlStringMap<CAssetModifier* (*)(KeyValues*, IEconItemSchema*, bool, int), CUtlSymbolTable>
//   CUtlStringMap<short unsigned int, CUtlSymbolTable>
//   CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>
//   CUtlStringMap<FGDFieldInfo_t, CUtlSymbolTable>
//   CUtlStringMap<CUtlAbstractDelegate, CUtlSymbolTable>
