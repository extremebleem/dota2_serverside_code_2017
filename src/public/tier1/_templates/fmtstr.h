// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/fmtstr.h:74
class CFmtStrN<256, false> {
	int ()() * * _vptr.CFmtStrN;  // +0x0
protected:

	bool m_bQuietTruncation;  // +0x8
	char m_szBuf[256];  // +0x9

	int m_nLength;  // +0x10c
	CFmtStrN(CFmtStrN<256, false> &);
	CFmtStrN(const CFmtStrN<256, false> &);
	CFmtStrN();
	CFmtStrN(const char *, ...);
	CFmtStrN(const char * *, ...);
	const char * sprintf(const char *, ...);
	const char * Format(const char *, ...);
	const char * sprintf_argv(const char *, typedef __va_list_tag __va_list_tag *);
	void VSprintf(const char * *, ...);
	const char * Get();
	const char * String();
	const char * operator char const*();
	char * Access();
	int GetMaxLength();
	CFmtStrN<256, false> & operator=(const char *);
	CFmtStrN<256, false> & operator+=(const char *);
	int Length();
	void SetLength(int);
	void Clear();
	void AppendFormat(const char *, ...);
	void AppendFormatV(const char *, typedef __va_list_tag __va_list_tag *);
	void Append(const char *);
	void Append(char);
	void AppendIndent(uint32, char);
	void SetQuietTruncation(bool);
	virtual void InitQuietTruncation();

	// vtable[0] InitQuietTruncation
	// sizeof = 272
};

// src/public/tier1/fmtstr.h:74
class CFmtStrN<1024, false> {
	int ()() * * _vptr.CFmtStrN;  // +0x0
protected:

	bool m_bQuietTruncation;  // +0x8
	char m_szBuf[1024];  // +0x9

	int m_nLength;  // +0x40c
	CFmtStrN(CFmtStrN<1024, false> &);
	CFmtStrN(const CFmtStrN<1024, false> &);
	CFmtStrN();
	CFmtStrN(const char *, ...);
	CFmtStrN(const char * *, ...);
	const char * sprintf(const char *, ...);
	const char * Format(const char *, ...);
	const char * sprintf_argv(const char *, typedef __va_list_tag __va_list_tag *);
	void VSprintf(const char * *, ...);
	const char * Get();
	const char * String();
	const char * operator char const*();
	char * Access();
	int GetMaxLength();
	CFmtStrN<1024, false> & operator=(const char *);
	CFmtStrN<1024, false> & operator+=(const char *);
	int Length();
	void SetLength(int);
	void Clear();
	void AppendFormat(const char *, ...);
	void AppendFormatV(const char *, typedef __va_list_tag __va_list_tag *);
	void Append(const char *);
	void Append(char);
	void AppendIndent(uint32, char);
	void SetQuietTruncation(bool);
	virtual void InitQuietTruncation();

	// vtable[0] InitQuietTruncation
	// sizeof = 1040
};

// src/public/tier1/fmtstr.h:74
class CFmtStrN<512, true> {
	int ()() * * _vptr.CFmtStrN;  // +0x0
protected:

	bool m_bQuietTruncation;  // +0x8
	char m_szBuf[512];  // +0x9

	int m_nLength;  // +0x20c
	CFmtStrN(CFmtStrN<512, true> &);
	CFmtStrN(const CFmtStrN<512, true> &);
	CFmtStrN();
	CFmtStrN(const char *, ...);
	CFmtStrN(const char * *, ...);
	const char * sprintf(const char *, ...);
	const char * Format(const char *, ...);
	const char * sprintf_argv(const char *, typedef __va_list_tag __va_list_tag *);
	void VSprintf(const char * *, ...);
	const char * Get();
	const char * String();
	const char * operator char const*();
	char * Access();
	int GetMaxLength();
	CFmtStrN<512, true> & operator=(const char *);
	CFmtStrN<512, true> & operator+=(const char *);
	int Length();
	void SetLength(int);
	void Clear();
	void AppendFormat(const char *, ...);
	void AppendFormatV(const char *, typedef __va_list_tag __va_list_tag *);
	void Append(const char *);
	void Append(char);
	void AppendIndent(uint32, char);
	void SetQuietTruncation(bool);
	virtual void InitQuietTruncation();

	// vtable[0] InitQuietTruncation
	// sizeof = 528
};

// CFmtStrN: 4 more instantiations (full list in INDEX.tsv)
//   CFmtStrN<400, true>
//   CFmtStrN<80, false>
//   CFmtStrN<64, false>
//   CFmtStrN<32, false>
