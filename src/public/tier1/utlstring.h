// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlstring.h:37
class CUtlString {
private:

	char * m_pString;  // +0x0
	CUtlString();
	CUtlString(const char *);
	CUtlString(const char *, int);
	CUtlString(const CUtlString &);
	CUtlString(CUtlString &);
	CUtlString & operator=(CUtlString &);
	~CUtlString();
	const char * Get();
	void Set(const char *);
	void Convert(const wchar_t *);
	const char * operator char const*();
	void SetPtr(char *);
	void SetDirect(const char *, int);
	const char * String();
	char * Access();
	int Length();
	bool IsEmpty();
	void SetLength(int);
	char * GetForModify();
	void Clear();
	void Purge();
	void Swap(CUtlString &);
	void ToLowerFast();
	void ToUpperFast();
	int UnicodeCaseConvert(int, EStringConvertErrorPolicy);
	int ToLowerLinguistic(EStringConvertErrorPolicy);
	int ToUpperLinguistic(EStringConvertErrorPolicy);
	void Append(const char *, int);
	void Append(const char *);
	void Append(char);
	void StripTrailingSlash();
	void FixSlashes(char);
	void RemoveDotSlashes(char);
	void TrimLeft(char);
	void TrimLeft(const char *);
	void TrimRight(char);
	void TrimRight(const char *);
	void Trim(char);
	void Trim(const char *);
	bool IsEqual_CaseSensitive(const char *);
	bool IsEqual_FastCaseInsensitive(const char *);
	CUtlString & operator=(const CUtlString &);
	CUtlString & operator=(const char *);
	bool operator==(const CUtlString &);
	bool operator!=(const CUtlString &);
	CUtlString & operator+=(const CUtlString &);
	CUtlString & operator+=(const char *);
	CUtlString & operator+=(char);
	CUtlString & operator+=(int);
	CUtlString & operator+=(double);
	CUtlString operator+(const char *);
	CUtlString operator+(const CUtlString &);
	CUtlString operator+(int);
	char operator[](int);
	bool IsValid();
	int Format(const char *, ...);
	int FormatV(const char *, typedef __va_list_tag __va_list_tag *);
	CUtlString Slice(int32, int32);
	CUtlString Left(int32);
	CUtlString Right(int32);
	CUtlString Replace(char, char);
	CUtlString Replace(char, const char *);
	CUtlString Replace(const char *, const char *, bool);
	CUtlString ReplaceFastCaseless(const char *, const char *);
	CUtlString Remove(const char *, bool);
	CUtlString Ellipsify(int);
	bool MatchesPattern(const CUtlString &, int);
	CUtlString AbsPath(const char *, bool);
	CUtlString UnqualifiedFilename();
	CUtlString DirName();
	CUtlString StripExtension();
	CUtlString StripFilename();
	CUtlString GetBaseFilename();
	CUtlString GetExtension();
	CUtlString PathJoin(const char *, const char *);
	int SortFastCaseInsensitive(const CUtlString *);
	int SortCaseSensitive(const CUtlString *);
	const CUtlString & GetEmptyString();
	size_t AllocSize();
	size_t GetMemoryUsage();
	void * GetMemoryBlock();
	void * AllocMemoryBlock(uint32);
	void FreeMemoryBlock();

	// sizeof = 8
};

// src/public/tier1/utlstring.h:37
class CUtlString {
	enum {
		PATTERN_NONE = 0,
		PATTERN_DIRECTORY = 0x1,
	};

private:

	char * m_pString;  // +0x0
	typedef enum {
		PATTERN_NONE = 0,
		PATTERN_DIRECTORY = 0x1,
	} TUtlStringPattern;
	void CUtlString(CUtlString *);
	void CUtlString(CUtlString *, const char *);
	void CUtlString(CUtlString *, const char *, int);
	void CUtlString(CUtlString *, const CUtlString &);
	void CUtlString(CUtlString *, CUtlString &);
	CUtlString & operator=(CUtlString *, CUtlString &);
	void ~CUtlString(CUtlString *, int);
	const char * Get(const CUtlString *);
	void Set(CUtlString *, const char *);
	void Convert(CUtlString *, const wchar_t *);
	const char * operator char const*(const CUtlString *);
	void SetPtr(CUtlString *, char *);
	void SetDirect(CUtlString *, const char *, int);
	const char * String(const CUtlString *);
	char * Access(CUtlString *);
	int Length(const CUtlString *);
	bool IsEmpty(const CUtlString *);
	void SetLength(CUtlString *, int);
	char * GetForModify(CUtlString *);
	void Clear(CUtlString *);
	void Purge(CUtlString *);
	void Swap(CUtlString *, CUtlString &);
	void ToLowerFast(CUtlString *);
	void ToUpperFast(CUtlString *);
	int UnicodeCaseConvert(CUtlString *, int, EStringConvertErrorPolicy);
	int ToLowerLinguistic(CUtlString *, EStringConvertErrorPolicy);
	int ToUpperLinguistic(CUtlString *, EStringConvertErrorPolicy);
	void Append(CUtlString *, const char *, int);
	void Append(CUtlString *, const char *);
	void Append(CUtlString *, char);
	void StripTrailingSlash(CUtlString *);
	void FixSlashes(CUtlString *, char);
	void RemoveDotSlashes(CUtlString *, char);
	void TrimLeft(CUtlString *, char);
	void TrimLeft(CUtlString *, const char *);
	void TrimRight(CUtlString *, char);
	void TrimRight(CUtlString *, const char *);
	void Trim(CUtlString *, char);
	void Trim(CUtlString *, const char *);
	bool IsEqual_CaseSensitive(const CUtlString *, const char *);
	bool IsEqual_FastCaseInsensitive(const CUtlString *, const char *);
	CUtlString & operator=(CUtlString *, const CUtlString &);
	CUtlString & operator=(CUtlString *, const char *);
	bool operator==(const CUtlString *, const CUtlString &);
	bool operator!=(const CUtlString *, const CUtlString &);
	CUtlString & operator+=(CUtlString *, const CUtlString &);
	CUtlString & operator+=(CUtlString *, const char *);
	CUtlString & operator+=(CUtlString *, char);
	CUtlString & operator+=(CUtlString *, int);
	CUtlString & operator+=(CUtlString *, double);
	CUtlString operator+(const CUtlString *, const char *);
	CUtlString operator+(const CUtlString *, const CUtlString &);
	CUtlString operator+(const CUtlString *, int);
	char operator[](const CUtlString *, int);
	bool IsValid(const CUtlString *);
	int Format(CUtlString *, const char *, ...);
	int FormatV(CUtlString *, const char *, typedef __va_list_tag __va_list_tag *);
	CUtlString Slice(const CUtlString *, int32, int32);
	CUtlString Left(const CUtlString *, int32);
	CUtlString Right(const CUtlString *, int32);
	CUtlString Replace(const CUtlString *, char, char);
	CUtlString Replace(const CUtlString *, char, const char *);
	CUtlString Replace(const CUtlString *, const char *, const char *, bool);
	CUtlString ReplaceFastCaseless(const CUtlString *, const char *, const char *);
	CUtlString Remove(const CUtlString *, const char *, bool);
	CUtlString Ellipsify(CUtlString *, int);
	bool MatchesPattern(const CUtlString *, const CUtlString &, int);
	CUtlString AbsPath(const CUtlString *, const char *, bool);
	CUtlString UnqualifiedFilename(const CUtlString *);
	CUtlString DirName(const CUtlString *);
	CUtlString StripExtension(const CUtlString *);
	CUtlString StripFilename(const CUtlString *);
	CUtlString GetBaseFilename(const CUtlString *);
	CUtlString GetExtension(const CUtlString *);
	CUtlString PathJoin(const char *, const char *);
	int SortFastCaseInsensitive(const CUtlString *, const CUtlString *);
	int SortCaseSensitive(const CUtlString *, const CUtlString *);
	const CUtlString & GetEmptyString();
	size_t AllocSize(const CUtlString *);
	size_t GetMemoryUsage(const CUtlString *);
	void * GetMemoryBlock(const CUtlString *);
	void * AllocMemoryBlock(CUtlString *, uint32);
	void FreeMemoryBlock(CUtlString *);
};

// src/public/tier1/utlstring.h:545
class CUtlStringBuilder {
	enum {
		STRING_TYPE_SENTINEL = 0x80,
		STRING_TYPE_ERROR = 0x40,
	};

	union Data {
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	static const uint8 MAX_STACK_STRLEN = 19;
	CUtlStringBuilder();
	CUtlStringBuilder(const char *);
	CUtlStringBuilder(const CUtlStringBuilder &);
	CUtlStringBuilder(size_t);
	~CUtlStringBuilder();
	CUtlStringBuilder & operator=(const CUtlStringBuilder &);
	CUtlStringBuilder & operator=(const char *);
	bool operator==(const CUtlStringBuilder &);
	bool operator==(const char *);
	bool operator!=(const CUtlStringBuilder &);
	bool operator!=(const char *);
	bool operator<(const CUtlStringBuilder &);
	bool operator<(const char *);
	bool operator>(const CUtlStringBuilder &);
	bool operator>(const char *);
	CUtlStringBuilder & operator+=(const char *);
	bool IsValid();
	const char * String();
	const char * Get();
	const char * operator char const*();
	char * Access();
	bool EnsureCapacity(size_t);
	void Append(const char *);
	void Append(const char *, size_t);
	void Append(const CUtlStringBuilder &);
	void AppendChar(char);
	void AppendRepeat(char, int);
	void SetValue(const char *);
	void Set(const char *);
	void Clear();
	void SetPtr(char *);
	void SetPtr(char *, size_t);
	void Swap(CUtlStringBuilder &);
	void SetDirect(const char *, size_t);
	size_t Length();
	bool IsEmpty();
	size_t Capacity();
	size_t Format(const char *, ...);
	size_t AppendFormat(const char *, ...);
	size_t Replace(char, char);
	size_t Replace(const char *, const char *);
	size_t ReplaceFastCaseless(const char *, const char *);
	bool ReplaceAt(size_t, size_t, const char *, size_t);
	ptrdiff_t IndexOf(const char *);
	size_t RemoveWhitespace();
	size_t TrimWhitespace();
	bool SetLength(size_t);
	char * TakeOwnership(size_t *, size_t *);
	void SetError();
	void ClearError();
	bool HasError();
	size_t VFormat(const char *, typedef __va_list_tag __va_list_tag *);
	size_t VAppendFormat(const char *, typedef __va_list_tag __va_list_tag *);
	void Truncate(size_t);
	char * AccessNoAssert();
	void SetErrorNoAssert();
	size_t ReplaceInternal(const char *, const char *, const char * (*)(const char *, const char *));
	bool operator bool();
	char * PrepareBuffer(size_t, bool, size_t);
	char * InternalPrepareBuffer(size_t, bool, size_t);

	// sizeof = 24
};
