// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_schema_symbol.h:15
class CEconSchemaSymbol : public CUtlSymbolLarge {
public:

	CEconSchemaSymbol();
	CEconSchemaSymbol(UtlSymLargeId_t);
	CEconSchemaSymbol(const CEconSchemaSymbol &);
	CEconSchemaSymbol(const char *);
	CEconSchemaSymbol & operator=(const CEconSchemaSymbol &);
	CEconSchemaSymbol & operator=(const char *);
	bool IsEmpty();
	const char * Get();
	const char * GetWithNull();

	// sizeof = 8
};
