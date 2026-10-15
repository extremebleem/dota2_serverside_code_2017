// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/tokenset.h:33
struct tokenset_t<CSchemaType*> {
	const char * name;  // +0x0
	CSchemaType * GetToken(const char *);
	CSchemaType * GetTokenI(const char *);
	const char * GetNameByToken(CSchemaType *);
	const char * GetNameByToken(CSchemaType *, const char *);

	// sizeof = 16
};

// src/game/public/tier1/tokenset.h:33
struct tokenset_t<optype_t> {
	const char * name;  // +0x0
	optype_t GetToken(const char *);
	optype_t GetTokenI(const char *);
	const char * GetNameByToken(optype_t);
	const char * GetNameByToken(optype_t, const char *);

	// sizeof = 16
};
