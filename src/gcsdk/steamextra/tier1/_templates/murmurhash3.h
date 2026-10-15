// Reconstructed from DWARF by pahole; not original source.

// src/gcsdk/steamextra/tier1/murmurhash3.h:71
struct MurmurHash3Functor<item_definition_index_t> {
	typedef uint32 TargetType;
	TargetType operator()(const item_definition_index_t &);

	// sizeof = 1
};

// src/gcsdk/steamextra/tier1/murmurhash3.h:71
struct MurmurHash3Functor<CEconSchemaSymbol> {
	typedef uint32 TargetType;
	TargetType operator()(const CEconSchemaSymbol &);

	// sizeof = 1
};

// src/gcsdk/steamextra/tier1/murmurhash3.h:71
struct MurmurHash3Functor<unsigned int> {
	typedef uint32 TargetType;
	TargetType operator()(const unsigned int &);

	// sizeof = 1
};

// MurmurHash3Functor: 3 more instantiations (full list in INDEX.tsv)
//   MurmurHash3Functor<long long unsigned int>
//   MurmurHash3Functor<long long int>
//   MurmurHash3Functor<int>
