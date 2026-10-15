// Reconstructed from DWARF by pahole; not original source.

// src/gcsdk/steamextra/tier1/utlhashmaplarge.h:65
struct MurmurHash3ConstCharPtr {
	typedef uint32 TargetType;
	TargetType operator()(const char *);

	// sizeof = 1
};

// src/gcsdk/steamextra/tier1/utlhashmaplarge.h:70
struct CaseSensitiveStrEquals {
	bool operator()(const char *, const char *);

	// sizeof = 1
};
