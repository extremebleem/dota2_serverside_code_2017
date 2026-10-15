// Reconstructed from DWARF by pahole; not original source.

// src/public/stringregistry.h:25
class CStringRegistry {
private:

	short unsigned int AddString(const char *, int);
	int GetStringID(const char *);
	const char * GetStringText(int);
	const char * GetStringForKey(short unsigned int);
	int GetIDForKey(short unsigned int);
	void ClearStrings();
	int GetNumStrings();
	short unsigned int First();
	short unsigned int Next(short unsigned int);
	short unsigned int InvalidIndex();
	~CStringRegistry();
	CStringRegistry();

	// sizeof = 8
};
