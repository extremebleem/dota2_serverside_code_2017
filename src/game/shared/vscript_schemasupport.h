// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/vscript_schemasupport.h:72
struct MetaExposeToScript_t {
	const char * m_szGetName;  // +0x0
	const char * m_szSetName;  // +0x8
	MetaExposeToScript_t();
	MetaExposeToScript_t(const char *, const char *);
	bool operator==(const MetaExposeToScript_t &);

	// sizeof = 16
};

// src/game/shared/vscript_schemasupport.h:81
class MExposeToScript {
	const char * TagName();
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool IsPresent(FieldIntrospectionHandle_t);
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	bool IsPresent(EnumIntrospectionHandle_t);
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	bool IsPresent(MetadataIntrospectionHandle_t);
	bool IsPresent(FieldIteratorHandle_t);
	void FindBindingsWithTag(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsWithTag(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *);
	MetaExposeToScript_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<MetaExposeToScript_t*, CUtlMemory<MetaExposeToScript_t*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	MetaExposeToScript_t GetValue(ClassIntrospectionHandle_t, MetaExposeToScript_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, MetaExposeToScript_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	MetaExposeToScript_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<MetaExposeToScript_t*, CUtlMemory<MetaExposeToScript_t*, int> > &);
	MetaExposeToScript_t GetValue(FieldIntrospectionHandle_t, MetaExposeToScript_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, MetaExposeToScript_t *);
	MetaExposeToScript_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<MetaExposeToScript_t*, CUtlMemory<MetaExposeToScript_t*, int> > &);
	MetaExposeToScript_t GetValue(StaticFieldIntrospectionHandle_t, MetaExposeToScript_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, MetaExposeToScript_t *);
	MetaExposeToScript_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<MetaExposeToScript_t*, CUtlMemory<MetaExposeToScript_t*, int> > &);
	MetaExposeToScript_t GetValue(EnumIntrospectionHandle_t, MetaExposeToScript_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, MetaExposeToScript_t *);
	MetaExposeToScript_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<MetaExposeToScript_t*, CUtlMemory<MetaExposeToScript_t*, int> > &);
	MetaExposeToScript_t GetValue(EnumeratorIntrospectionHandle_t, MetaExposeToScript_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, MetaExposeToScript_t *);
	MetaExposeToScript_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<MetaExposeToScript_t*, CUtlMemory<MetaExposeToScript_t*, int> > &);
	MetaExposeToScript_t GetValue(AtomicTypeIntrospectionHandle_t, MetaExposeToScript_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, MetaExposeToScript_t *);
	MetaExposeToScript_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<MetaExposeToScript_t*, CUtlMemory<MetaExposeToScript_t*, int> > &);
	MetaExposeToScript_t GetValue(MetadataIntrospectionHandle_t, MetaExposeToScript_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, MetaExposeToScript_t *);
	MetaExposeToScript_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<MetaExposeToScript_t*, CUtlMemory<MetaExposeToScript_t*, int> > &);
	MetaExposeToScript_t GetValue(FieldIteratorHandle_t, MetaExposeToScript_t);
	bool TestAndGetValue(FieldIteratorHandle_t, MetaExposeToScript_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, MetaExposeToScript_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, MetaExposeToScript_t);
	int MetaFlags();

	// sizeof = 1
};
