// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/gridstringprinter.h:20
class CGridStringPrinter {
	struct ColumnHeader_t {
		bool m_bLeftJustify;  // +0x8
		ColumnHeader_t();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CUtlSymbolTableLarge m_Symbols;  // +0x30
	bool m_bUseHeaders;  // +0x88
	char m_cColumnDivider;  // +0x89
	char m_cHeaderDivider;  // +0x8a
	CGridStringPrinter(char, char);
	void SetString(int, int, const char *);
	void SetColumnHeader(int, const char *);
	void SetColumnJustification(int, bool);
	void GetLines(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	int NumColumns();
	int NumRows();
	CUtlString GetString(int, int);
	CUtlString GetColumnHeader(int);
	void Clear();
	void EnsureColumnCount(int);
	void EnsureRowCount(int);
	~CGridStringPrinter();

	// sizeof = 144
};
