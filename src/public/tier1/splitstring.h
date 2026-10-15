// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/splitstring.h:9
class CSplitString : public CUtlVector<char*, CUtlMemory<char*, int> > {
public:

private:

	char * m_szBuffer;  // +0x18
	CSplitString();
	CSplitString(const char *, const char *);
	CSplitString(const char *, const char * *, int);
	~CSplitString();
	void Set(const char *, const char * *, int);
	void Construct(const char *, const char * *, int);
	void PurgeAndDeleteElements();

	// sizeof = 32
};
