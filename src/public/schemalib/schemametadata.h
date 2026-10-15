// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemametadata.h:12
class CSchemaMetadataEntry : SchemaMetadataEntryData_t {
private:

	const char * GetName();
	CSchemaType * GetType();
	void * GetData();
	void SetDynamic(const char *, CSchemaType *, void *);

	// sizeof = 32
};

// src/public/schemalib/schemametadata.h:26
class CSchemaMetadataSet : SchemaMetadataSetData_t {
private:

	bool IsPresent(const char *);
	void * GetPtr(const char *);
	int GetTagInstanceCount(const char *);
	void AddDynamicEntry(const char *, CSchemaType *, void *);
	int GetStaticEntryCount();
	const CSchemaMetadataEntry * GetStaticEntryByIndex(int);
	int GetDynamicEntryCount();
	const CSchemaMetadataEntry * GetDynamicEntryByIndex(int);
	bool RemoveAllDynamicTagsWithName(const char *);
	void RemoveAllDynamicTags();

	// sizeof = 32
};
