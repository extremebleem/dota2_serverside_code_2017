// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/minidump.h:104
struct MiniDumpStandardData_t {
	unsigned int uStructuredExceptionCode;  // +0x0

protected:

	MiniDumpStandardData_t(const MiniDumpStandardData_t &);
	MiniDumpStandardData_t & operator=(const MiniDumpStandardData_t &);
	void SetStandardData(const MiniDumpStandardData_t &);
	void HandlerQueueHeartBeat();
	MiniDumpStandardData_t();

	// sizeof = 32
};

// src/public/tier0/minidump.h:135
struct MiniDumpContextSpecificData_t {
private:

	const char * szDescription;  // +0x0
	const void * pData;  // +0x8
	MiniDumpContextSpecificData_t(const char *, const void *);
	MiniDumpContextSpecificData_t(const MiniDumpContextSpecificData_t &);
	MiniDumpContextSpecificData_t & operator=(const MiniDumpContextSpecificData_t &);
	void Set(const char *, const void *);
	const void * Get(const char *);
	bool HasData();

	// sizeof = 16
};

// src/public/tier0/minidump.h:206
struct MiniDumpOptionalData_t {
	const tchar * pNamingToken;  // +0x0
	uint32 nMinidumpTypeFlags;  // +0x8

	MiniDumpOptionalData_t(const tchar *, uint32, const MiniDumpContextSpecificData_t &);
	MiniDumpOptionalData_t(const MiniDumpOptionalData_t &);
	MiniDumpOptionalData_t & operator=(const MiniDumpOptionalData_t &);
	void SetOptionalData(const MiniDumpOptionalData_t &);

	// sizeof = 32
};

// src/public/tier0/minidump.h:227
struct MiniDumpHandlerData_t : public MiniDumpStandardData_t, public MiniDumpOptionalData_t {
public:

	MiniDumpHandlerData_t(const MiniDumpHandlerData_t &);
	MiniDumpHandlerData_t & operator=(const MiniDumpHandlerData_t &);

protected:

	MiniDumpHandlerData_t();

	// sizeof = 64
};
