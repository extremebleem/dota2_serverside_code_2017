// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/utlpair.h:14
class CUtlPair<long long unsigned int, char const*> {
	long long unsigned int first;  // +0x0
	const char * second;  // +0x8
	CUtlPair();
	CUtlPair(long long unsigned int, const char *);
	bool operator<(const CUtlPair<long long unsigned int, char const*> &);
	bool operator==(const CUtlPair<long long unsigned int, char const*> &);

	// sizeof = 16
};
