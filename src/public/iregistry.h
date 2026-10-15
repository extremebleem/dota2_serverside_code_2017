// Reconstructed from DWARF by pahole; not original source.

// src/public/iregistry.h:18
class IRegistry {
	int ()() * * _vptr.IRegistry;  // +0x0
	IRegistry();
	virtual ~IRegistry();
	virtual bool Init(const char *);
	virtual void Shutdown();
	virtual int ReadInt(const char *, int);
	virtual void WriteInt(const char *, int);
	virtual const char * ReadString(const char *, const char *);
	virtual void WriteString(const char *, const char *);
	virtual int ReadInt(const char *, const char *, int);
	virtual void WriteInt(const char *, const char *, int);
	virtual const char * ReadString(const char *, const char *, const char *);
	virtual void WriteString(const char *, const char *, const char *);

	// vtable[2] Init
	// vtable[3] Shutdown
	// vtable[4] ReadInt
	// vtable[5] WriteInt
	// vtable[6] ReadString
	// vtable[7] WriteString
	// vtable[8] ReadInt
	// vtable[9] WriteInt
	// vtable[10] ReadString
	// vtable[11] WriteString
	// sizeof = 8
};

// src/public/iregistry.h:50
class CRegistryContainer {
protected:

	CRegistryContainer(const char *);
	~CRegistryContainer();
	void ChangeRoot(const char *);
	void Release();
	int ReadInt(const char *, int);
	void WriteInt(const char *, int);
	const char * ReadString(const char *, const char *);
	void WriteString(const char *, const char *);

	// sizeof = 8
};
