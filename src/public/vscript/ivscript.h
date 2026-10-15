// Reconstructed from DWARF by pahole; not original source.

// src/public/vscript/ivscript.h:163
struct HSCRIPT_LIGHTBINDING__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/vscript/ivscript.h:195
struct ScriptFuncDescriptor_t {
protected:

	const char * m_pszScriptName;  // +0x0
	const char * m_pszFunction;  // +0x8
	const char * m_pszDescription;  // +0x10
	uint8 m_ReturnType;  // +0x18
	int8 m_nOptionalParameters;  // +0x19
	int8 m_nNumParameters;  // +0x1a
	unsigned char m_ParameterTypes[13];  // +0x1b
	const char * m_pPackedParameterNames;  // +0x28
	ScriptFuncDescriptor_t();
	const char * GetScriptName();
	const char * GetFunctionName();
	const char * GetDescription();
	ScriptDataType_t GetReturnType();
	int GetNumOptionalParameters();
	int GetNumParameters();
	ScriptDataType_t GetParameterType(int);
	const char * GetPackedParameterNames();
	const char * GetParameterName(int);
	void SetScriptName(const char *);
	void SetFunctionName(const char *);
	void SetDescription(const char *);
	void SetReturnType(ScriptDataType_t);
	void EnsureParameterCapacity(int);
	void AddParameterType(ScriptDataType_t);
	void RemoveAllParameters();
	void SetPackedParameterNames(const char *);
	void Finalize();

	// sizeof = 48
};

// src/public/vscript/ivscript.h:355
struct ScriptFunctionBinding_t {
	ScriptBindingFunc_t m_pfnBinding;  // +0x30
	void * m_pFunction;  // +0x38
	unsigned int m_flags;  // +0x40
	ScriptFunctionBinding_t();

	// sizeof = 72
};

// src/public/vscript/ivscript.h:364
class IScriptInstanceHelper {
	int ()() * * _vptr.IScriptInstanceHelper;  // +0x0
	IScriptInstanceHelper(IScriptInstanceHelper &);
	IScriptInstanceHelper(const IScriptInstanceHelper &);
	IScriptInstanceHelper();
	virtual void * GetProxied(void *, ScriptFunctionBinding_t *);
	virtual bool ToString(void *, char *, int);
	virtual void * BindOnRead(HSCRIPT, void *, const char *);

	// vtable[0] GetProxied
	// vtable[1] ToString
	// vtable[2] BindOnRead
	// sizeof = 8
};

// src/public/vscript/ivscript.h:374
struct ScriptClassDesc_t {
	const char * m_pszScriptName;  // +0x0
	const char * m_pszClassname;  // +0x8
	const char * m_pszDescription;  // +0x10
	void * (*m_pfnConstruct)();  // +0x38
	void (*m_pfnDestruct)(void *);  // +0x40
	ScriptClassDesc_t();

	// sizeof = 80
};

// src/public/vscript/ivscript.h:506
class MClassScriptDescription {
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

// src/public/vscript/ivscript.h:507
class MClassScriptName {
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

// src/public/vscript/ivscript.h:508
class MClassScriptBase {
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

// src/public/vscript/ivscript.h:509
class MClassScriptForceRootClass {
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

// src/public/vscript/ivscript.h:510
class MScriptName {
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

// src/public/vscript/ivscript.h:511
class MScriptDescription {
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

// src/public/vscript/ivscript.h:512
class MScriptInvokeRaw {
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

// src/public/vscript/ivscript.h:1105
class CDefScriptAccessorBase {
	IScriptVM * GetVM();

	// sizeof = 1
};

// src/public/vscript/ivscript.h:1656
class CScriptFuncHolder {
	HSCRIPT hFunction;  // +0x0
	CScriptFuncHolder();
	bool IsValid();
	bool IsNull();

	// sizeof = 8
};

// src/public/vscript/ivscript.h:2014
class CScriptAutoRef {
private:

	HSCRIPT m_h;  // +0x0
	CScriptAutoRef();
	CScriptAutoRef(HSCRIPT);
	CScriptAutoRef(const CScriptAutoRef &);
	CScriptAutoRef & operator=(const CScriptAutoRef &);
	CScriptAutoRef & operator=(const HSCRIPT &);
	CScriptAutoRef(const ScriptVariant_t &);
	~CScriptAutoRef();
	HSCRIPT Set(HSCRIPT);
	void Term();
	CScriptAutoRef & SetNoAddref(HSCRIPT);
	HSCRIPT Get();
	HSCRIPT operator HSCRIPT();
	bool operator bool();
	ScriptVariant_t operator ScriptVariant_t();
	IScriptVM * VM();

	// sizeof = 8
};
