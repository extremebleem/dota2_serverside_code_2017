// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utltokenizer.h:59
class CUtlTokenReference {
private:

	int m_nStartingLineNumber;  // +0x0

	char * m_pLocalStrCopy;  // +0x8
	const char * m_pStart;  // +0x10
	const char * m_pEnd;  // +0x18
	int m_nTokenNumber;  // +0x20
	CUtlTokenReference();
	CUtlTokenReference(const CUtlTokenReference &);
	void MakeInvalid();
	void Init(int, const char *, const char *, int);
	~CUtlTokenReference();
	bool IsValid();
	const char * AsString();
	CUtlStringToken MakeStringToken();
	void AsString(CUtlString *);
	int GetLineNumber();
	void AsUnescapedString(CUtlString *);
	char GetFirstChar();
	const char * GetStartPtr();
	const char * GetLastPtr();
	const char * GetEndPtr();
	int GetTokenSize();
	bool IsIdentifier(bool);
	bool IsNumber();
	bool IsInteger();
	bool IsFloat();
	bool IsBool();
	bool IsStringLiteral();
	bool IsMultiLineStringLiteral();
	bool IsEqual(const char *, bool);
	bool MakeSafeIdentifier(CUtlString *);

	// sizeof = 40
};

// src/public/tier1/utltokenizer.h:155
struct TokenWarning_t {
	int m_nLineNumber;  // +0x8
	TokenWarning_t();
	~TokenWarning_t();

	// sizeof = 16
};

// src/public/tier1/utltokenizer.h:163
class CUtlTokenizer {
private:

	int m_nLineNumberAfterLookaheadTokens;  // +0x288

	bool m_bParseStringsAsAtomicTokens;  // +0x2b0
	bool m_bSkipComments;  // +0x2b1
	bool m_bSkipWhitespace;  // +0x2b2
	bool m_bWhiteSpaceIsDelimiter;  // +0x2b3
	CUtlTokenizer();
	CUtlTokenizer(CUtlBuffer *, const char *);
	void Init(CUtlBuffer *, const char *);
	void SetTokenDelimiters(const char *);
	void SetParseStringsAsAtomicTokens(bool);
	void SetSkipComments(bool);
	void SetSkipWhitespace(bool);
	void SetWhitespaceIsDelimiter(bool);
	bool ConsumeIdentifier(CUtlTokenReference *);
	bool ConsumeAtomicToken(const char *, bool);
	bool ConsumeArbitraryToken(CUtlTokenReference *);
	bool ConsumeNextToken();
	bool ConsumeUntilAtomic(const char *, bool);
	bool PeekIdentifier(int);
	bool PeekAtomicToken(int, const char *, bool);
	bool PeekToken(int, CUtlTokenReference *);
	const char * GetCurrentReadPointer();
	bool GetLastConsumedToken(CUtlTokenReference *);
	bool AnyTokensRemaining();
	void Rewind();
	int GetCurrentLineNumber();
	const char * GetFilename();
	bool HasWarnings();
	int GetWarningCount();
	const TokenWarning_t & GetWarning(int);
	bool IsDelimiterOrWhitespace(const CUtlTokenReference &);
	bool ReadUpThroughToken(int);
	bool ReadToken();
	bool ReadTokenChars(const char * *, const char * *, bool *, int *);
	~CUtlTokenizer();

	// sizeof = 696
};
