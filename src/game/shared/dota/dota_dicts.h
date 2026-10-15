// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_dicts.h:15
struct DotaDictEntry_t {
	EHANDLE m_hEntity;  // +0x0

	int m_nFieldOffset;  // +0x14
	short unsigned int m_nFieldSize;  // +0x18
	DotaDictEntry_t();
	bool IsValid();
	void Print();
	void GetPrintableValue(char *, int);

	// sizeof = 32
};

// src/game/shared/dota/dota_dicts.h:33
class CDotaDict {
private:

	EHANDLE m_hOwner;  // +0x0

	CUtlSymbolTableLarge m_symNameTable;  // +0x10
	CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)> m_Dict;  // +0x68
	CDotaDict(CUtlSymbolLarge);
	~CDotaDict();
	DotaDictEntry_t * CreateEntry(CBaseEntity *, const char *, const char *);
	void DestroyEntry(const char *);
	void DestroyAllEntries();
	CUtlSymbolLarge GetDictionaryNameSymbol();
	void Dump();

	// sizeof = 144
};

// src/game/shared/dota/dota_dicts.h:64
class CDotaDictManager {
private:

	CUtlSymbolTableLarge m_symDictionaryNameTable;  // +0x0
	CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)> m_DictionaryList;  // +0x58
	CDotaDictManager();
	~CDotaDictManager();
	CDotaDict * CreateDictionary(const char *);
	void DestroyDictionary(const char *);
	void DestroyAllDictionaries();
	int Count();
	void Dump();

	// sizeof = 128
};
