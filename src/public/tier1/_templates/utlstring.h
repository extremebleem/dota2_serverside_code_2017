// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlstring.h:405
class StringFuncs<char> {
	char * Duplicate(const char *);
	void Copy(char *, const char *, int);
	int Compare(const char *, const char *);
	int Length(const char *);
	const char * FindChar(const char *, char);
	const char * EmptyString();

	// sizeof = 1
};

// src/public/tier1/utlstring.h:417
class StringFuncs<wchar_t> {
	wchar_t * Duplicate(const wchar_t *);
	void Copy(wchar_t *, const wchar_t *, int);
	int Compare(const wchar_t *, const wchar_t *);
	int Length(const wchar_t *);
	const wchar_t * FindChar(const wchar_t *, wchar_t);
	const wchar_t * EmptyString();

	// sizeof = 1
};

// src/public/tier1/utlstring.h:436
class CUtlConstStringBase<char> {
protected:

	const char * m_pString;  // +0x0
	CUtlConstStringBase();
	CUtlConstStringBase(const char *);
	CUtlConstStringBase(const CUtlConstStringBase<char> &);
	~CUtlConstStringBase();
	void Set(const char *);
	void Clear();
	const char * Get();
	const char * operator char const*();
	bool IsEmpty();
	int Compare(const char *);
	bool IsValid();
	bool operator<(const char *);
	bool operator==(const char *);
	bool operator!=(const char *);
	bool operator<(const CUtlConstStringBase<char> &);
	bool operator==(const CUtlConstStringBase<char> &);
	bool operator!=(const CUtlConstStringBase<char> &);
	CUtlConstStringBase<char> & operator=(const char *);
	CUtlConstStringBase<char> & operator=(const CUtlConstStringBase<char> &);

	// sizeof = 8
};

// src/public/tier1/utlstring.h:436
class CUtlConstStringBase<wchar_t> {
protected:

	const wchar_t * m_pString;  // +0x0
	CUtlConstStringBase();
	CUtlConstStringBase(const wchar_t *);
	CUtlConstStringBase(const CUtlConstStringBase<wchar_t> &);
	~CUtlConstStringBase();
	void Set(const wchar_t *);
	void Clear();
	const wchar_t * Get();
	const wchar_t * operator wchar_t const*();
	bool IsEmpty();
	int Compare(const wchar_t *);
	bool IsValid();
	bool operator<(const wchar_t *);
	bool operator==(const wchar_t *);
	bool operator!=(const wchar_t *);
	bool operator<(const CUtlConstStringBase<wchar_t> &);
	bool operator==(const CUtlConstStringBase<wchar_t> &);
	bool operator!=(const CUtlConstStringBase<wchar_t> &);
	CUtlConstStringBase<wchar_t> & operator=(const wchar_t *);
	CUtlConstStringBase<wchar_t> & operator=(const CUtlConstStringBase<wchar_t> &);

	// sizeof = 8
};
