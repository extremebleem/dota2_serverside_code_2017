// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entitysystemmeta.h:8
class MKeyfieldname {
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
	const char * * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	const char * GetValue(ClassIntrospectionHandle_t, const char *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, const char * *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	const char * * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(FieldIntrospectionHandle_t, const char *);
	bool TestAndGetValue(FieldIntrospectionHandle_t, const char * *);
	const char * * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(StaticFieldIntrospectionHandle_t, const char *);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, const char * *);
	const char * * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(EnumIntrospectionHandle_t, const char *);
	bool TestAndGetValue(EnumIntrospectionHandle_t, const char * *);
	const char * * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(EnumeratorIntrospectionHandle_t, const char *);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, const char * *);
	const char * * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(AtomicTypeIntrospectionHandle_t, const char *);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, const char * *);
	const char * * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(MetadataIntrospectionHandle_t, const char *);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, const char * *);
	const char * * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(FieldIteratorHandle_t, const char *);
	bool TestAndGetValue(FieldIteratorHandle_t, const char * *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, const char *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, const char *);
	int MetaFlags();

	// sizeof = 1
};

// src/public/entity2/entitysystemmeta.h:9
class MHasSubKeyfields {
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
	int MetaFlags();

	// sizeof = 1
};

// src/public/entity2/entitysystemmeta.h:10
class MGenerateArrayKeynames {
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
	int MetaFlags();

	// sizeof = 1
};

// src/public/entity2/entitysystemmeta.h:11
class MGenerateArrayKeynamesFirstIndex {
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
	int * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	int GetValue(ClassIntrospectionHandle_t, int, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, int *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	int * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> > &);
	int GetValue(FieldIntrospectionHandle_t, int);
	bool TestAndGetValue(FieldIntrospectionHandle_t, int *);
	int * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> > &);
	int GetValue(StaticFieldIntrospectionHandle_t, int);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, int *);
	int * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> > &);
	int GetValue(EnumIntrospectionHandle_t, int);
	bool TestAndGetValue(EnumIntrospectionHandle_t, int *);
	int * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> > &);
	int GetValue(EnumeratorIntrospectionHandle_t, int);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, int *);
	int * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> > &);
	int GetValue(AtomicTypeIntrospectionHandle_t, int);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, int *);
	int * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> > &);
	int GetValue(MetadataIntrospectionHandle_t, int);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, int *);
	int * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<int*, CUtlMemory<int*, int> > &);
	int GetValue(FieldIteratorHandle_t, int);
	bool TestAndGetValue(FieldIteratorHandle_t, int *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, int, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, int);
	int MetaFlags();

	// sizeof = 1
};

// src/public/entity2/entitysystemmeta.h:12
class MGenerateArrayKeynamesList {
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
	const char * * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	const char * GetValue(ClassIntrospectionHandle_t, const char *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, const char * *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	const char * * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(FieldIntrospectionHandle_t, const char *);
	bool TestAndGetValue(FieldIntrospectionHandle_t, const char * *);
	const char * * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(StaticFieldIntrospectionHandle_t, const char *);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, const char * *);
	const char * * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(EnumIntrospectionHandle_t, const char *);
	bool TestAndGetValue(EnumIntrospectionHandle_t, const char * *);
	const char * * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(EnumeratorIntrospectionHandle_t, const char *);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, const char * *);
	const char * * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(AtomicTypeIntrospectionHandle_t, const char *);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, const char * *);
	const char * * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(MetadataIntrospectionHandle_t, const char *);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, const char * *);
	const char * * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> > &);
	const char * GetValue(FieldIteratorHandle_t, const char *);
	bool TestAndGetValue(FieldIteratorHandle_t, const char * *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, const char *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, const char *);
	int MetaFlags();

	// sizeof = 1
};
