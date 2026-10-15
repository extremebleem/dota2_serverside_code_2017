// Reconstructed from DWARF by pahole; not original source.

// src/public/schemasystem/propertyeditormetadata.h:26
class MPropertyFriendlyName {
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

// src/public/schemasystem/propertyeditormetadata.h:32
class MPropertyHideField {
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

// src/public/schemasystem/propertyeditormetadata.h:38
class MPropertySuppressField {
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

// src/public/schemasystem/propertyeditormetadata.h:48
class MPropertyGroupName {
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

// src/public/schemasystem/propertyeditormetadata.h:59
class MPropertyAttributeEditor {
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

// src/public/schemasystem/propertyeditormetadata.h:68
class MPropertyAttributeRange {
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

// src/public/schemasystem/propertyeditormetadata.h:75
class MPropertyChoiceProviderFn {
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
	ChoiceProviderFn_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString, int, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	ChoiceProviderFn_t GetValue(ClassIntrospectionHandle_t, ChoiceProviderFn_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, ChoiceProviderFn_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	ChoiceProviderFn_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString, int);
	ChoiceProviderFn_t GetValue(FieldIntrospectionHandle_t, ChoiceProviderFn_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, ChoiceProviderFn_t *);
	ChoiceProviderFn_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString, int);
	ChoiceProviderFn_t GetValue(StaticFieldIntrospectionHandle_t, ChoiceProviderFn_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, ChoiceProviderFn_t *);
	ChoiceProviderFn_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString, int);
	ChoiceProviderFn_t GetValue(EnumIntrospectionHandle_t, ChoiceProviderFn_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, ChoiceProviderFn_t *);
	ChoiceProviderFn_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString, int);
	ChoiceProviderFn_t GetValue(EnumeratorIntrospectionHandle_t, ChoiceProviderFn_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, ChoiceProviderFn_t *);
	ChoiceProviderFn_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString, int);
	ChoiceProviderFn_t GetValue(AtomicTypeIntrospectionHandle_t, ChoiceProviderFn_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, ChoiceProviderFn_t *);
	ChoiceProviderFn_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString, int);
	ChoiceProviderFn_t GetValue(MetadataIntrospectionHandle_t, ChoiceProviderFn_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, ChoiceProviderFn_t *);
	ChoiceProviderFn_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString, int);
	ChoiceProviderFn_t GetValue(FieldIteratorHandle_t, ChoiceProviderFn_t);
	bool TestAndGetValue(FieldIteratorHandle_t, ChoiceProviderFn_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, ChoiceProviderFn_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, ChoiceProviderFn_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/schemasystem/propertyeditormetadata.h:81
class MPropertyAutoExpandGroup {
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

// src/public/schemasystem/propertyeditormetadata.h:87
class MPropertyAttributeChoiceName {
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

// src/public/schemasystem/propertyeditormetadata.h:90
class MPropertyAttributeSuggestionName {
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

// src/public/schemasystem/propertyeditormetadata.h:96
class MPropertyAttributeChoiceEnumName {
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

// src/public/schemasystem/propertyeditormetadata.h:103
class MPropertyElementNameFn {
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
	PropertyElementNameFn_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	PropertyElementNameFn_t GetValue(ClassIntrospectionHandle_t, PropertyElementNameFn_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, PropertyElementNameFn_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	PropertyElementNameFn_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	PropertyElementNameFn_t GetValue(FieldIntrospectionHandle_t, PropertyElementNameFn_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, PropertyElementNameFn_t *);
	PropertyElementNameFn_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	PropertyElementNameFn_t GetValue(StaticFieldIntrospectionHandle_t, PropertyElementNameFn_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, PropertyElementNameFn_t *);
	PropertyElementNameFn_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	PropertyElementNameFn_t GetValue(EnumIntrospectionHandle_t, PropertyElementNameFn_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, PropertyElementNameFn_t *);
	PropertyElementNameFn_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	PropertyElementNameFn_t GetValue(EnumeratorIntrospectionHandle_t, PropertyElementNameFn_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, PropertyElementNameFn_t *);
	PropertyElementNameFn_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	PropertyElementNameFn_t GetValue(AtomicTypeIntrospectionHandle_t, PropertyElementNameFn_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, PropertyElementNameFn_t *);
	PropertyElementNameFn_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	PropertyElementNameFn_t GetValue(MetadataIntrospectionHandle_t, PropertyElementNameFn_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, PropertyElementNameFn_t *);
	PropertyElementNameFn_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	PropertyElementNameFn_t GetValue(FieldIteratorHandle_t, PropertyElementNameFn_t);
	bool TestAndGetValue(FieldIteratorHandle_t, PropertyElementNameFn_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, PropertyElementNameFn_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, PropertyElementNameFn_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/schemasystem/propertyeditormetadata.h:117
class MPropertyColorWithNoAlpha {
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

// src/public/schemasystem/propertyeditormetadata.h:122
class MPropertyIconName {
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

// src/public/schemasystem/propertyeditormetadata.h:127
class MPropertySortPriority {
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

// src/public/schemasystem/propertyeditormetadata.h:133
struct PropertyClassAsStringFuncs_t {
	typedef void (*GetterFn_t)(IPropertyEditDomain *, const void *, CUtlString *);

	GetterFn_t m_pGetAsString;  // +0x0
	typedef void (*SetterFn_t)(IPropertyEditDomain *, void *, const char *);

	SetterFn_t m_pSetAsString;  // +0x8
	PropertyClassAsStringFuncs_t();
	PropertyClassAsStringFuncs_t(GetterFn_t, SetterFn_t);
	bool operator==(const PropertyClassAsStringFuncs_t &);

	// sizeof = 16
};

// src/public/schemasystem/propertyeditormetadata.h:153
class MPropertyEditClassAsString {
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
	PropertyClassAsStringFuncs_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	PropertyClassAsStringFuncs_t GetValue(ClassIntrospectionHandle_t, PropertyClassAsStringFuncs_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, PropertyClassAsStringFuncs_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	PropertyClassAsStringFuncs_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> > &);
	PropertyClassAsStringFuncs_t GetValue(FieldIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, PropertyClassAsStringFuncs_t *);
	PropertyClassAsStringFuncs_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> > &);
	PropertyClassAsStringFuncs_t GetValue(StaticFieldIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, PropertyClassAsStringFuncs_t *);
	PropertyClassAsStringFuncs_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> > &);
	PropertyClassAsStringFuncs_t GetValue(EnumIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, PropertyClassAsStringFuncs_t *);
	PropertyClassAsStringFuncs_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> > &);
	PropertyClassAsStringFuncs_t GetValue(EnumeratorIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, PropertyClassAsStringFuncs_t *);
	PropertyClassAsStringFuncs_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> > &);
	PropertyClassAsStringFuncs_t GetValue(AtomicTypeIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, PropertyClassAsStringFuncs_t *);
	PropertyClassAsStringFuncs_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> > &);
	PropertyClassAsStringFuncs_t GetValue(MetadataIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, PropertyClassAsStringFuncs_t *);
	PropertyClassAsStringFuncs_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> > &);
	PropertyClassAsStringFuncs_t GetValue(FieldIteratorHandle_t, PropertyClassAsStringFuncs_t);
	bool TestAndGetValue(FieldIteratorHandle_t, PropertyClassAsStringFuncs_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, PropertyClassAsStringFuncs_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, PropertyClassAsStringFuncs_t);
	int MetaFlags();

	// sizeof = 1
};
