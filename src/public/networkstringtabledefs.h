// Reconstructed from DWARF by pahole; not original source.

// src/public/networkstringtabledefs.h:31
class INetworkStringTable {
	int ()() * * _vptr.INetworkStringTable;  // +0x0
	INetworkStringTable();
	virtual ~INetworkStringTable();
	virtual const char * GetTableName();
	virtual TABLEID GetTableId();
	virtual int GetNumStrings();
	virtual void SetTick(int);
	virtual int GetTick();
	virtual bool ChangedSinceTick(int);
	virtual int AddString(bool, const char *, int, const void *);
	virtual const char * GetString(int, bool);
	virtual void SetStringUserData(int, int, const void *, bool);
	virtual const void * GetStringUserData(int, int *);
	virtual int FindStringIndex(const char *);
	virtual void SetStringChangedCallback(void *, pfnStringChanged);

	// vtable[2] GetTableName
	// vtable[3] GetTableId
	// vtable[4] GetNumStrings
	// vtable[5] SetTick
	// vtable[6] GetTick
	// vtable[7] ChangedSinceTick
	// vtable[8] AddString
	// vtable[9] GetString
	// vtable[10] SetStringUserData
	// vtable[11] GetStringUserData
	// vtable[12] FindStringIndex
	// vtable[13] SetStringChangedCallback
	// sizeof = 8
};

// src/public/networkstringtabledefs.h:65
class INetworkStringTableContainer : public IAppSystem {
public:

	INetworkStringTableContainer();
	virtual ~INetworkStringTableContainer();
	virtual INetworkStringTable * CreateStringTable(const char *, int, int, ENetworkStringtableFlags);
	virtual void RemoveAllTables();
	virtual INetworkStringTable * FindTable(const char *);
	virtual INetworkStringTable * GetTable(TABLEID);
	virtual int GetNumTables();
	virtual void SetAllowClientSideAddString(INetworkStringTable *, bool);

	// vtable[13] CreateStringTable
	// vtable[14] RemoveAllTables
	// vtable[15] FindTable
	// vtable[16] GetTable
	// vtable[17] GetNumTables
	// vtable[18] SetAllowClientSideAddString
	// sizeof = 8
};

// src/public/networkstringtabledefs.h:85
struct StringTableDef_t {
	char m_pTableName[128];  // +0x0
	FnPostTableCreatedOrHooked m_pfnPostCreateOrHook;  // +0x88
	int m_nUserDataFixedSize;  // +0x90
	int m_nUserDataNetworkBits;  // +0x94

	pfnStringChanged m_pfnStringChanged;  // +0xa0
	bool m_bAllowClientSideAddString;  // +0xa8

	// sizeof = 176
};
