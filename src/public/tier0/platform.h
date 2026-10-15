// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/platform.h:15
struct empty_t {
	// sizeof = 1
};

// src/public/tier0/platform.h:876
class CRelativeTickCount {
	uint64 m_Int64;  // +0x0
	CRelativeTickCount();
	CRelativeTickCount(uint64);
	void Sample();
	void Init();
	void Init(double);
	void Init(uint64);
	uint64 GetCycles64();
	uint64 GetRelativeTicks64();
	uint64 GetMicroseconds64();
	double GetMicrosecondsF();
	uint64 GetMilliseconds64();
	double GetMillisecondsF();
	double GetSeconds();

	// sizeof = 8
};

// src/public/tier0/platform.h:947
class CRelativeTickTimer {
private:

	CRelativeTickTimer();
	void Start();
	void End();
	const CRelativeTickCount & GetDuration();
	CRelativeTickCount GetDurationInProgress();

	// sizeof = 8
};

// src/public/tier0/platform.h:1028
struct CPUInformation {
	int m_Size;  // +0x0
	uint8 m_nLogicalProcessors;  // +0x4
	uint8 m_nPhysicalProcessors;  // +0x5
	bool m_bRDTSC:1;  // +0x6:0
	bool m_bInvariantTSC:1;  // +0x6:1
	bool m_bCMOV:1;  // +0x6:2
	bool m_bFCMOV:1;  // +0x6:3
	bool m_bSSE:1;  // +0x6:4
	bool m_bSSE2:1;  // +0x6:5
	bool m_b3DNow:1;  // +0x6:6
	bool m_bMMX:1;  // +0x6:7
	bool m_bHT:1;  // +0x7:0
	bool m_bSSE3:1;  // +0x7:1
	bool m_bSSSE3:1;  // +0x7:2
	bool m_bSSE4a:1;  // +0x7:3
	bool m_bSSE41:1;  // +0x7:4
	bool m_bSSE42:1;  // +0x7:5
	bool m_bAVX:1;  // +0x7:6

	tchar * m_szProcessorID;  // +0x8
	tchar * m_szProcessorBrand;  // +0x10
	uint32 m_nModel;  // +0x18
	unsigned int m_nFeatures[3];  // +0x1c
	uint32 m_nL1CacheSizeKb;  // +0x28
	uint32 m_nL1CacheDesc;  // +0x2c
	uint32 m_nL2CacheSizeKb;  // +0x30
	uint32 m_nL2CacheDesc;  // +0x34
	uint32 m_nL3CacheSizeKb;  // +0x38
	uint32 m_nL3CacheDesc;  // +0x3c
	CPUInformation();

	// sizeof = 64
};

// src/public/tier0/platform.h:1327
class CReuseVaList {
	va_list m_ReuseList;  // +0x0
	CReuseVaList(typedef __va_list_tag __va_list_tag *);
	~CReuseVaList();

	// sizeof = 24
};

// src/public/tier0/platform.h:1881
struct V_uuid_t {
	uint32 Data1;  // +0x0
	uint16 Data2;  // +0x4
	uint16 Data3;  // +0x6
	unsigned char Data4[8];  // +0x8
	GUID & operator GUID&();
	const GUID & operator const GUID&();

	// sizeof = 16
};

// src/public/tier0/platform.h:1942
class CUUIDString {
private:

	char szString[37];  // +0x0
	CUUIDString();
	CUUIDString(const V_uuid_t &);
	CUUIDString(const V_uuid_t *);
	CUUIDString(const CUUIDString &);
	CUUIDString(const char *, bool);
	CUUIDString & operator=(const CUUIDString &);
	CUUIDString & operator=(const V_uuid_t &);
	const char * Get();
	const char * operator char const*();
	void FromUuid(const V_uuid_t &);
	bool ToUuid(V_uuid_t *);
	bool FromString(const char *, bool);

	// sizeof = 37
};
