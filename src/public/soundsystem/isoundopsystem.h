// Reconstructed from DWARF by pahole; not original source.

// src/public/soundsystem/isoundopsystem.h:67
class CSosPackedFieldData {
	struct Entry_t {
		HSOSOPFIELDHASH hFieldHash;  // +0x0
		uint16 nOffset;  // +0x4
		uint16 nBytes;  // +0x6

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	unsigned char m_fixedData[32];  // +0x20

	CSosPackedFieldData();
	void AddOrReplace(HSOSOPFIELDHASH, const CSosFieldData &, short int);
	void CopyReadOnlyData(const void *, int);
	void SetExternalReadOnlyData(const void *, int);
	void Clear();
	void StartGet();
	bool GetEntry(HSOSOPFIELDHASH *, SOFieldDataType_t *, const void * *, uint *, short int *);
	bool IsEmpty();
	bool IsReadOnly();
	const void * GetDataBase();
	int GetDataBytes();
	~CSosPackedFieldData();

	// sizeof = 144
};

// src/public/soundsystem/isoundopsystem.h:67
class CSosPackedFieldData {
	struct Entry_t {
		HSOSOPFIELDHASH hFieldHash;  // +0x0
		uint16 nOffset;  // +0x4
		uint16 nBytes;  // +0x6

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	unsigned char m_fixedData[32];  // +0x20

	CSosPackedFieldData();
	void AddOrReplace(HSOSOPFIELDHASH, const CSosFieldData &, short int);
	void CopyReadOnlyData(const void *, int);
	void SetExternalReadOnlyData(const void *, int);
	void Clear();
	void StartGet();
	bool GetEntry(HSOSOPFIELDHASH *, SOFieldDataType_t *, const void * *, uint *, short int *);
	bool IsEmpty();
	bool IsReadOnly();
	const void * GetDataBase();
	int GetDataBytes();

	// sizeof = 144
};

// src/public/soundsystem/isoundopsystem.h:235
struct SndOpEventGuid_t {
	HSOSLIBSTACKHASH m_hStackHash;  // +0x4
	SndOpEventGuid_t();
	void InValidate();
	bool IsValid();
	int ToIndex();
	SndOpEventGuid_t FromIndex(int);

	// sizeof = 8
};

// src/public/soundsystem/isoundopsystem.h:345
class CSosEventInfo_t {
	int ()() * * _vptr.CSosEventInfo_t;  // +0x0
	CSosEventInfo_t(const CSosEventInfo_t &);
	CSosEventInfo_t();
	virtual ~CSosEventInfo_t();

	// sizeof = 16
};

// src/public/soundsystem/isoundopsystem.h:353
class CSosEventInfoWithFieldData_t : public CSosEventInfo_t {
public:

	CSosEventInfoWithFieldData_t(CSosEventInfoWithFieldData_t &);
	CSosEventInfoWithFieldData_t(const CSosEventInfoWithFieldData_t &);
	CSosEventInfoWithFieldData_t();
	virtual ~CSosEventInfoWithFieldData_t();

	// sizeof = 160
};

// src/public/soundsystem/isoundopsystem.h:361
class CSosStartSoundEventInfo_t : public CSosEventInfoWithFieldData_t {
public:

	HSOUNDEVENTHASH m_SoundEventHash;  // +0xa4
	SOSRANDSEED m_nSeed;  // +0xac

	int m_nParentOpIndex;  // +0xb4

	double m_flDelay;  // +0xc0
	CSosStartSoundEventInfo_t(CSosStartSoundEventInfo_t &);
	CSosStartSoundEventInfo_t(const CSosStartSoundEventInfo_t &);
	CSosStartSoundEventInfo_t();
	virtual ~CSosStartSoundEventInfo_t();

	// sizeof = 200
};

// src/public/soundsystem/isoundopsystem.h:388
class CSosStartSoundEventQueueInfo_t : public CSosStartSoundEventInfo_t {
public:

	char m_sourceClassName[64];  // +0xc8
	CSosStartSoundEventQueueInfo_t();
	virtual ~CSosStartSoundEventQueueInfo_t();

	// sizeof = 264
};

// src/public/soundsystem/isoundopsystem.h:401
class CSosStopSoundEventInfo_t : public CSosEventInfo_t {
public:

	CSosStopSoundEventInfo_t();
	virtual ~CSosStopSoundEventInfo_t();

	// sizeof = 16
};

// src/public/soundsystem/isoundopsystem.h:415
class CSosStopSoundEventHashInfo_t : public CSosEventInfo_t {
public:

	HSOUNDEVENTHASH m_SoundEventHash;  // +0xc
	CSosStopSoundEventHashInfo_t();
	virtual ~CSosStopSoundEventHashInfo_t();

	// sizeof = 24
};

// src/public/soundsystem/isoundopsystem.h:430
class CSosSetSoundEventFieldsInfo_t : public CSosEventInfoWithFieldData_t {
public:

	CSosSetSoundEventFieldsInfo_t(CSosSetSoundEventFieldsInfo_t &);
	CSosSetSoundEventFieldsInfo_t(const CSosSetSoundEventFieldsInfo_t &);
	CSosSetSoundEventFieldsInfo_t();
	virtual ~CSosSetSoundEventFieldsInfo_t();

	// sizeof = 168
};

// src/public/soundsystem/isoundopsystem.h:444
class CSosSetLibraryStackFieldsInfo_t : public CSosEventInfoWithFieldData_t {
public:

	HSOSLIBSTACKHASH m_libStackHash;  // +0xa0
	CSosSetLibraryStackFieldsInfo_t(CSosSetLibraryStackFieldsInfo_t &);
	CSosSetLibraryStackFieldsInfo_t(const CSosSetLibraryStackFieldsInfo_t &);
	CSosSetLibraryStackFieldsInfo_t();
	virtual ~CSosSetLibraryStackFieldsInfo_t();

	// sizeof = 168
};

// src/public/soundsystem/isoundopsystem.h:872
class CSosFieldDataInt : public CSosFieldData {
public:

	CSosFieldDataInt();
	CSosFieldDataInt(int);
	int GetValue();

private:

	void Init();
	~CSosFieldDataInt();

	// sizeof = 24
};

// src/public/soundsystem/isoundopsystem.h:922
class CSosFieldDataFloat : public CSosFieldData {
public:

	CSosFieldDataFloat();
	CSosFieldDataFloat(float);
	float GetValue();

private:

	void Init();
	~CSosFieldDataFloat();

	// sizeof = 24
};

// src/public/soundsystem/isoundopsystem.h:972
class CSosFieldDataFloat3 : public CSosFieldData {
public:

	CSosFieldDataFloat3();
	void SetValue(float, float, float);
	CSosFieldDataFloat3(float, float, float);
	CSosFieldDataFloat3(const Vector &);

private:

	void Init();
	~CSosFieldDataFloat3();

	// sizeof = 24
};

// src/public/soundsystem/isoundopsystem.h:1183
class CSosFieldDataString : public CSosFieldData {
public:

	CSosFieldDataString();
	CSosFieldDataString(const char *);
	CSosFieldDataString(SosStringHandle_t);
	SosStringHandle_t GetValue();

private:

	void Init();
	~CSosFieldDataString();

	// sizeof = 24
};
