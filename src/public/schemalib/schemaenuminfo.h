// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemaenuminfo.h:21
class CSchemaEnumeratorInfo : protected SchemaEnumeratorInfoData_t {
protected:

private:

	const char * GetName();
	SchemaEnumeratorValue_t GetValue();
	MetadataIntrospectionHandle_t GetMetadata();
	const CSchemaMetadataSet & GetMetadataOld();

	// sizeof = 56
};

// src/public/schemalib/schemaenuminfo.h:35
class CSchemaEnumInfo : protected SchemaEnumInfoData_t {
protected:

private:

protected:

	CSchemaEnumInfo();
	~CSchemaEnumInfo();
	void Initialize();
	const char * GetName();
	uint32 GetSizeOf();
	uint32 GetAlignOf();
	const SchemaArray_t<CSchemaEnumeratorInfo> & GetEnumerators();
	int GetEnumeratorCount();
	EnumeratorIntrospectionHandle_t GetEnumerator(int);
	MetadataIntrospectionHandle_t GetMetadata();
	const CSchemaMetadataSet & GetMetadataOld();
	CSchemaType * GetTypeOf();
	SchemaEnumeratorValue_t GetMinValue();
	SchemaEnumeratorValue_t GetMaxValue();
	const CSchemaEnumBindingBase * GetBinding();
	void SetTypeScope(SchemaTypeScope_t, ISchemaSystemTypeScope *);
	ISchemaSystemTypeScope * GetTypeScope();
	bool AssignValueToInstance(void *, SchemaEnumeratorValue_t);
	const CSchemaEnumeratorInfo * FindMemberByName(const char *);
	const CSchemaEnumeratorInfo * FindMemberByValue(SchemaEnumeratorValue_t);

	// sizeof = 128
};
