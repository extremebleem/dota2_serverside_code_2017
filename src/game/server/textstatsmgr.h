// Reconstructed from DWARF by pahole; not original source.

// src/game/server/textstatsmgr.h:25
class CTextStatsMgr {
private:

	char m_szStatFilename[260];  // +0x0
	CTextStatsMgr();
	bool WriteFile(IFileSystem *, const char *);
	char * GetStatsFilename();
	void SetStatsFilename(const char *);

	// sizeof = 260
};

// src/game/server/textstatsmgr.h:50
class CTextStat {
private:

	TextStatPrintFn m_PrintFn;  // +0x18
	void * m_pUserData;  // +0x20
	CTextStat();
	CTextStat(TextStatPrintFn, void *, CTextStatsMgr *);
	~CTextStat();
	void Init(TextStatPrintFn, void *, CTextStatsMgr *);
	void Term();
	CTextStat(bool);
	CTextStat * GetTextStatsList();
	void RemoveFn(void *);

	// sizeof = 40
};

// src/game/server/textstatsmgr.h:87
class CTextStatInt {
private:

	const char * m_pName;  // +0x0
	int m_Value;  // +0x8

	CTextStatInt(const char *, int, CTextStatsMgr *);
	int operator int();
	int operator=(int);
	int operator++();
	int operator--();
	int operator+=(int);
	int operator-=(int);
	int operator*=(int);
	int operator/=(int);
	void PrintFn(IFileSystem *, FileHandle_t, void *);

	// sizeof = 56
};

// src/game/server/textstatsmgr.h:119
class CTextStatFile {
private:

	static CTextStatFile * s_pHead;
	TextStatFileFn m_pFn;  // +0x8
	CTextStatFile(TextStatFileFn);

	// sizeof = 16
};
