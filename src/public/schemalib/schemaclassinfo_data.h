// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemaclassinfo_data.h:17
struct SchemaClassFieldData_t {
private:

	int32 m_nSingleInheritanceOffset;  // +0x18

	void DeallocateDynamic();

	// sizeof = 64
};

// src/public/schemalib/schemaclassinfo_data.h:48
struct SchemaStaticFieldData_t {
private:

	void * m_pInstance;  // +0x18

	void DeallocateDynamic();

	// sizeof = 64
};

// src/public/schemalib/schemaclassinfo_data.h:78
struct SchemaBaseClassInfoData_t {
private:

	uint32 m_nOffset;  // +0x0

	const CSchemaClassInfo * m_pClass;  // +0x8

	void DeallocateDynamic();

	// sizeof = 16
};

// src/public/schemalib/schemaclassinfo_data.h:102
struct SchemaMetaModifyAdd_t {
private:

	const CSchemaType * m_pTagDataType;  // +0x10
	void * m_pTagValue;  // +0x18

	void DeallocateDynamic();

	// sizeof = 32
};

// src/public/schemalib/schemaclassinfo_data.h:122
struct SchemaFieldMetadataOverrideData_t {
private:

	bool m_bRemoveAll;  // +0x10

	void DeallocateDynamic();

	// sizeof = 56
};

// src/public/schemalib/schemaclassinfo_data.h:164
struct SchemaClassInfoData_t {
private:

	const char * m_pNote;  // +0x10
	int32 m_nSizeOf;  // +0x18
	int32 m_nAlignOf;  // +0x1c
	const CSchemaClassBindingBase * m_pBinding;  // +0xb0
	int16 m_nMultipleInheritanceDepth;  // +0xb8
	int16 m_nSingleInheritanceDepth;  // +0xba
	uint16 m_nClassFlags;  // +0xbc
	bool m_bInitialized;  // +0xbe

	void DeallocateDynamic();

	// sizeof = 192
};
