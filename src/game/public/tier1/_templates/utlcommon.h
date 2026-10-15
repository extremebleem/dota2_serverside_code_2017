// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/utlcommon.h:50
class CUtlKeyValuePair<unsigned int, short unsigned int> {
	unsigned int m_key;  // +0x0
	short unsigned int m_value;  // +0x4
	typedef short unsigned int ValueReturn_t;
	CUtlKeyValuePair();
	short unsigned int & GetValue();
	const short unsigned int & GetValue();
	void CUtlKeyValuePair<unsigned int, short unsigned int>(const unsigned int &, const short unsigned int &);

	// sizeof = 8
};

// src/game/public/tier1/utlcommon.h:50
class CUtlKeyValuePair<unsigned int, GCSDK::WaitAnalysisNode_t*> {
	unsigned int m_key;  // +0x0

	typedef WaitAnalysisNode_t * ValueReturn_t;
	CUtlKeyValuePair();
	WaitAnalysisNode_t * & GetValue();
	WaitAnalysisNode_t * const & GetValue();
	void CUtlKeyValuePair<unsigned int, GCSDK::WaitAnalysisNode_t*>(const unsigned int &, WaitAnalysisNode_t * const &);

	// sizeof = 16
};

// src/game/public/tier1/utlcommon.h:50
class CUtlKeyValuePair<long long unsigned int, GCSDK::WaitAnalysisNode_t*> {
	long long unsigned int m_key;  // +0x0
	typedef WaitAnalysisNode_t * ValueReturn_t;
	CUtlKeyValuePair();
	WaitAnalysisNode_t * & GetValue();
	WaitAnalysisNode_t * const & GetValue();
	void CUtlKeyValuePair<long long unsigned int, GCSDK::WaitAnalysisNode_t*>(const long long unsigned int &, WaitAnalysisNode_t * const &);

	// sizeof = 16
};

// src/game/public/tier1/utlcommon.h:151
struct DefaultEqualFunctor<const ResourceBindingBase_t*> {
	bool operator()(Arg_t, Arg_t);
	bool operator()(Alt_t, Arg_t);
	bool operator()(Arg_t, Alt_t);

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:151
struct DefaultEqualFunctor<long long unsigned int> {
	bool operator()(Arg_t, Arg_t);
	bool operator()(Alt_t, Arg_t);
	bool operator()(Arg_t, Alt_t);

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:151
struct DefaultEqualFunctor<ResourceId_t> {
	bool operator()(Arg_t, Arg_t);
	bool operator()(Alt_t, Arg_t);
	bool operator()(Arg_t, Alt_t);

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:174
struct DefaultHashFunctor<long long unsigned int> : public Mix64HashFunctor {
public:

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:205
struct HasClassAltArgumentType<bool> {
	enum {
		value = 0,
	};

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:205
struct HasClassAltArgumentType<char> {
	enum {
		value = 0,
	};

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:205
struct HasClassAltArgumentType<signed char> {
	enum {
		value = 0,
	};

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:233
struct ArgumentTypeInfoImpl<const ResourceBindingBase_t*, undefined_t> {
	typedef const ResourceBindingBase_t * Arg_t;
	typedef undefined_t Alt_t;

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:233
struct ArgumentTypeInfoImpl<long long unsigned int, undefined_t> {
	typedef long long unsigned int Arg_t;
	typedef undefined_t Alt_t;

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:233
struct ArgumentTypeInfoImpl<GCSDK::WaitAnalysisNode_t*, undefined_t> {
	typedef WaitAnalysisNode_t * Arg_t;

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:300
struct DefaultHashFunctor<const ResourceBindingBase_t*> : public PointerHashFunctor {
public:

	// sizeof = 1
};

// src/game/public/tier1/utlcommon.h:300
struct DefaultHashFunctor<const CSchemaClassInfo*> : public PointerHashFunctor {
public:

	// sizeof = 1
};

// CUtlKeyValuePair: 3 more instantiations (full list in INDEX.tsv)
//   CUtlKeyValuePair<ResourceId_t, char const*>
//   CUtlKeyValuePair<const CSchemaClassInfo*, CClassVisitInfo*>
//   CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>

// DefaultEqualFunctor: 1 more instantiations (full list in INDEX.tsv)
//   DefaultEqualFunctor<const CSchemaClassInfo*>

// HasClassAltArgumentType: 13 more instantiations (full list in INDEX.tsv)
//   HasClassAltArgumentType<unsigned char>
//   HasClassAltArgumentType<short int>
//   HasClassAltArgumentType<short unsigned int>
//   HasClassAltArgumentType<int>
//   HasClassAltArgumentType<unsigned int>
//   HasClassAltArgumentType<long int>
//   HasClassAltArgumentType<long unsigned int>
//   HasClassAltArgumentType<long long int>
//   HasClassAltArgumentType<long long unsigned int>
//   HasClassAltArgumentType<float>
//   HasClassAltArgumentType<double>
//   HasClassAltArgumentType<long double>
//   HasClassAltArgumentType<wchar_t>

// ArgumentTypeInfoImpl: 3 more instantiations (full list in INDEX.tsv)
//   ArgumentTypeInfoImpl<const ResourceId_t&, undefined_t>
//   ArgumentTypeInfoImpl<const CSchemaClassInfo*, undefined_t>
//   ArgumentTypeInfoImpl<CClassVisitInfo*, undefined_t>
