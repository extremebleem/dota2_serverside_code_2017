// Reconstructed from DWARF by pahole; not original source.

// src/game/include/gamecore/gameschema.h:21
class MRenderAttr {
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

// src/game/include/gamecore/gameschema.h:22
class MRenderAttrCount {
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

// src/game/include/gamecore/gameschema.h:23
class MRenderAttrOffset {
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

// src/game/include/gamecore/gameschema.h:29
struct RenderAttrUpdater_t {
	const char * pName;  // +0x0
	RenderAttrUpdaterFuncPtr_t pFunc;  // +0x8
	RenderAttrUpdater_t();
	RenderAttrUpdater_t(const char *, RenderAttrUpdaterFuncPtr_t);
	bool operator==(const RenderAttrUpdater_t &);

	// sizeof = 16
};

// src/game/include/gamecore/gameschema.h:45
class MRenderAttrUpdater {
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
	RenderAttrUpdater_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<RenderAttrUpdater_t*, CUtlMemory<RenderAttrUpdater_t*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	RenderAttrUpdater_t GetValue(ClassIntrospectionHandle_t, RenderAttrUpdater_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, RenderAttrUpdater_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	RenderAttrUpdater_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<RenderAttrUpdater_t*, CUtlMemory<RenderAttrUpdater_t*, int> > &);
	RenderAttrUpdater_t GetValue(FieldIntrospectionHandle_t, RenderAttrUpdater_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, RenderAttrUpdater_t *);
	RenderAttrUpdater_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<RenderAttrUpdater_t*, CUtlMemory<RenderAttrUpdater_t*, int> > &);
	RenderAttrUpdater_t GetValue(StaticFieldIntrospectionHandle_t, RenderAttrUpdater_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, RenderAttrUpdater_t *);
	RenderAttrUpdater_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<RenderAttrUpdater_t*, CUtlMemory<RenderAttrUpdater_t*, int> > &);
	RenderAttrUpdater_t GetValue(EnumIntrospectionHandle_t, RenderAttrUpdater_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, RenderAttrUpdater_t *);
	RenderAttrUpdater_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<RenderAttrUpdater_t*, CUtlMemory<RenderAttrUpdater_t*, int> > &);
	RenderAttrUpdater_t GetValue(EnumeratorIntrospectionHandle_t, RenderAttrUpdater_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, RenderAttrUpdater_t *);
	RenderAttrUpdater_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<RenderAttrUpdater_t*, CUtlMemory<RenderAttrUpdater_t*, int> > &);
	RenderAttrUpdater_t GetValue(AtomicTypeIntrospectionHandle_t, RenderAttrUpdater_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, RenderAttrUpdater_t *);
	RenderAttrUpdater_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<RenderAttrUpdater_t*, CUtlMemory<RenderAttrUpdater_t*, int> > &);
	RenderAttrUpdater_t GetValue(MetadataIntrospectionHandle_t, RenderAttrUpdater_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, RenderAttrUpdater_t *);
	RenderAttrUpdater_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<RenderAttrUpdater_t*, CUtlMemory<RenderAttrUpdater_t*, int> > &);
	RenderAttrUpdater_t GetValue(FieldIteratorHandle_t, RenderAttrUpdater_t);
	bool TestAndGetValue(FieldIteratorHandle_t, RenderAttrUpdater_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, RenderAttrUpdater_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, RenderAttrUpdater_t);
	int MetaFlags();

	// sizeof = 1
};
