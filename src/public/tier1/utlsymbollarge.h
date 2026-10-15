// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlsymbollarge.h:36
class CUtlSymbolLarge {
	union {
		UtlSymLargeId_t m_Id;  // +0x0
		const char * m_pAsString;  // +0x0
	};

protected:

	union {
		UtlSymLargeId_t m_Id;  // +0x0
		const char * m_pAsString;  // +0x0
	} u;
	CUtlSymbolLarge();
	CUtlSymbolLarge(UtlSymLargeId_t);
	CUtlSymbolLarge(const CUtlSymbolLarge &);
	CUtlSymbolLarge & operator=(const CUtlSymbolLarge &);
	bool operator==(const CUtlSymbolLarge &);
	bool operator==(const UtlSymLargeId_t &);
	bool operator!=(const CUtlSymbolLarge &);
	bool operator!=(const UtlSymLargeId_t &);
	bool operator<(const CUtlSymbolLarge &);
	const UtlSymLargeId_t operator const UtlSymLargeId_t();
	const char * String();
	bool IsValid();
	bool IsNullString();
	bool operator!();
	const char * ToCStr();

private:

	const short int operator short int const();
	const short unsigned int operator short unsigned int const();

protected:

	CUtlSymbolLarge(const char *);
	bool operator==(const char *);

	// sizeof = 8
};

// src/public/tier1/utlsymbollarge.h:171
struct CUtlSymbolTableLargeBaseTreeEntry_t {
	LargeSymbolTableHashDecoration_t m_Hash;  // +0x0
	char m_String[1];  // +0x8
	bool IsEmpty();
	const char * String();
	CUtlSymbolLarge ToSymbol();
	LargeSymbolTableHashDecoration_t HashValue();

	// sizeof = 16
};
