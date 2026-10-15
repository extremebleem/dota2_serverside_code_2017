// Reconstructed from DWARF by pahole; not original source.

// src/public/kv3lib/keyvalues3.h:65
class CKeyValues3StringAndHash {
	const KeyValues3LowercaseHash_t m_Hash;  // +0x0

	const const char * m_pString;  // +0x8

	// sizeof = 16
};

// src/public/kv3lib/keyvalues3.h:134
class CKeyValues3Iterator {
	struct StackEntry_t {
		int m_nIndex;  // +0x8

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CKeyValues3Iterator();
	CKeyValues3Iterator(KeyValues3 *);
	void Init(KeyValues3 *);
	bool IsValid();
	void Advance();
	KeyValues3 * Get();

	// sizeof = 88
};

// src/public/kv3lib/keyvalues3.h:158
class KeyValues3 {
	union {
		const char * m_pAsCharPtr;  // +0x0
		int64 m_nAsInt64;  // +0x0
		double m_flAsDouble;  // +0x0
		uint64 m_nAsUint64;  // +0x0
		bool m_bAsBool;  // +0x0
		char m_AsShortString[8];  // +0x0
	};

private:

	uint64 m_bContextIndependent:1;  // +0x0:0
	uint64 m_InternalType:4;  // +0x0:1
	uint64 m_Flags:16;  // +0x0:5

	union {
		const char * m_pAsCharPtr;  // +0x8
		int64 m_nAsInt64;  // +0x8
		double m_flAsDouble;  // +0x8
		uint64 m_nAsUint64;  // +0x8
		bool m_bAsBool;  // +0x8
		char m_AsShortString[8];  // +0x8
	};
	KeyValues3();
	KeyValues3(const KeyValues3 &);
	~KeyValues3();
	KeyValues3 & operator=(const KeyValues3 &);
	KeyValues3Type_t GetType();
	void MoveFrom(KeyValues3 *);
	void CopyFrom(const KeyValues3 *);
	void CopyMatchingKeysFrom(const KeyValues3 *);
	bool IsIdenticalTo(const KeyValues3 *, bool);
	void EnsureTypeIs(KeyValues3Type_t);
	void EnsureIsArray(int, KeyValues3Type_t);
	void EnsureIsAnyArray(int);
	bool GetBool();
	int GetInt();
	int64 GetInt64();
	uint64 GetUint64();
	float GetFloat();
	double GetDouble();
	void GetString(char *, int);
	void GetString(CUtlString *);
	bool IsNull();
	void SetBool(bool);
	void SetString(const char *);
	void SetInt(int);
	void SetInt64(int64);
	void SetUint64(uint64);
	void SetFloat(double);
	void SetDouble(double);
	void SetToNull();
	void ParseValueFromString(const char *);
	bool EqualsValueFromString(const char *);
	void SetIntFromString(const char *);
	const char * GetStringRaw(const char *);
	CKeyValues3Table * GetTableRaw();
	const CKeyValues3Table * GetTableRaw();
	void SetToEmptyTable();
	int GetMemberInt(const char *, int, KeyValues3LowercaseHash_t);
	int64 GetMemberInt64(const char *, int64, KeyValues3LowercaseHash_t);
	uint64 GetMemberUint64(const char *, uint64, KeyValues3LowercaseHash_t);
	float GetMemberFloat(const char *, float, KeyValues3LowercaseHash_t);
	double GetMemberDouble(const char *, double, KeyValues3LowercaseHash_t);
	void GetMemberString(const char *, char *, int, const char *, KeyValues3LowercaseHash_t);
	void GetMemberString(const char *, CUtlString *, const char *, KeyValues3LowercaseHash_t);
	const char * GetMemberStringRaw(const char *, const char *, KeyValues3LowercaseHash_t);
	bool GetMemberBool(const char *, bool, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberString(const char *, const char *, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberInt(const char *, int, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberInt64(const char *, int64, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberUint64(const char *, uint64, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberFloat(const char *, float, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberDouble(const char *, double, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberToNull(const char *, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberBool(const char *, bool, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberToEmptyTable(const char *, KeyValues3LowercaseHash_t);
	void SetMemberToCopyOfValue(const char *, KeyValues3 *);
	KeyValues3 * FindMember(const char *, KeyValues3LowercaseHash_t);
	const KeyValues3 * FindMember(const char *, KeyValues3LowercaseHash_t);
	KeyValues3 * FindOrCreateMember(const char *, KeyValues3LowercaseHash_t);
	int GetMemberCount();
	KeyValues3 * GetMember(int);
	const KeyValues3 * GetMember(int);
	const char * GetMemberName(int);
	void GetMemberNameEscaped(int, CUtlString *);
	bool RemoveMember(int);
	bool RemoveMember(const char *, KeyValues3LowercaseHash_t);
	bool RemoveMember(KeyValues3 *);
	const uint8 * GetBinaryBlobBase();
	int GetBinaryBlobSize();
	uint8 GetBinaryBlobByte(int);
	void SetToBinaryBlob(const uint8 *, int);
	void SetToZeroedBinaryBlob(int);
	void SetToEmptyArray();
	int GetArrayLength();
	int GetArrayElementCount();
	void SetArrayElementCount(int);
	const KeyValues3 * GetArrayElement(int);
	KeyValues3 * GetArrayElement(int);
	void ArraySwapItems(int, int);
	void ArrayInsertMultipleBefore(int, int);
	void ArrayRemoveMultiple(int, int);
	KeyValues3 * ArrayAddToTail();
	bool HasFlag(KeyValues3Flag_t);
	void SetFlag(KeyValues3Flag_t, bool);
	void SetAllFlags(KeyValues3Flag_t);
	bool HasAnyFlags();
	KeyValues3Flag_t GetAllFlags();
	CKeyValues3Context * GetParentContext();
	KeyValues3(CKeyValues3Context *);
	KeyValues3 * Internal_FindMember(KeyValues3LowercaseHash_t, const char *);
	const KeyValues3 * Internal_FindMember(KeyValues3LowercaseHash_t, const char *);
	void Internal_SetToShortString(const char *);
	void Internal_PrepareForInternalType(KeyValues3InternalType_t);
	void Internal_PrepareForType(KeyValues3Type_t);
	void Internal_ClearDataWithoutFreeing();
	void Internal_NewAllocation();
	void Internal_FreeAllocation();
	void Internal_SetArrayCount(int);
	const uint8 * Internal_BinaryBlobBase();
	int Internal_BinaryBlobSize();
	void Internal_AimAtExternalString(const char *);
	void Internal_AimAtExternalBinaryBlob(const uint8 *, int);
	KeyValues3 * Internal_FindOrCreateMemberAimedAtExternalName(const char *, KeyValues3LowercaseHash_t);

	// sizeof = 16
};

// src/public/kv3lib/keyvalues3.h:158
class KeyValues3 {
	union {
		const char * m_pAsCharPtr;  // +0x0
		int64 m_nAsInt64;  // +0x0
		double m_flAsDouble;  // +0x0
		uint64 m_nAsUint64;  // +0x0
		bool m_bAsBool;  // +0x0
		char m_AsShortString[8];  // +0x0
	};

private:

	uint64 m_bContextIndependent:1;  // +0x0:0
	uint64 m_InternalType:4;  // +0x0:1
	uint64 m_Flags:16;  // +0x0:5

	union {
		const char * m_pAsCharPtr;  // +0x8
		int64 m_nAsInt64;  // +0x8
		double m_flAsDouble;  // +0x8
		uint64 m_nAsUint64;  // +0x8
		bool m_bAsBool;  // +0x8
		char m_AsShortString[8];  // +0x8
	};
	KeyValues3();
	KeyValues3(const KeyValues3 &);
	~KeyValues3();
	KeyValues3 & operator=(const KeyValues3 &);
	KeyValues3Type_t GetType();
	void MoveFrom(KeyValues3 *);
	void CopyFrom(const KeyValues3 *);
	void CopyMatchingKeysFrom(const KeyValues3 *);
	bool IsIdenticalTo(const KeyValues3 *, bool);
	void EnsureTypeIs(KeyValues3Type_t);
	void EnsureIsArray(int, KeyValues3Type_t);
	void EnsureIsAnyArray(int);
	bool GetBool();
	int GetInt();
	int64 GetInt64();
	uint64 GetUint64();
	float GetFloat();
	double GetDouble();
	void GetString(char *, int);
	void GetString(CUtlString *);
	bool IsNull();
	void SetBool(bool);
	void SetString(const char *);
	void SetInt(int);
	void SetInt64(int64);
	void SetUint64(uint64);
	void SetFloat(double);
	void SetDouble(double);
	void SetToNull();
	void ParseValueFromString(const char *);
	bool EqualsValueFromString(const char *);
	void SetIntFromString(const char *);
	const char * GetStringRaw(const char *);
	CKeyValues3Table * GetTableRaw();
	const CKeyValues3Table * GetTableRaw();
	void SetToEmptyTable();
	int GetMemberInt(const char *, int, KeyValues3LowercaseHash_t);
	int64 GetMemberInt64(const char *, int64, KeyValues3LowercaseHash_t);
	uint64 GetMemberUint64(const char *, uint64, KeyValues3LowercaseHash_t);
	float GetMemberFloat(const char *, float, KeyValues3LowercaseHash_t);
	double GetMemberDouble(const char *, double, KeyValues3LowercaseHash_t);
	void GetMemberString(const char *, char *, int, const char *, KeyValues3LowercaseHash_t);
	void GetMemberString(const char *, CUtlString *, const char *, KeyValues3LowercaseHash_t);
	const char * GetMemberStringRaw(const char *, const char *, KeyValues3LowercaseHash_t);
	bool GetMemberBool(const char *, bool, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberString(const char *, const char *, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberInt(const char *, int, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberInt64(const char *, int64, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberUint64(const char *, uint64, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberFloat(const char *, float, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberDouble(const char *, double, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberToNull(const char *, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberBool(const char *, bool, KeyValues3LowercaseHash_t);
	KeyValues3 * SetMemberToEmptyTable(const char *, KeyValues3LowercaseHash_t);
	void SetMemberToCopyOfValue(const char *, KeyValues3 *);
	KeyValues3 * FindMember(const char *, KeyValues3LowercaseHash_t);
	const KeyValues3 * FindMember(const char *, KeyValues3LowercaseHash_t);
	KeyValues3 * FindOrCreateMember(const char *, KeyValues3LowercaseHash_t);
	int GetMemberCount();
	KeyValues3 * GetMember(int);
	const KeyValues3 * GetMember(int);
	const char * GetMemberName(int);
	void GetMemberNameEscaped(int, CUtlString *);
	bool RemoveMember(int);
	bool RemoveMember(const char *, KeyValues3LowercaseHash_t);
	bool RemoveMember(KeyValues3 *);
	const uint8 * GetBinaryBlobBase();
	int GetBinaryBlobSize();
	uint8 GetBinaryBlobByte(int);
	void SetToBinaryBlob(const uint8 *, int);
	void SetToZeroedBinaryBlob(int);
	void SetToEmptyArray();
	int GetArrayLength();
	int GetArrayElementCount();
	void SetArrayElementCount(int);
	const KeyValues3 * GetArrayElement(int);
	KeyValues3 * GetArrayElement(int);
	void ArraySwapItems(int, int);
	void ArrayInsertMultipleBefore(int, int);
	void ArrayRemoveMultiple(int, int);
	KeyValues3 * ArrayAddToTail();
	bool HasFlag(KeyValues3Flag_t);
	void SetFlag(KeyValues3Flag_t, bool);
	void SetAllFlags(KeyValues3Flag_t);
	bool HasAnyFlags();
	KeyValues3Flag_t GetAllFlags();
	CKeyValues3Context * GetParentContext();
	KeyValues3(CKeyValues3Context *);
	KeyValues3 * Internal_FindMember(KeyValues3LowercaseHash_t, const char *);
	const KeyValues3 * Internal_FindMember(KeyValues3LowercaseHash_t, const char *);
	void Internal_SetToShortString(const char *);
	void Internal_PrepareForInternalType(KeyValues3InternalType_t);
	void Internal_PrepareForType(KeyValues3Type_t);
	void Internal_ClearDataWithoutFreeing();
	void Internal_NewAllocation();
	void Internal_FreeAllocation();
	void Internal_SetArrayCount(int);
	const uint8 * Internal_BinaryBlobBase();
	int Internal_BinaryBlobSize();
	void Internal_AimAtExternalString(const char *);
	void Internal_AimAtExternalBinaryBlob(const uint8 *, int);
	KeyValues3 * Internal_FindOrCreateMemberAimedAtExternalName(const char *, KeyValues3LowercaseHash_t);
	int GetAsNumeric<int>();
	long long int GetAsNumeric<long long int>();
	long long unsigned int GetAsNumeric<long long unsigned int>();
	float GetAsNumeric<float>();
	double GetAsNumeric<double>();

	// sizeof = 16
};

// src/public/kv3lib/keyvalues3.h:415
class CKeyValues3Context : public CAlignedNewDeleteNoBase<1024> {
public:

private:

	unsigned char m_Impl[2048];  // +0x0
	CKeyValues3Context();
	~CKeyValues3Context();
	KeyValues3 * Root();
	const KeyValues3 * Root();
	KeyValues3 * operator->();
	const KeyValues3 * operator->();
	bool IsIdenticalTo(const CKeyValues3Context *, bool);
	void CopyFrom(const CKeyValues3Context *);
	const char * AllocSharedString(KeyValues3 *, const char *, KeyValues3LowercaseHash_t);
	void FreeSharedString(KeyValues3 *, const char *);
	const char * AllocString(KeyValues3 *, const char *);
	void FreeString(KeyValues3 *, const char *);
	KeyValues3 * AllocKV(KeyValues3 *);
	void FreeKV(KeyValues3 *, KeyValues3 *);
	KeyValues3 * AllocKV_Internal();
	void FreeKV_Internal(KeyValues3 *);
	KeyValues3Array_t * ReallocArray(KeyValues3 *, KeyValues3Array_t *, int);
	void FreeArray(KeyValues3 *, KeyValues3Array_t *);
	KeyValues3Array_t * ArrayInsertMultipleBefore(KeyValues3 *, KeyValues3Array_t *, int, int);
	KeyValues3Array_t * ArrayRemoveMultiple(KeyValues3 *, KeyValues3Array_t *, int, int);
	KeyValues3BinaryBlob_t * AllocZeroedBlob(KeyValues3 *, int);
	KeyValues3BinaryBlob_t * AllocBlob(KeyValues3 *, const uint8 *, int);
	KeyValues3BinaryBlobExternal_t * AllocBlobExternal(KeyValues3 *, const uint8 *, int);
	void FreeBlob(KeyValues3 *, KeyValues3BinaryBlob_t *);
	void FreeBlobExternal(KeyValues3 *, KeyValues3BinaryBlobExternal_t *);
	CKeyValues3Table * AllocTable(KeyValues3 *);
	void FreeTable(KeyValues3 *, CKeyValues3Table *);
	KeyValues3ContextImpl_t & Impl();

	// sizeof = 2048
};
