// Reconstructed from DWARF by pahole; not original source.

// src/public/schemasystem/schematypes.h:143
class SchemaDataTypeInfo_t {
private:

	const char * m_pCompositeName;  // +0x8
	const ISchemaBinding * m_pComposite;  // +0x10
	int64 m_nTypeParameterData;  // +0x18
	int32 m_nOpaqueTypeUserVersion;  // +0x20
	SchemaDataTypeInfo_t();
	SchemaDataTypeInfo_t(SchemaFieldType_t, const char *, uint64);
	SchemaDataTypeInfo_t(const char *, int32, int);
	const char * GetCompositeName();
	const ISchemaBinding * CompositeType();
	uint64 RefResourceType();
	int32 OpaqueTypeId();
	int32 OpaqueUserVersion();

	// sizeof = 40
};
