// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utldict.h:45
class CUtlDict<CAttachment, int> {
	typedef CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;

protected:

	DictElementMap_t m_Elements;  // +0x0
	CUtlDict(int, int, int);
	~CUtlDict();
	void SetCompareType(EDictCompareType);
	void CopyFrom(const CUtlDict<CAttachment, int> &);
	void EnsureCapacity(int);
	CAttachment & Element(int);
	const CAttachment & Element(int);
	CAttachment & operator[](int);
	const CAttachment & operator[](int);
	const char * GetElementName(int);
	void SetElementName(int, const char *);
	unsigned int Count();
	int MaxElement();
	bool IsValidIndex(int);
	int InvalidIndex();
	int Insert(const char *, const CAttachment &);
	int Insert(const char *);
	int Find(const char *);
	bool HasElement(const char *);
	void RemoveAt(int);
	void Remove(const char *);
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	int First();
	int Next(int);
	size_t AllocSize();

private:

	CUtlDict(const CUtlDict<CAttachment, int> &);
	CUtlDict<CAttachment, int> & operator=(const CUtlDict<CAttachment, int> &);

	// sizeof = 48
};

// src/public/tier1/utldict.h:45
class CUtlDict<CHitBoxSet, int> {
	typedef CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;

protected:

	DictElementMap_t m_Elements;  // +0x0
	CUtlDict(int, int, int);
	~CUtlDict();
	void SetCompareType(EDictCompareType);
	void CopyFrom(const CUtlDict<CHitBoxSet, int> &);
	void EnsureCapacity(int);
	CHitBoxSet & Element(int);
	const CHitBoxSet & Element(int);
	CHitBoxSet & operator[](int);
	const CHitBoxSet & operator[](int);
	const char * GetElementName(int);
	void SetElementName(int, const char *);
	unsigned int Count();
	int MaxElement();
	bool IsValidIndex(int);
	int InvalidIndex();
	int Insert(const char *, const CHitBoxSet &);
	int Insert(const char *);
	int Find(const char *);
	bool HasElement(const char *);
	void RemoveAt(int);
	void Remove(const char *);
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	int First();
	int Next(int);
	size_t AllocSize();

private:

	CUtlDict(const CUtlDict<CHitBoxSet, int> &);
	CUtlDict<CHitBoxSet, int> & operator=(const CUtlDict<CHitBoxSet, int> &);

	// sizeof = 48
};

// src/public/tier1/utldict.h:45
class CUtlDict<CEconSchemaSymbol, int> {
	typedef CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;

protected:

	DictElementMap_t m_Elements;  // +0x0
	CUtlDict(int, int, int);
	~CUtlDict();
	void SetCompareType(EDictCompareType);
	void CopyFrom(const CUtlDict<CEconSchemaSymbol, int> &);
	void EnsureCapacity(int);
	CEconSchemaSymbol & Element(int);
	const CEconSchemaSymbol & Element(int);
	CEconSchemaSymbol & operator[](int);
	const CEconSchemaSymbol & operator[](int);
	const char * GetElementName(int);
	void SetElementName(int, const char *);
	unsigned int Count();
	int MaxElement();
	bool IsValidIndex(int);
	int InvalidIndex();
	int Insert(const char *, const CEconSchemaSymbol &);
	int Insert(const char *);
	int Find(const char *);
	bool HasElement(const char *);
	void RemoveAt(int);
	void Remove(const char *);
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	int First();
	int Next(int);
	size_t AllocSize();

private:

	CUtlDict(const CUtlDict<CEconSchemaSymbol, int> &);
	CUtlDict<CEconSchemaSymbol, int> & operator=(const CUtlDict<CEconSchemaSymbol, int> &);

	// sizeof = 48
};

// src/public/tier1/utldict.h:126
class CSchemaTypeOf<CUtlDict<ConceptHistory_t, int> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/tier1/utldict.h:126
class CSchemaTypeOf<CUtlDict<char const*, int> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// CUtlDict: 37 more instantiations (full list in INDEX.tsv)
//   CUtlDict<CUtlVector<CItemLevelingDefinition, CUtlMemory<CItemLevelingDefinition, int> >*, int>
//   CUtlDict<CEconLootListDefinition, int>
//   CUtlDict<AchievementAward_t*, int>
//   CUtlDict<int, int>
//   CUtlDict<CEconItemSetDefinition*, int>
//   CUtlDict<CSmartPtr<CEmoteMap::IFunction, CRefCountAccessor>, int>
//   CUtlDict<CScriptConsoleCommand*, int>
//   CUtlDict<ConVar*, int>
//   CUtlDict<ResponseGroup, short int>
//   CUtlDict<CInstancedResponseSystem*, int>
//   CUtlDict<CAnimDebugMgr::DebugSeqInfo_t, int>
//   CUtlDict<RestoreLookupTable_t*, int>
//   CUtlDict<CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int>
//   CUtlDict<char const*, int>
//   CUtlDict<bool, int>
//   CUtlDict<GameEventRegister_t*, int>
//   CUtlDict<CEntityHandle, int>
//   CUtlDict<ServerClass*, int>
//   CUtlDict<FileWeaponInfo_t*, int>
//   CUtlDict<ConceptHistory_t, int>
//   CUtlDict<float, int>
//   CUtlDict<CDecalEmitterSystem::DecalEntry, int>
//   CUtlDict<CUserMessageInstrumentation, int>
//   CUtlDict<BasicGameStatsRecord_t, short unsigned int>
//   CUtlDict<const flexsettinghdr_t*, int>
//   CUtlDict<ELanguage, int>
//   CUtlDict<CBuffCountTracker, int>
//   CUtlDict<unsigned int, int>
//   CUtlDict<item_definition_index_t, int>
//   CUtlDict<customizable_courier_t*, int>
//   CUtlDict<CUtlVector<CItemLevelingDefinition, CUtlMemory<CItemLevelingDefinition, int> >*, int>
//   CUtlDict<int, int>
//   CUtlDict<int, short unsigned int>
//   CUtlDict<EventGroup, int>
//   CUtlDict<Criteria, short int>
//   CUtlDict<CResponseSystem::Enumeration, short int>
//   CUtlDict<CNavArea*, int>
