// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlcommon.h:126
struct StringEqualFunctor {
	bool operator()(const char *, const char *);

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:131
struct Mix32HashFunctor {
	unsigned int operator()(uint32);

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:133
struct StringHashFunctor {
	unsigned int operator()(const char *);

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:137
struct PointerEqualFunctor {
	bool operator()(const void *, const void *);

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:138
struct PointerHashFunctor {
	unsigned int operator()(const void *);

	// sizeof = 1
};
