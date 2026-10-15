// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlbuffer.h:36
class CUtlCharConversion {
	struct ConversionArray_t {
		char m_nActualChar;  // +0x0

		const char * m_pReplacementString;  // +0x8

		// sizeof = 16
	};

	struct ConversionInfo_t {
		int m_nLength;  // +0x0

		const char * m_pReplacementString;  // +0x8

		// sizeof = 16
	};

	int ()() * * _vptr.CUtlCharConversion;  // +0x0
protected:

	char m_nEscapeChar;  // +0x8

	const char * m_pDelimiter;  // +0x10
	int m_nDelimiterLength;  // +0x18
	int m_nCount;  // +0x1c
	int m_nMaxConversionLength;  // +0x20
	char m_pList[256];  // +0x24

	CUtlCharConversion(CUtlCharConversion &);
	CUtlCharConversion(const CUtlCharConversion &);
	CUtlCharConversion(char, const char *, int, const ConversionArray_t *);
	/* tag__fprintf: const_type tag not supported! */;
	char GetEscapeChar();
	const char * GetDelimiter();
	int GetDelimiterLength();
	const char * GetConversionString(char);
	int GetConversionLength(char);
	int MaxConversionLength();
	virtual char FindConversion(const char *, int *);

	// vtable[0] FindConversion
	// sizeof = 4392
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	void GetTypeBin<char>(CUtlBuffer *, char &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void ~CUtlBuffer(CUtlBuffer *, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void PutType<unsigned int>(CUtlBuffer *, unsigned int);
	void PutTypeBin<unsigned int>(CUtlBuffer *, unsigned int);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void ~CUtlBuffer(CUtlBuffer *, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetTypeBin<char>(CUtlBuffer *, char &);
	void PutType<short int>(CUtlBuffer *, short int);
	void PutTypeBin<short int>(CUtlBuffer *, short int);
	void GetType<short int>(CUtlBuffer *, short int &);
	void GetTypeBin<short int>(CUtlBuffer *, short int &);
	bool GetTypeText<short int>(CUtlBuffer *, short int &, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void PutType<unsigned int>(CUtlBuffer *, unsigned int);
	void PutTypeBin<unsigned int>(CUtlBuffer *, unsigned int);
	void PutType<short int>(CUtlBuffer *, short int);
	void PutTypeBin<short int>(CUtlBuffer *, short int);
	void GetType<unsigned int>(CUtlBuffer *, unsigned int &);
	void GetTypeBin<unsigned int>(CUtlBuffer *, unsigned int &);
	bool GetTypeText<unsigned int>(CUtlBuffer *, unsigned int &, int);
	void GetType<short int>(CUtlBuffer *, short int &);
	void GetTypeBin<short int>(CUtlBuffer *, short int &);
	bool GetTypeText<short int>(CUtlBuffer *, short int &, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutType<short int>(CUtlBuffer *, short int);
	void PutTypeBin<short int>(CUtlBuffer *, short int);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void PutType<long long int>(CUtlBuffer *, long long int);
	void PutTypeBin<long long int>(CUtlBuffer *, long long int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void PutTypeBin<void*>(CUtlBuffer *, void *);
	void PutType<long long unsigned int>(CUtlBuffer *, long long unsigned int);
	void PutTypeBin<long long unsigned int>(CUtlBuffer *, long long unsigned int);
	void GetTypeBin<char>(CUtlBuffer *, char &);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void GetType<short int>(CUtlBuffer *, short int &);
	void GetTypeBin<short int>(CUtlBuffer *, short int &);
	bool GetTypeText<short int>(CUtlBuffer *, short int &, int);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetType<long long int>(CUtlBuffer *, long long int &);
	void GetTypeBin<long long int>(CUtlBuffer *, long long int &);
	bool GetTypeText<long long int>(CUtlBuffer *, long long int &, int);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

	enum {
		PUT_OVERFLOW = 0x1,
		GET_OVERFLOW = 0x2,
		MAX_ERROR_FLAG = 0x2,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	bool GetTypeText<unsigned int>(CUtlBuffer *, unsigned int &, int);
	bool GetTypeText<long long int>(CUtlBuffer *, long long int &, int);
	bool GetTypeText<long long unsigned int>(CUtlBuffer *, long long unsigned int &, int);
	bool GetTypeText<double>(CUtlBuffer *, double &, int);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void PutTypeBin<char>(CUtlBuffer *, char);
	void GetTypeBin<char>(CUtlBuffer *, char &);
	bool GetTypeText<short int>(CUtlBuffer *, short int &, int);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	bool GetTypeText<signed char>(CUtlBuffer *, signed char &, int);
	bool GetTypeText<unsigned char>(CUtlBuffer *, unsigned char &, int);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	void ~CUtlBuffer(CUtlBuffer *, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void GetTypeBin<char>(CUtlBuffer *, char &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
	void GetType<short int>(CUtlBuffer *, short int &);
	void GetTypeBin<short int>(CUtlBuffer *, short int &);
	bool GetTypeText<short int>(CUtlBuffer *, short int &, int);
	void GetTypeBin<char>(CUtlBuffer *, char &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetTypeBin<char>(CUtlBuffer *, char &);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
	void GetTypeBin<char>(CUtlBuffer *, char &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	bool GetTypeText<double>(CUtlBuffer *, double &, int);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetType<unsigned int>(CUtlBuffer *, unsigned int &);
	void GetTypeBin<unsigned int>(CUtlBuffer *, unsigned int &);
	bool GetTypeText<unsigned int>(CUtlBuffer *, unsigned int &, int);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void GetTypeBin<char>(CUtlBuffer *, char &);
	void GetType<long long int>(CUtlBuffer *, long long int &);
	void GetTypeBin<long long int>(CUtlBuffer *, long long int &);
	bool GetTypeText<long long int>(CUtlBuffer *, long long int &, int);
	void GetType<long long unsigned int>(CUtlBuffer *, long long unsigned int &);
	void GetTypeBin<long long unsigned int>(CUtlBuffer *, long long unsigned int &);
	bool GetTypeText<long long unsigned int>(CUtlBuffer *, long long unsigned int &, int);
	void GetType<double>(CUtlBuffer *, double &);
	void GetTypeBin<double>(CUtlBuffer *, double &);
	void PutType<unsigned int>(CUtlBuffer *, unsigned int);
	void PutTypeBin<unsigned int>(CUtlBuffer *, unsigned int);
	void PutType<long long int>(CUtlBuffer *, long long int);
	void PutTypeBin<long long int>(CUtlBuffer *, long long int);
	void PutType<long long unsigned int>(CUtlBuffer *, long long unsigned int);
	void PutTypeBin<long long unsigned int>(CUtlBuffer *, long long unsigned int);
	void PutType<double>(CUtlBuffer *, double);
	void PutTypeBin<double>(CUtlBuffer *, double);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum {
		PUT_OVERFLOW = 0x1,
		GET_OVERFLOW = 0x2,
		MAX_ERROR_FLAG = 0x2,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	bool GetTypeText<double>(CUtlBuffer *, double &, int);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void GetType<long long int>(CUtlBuffer *, long long int &);
	void GetTypeBin<long long int>(CUtlBuffer *, long long int &);
	bool GetTypeText<long long int>(CUtlBuffer *, long long int &, int);
	void GetType<long long unsigned int>(CUtlBuffer *, long long unsigned int &);
	void GetTypeBin<long long unsigned int>(CUtlBuffer *, long long unsigned int &);
	bool GetTypeText<long long unsigned int>(CUtlBuffer *, long long unsigned int &, int);
	void GetType<double>(CUtlBuffer *, double &);
	void GetTypeBin<double>(CUtlBuffer *, double &);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetType<unsigned int>(CUtlBuffer *, unsigned int &);
	void GetTypeBin<unsigned int>(CUtlBuffer *, unsigned int &);
	bool GetTypeText<unsigned int>(CUtlBuffer *, unsigned int &, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutType<long long int>(CUtlBuffer *, long long int);
	void PutTypeBin<long long int>(CUtlBuffer *, long long int);
	void PutType<long long unsigned int>(CUtlBuffer *, long long unsigned int);
	void PutTypeBin<long long unsigned int>(CUtlBuffer *, long long unsigned int);
	void PutType<double>(CUtlBuffer *, double);
	void PutTypeBin<double>(CUtlBuffer *, double);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void PutType<unsigned int>(CUtlBuffer *, unsigned int);
	void PutTypeBin<unsigned int>(CUtlBuffer *, unsigned int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
	void GetTypeBin<char>(CUtlBuffer *, char &);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void PutType<unsigned int>(CUtlBuffer *, unsigned int);
	void PutTypeBin<unsigned int>(CUtlBuffer *, unsigned int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void GetType<unsigned int>(CUtlBuffer *, unsigned int &);
	void GetTypeBin<unsigned int>(CUtlBuffer *, unsigned int &);
	bool GetTypeText<unsigned int>(CUtlBuffer *, unsigned int &, int);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutType<long long unsigned int>(CUtlBuffer *, long long unsigned int);
	void PutTypeBin<long long unsigned int>(CUtlBuffer *, long long unsigned int);
	void GetType<long long unsigned int>(CUtlBuffer *, long long unsigned int &);
	void GetTypeBin<long long unsigned int>(CUtlBuffer *, long long unsigned int &);
	bool GetTypeText<long long unsigned int>(CUtlBuffer *, long long unsigned int &, int);
	void GetType<unsigned int>(CUtlBuffer *, unsigned int &);
	void GetTypeBin<unsigned int>(CUtlBuffer *, unsigned int &);
	bool GetTypeText<unsigned int>(CUtlBuffer *, unsigned int &, int);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
	void PutType<unsigned int>(CUtlBuffer *, unsigned int);
	void PutTypeBin<unsigned int>(CUtlBuffer *, unsigned int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void PutType<unsigned int>(CUtlBuffer *, unsigned int);
	void PutTypeBin<unsigned int>(CUtlBuffer *, unsigned int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
	void GetType<unsigned int>(CUtlBuffer *, unsigned int &);
	void GetTypeBin<unsigned int>(CUtlBuffer *, unsigned int &);
	bool GetTypeText<unsigned int>(CUtlBuffer *, unsigned int &, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void ~CUtlBuffer(CUtlBuffer *, int);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	bool GetTypeText<double>(CUtlBuffer *, double &, int);
	void PutType<double>(CUtlBuffer *, double);
	void PutTypeBin<double>(CUtlBuffer *, double);
	void GetType<double>(CUtlBuffer *, double &);
	void GetTypeBin<double>(CUtlBuffer *, double &);
	void PutType<unsigned int>(CUtlBuffer *, unsigned int);
	void PutTypeBin<unsigned int>(CUtlBuffer *, unsigned int);
	void GetType<unsigned int>(CUtlBuffer *, unsigned int &);
	void GetTypeBin<unsigned int>(CUtlBuffer *, unsigned int &);
	bool GetTypeText<unsigned int>(CUtlBuffer *, unsigned int &, int);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

	enum BufferFlags_t {
		TEXT_BUFFER = 0x1,
		EXTERNAL_GROWABLE = 0x2,
		CONTAINS_CRLF = 0x4,
		READ_ONLY = 0x8,
		AUTO_TABS_DISABLED = 0x10,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void PutTypeBin<char>(CUtlBuffer *, char);
	bool GetTypeText<float>(CUtlBuffer *, float &, int);
	void GetTypeBin<char>(CUtlBuffer *, char &);
	void PutType<int>(CUtlBuffer *, int);
	void PutTypeBin<int>(CUtlBuffer *, int);
	void GetType<int>(CUtlBuffer *, int &);
	void GetTypeBin<int>(CUtlBuffer *, int &);
	bool GetTypeText<int>(CUtlBuffer *, int &, int);
	void PutType<long long unsigned int>(CUtlBuffer *, long long unsigned int);
	void PutTypeBin<long long unsigned int>(CUtlBuffer *, long long unsigned int);
	void GetType<long long unsigned int>(CUtlBuffer *, long long unsigned int &);
	void GetTypeBin<long long unsigned int>(CUtlBuffer *, long long unsigned int &);
	bool GetTypeText<long long unsigned int>(CUtlBuffer *, long long unsigned int &, int);
	void PutTypeBin<unsigned char>(CUtlBuffer *, unsigned char);
	void PutType<short unsigned int>(CUtlBuffer *, short unsigned int);
	void PutTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int);
	void GetTypeBin<unsigned char>(CUtlBuffer *, unsigned char &);
	void GetType<short unsigned int>(CUtlBuffer *, short unsigned int &);
	void GetTypeBin<short unsigned int>(CUtlBuffer *, short unsigned int &);
	bool GetTypeText<short unsigned int>(CUtlBuffer *, short unsigned int &, int);
	void PutType<float>(CUtlBuffer *, float);
	void PutTypeBin<float>(CUtlBuffer *, float);
	void GetType<float>(CUtlBuffer *, float &);
	void GetTypeBin<float>(CUtlBuffer *, float &);
};

// src/public/tier1/utlbuffer.h:134
class CUtlBuffer {
	enum SeekType_t {
		SEEK_HEAD = 0,
		SEEK_CURRENT = 0x1,
		SEEK_TAIL = 0x2,
	};

protected:

	int m_Get;  // +0x10
	int m_Put;  // +0x14
	unsigned char m_Error;  // +0x18
	unsigned char m_Flags;  // +0x19
	unsigned char m_Reserved;  // +0x1a

	int m_nTab;  // +0x1c
	int m_nMaxPut;  // +0x20
	int m_nOffset;  // +0x24
	typedef struct {
		bool (*__pfn)(int);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} UtlBufferOverflowFunc_t;

	UtlBufferOverflowFunc_t m_GetOverflowFunc;  // +0x28
	UtlBufferOverflowFunc_t m_PutOverflowFunc;  // +0x38

private:

	void CUtlBuffer(CUtlBuffer *, const CUtlBuffer &);
	CUtlBuffer & operator=(CUtlBuffer *, const CUtlBuffer &);
	void CUtlBuffer(CUtlBuffer *, int, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, int);
	void CUtlBuffer(CUtlBuffer *, const void *, int, bool);
	unsigned char GetFlags(const CUtlBuffer *);
	void SetBufferType(CUtlBuffer *, bool, bool);
	void EnsureCapacity(CUtlBuffer *, int);
	void * AccessForDirectRead(CUtlBuffer *, int);
	void SetExternalBuffer(CUtlBuffer *, void *, int, int, int);
	bool IsExternallyAllocated(const CUtlBuffer *);
	void AssumeMemory(CUtlBuffer *, void *, int, int, int);
	void * Detach(CUtlBuffer *);
	void * DetachMemory(CUtlBuffer *);
	void CopyBuffer(CUtlBuffer *, const CUtlBuffer &);
	void CopyBuffer(CUtlBuffer *, const void *, int);
	void Swap(CUtlBuffer *, CUtlBuffer &);
	void Swap(CUtlBuffer *, CUtlMemory<unsigned char, int> &);
	void ActivateByteSwappingIfBigEndian(CUtlBuffer *);
	void ActivateByteSwapping(CUtlBuffer *, bool);
	void SetBigEndian(CUtlBuffer *, bool);
	bool IsBigEndian(CUtlBuffer *);
	void PackGet(CUtlBuffer *);
	void Clear(CUtlBuffer *);
	void Purge(CUtlBuffer *);
	void Spew(CUtlBuffer *);
	char GetChar(CUtlBuffer *);
	unsigned char GetUnsignedChar(CUtlBuffer *);
	short int GetShort(CUtlBuffer *);
	short unsigned int GetUnsignedShort(CUtlBuffer *);
	int GetInt(CUtlBuffer *);
	int64 GetInt64(CUtlBuffer *);
	unsigned int GetVarInt(CUtlBuffer *);
	uint64 GetVarInt64(CUtlBuffer *);
	unsigned int GetIntHex(CUtlBuffer *);
	unsigned int GetUnsignedInt(CUtlBuffer *);
	uint64 GetUnsignedInt64(CUtlBuffer *);
	float GetFloat(CUtlBuffer *);
	double GetDouble(CUtlBuffer *);
	void * GetPtr(CUtlBuffer *);
	void GetString(CUtlBuffer *, char *, int);
	bool Get(CUtlBuffer *, void *, int);
	void GetLine(CUtlBuffer *, char *, int);
	int GetUpTo(CUtlBuffer *, void *, int);
	void GetDelimitedString(CUtlBuffer *, CUtlCharConversion *, char *, int);
	char GetDelimitedChar(CUtlBuffer *, CUtlCharConversion *);
	int PeekStringLength(CUtlBuffer *);
	int PeekDelimitedStringLength(CUtlBuffer *, CUtlCharConversion *, bool);
	int Scanf(CUtlBuffer *, const char *, ...);
	int VaScanf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void EatWhiteSpace(CUtlBuffer *);
	bool EatCPPComment(CUtlBuffer *);
	bool EatCComment(CUtlBuffer *, int *);
	bool ParseToken(CUtlBuffer *, const char *, const char *, char *, int);
	bool GetToken(CUtlBuffer *, const char *);
	int ParseToken(CUtlBuffer *, characterset_t *, char *, int, bool);
	void PutChar(CUtlBuffer *, char);
	void PutUnsignedChar(CUtlBuffer *, unsigned char);
	void PutShort(CUtlBuffer *, short int);
	void PutUnsignedShort(CUtlBuffer *, short unsigned int);
	void PutInt(CUtlBuffer *, int);
	void PutInt64(CUtlBuffer *, int64);
	void PutUnsignedInt64(CUtlBuffer *, uint64);
	void PutUnsignedInt(CUtlBuffer *, unsigned int);
	void PutVarInt(CUtlBuffer *, unsigned int);
	void PutVarInt64(CUtlBuffer *, uint64);
	void PutFloat(CUtlBuffer *, float);
	void PutDouble(CUtlBuffer *, double);
	void PutPtr(CUtlBuffer *, void *);
	void PutString(CUtlBuffer *, const char *);
	void Put(CUtlBuffer *, const void *, int);
	void PutDelimitedString(CUtlBuffer *, CUtlCharConversion *, const char *);
	void PutDelimitedChar(CUtlBuffer *, CUtlCharConversion *, char);
	void Printf(CUtlBuffer *, const char *, ...);
	void VaPrintf(CUtlBuffer *, const char *, typedef __va_list_tag __va_list_tag *);
	void * PeekPut(CUtlBuffer *, int);
	const void * PeekGet(const CUtlBuffer *, int);
	const void * PeekGet(CUtlBuffer *, int, int);
	void * ReservePut(CUtlBuffer *, int);
	int TellPut(const CUtlBuffer *);
	int TellGet(const CUtlBuffer *);
	int TellMaxPut(const CUtlBuffer *);
	int GetBytesRemaining(const CUtlBuffer *);
	void SeekPut(CUtlBuffer *, SeekType_t, int);
	void SeekGet(CUtlBuffer *, SeekType_t, int);
	const void * Base(const CUtlBuffer *);
	void * Base(CUtlBuffer *);
	int SizeAllocated(const CUtlBuffer *);
	bool IsText(const CUtlBuffer *);
	bool IsGrowable(const CUtlBuffer *);
	bool IsValid(const CUtlBuffer *);
	bool ContainsCRLF(const CUtlBuffer *);
	bool IsReadOnly(const CUtlBuffer *);
	bool IsEntireDataInMemory(const CUtlBuffer *);
	bool ConvertCRLF(CUtlBuffer *, CUtlBuffer &);
	void PushTab(CUtlBuffer *);
	void PopTab(CUtlBuffer *);
	void EnableTabs(CUtlBuffer *, bool);
	size_t AllocSize(const CUtlBuffer *);
	size_t GetMemoryUsage(const CUtlBuffer *);

protected:

	void SetOverflowFuncs(CUtlBuffer *, UtlBufferOverflowFunc_t, UtlBufferOverflowFunc_t);
	bool OnPutOverflow(CUtlBuffer *, int);
	bool OnGetOverflow(CUtlBuffer *, int);
	bool CheckPut(CUtlBuffer *, int);
	bool CheckGet(CUtlBuffer *, int);
	void AddNullTermination(CUtlBuffer *);
	bool WasLastCharacterCR(CUtlBuffer *);
	void PutTabs(CUtlBuffer *);
	char GetDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *);
	void PutDelimitedCharInternal(CUtlBuffer *, CUtlCharConversion *, char);
	bool PutOverflow(CUtlBuffer *, int);
	bool GetOverflow(CUtlBuffer *, int);
	bool PeekStringMatch(CUtlBuffer *, int, const char *, int);
	int PeekLineLength(CUtlBuffer *);
	int PeekWhiteSpace(CUtlBuffer *, int);
	bool CheckPeekGet(CUtlBuffer *, int, int);
	bool CheckArbitraryPeekGet(CUtlBuffer *, int, int &);
	void GetTypeBin<char>(CUtlBuffer *, char &);
};

// src/public/tier1/utlbuffer.h:566
class CUtlInplaceBuffer : public CUtlBuffer {
public:

	CUtlInplaceBuffer(int, int, int);
	bool InplaceGetLinePtr(char * *, int *);
	char * InplaceGetLinePtr();

	// sizeof = 80
};
