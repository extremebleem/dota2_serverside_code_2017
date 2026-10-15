// Reconstructed from DWARF by pahole; not original source.

// src/game/public/schemasystem/resourceintrospection.h:51
class CResourceDiskStructField {
private:

	int16 m_nCount;  // +0x4
	int16 m_nOnDiskOffset;  // +0x6
	uint32 m_nTypeData;  // +0x10
	int16 m_nType;  // +0x14
	CResourceDiskStructField();

	SchemaFieldType_t GetType();
	uint32 GetTypeData();
	SchemaIndirectionType_t ReadIndirection(int);
	void SetFieldInfo(CResourceStream *, const char *, int, int);
	void SetFieldInfo(CResourceStream *, const CResourceDiskStructField *);
	void SetFieldInfoFromSchema(CResourceStream *, const SchemaClassInfo_t *, OldFieldIntrospectionHandle_t);
	void SetFieldType(CResourceStream *, SchemaFieldType_t, const CUtlVector<SchemaIndirectionType_t, CUtlMemory<SchemaIndirectionType_t, int> > &, uint32);
	int GetElementDiskSize(int, const CResourceIntrospectionManifest *);
	int16 GetDiskOffset();
	void ReadDataAsString(const void *, char *, int);
	void ReadDataToKeyValues(const void *, const char *, KeyValues *);

	// sizeof = 24
};

// src/game/public/schemasystem/resourceintrospection.h:89
class CResourceDiskStruct {
private:

	uint32 m_nIntrospectionVersion;  // +0x0
	ResourceStructureId_t m_nId;  // +0x4
	uint32 m_nDiskCrc;  // +0xc
	int32 m_nUserVersion;  // +0x10
	uint16 m_nDiskSize;  // +0x14
	uint16 m_nAlignment;  // +0x16
	uint32 m_nBaseStructId;  // +0x18
	uint8 m_nStructFlags;  // +0x24
	CResourceDiskStruct();

	int GetFieldCount();
	const CResourceDiskStructField * GetField(int);
	bool HasVTable();
	bool TreeRequiresScatter();
	bool TreeRequiresConstructor();
	bool TreeRequiresDestructor();
	int GetHumanReadableDesc(char *, int);
	void SetStructInfo(CResourceStream *, const char *, const char *, int32, uint32, uint32, uint8);
	void SetStructInfo(CResourceStream *, const CResourceDiskStruct *);
	void SetStructInfoFromSchema(CResourceStream *, const SchemaClassInfo_t *);
	void ComputeDiskCRC();
	void AllocateFields(CResourceStream *, int);
	CResourceDiskStructField * GetWritableField(int);

	// sizeof = 40
};

// src/game/public/schemasystem/resourceintrospection.h:138
class CResourceDiskEnumValue {
private:

	int32 m_nEnumValue;  // +0x4
	CResourceDiskEnumValue();

	const char * GetName();
	int GetValue();
	void SetEnumValueInfo(CResourceStream *, const char *, int32);
	void SetEnumValueInfoFromSchema(CResourceStream *, const SchemaEnumInfo_t *, const SchemaEnumMember_t *);

	// sizeof = 8
};

// src/game/public/schemasystem/resourceintrospection.h:157
class CResourceDiskEnum {
private:

	uint32 m_nIntrospectionVersion;  // +0x0
	ResourceStructureId_t m_nId;  // +0x4
	uint32 m_nDiskCrc;  // +0xc
	int32 m_nUserVersion;  // +0x10
	CResourceDiskEnum();

	int GetEnumValueCount();
	const CResourceDiskEnumValue * GetEnumValue(int);
	CResourceDiskEnumValue * GetWritableEnumValue(int);
	const CResourceDiskEnumValue * FindEnumValue(const char *);
	const char * FindEnumString(int);
	void SetEnumInfo(CResourceStream *, const char *, int32, int);
	void SetEnumInfoFromSchema(CResourceStream *, const SchemaEnumInfo_t *);
	void ComputeDiskCRC();

	// sizeof = 28
};

// src/game/public/schemasystem/resourceintrospection.h:231
class CResourceIntrospectionManifest {
private:

	uint32 m_nIntrospectionVersion;  // +0x0
	CResourceIntrospectionManifest();

	int GetStructCount();
	int GetEnumCount();
	uint32 GetVersion();
	IntrospectionCompatibilityType_t CalculateCompatibility();
	const CResourceDiskStruct * GetStruct(int);
	const CResourceDiskEnum * GetEnum(int);
	CResourceDiskStruct * GetWritableStruct(int);
	CResourceDiskEnum * GetWritableEnum(int);

	// sizeof = 20
};
