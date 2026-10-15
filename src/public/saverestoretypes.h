// Reconstructed from DWARF by pahole; not original source.

// src/public/saverestoretypes.h:34
class CSaveRestoreSegment {
private:

	char * pBaseData;  // +0x0
	char * pCurrentData;  // +0x8
	int size;  // +0x10
	int bufferSize;  // +0x14
	int tokenCount;  // +0x18

	char * * pTokens;  // +0x20
	CSaveRestoreSegment();
	void Init(void *, int);
	void Rebase();
	void Rewind(int);
	char * GetBuffer();
	int BytesAvailable();
	int SizeBuffer();
	bool Write(const void *, int);
	bool Read(void *, int);
	int GetCurPos();
	char * AccessCurPos();
	bool Seek(int);
	void MoveCurPos(int);
	void InitSymbolTable(char * *, int);
	char * * DetachSymbolTable();
	int SizeSymbolTable();
	bool DefineSymbol(const char *, int);
	short unsigned int FindCreateSymbol(const char *);
	const char * StringFromSymbol(int);
	void Clear();
	unsigned int HashString(const char *);

	// sizeof = 40
};

// src/public/saverestoretypes.h:97
struct levellist_t {
	static datamap_t m_DataMap;

	levellist_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	void Clear();

	// sizeof = 32
};

// src/public/saverestoretypes.h:117
struct entitytable_t {
	int id;  // +0x0
	int location;  // +0x14
	int size;  // +0x18
	int flags;  // +0x1c
	string_t classname;  // +0x20
	string_t globalname;  // +0x28

	static datamap_t m_DataMap;
	entitytable_t();
	void Clear();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 64
};

// src/public/saverestoretypes.h:165
struct saverestorelevelinfo_t {
	int m_nConnectionCount;  // +0x0

	bool m_bUseLandmark;  // +0x208

	float m_flSaveTime;  // +0x224
	int m_nSaveTick;  // +0x228

	int m_nMapVersion;  // +0x238
	saverestorelevelinfo_t();
	void Clear();

	// sizeof = 576
};

// src/public/saverestoretypes.h:200
class CGameSaveRestoreInfo {
	struct CHashElement {
		const CEntityInstance * pEntity;  // +0x0
		int index;  // +0x8
		CHashElement(const CEntityInstance *, int);
		CHashElement(const CEntityInstance *);
		CHashElement();

		// sizeof = 16
	};

	class CHashFuncs {
		CHashFuncs(int);
		bool operator()(const CHashElement &, const CHashElement &);
		unsigned int operator()(const CHashElement &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

private:

	bool m_bAdjacent;  // +0x270

	typedef CUtlHash<CGameSaveRestoreInfo::CHashElement, CGameSaveRestoreInfo::CHashFuncs, CGameSaveRestoreInfo::CHashFuncs> CEntityToIndexHash;

	CEntityToIndexHash m_EntityToIndex;  // +0x278
	CGameSaveRestoreInfo();
	void Clear();
	void InitEntityTable(int);
	void ShutdownEntityTable();
	CEntityInstance * GetCurrentEntityContext();
	int NumEntities();
	entitytable_t * GetEntityInfo(int);
	const entitytable_t * GetEntityInfo(int);
	float GetBaseTime();
	int GetBaseTick();
	const Vector & GetLandmark();
	int AddResourceToSaveManifest(const char *);
	const char * LookupResourceFromSaveManifest(int);
	const CCompressedResourceManifest & GetResourceList();
	CCompressedResourceManifest & GetResourceListForWrite();
	void BuildEntityHash();
	void PurgeEntityHash();
	int GetEntityIndex(const CEntityInstance *);
	int EntryInTableBitMask(const char *);
	Vector LandmarkOrigin(const char *);
	void SetAdjacent(bool);
	bool IsAdjacent();
	void SetCurrentEntityContext(CEntityInstance *);

	// sizeof = 928
};

// src/public/saverestoretypes.h:200
class CGameSaveRestoreInfo {
	struct CHashElement {
		const CEntityInstance * pEntity;  // +0x0
		int index;  // +0x8
		CHashElement(const CEntityInstance *, int);
		CHashElement(const CEntityInstance *);
		CHashElement();

		// sizeof = 16
	};

	class CHashFuncs {
		CHashFuncs(int);
		bool operator()(const CHashElement &, const CHashElement &);
		unsigned int operator()(const CHashElement &);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

private:

	bool m_bAdjacent;  // +0x270

	typedef CUtlHash<CGameSaveRestoreInfo::CHashElement, CGameSaveRestoreInfo::CHashFuncs, CGameSaveRestoreInfo::CHashFuncs> CEntityToIndexHash;

	CEntityToIndexHash m_EntityToIndex;  // +0x278
	CGameSaveRestoreInfo();
	void Clear();
	void InitEntityTable(int);
	void ShutdownEntityTable();
	CEntityInstance * GetCurrentEntityContext();
	int NumEntities();
	entitytable_t * GetEntityInfo(int);
	const entitytable_t * GetEntityInfo(int);
	float GetBaseTime();
	int GetBaseTick();
	const Vector & GetLandmark();
	int AddResourceToSaveManifest(const char *);
	const char * LookupResourceFromSaveManifest(int);
	const CCompressedResourceManifest & GetResourceList();
	CCompressedResourceManifest & GetResourceListForWrite();
	void BuildEntityHash();
	void PurgeEntityHash();
	int GetEntityIndex(const CEntityInstance *);
	int EntryInTableBitMask(const char *);
	Vector LandmarkOrigin(const char *);
	void SetAdjacent(bool);
	bool IsAdjacent();
	void SetCurrentEntityContext(CEntityInstance *);
	~CGameSaveRestoreInfo();

	// sizeof = 928
};

// src/public/saverestoretypes.h:282
class CSaveRestoreCurrentEntityContext {
private:

	CSaveRestoreCurrentEntityContext(CGameSaveRestoreInfo *, CEntityInstance *);
	~CSaveRestoreCurrentEntityContext();
	void Release();

	// sizeof = 16
};

// src/public/saverestoretypes.h:312
class CSaveRestoreData : public CSaveRestoreSegment, public CGameSaveRestoreInfo {
public:

	bool bAsync;  // +0x3c8
	CSaveRestoreData();
	void Clear();

	// sizeof = 976
};

// src/public/saverestoretypes.h:532
struct SaveRestoreTranslate_t {
	SaveRestoreTranslate_t();
	~SaveRestoreTranslate_t();

	// sizeof = 16
};

// src/public/saverestoretypes.h:539
struct RestoreLookupTable_t {
	RestoreLookupTable_t();
	RestoreLookupTable_t(const CGameSaveRestoreInfo *);
	void Clear();
	void Rebuild(const CGameSaveRestoreInfo *);
	CEntityIndex LookupRestoreSpotSaveIndex(CEntityIndex);
	~RestoreLookupTable_t();

	// sizeof = 40
};
