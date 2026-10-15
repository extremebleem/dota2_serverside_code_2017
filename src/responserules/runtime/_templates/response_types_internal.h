// Reconstructed from DWARF by pahole; not original source.

// src/responserules/runtime/response_types_internal.h:339
class CResponseDict<Rule*, short unsigned int> : public CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> {
public:

private:

	CUtlMap<unsigned int, char const*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_ReverseMap;  // +0x28
	CResponseDict();
	short unsigned int Insert(const char *, Rule * const &);
	short unsigned int Insert(const char *);
	short unsigned int Find(const char *);
	const char * GetElementName(short unsigned int);
	const char * GetElementName(short unsigned int);

	// sizeof = 80
};
