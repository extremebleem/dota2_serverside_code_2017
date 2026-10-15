// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemaclassinfo.h:24
class CSchemaClassField : protected SchemaClassFieldData_t {
protected:

private:

protected:

	CSchemaClassField();
	~CSchemaClassField();
	const char * GetName();
	CSchemaType * GetType();
	int32 GetSingleInheritanceOffsetFromClass();
	const CSchemaMetadataSet & GetMetadataOld();
	MetadataIntrospectionHandle_t GetMetadata();
	CSchemaMetadataSet * GetWriteableMetadata();
	int32 Slow_GetOffsetFromClass(ClassIntrospectionHandle_t);

	// sizeof = 64
};

// src/public/schemalib/schemaclassinfo.h:82
class CSchemaStaticField : protected SchemaStaticFieldData_t {
protected:

private:

	const char * GetName();
	CSchemaType * GetType();
	void * GetInstance();
	const CSchemaMetadataSet & GetMetadataOld();
	MetadataIntrospectionHandle_t GetMetadata();

	// sizeof = 64
};

// src/public/schemalib/schemaclassinfo.h:99
class CSchemaBaseClassInfo : protected SchemaBaseClassInfoData_t {
protected:

private:

	uint32 GetOffset();
	const CSchemaClassInfo * GetClass();

	// sizeof = 16
};

// src/public/schemalib/schemaclassinfo.h:114
class CSchemaMetaModifyAdd : protected SchemaMetaModifyAdd_t {
protected:

private:

	void Init(const char *, const CSchemaType *, void *);
	const char * GetTagName();
	const CSchemaType * GetTagType();
	void * GetTagValue();

	// sizeof = 32
};

// src/public/schemalib/schemaclassinfo.h:130
class CSchemaFieldMetadataOverride : protected SchemaFieldMetadataOverrideData_t {
protected:

private:

	const char * GetFieldName();
	void SetFieldNameDynamic(const char *);
	void AddMetaTag(const char *, const CSchemaType *, void *);
	void RemoveMetaTag(const char *);
	void RemoveAllMetaTags();
	bool WasTagRemoved(const char *);
	bool WasTagAdded(const char *);
	bool FindTagAdditions(const char *, CUtlVector<void*, CUtlMemory<void*, int> > &);
	int GetNumAdds();
	const char * GetAddName(int);
	const CSchemaType * GetAddDataType(int);
	void * GetAddDataValue(int);
	int GetNumRemoves();
	const char * GetRemoveName(int);

	// sizeof = 56
};

// src/public/schemalib/schemaclassinfo.h:212
class CSchemaClassInfo : protected SchemaClassInfoData_t {
protected:

private:

protected:

	CSchemaClassInfo();
	~CSchemaClassInfo();
	const char * GetName();
	const CSchemaClassInfo * GetSingleInheritanceBaseClass();
	const CSchemaBaseClassInfo * GetBaseClassInfo(int);
	int GetBaseClassCount();
	const CSchemaClassInfo * GetBaseClass(int);
	uint32 GetBaseClassOffset(int);
	int32 GetSizeOf();
	int32 GetAlignOf();
	const SchemaArray_t<CSchemaClassField> & GetFields();
	const SchemaArray_t<CSchemaStaticField> & GetStaticFields();
	const SchemaArray_t<const CSchemaClassInfo*> & GetNestedClasses();
	const SchemaArray_t<const CSchemaEnumInfo*> & GetNestedEnums();
	CSchemaType * GetTypeOf();
	const CSchemaClassBindingBase * GetBinding();
	int GetFieldCount();
	const CSchemaClassField * GetField(int);
	int GetStaticFieldCount();
	const CSchemaStaticField * GetStaticField(int);
	const CSchemaClassField * FindField(const char *, SchemaBaseClassTraversal_t, int32 *);
	const CSchemaClassField * FindField(const char *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t *, int32 *);
	const CSchemaStaticField * FindStaticField(const char *, SchemaBaseClassTraversal_t);
	const CSchemaClassInfo * DeduceDerivedClass(const void *);
	bool MultipleInheritsFromOrIs(const CSchemaClassInfo *);
	bool SingleInheritsFromOrIs(const CSchemaClassInfo *);
	bool CanReinterpretAs(const CSchemaClassInfo *);
	bool MetaIsPresent(const char *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void * MetaGetPtr(const char *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	const CSchemaMetadataSet & GetMetadataOld();
	MetadataIntrospectionHandle_t GetMetadata();
	CSchemaMetadataSet * GetWritableMetadata();
	void SetTypeScope(SchemaTypeScope_t, ISchemaSystemTypeScope *);
	ISchemaSystemTypeScope * GetTypeScope();
	void StartInitialization(const CSchemaClassBindingBase *);
	void CompleteInitialization(const CSchemaClassBindingBase *);
	int GetMutlipleInheritanceDepth();
	int GetSingleInheritanceDepth();
	const CSchemaFieldMetadataOverride * FindFieldMetadataOverride(const char *);
	CSchemaFieldMetadataOverride * FindOrCreateMetadataOverrideForField(const char *);
	bool HasFlag(SchemaClassFlags_t);
	const char * GetNote();
	bool IsNoschemaClass();
	void RemoveNoschemaData();
	int GetMetaOverrideCount();
	const CSchemaFieldMetadataOverride * GetMetaOverrideData(int);

private:

	void CompleteInitializationInternal(CSchemaType *, const CSchemaClassBindingBase *);
	const CSchemaClassField * FindField_R(const char *, SchemaBaseClassTraversal_t, uint32, ClassIntrospectionHandle_t *, int32 *);
	int NumBasesToTraverse(SchemaBaseClassTraversal_t);
	int CalculateMultipleInheritanceDepth();
	int CalculateSingleInheritanceDepth();
	void FixupBaseClassPointer(int, const CSchemaClassInfo *);

	// sizeof = 192
};
