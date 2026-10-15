// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/keyvalues.h:73
class CKeyValues_Data {
	enum types_t {
		TYPE_NONE = 0,
		TYPE_STRING = 0x1,
		TYPE_INT = 0x2,
		TYPE_FLOAT = 0x3,
		TYPE_PTR = 0x4,
		TYPE_WSTRING = 0x5,
		TYPE_COLOR = 0x6,
		TYPE_UINT64 = 0x7,
		TYPE_RUNTIMETYPES = 0x8,
		TYPE_COMPILED_INT_BYTE = 0x8,
		TYPE_COMPILED_INT_0 = 0x9,
		TYPE_COMPILED_INT_1 = 0xa,
		TYPE_NUMTYPES = 0xb,
	};

	union {
		int m_iValue;  // +0x0
		float m_flValue;  // +0x0
		void * m_pValue;  // +0x0
		unsigned char m_Color[4];  // +0x0
		uintp m_uValue;  // +0x0
		const char * m_sValue;  // +0x0
		const wchar_t * m_wsValue;  // +0x0
	};

private:

	union {
		int m_iValue;  // +0x0
		float m_flValue;  // +0x0
		void * m_pValue;  // +0x0
		unsigned char m_Color[4];  // +0x0
		uintp m_uValue;  // +0x0
		const char * m_sValue;  // +0x0
		const wchar_t * m_wsValue;  // +0x0
	};
	uint32 m_iKeyNameCaseSensitive:24;  // +0x8:0
	uint32 m_iDataType:3;  // +0x8:24
	uint32 m_bHasEscapeSequences:1;  // +0x8:27
	uint32 m_bAllocatedExternalMemory:1;  // +0x8:28
	uint32 m_bKeySymbolCaseSensitiveMatchesCaseInsensitive:1;  // +0x8:29
	uint32 m_bStoredSubKey:1;  // +0x8:30
protected:

	CKeyValues_Data();
	~CKeyValues_Data();
	void Internal_SetName(const char *);
	void Internal_SetNameFrom(const CKeyValues_Data &);
	void Internal_ClearAll();
	void Internal_ClearData();
	types_t Internal_GetDataType();
	int Internal_GetInt();
	uint64 Internal_GetUint64();
	float Internal_GetFloat();
	const char * Internal_GetString(const char *, char *, size_t);
	const wchar_t * Internal_GetWString(const wchar_t *, wchar_t *, size_t);
	void * Internal_GetPtr();
	Color Internal_GetColor(Color);
	KeyValues * Internal_GetSubKey();
	void Internal_SetWString(const wchar_t *);
	void Internal_SetString(const char *);
	void Internal_SetInt(int);
	void Internal_SetUint64(uint64);
	void Internal_SetFloat(float);
	void Internal_SetPtr(void *);
	void Internal_SetColor(Color);
	void Internal_SetFromString(types_t, const char *);
	void Internal_SetSubKey(KeyValues *);
	void Internal_SetHasEscapeSequences(bool);
	bool Internal_HasEscapeSequences();
	const char * Internal_GetName();
	HKeySymbol Internal_GetNameSymbol();
	HKeySymbol Internal_GetNameSymbolCaseSensitive();
	void Internal_CopyName(const CKeyValues_Data &);
	void Internal_CopyData(const CKeyValues_Data &);
	bool Internal_IsEqual(CKeyValues_Data *);
	const char * ResolveStringValue();
	int ResolveIntValue();
	float ResolveFloatValue();
	void * ResolvePtrValue();
	const wchar_t * ResolveWStringValue();
	Color ResolveColorValue();
	uint64 ResolveUint64Value();
	KeyValues * ResolveSubKeyValue();

	// sizeof = 12
} __attribute__((__packed__));

// src/public/tier1/keyvalues.h:73
class CKeyValues_Data {
	enum types_t {
		TYPE_NONE = 0,
		TYPE_STRING = 0x1,
		TYPE_INT = 0x2,
		TYPE_FLOAT = 0x3,
		TYPE_PTR = 0x4,
		TYPE_WSTRING = 0x5,
		TYPE_COLOR = 0x6,
		TYPE_UINT64 = 0x7,
		TYPE_RUNTIMETYPES = 0x8,
		TYPE_COMPILED_INT_BYTE = 0x8,
		TYPE_COMPILED_INT_0 = 0x9,
		TYPE_COMPILED_INT_1 = 0xa,
		TYPE_NUMTYPES = 0xb,
	};

	enum {
		RUNTIMETYPES_BITS = 0x3,
	};

	union {
		int m_iValue;  // +0x0
		float m_flValue;  // +0x0
		void * m_pValue;  // +0x0
		unsigned char m_Color[4];  // +0x0
		uintp m_uValue;  // +0x0
		const char * m_sValue;  // +0x0
		const wchar_t * m_wsValue;  // +0x0
	};

private:

	union {
		int m_iValue;  // +0x0
		float m_flValue;  // +0x0
		void * m_pValue;  // +0x0
		unsigned char m_Color[4];  // +0x0
		uintp m_uValue;  // +0x0
		const char * m_sValue;  // +0x0
		const wchar_t * m_wsValue;  // +0x0
	};
	uint32 m_iKeyNameCaseSensitive:24;  // +0x8:0
	uint32 m_iDataType:3;  // +0x8:24
	uint32 m_bHasEscapeSequences:1;  // +0x8:27
	uint32 m_bAllocatedExternalMemory:1;  // +0x8:28
	uint32 m_bKeySymbolCaseSensitiveMatchesCaseInsensitive:1;  // +0x8:29
	uint32 m_bStoredSubKey:1;  // +0x8:30
protected:

	CKeyValues_Data();
	~CKeyValues_Data();
	void Internal_SetName(const char *);
	void Internal_SetNameFrom(const CKeyValues_Data &);
	void Internal_ClearAll();
	void Internal_ClearData();
	types_t Internal_GetDataType();
	int Internal_GetInt();
	uint64 Internal_GetUint64();
	float Internal_GetFloat();
	const char * Internal_GetString(const char *, char *, size_t);
	const wchar_t * Internal_GetWString(const wchar_t *, wchar_t *, size_t);
	void * Internal_GetPtr();
	Color Internal_GetColor(Color);
	KeyValues * Internal_GetSubKey();
	void Internal_SetWString(const wchar_t *);
	void Internal_SetString(const char *);
	void Internal_SetInt(int);
	void Internal_SetUint64(uint64);
	void Internal_SetFloat(float);
	void Internal_SetPtr(void *);
	void Internal_SetColor(Color);
	void Internal_SetFromString(types_t, const char *);
	void Internal_SetSubKey(KeyValues *);
	void Internal_SetHasEscapeSequences(bool);
	bool Internal_HasEscapeSequences();
	const char * Internal_GetName();
	HKeySymbol Internal_GetNameSymbol();
	HKeySymbol Internal_GetNameSymbolCaseSensitive();
	void Internal_CopyName(const CKeyValues_Data &);
	void Internal_CopyData(const CKeyValues_Data &);
	bool Internal_IsEqual(CKeyValues_Data *);
	const char * ResolveStringValue();
	int ResolveIntValue();
	float ResolveFloatValue();
	void * ResolvePtrValue();
	const wchar_t * ResolveWStringValue();
	Color ResolveColorValue();
	uint64 ResolveUint64Value();
	KeyValues * ResolveSubKeyValue();

private:

	int BlindlyReinterpretUnion<int>();

	// sizeof = 12
} __attribute__((__packed__));

// src/public/tier1/keyvalues.h:193
class CTemporaryKeyValues {
private:

	HTemporaryKeyValueAllocationScope m_hScope;  // +0x8
	CTemporaryKeyValues();
	~CTemporaryKeyValues();
	KeyValues * GetKeyValues();
	const KeyValues * GetKeyValues();

	// sizeof = 16
};

// src/public/tier1/keyvalues.h:216
class IKeyValuesErrorSpew {
	int ()() * * _vptr.IKeyValuesErrorSpew;  // +0x0
	IKeyValuesErrorSpew(IKeyValuesErrorSpew &);
	IKeyValuesErrorSpew(const IKeyValuesErrorSpew &);
	IKeyValuesErrorSpew();
	virtual void Start();
	virtual void Finish();
	virtual void Warning(const char *);

	// vtable[0] Start
	// vtable[1] Finish
	// vtable[2] Warning
	// sizeof = 8
};

// src/public/tier1/keyvalues.h:245
class KeyValues : public CKeyValues_Data {
	enum MergeKeyValuesOp_t {
		MERGE_KV_ALL = 0,
		MERGE_KV_UPDATE = 0x1,
		MERGE_KV_DELETE = 0x2,
		MERGE_KV_BORROW = 0x3,
		MERGE_KV_ADD_ONLY = 0x4,
	};

public:

private:

	static int (*s_pfGetSymbolForString)(const char *, bool);
	static const char * (*s_pfGetStringForSymbol)(int);
	static CKeyValuesGrowableStringTable * s_pGrowableStringTable;
	static const char * s_pParserCompat_EmptyKeyReplacement;
	void SetUseGrowableStringTable(bool);
	KeyValues(const char *);
	KeyValues(const KeyValues *, bool);
	KeyValues(const char *, const char *, const char *);
	KeyValues(const char *, const char *, const wchar_t *);
	KeyValues(const char *, const char *, int);
	KeyValues(const char *, const char *, const char *, const char *, const char *);
	KeyValues(const char *, const char *, int, const char *, int);
	~KeyValues();
	const char * GetName();
	void SetName(const char *);
	HKeySymbol GetNameSymbol();
	HKeySymbol GetNameSymbolCaseSensitive();
	CTemporaryKeyValues * LoadTemporaryFromFile(bool, IBaseFileSystem *, const char *, const char *, GetSymbolProc_t);
	CTemporaryKeyValues * ReadTemporaryAsBinary(bool, CUtlBuffer &);
	CTemporaryKeyValues * LoadTemporaryFromBuffer(bool, const char *, CUtlBuffer &, IBaseFileSystem *, const char *, GetSymbolProc_t);
	CTemporaryKeyValues * LoadTemporaryFromBuffer(bool, const char *, const char *, IBaseFileSystem *, const char *, GetSymbolProc_t, IKeyValuesErrorSpew *);
	void UsesEscapeSequences(bool);
	bool LoadFromFile(IBaseFileSystem *, const char *, const char *, GetSymbolProc_t);
	bool SaveToFile(IBaseFileSystem *, const char *, const char *, bool);
	bool LoadFromBuffer(const char *, const char *, IBaseFileSystem *, const char *, GetSymbolProc_t, IKeyValuesErrorSpew *);
	bool LoadFromBuffer(const char *, CUtlBuffer &, IBaseFileSystem *, const char *, GetSymbolProc_t, IKeyValuesErrorSpew *);
	KeyValues * FindKey(const char *, bool);
	KeyValues * FindKey(HKeySymbol);
	KeyValues * CreateNewKey();
	KeyValues * CreatePeerKey(const char *);
	void AddSubKey(KeyValues *);
	void RemoveSubKey(KeyValues *, bool);
	void InsertSubKey(int, KeyValues *);
	bool ContainsSubKey(KeyValues *);
	void SwapSubKey(KeyValues *, KeyValues *);
	void ElideSubKey(KeyValues *);
	void FindAndDeleteSubKey(const char *);
	int Count();
	KeyValues * Element(int);
	KeyValues * GetFirstSubKey();
	KeyValues * GetNextKey();
	void SetNextKey(KeyValues *);
	KeyValues * FindLastSubKey();
	KeyValues * GetFirstTrueSubKey();
	KeyValues * GetNextTrueSubKey();
	KeyValues * GetFirstValue();
	KeyValues * GetNextValue();

	class KeyValuesKeyIterator_t<KeyValues> {
	private:

		struct KeyValueIteratorPosition_t {
			// sizeof = 0
		};
		KeyValueIteratorPosition_t begin();
		KeyValueIteratorPosition_t end();
		KeyValuesKeyIterator_t(KeyValues *);

		// sizeof = 8
	};
	KeyValuesKeyIterator_t<KeyValues> SubKeys();
	KeyValuesKeyIterator_t<KeyValues> AllSubKeysOf(const char *);
	int GetInt(const char *, int);
	uint64 GetUint64(const char *, uint64);
	float GetFloat(const char *, float);
	const char * GetString(const char *, const char *, char *, size_t);
	const wchar_t * GetWString(const char *, const wchar_t *, wchar_t *, size_t);
	void * GetPtr(const char *, void *);
	Color GetColor(const char *, const Color &);
	bool GetBool(const char *, bool);
	bool IsEmpty(const char *);
	bool IsString();
	int GetInt(int, int);
	uint64 GetUint64(int, uint64);
	float GetFloat(int, float);
	const char * GetString(int, const char *, char *, size_t);
	const wchar_t * GetWString(int, const wchar_t *, wchar_t *, size_t);
	void * GetPtr(int, void *);
	Color GetColor(int);
	bool GetBool(int, bool);
	bool IsEmpty(int);
	void SetWString(const char *, const wchar_t *);
	void SetString(const char *, const char *);
	void SetInt(const char *, int);
	void SetUint64(const char *, uint64);
	void SetFloat(const char *, float);
	void SetPtr(const char *, void *);
	void SetColor(const char *, Color);
	void SetBool(const char *, bool);
	void SetFromString(const char *, types_t, const char *);
	KeyValues * AddKey(const char *);
	void AddString(const char *, const char *);
	void AddFloat(const char *, float);
	void AddInt(const char *, int);
	void AddUint64(const char *, uint64);
	void AddPtr(const char *, void *);
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);
	KeyValues & operator=(KeyValues &);
	bool IsEqual(KeyValues *);
	void RecursiveSaveToFile(CUtlBuffer &, int, bool);
	void RecursiveSaveToLocalizationFile(IBaseFileSystem *, FileHandle_t, int);
	bool WriteAsBinary(CUtlBuffer &);
	bool ReadAsBinary(CUtlBuffer &);
	bool WriteAsBinaryFiltered(CUtlBuffer &);
	bool ReadAsBinaryFiltered(CUtlBuffer &);
	KeyValues * MakeCopy();
	void CopySubkeys(KeyValues *);
	void Clear();
	types_t GetDataType(const char *);
	void deleteThis();
	void SetStringValue(const char *);
	void UnpackIntoStructure(const KeyValuesUnpackStructure *, void *);
	bool ProcessResolutionKeys(const char *);
	bool Dump(IKeyValuesDumpContext *, int);
	void MergeFrom(KeyValues *, MergeKeyValuesOp_t);
	CTemporaryKeyValues * MergeFromTemporary(KeyValues *, MergeKeyValuesOp_t);
	KeyValues * FromString(const char *, const char *, const char * *);
	KeyValues * FromJSON(CUtlBuffer &);
	KeyValues * CreateKeyUsingKnownLastChild(const char *, KeyValues *);
	void AddSubkeyUsingKnownLastChild(KeyValues *, KeyValues *);
	KeyValues(KeyValues &);
	KeyValues * CreateKey(const char *);
	void RecursiveCopyKeyValues(KeyValues &);
	void RemoveEverything();
	void RecursiveSaveToFile(IBaseFileSystem *, FileHandle_t, CUtlBuffer *, int, bool, bool);
	void WriteConvertedString(IBaseFileSystem *, FileHandle_t, CUtlBuffer *, const char *);
	void RecursiveLoadFromBuffer(CKeyValuesErrorStack *, const char *, CKeyValuesTokenReader &, GetSymbolProc_t);
	void AppendIncludedKeys(CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > &);
	void ParseIncludedKeys(const char *, const char *, IBaseFileSystem *, const char *, CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > &, GetSymbolProc_t);
	void MergeBaseKeys(CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > &);
	void RecursiveMergeKeyValues(KeyValues *);
	void InternalWrite(IBaseFileSystem *, FileHandle_t, CUtlBuffer *, const void *, int);
	bool WriteAsBinaryInternal(CUtlBuffer &);
	bool ReadAsBinaryInternal(CUtlBuffer &, char *, size_t);
	bool WriteAsBinaryFilteredInternal(CUtlBuffer &);
	bool ReadAsBinaryFilteredInternal(CUtlBuffer &);
	bool IsValidBinaryKVBuffer(CUtlBuffer &);
	void Init();
	void WriteIndents(IBaseFileSystem *, FileHandle_t, CUtlBuffer *, int);
	void FreeAllocatedValue();
	void AllocateValueBlock(int);
	bool EvaluateConditional(CKeyValuesErrorStack *, const char *, GetSymbolProc_t);
	KeyValues * KVJSONParserCreateNewSubNode(KVJSONParserContext_t *, bool);
	int JSONParserCallback(void *, int, const JSON_value *);
	int GetSymbolForStringClassic(const char *, bool);
	const char * GetStringForSymbolClassic(int);
	int GetSymbolForStringGrowable(const char *, bool);
	const char * GetStringForSymbolGrowable(int);
	const char * SetParserEmptyKeyReplacement(const char *);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 20
} __attribute__((__packed__));

// src/public/tier1/keyvalues.h:245
class KeyValues : public CKeyValues_Data {
	class AutoDelete {
	protected:

		AutoDelete();
		AutoDelete(KeyValues *);
		AutoDelete(const char *);
		~AutoDelete();
		void Assign(KeyValues *);
		KeyValues * Detach();
		KeyValues * operator->();
		KeyValues * operator KeyValues*();
		bool operator!();
		bool IsEmpty();

	private:

		AutoDelete(const AutoDelete &);
		AutoDelete & operator=(const AutoDelete &);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	enum MergeKeyValuesOp_t {
		MERGE_KV_ALL = 0,
		MERGE_KV_UPDATE = 0x1,
		MERGE_KV_DELETE = 0x2,
		MERGE_KV_BORROW = 0x3,
		MERGE_KV_ADD_ONLY = 0x4,
	};

public:

private:

	static int (*s_pfGetSymbolForString)(const char *, bool);
	static const char * (*s_pfGetStringForSymbol)(int);
	static CKeyValuesGrowableStringTable * s_pGrowableStringTable;
	static const char * s_pParserCompat_EmptyKeyReplacement;
	void SetUseGrowableStringTable(bool);
	KeyValues(const char *);
	KeyValues(const KeyValues *, bool);
	KeyValues(const char *, const char *, const char *);
	KeyValues(const char *, const char *, const wchar_t *);
	KeyValues(const char *, const char *, int);
	KeyValues(const char *, const char *, const char *, const char *, const char *);
	KeyValues(const char *, const char *, int, const char *, int);
	~KeyValues();
	const char * GetName();
	void SetName(const char *);
	HKeySymbol GetNameSymbol();
	HKeySymbol GetNameSymbolCaseSensitive();
	CTemporaryKeyValues * LoadTemporaryFromFile(bool, IBaseFileSystem *, const char *, const char *, GetSymbolProc_t);
	CTemporaryKeyValues * ReadTemporaryAsBinary(bool, CUtlBuffer &);
	CTemporaryKeyValues * LoadTemporaryFromBuffer(bool, const char *, CUtlBuffer &, IBaseFileSystem *, const char *, GetSymbolProc_t);
	CTemporaryKeyValues * LoadTemporaryFromBuffer(bool, const char *, const char *, IBaseFileSystem *, const char *, GetSymbolProc_t, IKeyValuesErrorSpew *);
	void UsesEscapeSequences(bool);
	bool LoadFromFile(IBaseFileSystem *, const char *, const char *, GetSymbolProc_t);
	bool SaveToFile(IBaseFileSystem *, const char *, const char *, bool);
	bool LoadFromBuffer(const char *, const char *, IBaseFileSystem *, const char *, GetSymbolProc_t, IKeyValuesErrorSpew *);
	bool LoadFromBuffer(const char *, CUtlBuffer &, IBaseFileSystem *, const char *, GetSymbolProc_t, IKeyValuesErrorSpew *);
	KeyValues * FindKey(const char *, bool);
	KeyValues * FindKey(HKeySymbol);
	KeyValues * CreateNewKey();
	KeyValues * CreatePeerKey(const char *);
	void AddSubKey(KeyValues *);
	void RemoveSubKey(KeyValues *, bool);
	void InsertSubKey(int, KeyValues *);
	bool ContainsSubKey(KeyValues *);
	void SwapSubKey(KeyValues *, KeyValues *);
	void ElideSubKey(KeyValues *);
	void FindAndDeleteSubKey(const char *);
	int Count();
	KeyValues * Element(int);
	KeyValues * GetFirstSubKey();
	KeyValues * GetNextKey();
	void SetNextKey(KeyValues *);
	KeyValues * FindLastSubKey();
	KeyValues * GetFirstTrueSubKey();
	KeyValues * GetNextTrueSubKey();
	KeyValues * GetFirstValue();
	KeyValues * GetNextValue();

	class KeyValuesKeyIterator_t<KeyValues> {
	private:

		struct KeyValueIteratorPosition_t {
			// sizeof = 0
		};
		KeyValueIteratorPosition_t begin();
		KeyValueIteratorPosition_t end();
		KeyValuesKeyIterator_t(KeyValues *);

		// sizeof = 8
	};
	KeyValuesKeyIterator_t<KeyValues> SubKeys();
	KeyValuesKeyIterator_t<KeyValues> AllSubKeysOf(const char *);
	int GetInt(const char *, int);
	uint64 GetUint64(const char *, uint64);
	float GetFloat(const char *, float);
	const char * GetString(const char *, const char *, char *, size_t);
	const wchar_t * GetWString(const char *, const wchar_t *, wchar_t *, size_t);
	void * GetPtr(const char *, void *);
	Color GetColor(const char *, const Color &);
	bool GetBool(const char *, bool);
	bool IsEmpty(const char *);
	bool IsString();
	int GetInt(int, int);
	uint64 GetUint64(int, uint64);
	float GetFloat(int, float);
	const char * GetString(int, const char *, char *, size_t);
	const wchar_t * GetWString(int, const wchar_t *, wchar_t *, size_t);
	void * GetPtr(int, void *);
	Color GetColor(int);
	bool GetBool(int, bool);
	bool IsEmpty(int);
	void SetWString(const char *, const wchar_t *);
	void SetString(const char *, const char *);
	void SetInt(const char *, int);
	void SetUint64(const char *, uint64);
	void SetFloat(const char *, float);
	void SetPtr(const char *, void *);
	void SetColor(const char *, Color);
	void SetBool(const char *, bool);
	void SetFromString(const char *, types_t, const char *);
	KeyValues * AddKey(const char *);
	void AddString(const char *, const char *);
	void AddFloat(const char *, float);
	void AddInt(const char *, int);
	void AddUint64(const char *, uint64);
	void AddPtr(const char *, void *);
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);
	KeyValues & operator=(KeyValues &);
	bool IsEqual(KeyValues *);
	void RecursiveSaveToFile(CUtlBuffer &, int, bool);
	void RecursiveSaveToLocalizationFile(IBaseFileSystem *, FileHandle_t, int);
	bool WriteAsBinary(CUtlBuffer &);
	bool ReadAsBinary(CUtlBuffer &);
	bool WriteAsBinaryFiltered(CUtlBuffer &);
	bool ReadAsBinaryFiltered(CUtlBuffer &);
	KeyValues * MakeCopy();
	void CopySubkeys(KeyValues *);
	void Clear();
	types_t GetDataType(const char *);
	void deleteThis();
	void SetStringValue(const char *);
	void UnpackIntoStructure(const KeyValuesUnpackStructure *, void *);
	bool ProcessResolutionKeys(const char *);
	bool Dump(IKeyValuesDumpContext *, int);
	void MergeFrom(KeyValues *, MergeKeyValuesOp_t);
	CTemporaryKeyValues * MergeFromTemporary(KeyValues *, MergeKeyValuesOp_t);
	KeyValues * FromString(const char *, const char *, const char * *);
	KeyValues * FromJSON(CUtlBuffer &);
	KeyValues * CreateKeyUsingKnownLastChild(const char *, KeyValues *);
	void AddSubkeyUsingKnownLastChild(KeyValues *, KeyValues *);
	KeyValues(KeyValues &);
	KeyValues * CreateKey(const char *);
	void RecursiveCopyKeyValues(KeyValues &);
	void RemoveEverything();
	void RecursiveSaveToFile(IBaseFileSystem *, FileHandle_t, CUtlBuffer *, int, bool, bool);
	void WriteConvertedString(IBaseFileSystem *, FileHandle_t, CUtlBuffer *, const char *);
	void RecursiveLoadFromBuffer(CKeyValuesErrorStack *, const char *, CKeyValuesTokenReader &, GetSymbolProc_t);
	void AppendIncludedKeys(CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > &);
	void ParseIncludedKeys(const char *, const char *, IBaseFileSystem *, const char *, CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > &, GetSymbolProc_t);
	void MergeBaseKeys(CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > &);
	void RecursiveMergeKeyValues(KeyValues *);
	void InternalWrite(IBaseFileSystem *, FileHandle_t, CUtlBuffer *, const void *, int);
	bool WriteAsBinaryInternal(CUtlBuffer &);
	bool ReadAsBinaryInternal(CUtlBuffer &, char *, size_t);
	bool WriteAsBinaryFilteredInternal(CUtlBuffer &);
	bool ReadAsBinaryFilteredInternal(CUtlBuffer &);
	bool IsValidBinaryKVBuffer(CUtlBuffer &);
	void Init();
	void WriteIndents(IBaseFileSystem *, FileHandle_t, CUtlBuffer *, int);
	void FreeAllocatedValue();
	void AllocateValueBlock(int);
	bool EvaluateConditional(CKeyValuesErrorStack *, const char *, GetSymbolProc_t);
	KeyValues * KVJSONParserCreateNewSubNode(KVJSONParserContext_t *, bool);
	int JSONParserCallback(void *, int, const JSON_value *);
	int GetSymbolForStringClassic(const char *, bool);
	const char * GetStringForSymbolClassic(int);
	int GetSymbolForStringGrowable(const char *, bool);
	const char * GetStringForSymbolGrowable(int);
	const char * SetParserEmptyKeyReplacement(const char *);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 20
} __attribute__((__packed__));

// src/public/tier1/keyvalues.h:647
class CKeySymbol {
private:

	CKeySymbol(const char *);
	HKeySymbol operator HKeySymbol();

	// sizeof = 4
};

// src/public/tier1/keyvalues.h:674
struct KeyValuesUnpackStructure {
	const char * m_pKeyName;  // +0x0
	const char * m_pKeyDefault;  // +0x8

	size_t m_nFieldOffset;  // +0x18
	size_t m_nFieldSize;  // +0x20

	// sizeof = 40
};

// src/public/tier1/keyvalues.h:740
class IKeyValuesDumpContext {
	int ()() * * _vptr.IKeyValuesDumpContext;  // +0x0
	IKeyValuesDumpContext(IKeyValuesDumpContext &);
	IKeyValuesDumpContext(const IKeyValuesDumpContext &);
	IKeyValuesDumpContext();
	virtual bool KvBeginKey(KeyValues *, int);
	virtual bool KvWriteValue(KeyValues *, int);
	virtual bool KvEndKey(KeyValues *, int);

	// vtable[0] KvBeginKey
	// vtable[1] KvWriteValue
	// vtable[2] KvEndKey
	// sizeof = 8
};

// src/public/tier1/keyvalues.h:748
class IKeyValuesDumpContextAsText : public IKeyValuesDumpContext {
public:

	IKeyValuesDumpContextAsText(IKeyValuesDumpContextAsText &);
	IKeyValuesDumpContextAsText(const IKeyValuesDumpContextAsText &);
	IKeyValuesDumpContextAsText();
	virtual bool KvBeginKey(KeyValues *, int);
	virtual bool KvWriteValue(KeyValues *, int);
	virtual bool KvEndKey(KeyValues *, int);
	virtual bool KvWriteIndent(int);
	virtual bool KvWriteText(const char *);

	// vtable[0] KvBeginKey
	// vtable[1] KvWriteValue
	// vtable[2] KvEndKey
	// vtable[3] KvWriteIndent
	// vtable[4] KvWriteText
	// sizeof = 8
};

// src/public/tier1/keyvalues.h:760
class CKeyValuesDumpContextAsDevMsg : public IKeyValuesDumpContextAsText {
public:

protected:

	int m_nDeveloperLevel;  // +0x8
	CKeyValuesDumpContextAsDevMsg(CKeyValuesDumpContextAsDevMsg &);
	CKeyValuesDumpContextAsDevMsg(const CKeyValuesDumpContextAsDevMsg &);
	CKeyValuesDumpContextAsDevMsg(int);
	virtual bool KvBeginKey(KeyValues *, int);
	virtual bool KvWriteText(const char *);

	// vtable[0] KvBeginKey
	// vtable[4] KvWriteText
	// sizeof = 16
};
