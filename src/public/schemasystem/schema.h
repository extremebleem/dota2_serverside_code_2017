// Reconstructed from DWARF by pahole; not original source.

// src/public/schemasystem/schema.h:39
class ISchemaBinding {
	int ()() * * _vptr.ISchemaBinding;  // +0x0
	ISchemaBinding(ISchemaBinding &);
	ISchemaBinding(const ISchemaBinding &);
	ISchemaBinding();
	virtual const char * GetBindingName();
	virtual const CSchemaClassBindingBase * AsClassBinding();
	virtual const CSchemaEnumBindingBase * AsEnumBinding();
	virtual const char * GetBinaryName();
	virtual const char * GetProjectName();

	// vtable[0] GetBindingName
	// vtable[1] AsClassBinding
	// vtable[2] AsEnumBinding
	// vtable[3] GetBinaryName
	// vtable[4] GetProjectName
	// sizeof = 8
};

// src/public/schemasystem/schema.h:55
class CSchemaRegistration {
	int ()() * * _vptr.CSchemaRegistration;  // +0x0
protected:

	static CSchemaRegistration * s_pSchemaRegistrationList;
	CSchemaRegistration(CSchemaRegistration &);
	CSchemaRegistration(const CSchemaRegistration &);
	CSchemaRegistration();
	virtual void RegisterAllBindings(ISchemaSystem *, SchemaRegistrationPhase_t);
	void RegisterAllModuleData(ISchemaSystem *);

	// vtable[0] RegisterAllBindings
	// sizeof = 16
};

// src/public/schemasystem/schema.h:74
struct SchemaMetadata2_t {
	const char * m_pTagName;  // +0x0
	void * m_pData;  // +0x8

	// sizeof = 16
};

// src/public/schemasystem/schema.h:80
struct SchemaMetaSet2_t {
	int m_nMetaCount;  // +0x8
	SchemaMetaSet2_t();
	SchemaMetaSet2_t(SchemaMetadata2_t *, int);
	bool IsPresent(const char *);
	void * GetPtr(const char *);

	// sizeof = 16
};

// src/public/schemasystem/schema.h:124
struct SchemaEnumInfo_t {
	const char * m_pName;  // +0x0
	uint16 m_nMemberCount;  // +0x10

	int32 m_nSizeOf;  // +0x30
	int m_nMinValue;  // +0x34
	int m_nMaxValue;  // +0x38
	SchemaEnumInfo_t();
	const SchemaEnumMember_t * FindMemberByName(const char *);
	const SchemaEnumMember_t * FindMemberByValue(int);
	bool MetaIsPresent2(const char *);
	void * MetaGetPtr2(const char *);
	void MetaGetAllPtrs2(const char *, CUtlVector<void*, CUtlMemory<void*, int> > &);

	// sizeof = 64
};

// src/public/schemasystem/schema.h:145
class CSchemaEnumBindingBase : public ISchemaBinding {
public:

protected:

	const char * m_pEnumName;  // +0x8
	const char * m_pBinaryName;  // +0x10
	const char * m_pProjectName;  // +0x18
	const CResourceDiskEnum * m_pIntrospection;  // +0x20
	CSchemaEnumBindingBase(const char *, CSchemaEnumBindingBase * *);
	virtual void Register(ISchemaSystem *, const char *, const char *, const char *);
	const char * GetName();
	const SchemaEnumInfo_t * GetInfo_Old();
	CSchemaEnumInfo * GetInfo();
	void InstallModuleEnumBindings(ISchemaSystem *);
	void InstallModuleEnumResourceIntrospection(ISchemaSystemUtils *);
	virtual const char * GetBindingName();
	virtual const CSchemaClassBindingBase * AsClassBinding();
	virtual const CSchemaEnumBindingBase * AsEnumBinding();
	virtual const char * GetBinaryName();
	virtual const char * GetProjectName();
	bool CanAllocate();
	virtual void * Allocate();
	virtual void Deallocate(void *);
	virtual void * AllocateAndCopyConstruct(const void *);
	virtual void Copy(void *, const void *);
	virtual void AssignEnumValue(void *, int64);
	virtual void AssignEnumValue(void *, uint64);

	// vtable[5] Register
	// vtable[0] GetBindingName
	// vtable[1] AsClassBinding
	// vtable[2] AsEnumBinding
	// vtable[3] GetBinaryName
	// vtable[4] GetProjectName
	// vtable[6] Allocate
	// vtable[7] Deallocate
	// vtable[8] AllocateAndCopyConstruct
	// vtable[9] Copy
	// vtable[10] AssignEnumValue
	// vtable[11] AssignEnumValue
	// sizeof = 64
};

// src/public/schemasystem/schema.h:284
class CSchemaClassBindingBase : public ISchemaBinding {
public:

protected:

	const char * m_pBinaryName;  // +0x8
	const char * m_pProjectName;  // +0x10
	const char * m_pClassName;  // +0x18
	CSchemaClassBindingBase(CSchemaClassBindingBase &);
	CSchemaClassBindingBase(const CSchemaClassBindingBase &);
	CSchemaClassBindingBase(const char *, CSchemaClassBindingBase * *);
	virtual void Register(ISchemaSystem *, const char *, const char *);
	const char * GetName();
	ClassIntrospectionHandle_t GetInfo();
	SchemaClassInfo_t * GetWritableInfo();
	CSchemaClassInfo * GetInfo_N();
	CSchemaClassInfo * GetWriteableInfo_N();
	OldClassIntrospectionHandle_t GetInfo_Old();
	virtual bool CanAllocate();
	virtual void * Allocate();
	virtual void Deallocate(void *);
	virtual void * AllocateAndCopyConstruct(const void *);
	virtual void Copy(void *, const void *);
	virtual void ConstructInPlace(void *);
	virtual void DestructInPlace(void *);
	virtual const CSchemaClassBindingBase * DeduceDerivedType(const void *);
	virtual int GetSize();
	virtual bool IsAbstractBinding();
	void InstallModuleClassBindings(ISchemaSystem *);
	void InstallModuleClassResourceIntrospection(ISchemaSystemUtils *);
	virtual const char * GetBindingName();
	virtual const CSchemaClassBindingBase * AsClassBinding();
	virtual const CSchemaEnumBindingBase * AsEnumBinding();
	virtual const char * GetBinaryName();
	virtual const char * GetProjectName();
	bool CanReinterpretAs(const CSchemaClassBindingBase *);
	bool SingleInheritsFromOrIs(const CSchemaClassBindingBase *);
	bool MultipleInheritsFromOrIs(const CSchemaClassBindingBase *);
	CSchemaType * GetSchemaType();

	// vtable[5] Register
	// vtable[6] CanAllocate
	// vtable[7] Allocate
	// vtable[8] Deallocate
	// vtable[9] AllocateAndCopyConstruct
	// vtable[10] Copy
	// vtable[11] ConstructInPlace
	// vtable[12] DestructInPlace
	// vtable[13] DeduceDerivedType
	// vtable[14] GetSize
	// vtable[15] IsAbstractBinding
	// vtable[0] GetBindingName
	// vtable[1] AsClassBinding
	// vtable[2] AsEnumBinding
	// vtable[3] GetBinaryName
	// vtable[4] GetProjectName
	// sizeof = 64
};

// src/public/schemasystem/schema.h:473
class CSchemaNonConstructibleClassBindingBase : public CSchemaClassBindingBase {
public:

private:

	void ReportClassError(const char *);
	CSchemaNonConstructibleClassBindingBase(const char *, CSchemaClassBindingBase * *);
	virtual bool CanAllocate();
	virtual void * Allocate();
	virtual void Deallocate(void *);
	virtual void * AllocateAndCopyConstruct(const void *);
	virtual void Copy(void *, const void *);
	virtual void ConstructInPlace(void *);
	virtual void DestructInPlace(void *);
	virtual bool IsAbstractBinding();

	// vtable[6] CanAllocate
	// vtable[7] Allocate
	// vtable[8] Deallocate
	// vtable[9] AllocateAndCopyConstruct
	// vtable[10] Copy
	// vtable[11] ConstructInPlace
	// vtable[12] DestructInPlace
	// vtable[15] IsAbstractBinding
	// sizeof = 64
};

// src/public/schemasystem/schema.h:566
struct SchemaClassField_t {
	const char * m_pName;  // +0x0
	const char * m_pFullType;  // +0x8

	int32 m_nMemorySize;  // +0x40
	int32 m_nInlineDiskSize;  // +0x44
	int32 m_nArrayCount;  // +0x48
	int32 m_nMemoryOffset;  // +0x4c
	int32 m_nDiskOffset;  // +0x50
	int32 m_nBitfieldCountOrTemplateIntParam;  // +0x54

	SchemaManipulatorFn_t m_pManipulatorFn;  // +0x68
	SchemaClassField_t();
	SchemaClassField_t(const char *, const char *, SchemaDataTypeInfo_t, SchemaIndirectionChain_t *, int32, int32, int32, int32, int32, int32, SchemaMetaSet2_t, SchemaManipulatorFn_t, CSchemaType *);
	SchemaIndirectionType_t ReadIndirection(int);
	int32 ReadIndirectionOpaqueTypeId(int);
	int IndirectionCount();
	bool HasIndirection();
	ISchemaManipulator * GetIndirectionManipulator(int);
	int32 GetMemorySizeForIndirection(int);
	int32 GetMemorySizeForDataType();
	int32 GetDiskSizeForIndirection(int);
	int32 GetDiskSizeForDataType();
	int32 GetAlignmentForIndirection(int);
	int32 GetAlignmentForDataType();
	const CSchemaClassBindingBase * DataClass();
	const CSchemaEnumBindingBase * DataEnum();
	void Initialize(int32);
	bool MetaIsPresent2(const char *);
	void * MetaGetPtr2(const char *);
	void MetaGetAllPtrs2(const char *, CUtlVector<void*, CUtlMemory<void*, int> > &);

	// sizeof = 120
};

// src/public/schemasystem/schema.h:693
struct SchemaClassStaticField_t {
	void * m_pStaticFieldInstance;  // +0x78
	SchemaClassStaticField_t();

	// sizeof = 128
};

// src/public/schemasystem/schema.h:702
struct SchemaEnumMember_t {
	const char * m_pName;  // +0x0
	int32 m_nValue;  // +0x8

	SchemaEnumMember_t();
	bool MetaIsPresent2(const char *);
	void * MetaGetPtr2(const char *);
	void MetaGetAllPtrs2(const char *, CUtlVector<void*, CUtlMemory<void*, int> > &);

	// sizeof = 32
};

// src/public/schemasystem/schema.h:716
struct SchemaAtomicTypeInfo_t {
	const char * m_pName;  // +0x0
	const char * m_pTokenName;  // +0x8
	SchemaAtomicId_t m_nId;  // +0x10

	SchemaAtomicTypeInfo_t();
	bool MetaIsPresent2(const char *);
	void * MetaGetPtr2(const char *);

	// sizeof = 40
};

// src/public/schemasystem/schema.h:732
struct SchemaClassInfo_t {
	const char * m_pName;  // +0x0
	const SchemaClassInfo_t * m_pParentInfo;  // +0x8
	bool m_bIsVirtual;  // +0x10
	bool m_bIsAbstract;  // +0x11

	uint32 m_nMemorySize;  // +0x14
	uint32 m_nDiskSize;  // +0x18
	int16 m_nAlignment;  // +0x1c

	uint16 m_nMemberCount;  // +0x28

	int m_nUserVersion;  // +0x40
	uint8 m_nStructFlags;  // +0x44

	int m_nStaticMemberCount;  // +0x50

	const SchemaClassInfo_t * * m_pNestedClasses;  // +0x58
	int m_nNestedClassCount;  // +0x60

	const SchemaEnumInfo_t * * m_pNestedEnums;  // +0x68
	int m_nNestedEnumCount;  // +0x70
	bool m_bAlreadyInitialized;  // +0x74

	const CSchemaClassBindingBase * m_pBinding;  // +0x78
	SchemaClassInfo_t();
	SchemaClassInfo_t(const char *, const SchemaClassInfo_t *, bool, bool, uint32, uint32, int16, SchemaClassField_t *, uint16, SchemaMetaSet2_t, int, uint8, SchemaClassStaticField_t *, int, const SchemaClassInfo_t * *, int, const SchemaEnumInfo_t * *, int, int);
	bool IsAlignedOnDisk();
	bool TreeRequiresScatter();
	bool HasVTable();
	OldFieldIntrospectionHandle_t FindField(const char *, bool);
	const SchemaClassStaticField_t * FindStaticField(const char *, bool);
	OldClassIntrospectionHandle_t DeduceDerivedClass(const void *);
	bool MetaIsPresent2_Old(const char *, bool);
	void * MetaGetPtr2_Old(const char *, bool);
	void MetaGetAllPtrs2_Old(const char *, CUtlVector<void*, CUtlMemory<void*, int> > &, bool);
	bool InheritsFromOrIs_Old(OldClassIntrospectionHandle_t);

	// sizeof = 128
};

// src/public/schemasystem/schema.h:1286
class MNoSchema {
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

// src/public/schemasystem/schema.h:1287
class MModuleLocalTypeScope {
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

// src/public/schemasystem/schema.h:1288
class MHACKDisallowSynthVerification {
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

// src/public/schemasystem/schema.h:1292
class MFieldVerificationName {
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

// src/public/schemasystem/schema.h:1297
class MUnserializationCallback {
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
	SchemaOnUnserializeFnPtr_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SchemaOnUnserializeFnPtr_t GetValue(ClassIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SchemaOnUnserializeFnPtr_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnUnserializeFnPtr_t GetValue(FieldIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t *);
	SchemaOnUnserializeFnPtr_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnUnserializeFnPtr_t GetValue(StaticFieldIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t *);
	SchemaOnUnserializeFnPtr_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnUnserializeFnPtr_t GetValue(EnumIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t *);
	SchemaOnUnserializeFnPtr_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnUnserializeFnPtr_t GetValue(EnumeratorIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t *);
	SchemaOnUnserializeFnPtr_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnUnserializeFnPtr_t GetValue(AtomicTypeIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t *);
	SchemaOnUnserializeFnPtr_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnUnserializeFnPtr_t GetValue(MetadataIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, SchemaOnUnserializeFnPtr_t *);
	SchemaOnUnserializeFnPtr_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnUnserializeFnPtr_t GetValue(FieldIteratorHandle_t, SchemaOnUnserializeFnPtr_t);
	bool TestAndGetValue(FieldIteratorHandle_t, SchemaOnUnserializeFnPtr_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, SchemaOnUnserializeFnPtr_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, SchemaOnUnserializeFnPtr_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/schemasystem/schema.h:1299
class MPreSerializationCallback {
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
	SchemaOnPreSerializatioFnPtr_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SchemaOnPreSerializatioFnPtr_t GetValue(ClassIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SchemaOnPreSerializatioFnPtr_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnPreSerializatioFnPtr_t GetValue(FieldIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t *);
	SchemaOnPreSerializatioFnPtr_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnPreSerializatioFnPtr_t GetValue(StaticFieldIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t *);
	SchemaOnPreSerializatioFnPtr_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnPreSerializatioFnPtr_t GetValue(EnumIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t *);
	SchemaOnPreSerializatioFnPtr_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnPreSerializatioFnPtr_t GetValue(EnumeratorIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t *);
	SchemaOnPreSerializatioFnPtr_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnPreSerializatioFnPtr_t GetValue(AtomicTypeIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t *);
	SchemaOnPreSerializatioFnPtr_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnPreSerializatioFnPtr_t GetValue(MetadataIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, SchemaOnPreSerializatioFnPtr_t *);
	SchemaOnPreSerializatioFnPtr_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<void (**)(void*), CUtlMemory<void (**)(void*), int> > &);
	SchemaOnPreSerializatioFnPtr_t GetValue(FieldIteratorHandle_t, SchemaOnPreSerializatioFnPtr_t);
	bool TestAndGetValue(FieldIteratorHandle_t, SchemaOnPreSerializatioFnPtr_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, SchemaOnPreSerializatioFnPtr_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, SchemaOnPreSerializatioFnPtr_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/schemasystem/schema.h:1300
class MNoScatter {
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

// src/public/schemasystem/schema.h:1302
class MDefaultString {
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

// src/public/schemasystem/schema.h:1303
class MSerializeAsMultiLineString {
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

// src/public/schemasystem/schema.h:1306
class MUnserializeFromStringCallback {
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
	SchemaOnUnserializeFromStringFnPtr_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<bool (**)(void*, char const*), CUtlMemory<bool (**)(void*, char const*), int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SchemaOnUnserializeFromStringFnPtr_t GetValue(ClassIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SchemaOnUnserializeFromStringFnPtr_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<bool (**)(void*, char const*), CUtlMemory<bool (**)(void*, char const*), int> > &);
	SchemaOnUnserializeFromStringFnPtr_t GetValue(FieldIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t *);
	SchemaOnUnserializeFromStringFnPtr_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<bool (**)(void*, char const*), CUtlMemory<bool (**)(void*, char const*), int> > &);
	SchemaOnUnserializeFromStringFnPtr_t GetValue(StaticFieldIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t *);
	SchemaOnUnserializeFromStringFnPtr_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<bool (**)(void*, char const*), CUtlMemory<bool (**)(void*, char const*), int> > &);
	SchemaOnUnserializeFromStringFnPtr_t GetValue(EnumIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t *);
	SchemaOnUnserializeFromStringFnPtr_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<bool (**)(void*, char const*), CUtlMemory<bool (**)(void*, char const*), int> > &);
	SchemaOnUnserializeFromStringFnPtr_t GetValue(EnumeratorIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t *);
	SchemaOnUnserializeFromStringFnPtr_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<bool (**)(void*, char const*), CUtlMemory<bool (**)(void*, char const*), int> > &);
	SchemaOnUnserializeFromStringFnPtr_t GetValue(AtomicTypeIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t *);
	SchemaOnUnserializeFromStringFnPtr_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<bool (**)(void*, char const*), CUtlMemory<bool (**)(void*, char const*), int> > &);
	SchemaOnUnserializeFromStringFnPtr_t GetValue(MetadataIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, SchemaOnUnserializeFromStringFnPtr_t *);
	SchemaOnUnserializeFromStringFnPtr_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<bool (**)(void*, char const*), CUtlMemory<bool (**)(void*, char const*), int> > &);
	SchemaOnUnserializeFromStringFnPtr_t GetValue(FieldIteratorHandle_t, SchemaOnUnserializeFromStringFnPtr_t);
	bool TestAndGetValue(FieldIteratorHandle_t, SchemaOnUnserializeFromStringFnPtr_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, SchemaOnUnserializeFromStringFnPtr_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, SchemaOnUnserializeFromStringFnPtr_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/schemasystem/schema.h:1309
class MSerializationNameCallback {
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
	SchemaGetSerializationNameFnPtr_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SchemaGetSerializationNameFnPtr_t GetValue(ClassIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SchemaGetSerializationNameFnPtr_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	SchemaGetSerializationNameFnPtr_t GetValue(FieldIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t *);
	SchemaGetSerializationNameFnPtr_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	SchemaGetSerializationNameFnPtr_t GetValue(StaticFieldIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t *);
	SchemaGetSerializationNameFnPtr_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	SchemaGetSerializationNameFnPtr_t GetValue(EnumIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t *);
	SchemaGetSerializationNameFnPtr_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	SchemaGetSerializationNameFnPtr_t GetValue(EnumeratorIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t *);
	SchemaGetSerializationNameFnPtr_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	SchemaGetSerializationNameFnPtr_t GetValue(AtomicTypeIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t *);
	SchemaGetSerializationNameFnPtr_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	SchemaGetSerializationNameFnPtr_t GetValue(MetadataIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, SchemaGetSerializationNameFnPtr_t *);
	SchemaGetSerializationNameFnPtr_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> > &);
	SchemaGetSerializationNameFnPtr_t GetValue(FieldIteratorHandle_t, SchemaGetSerializationNameFnPtr_t);
	bool TestAndGetValue(FieldIteratorHandle_t, SchemaGetSerializationNameFnPtr_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, SchemaGetSerializationNameFnPtr_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, SchemaGetSerializationNameFnPtr_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/schemasystem/schema.h:1311
struct SerializeInfo_t {
	int m_nTupleOfBuiltin;  // +0x0
	int m_nTupleCount;  // +0x4
	SerializeInfo_t();
	SerializeInfo_t BuiltinTuple(int, int);
	bool operator==(const SerializeInfo_t &);

	// sizeof = 8
};

// src/public/schemasystem/schema.h:1326
class MSerializeAs {
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
	SerializeInfo_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<SerializeInfo_t*, CUtlMemory<SerializeInfo_t*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SerializeInfo_t GetValue(ClassIntrospectionHandle_t, SerializeInfo_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, SerializeInfo_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SerializeInfo_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<SerializeInfo_t*, CUtlMemory<SerializeInfo_t*, int> > &);
	SerializeInfo_t GetValue(FieldIntrospectionHandle_t, SerializeInfo_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, SerializeInfo_t *);
	SerializeInfo_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<SerializeInfo_t*, CUtlMemory<SerializeInfo_t*, int> > &);
	SerializeInfo_t GetValue(StaticFieldIntrospectionHandle_t, SerializeInfo_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, SerializeInfo_t *);
	SerializeInfo_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<SerializeInfo_t*, CUtlMemory<SerializeInfo_t*, int> > &);
	SerializeInfo_t GetValue(EnumIntrospectionHandle_t, SerializeInfo_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, SerializeInfo_t *);
	SerializeInfo_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<SerializeInfo_t*, CUtlMemory<SerializeInfo_t*, int> > &);
	SerializeInfo_t GetValue(EnumeratorIntrospectionHandle_t, SerializeInfo_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, SerializeInfo_t *);
	SerializeInfo_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<SerializeInfo_t*, CUtlMemory<SerializeInfo_t*, int> > &);
	SerializeInfo_t GetValue(AtomicTypeIntrospectionHandle_t, SerializeInfo_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, SerializeInfo_t *);
	SerializeInfo_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<SerializeInfo_t*, CUtlMemory<SerializeInfo_t*, int> > &);
	SerializeInfo_t GetValue(MetadataIntrospectionHandle_t, SerializeInfo_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, SerializeInfo_t *);
	SerializeInfo_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<SerializeInfo_t*, CUtlMemory<SerializeInfo_t*, int> > &);
	SerializeInfo_t GetValue(FieldIteratorHandle_t, SerializeInfo_t);
	bool TestAndGetValue(FieldIteratorHandle_t, SerializeInfo_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, SerializeInfo_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, SerializeInfo_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/schemasystem/schema.h:1330
struct DynamicSerializeInfo_t {
	SchemaDynamicSerializer_t m_pSerializer;  // +0x0
	SchemaDynamicUnserializer_t m_pUnserializer;  // +0x8
	DynamicSerializeInfo_t();
	DynamicSerializeInfo_t(SchemaDynamicSerializer_t, SchemaDynamicUnserializer_t);
	bool operator==(const DynamicSerializeInfo_t &);

	// sizeof = 16
};

// src/public/schemasystem/schema.h:1339
class MSerializeAsDynamic {
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
	DynamicSerializeInfo_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<DynamicSerializeInfo_t*, CUtlMemory<DynamicSerializeInfo_t*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	DynamicSerializeInfo_t GetValue(ClassIntrospectionHandle_t, DynamicSerializeInfo_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, DynamicSerializeInfo_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	DynamicSerializeInfo_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<DynamicSerializeInfo_t*, CUtlMemory<DynamicSerializeInfo_t*, int> > &);
	DynamicSerializeInfo_t GetValue(FieldIntrospectionHandle_t, DynamicSerializeInfo_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, DynamicSerializeInfo_t *);
	DynamicSerializeInfo_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<DynamicSerializeInfo_t*, CUtlMemory<DynamicSerializeInfo_t*, int> > &);
	DynamicSerializeInfo_t GetValue(StaticFieldIntrospectionHandle_t, DynamicSerializeInfo_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, DynamicSerializeInfo_t *);
	DynamicSerializeInfo_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<DynamicSerializeInfo_t*, CUtlMemory<DynamicSerializeInfo_t*, int> > &);
	DynamicSerializeInfo_t GetValue(EnumIntrospectionHandle_t, DynamicSerializeInfo_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, DynamicSerializeInfo_t *);
	DynamicSerializeInfo_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<DynamicSerializeInfo_t*, CUtlMemory<DynamicSerializeInfo_t*, int> > &);
	DynamicSerializeInfo_t GetValue(EnumeratorIntrospectionHandle_t, DynamicSerializeInfo_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, DynamicSerializeInfo_t *);
	DynamicSerializeInfo_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<DynamicSerializeInfo_t*, CUtlMemory<DynamicSerializeInfo_t*, int> > &);
	DynamicSerializeInfo_t GetValue(AtomicTypeIntrospectionHandle_t, DynamicSerializeInfo_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, DynamicSerializeInfo_t *);
	DynamicSerializeInfo_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<DynamicSerializeInfo_t*, CUtlMemory<DynamicSerializeInfo_t*, int> > &);
	DynamicSerializeInfo_t GetValue(MetadataIntrospectionHandle_t, DynamicSerializeInfo_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, DynamicSerializeInfo_t *);
	DynamicSerializeInfo_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<DynamicSerializeInfo_t*, CUtlMemory<DynamicSerializeInfo_t*, int> > &);
	DynamicSerializeInfo_t GetValue(FieldIteratorHandle_t, DynamicSerializeInfo_t);
	bool TestAndGetValue(FieldIteratorHandle_t, DynamicSerializeInfo_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, DynamicSerializeInfo_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, DynamicSerializeInfo_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/schemasystem/schema.h:1344
class MDmElementType {
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

// src/public/schemasystem/schema.h:1345
class MSrc1ImportDmElementType {
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

// src/public/schemasystem/schema.h:1346
class MAttributeName {
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

// src/public/schemasystem/schema.h:1347
class MSrc1ImportAttributeName {
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

// src/public/schemasystem/schema.h:1348
class MAlternateAttributeName {
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

// src/public/schemasystem/schema.h:1349
class MAllowCharValuesForInt {
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

// src/public/schemasystem/schema.h:1361
class MFieldUpdateCallback {
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
	SchemaOnFieldChangedFnPtr_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<void (**)(void*, void*), CUtlMemory<void (**)(void*, void*), int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SchemaOnFieldChangedFnPtr_t GetValue(ClassIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SchemaOnFieldChangedFnPtr_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<void (**)(void*, void*), CUtlMemory<void (**)(void*, void*), int> > &);
	SchemaOnFieldChangedFnPtr_t GetValue(FieldIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t *);
	SchemaOnFieldChangedFnPtr_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<void (**)(void*, void*), CUtlMemory<void (**)(void*, void*), int> > &);
	SchemaOnFieldChangedFnPtr_t GetValue(StaticFieldIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t *);
	SchemaOnFieldChangedFnPtr_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<void (**)(void*, void*), CUtlMemory<void (**)(void*, void*), int> > &);
	SchemaOnFieldChangedFnPtr_t GetValue(EnumIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t *);
	SchemaOnFieldChangedFnPtr_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<void (**)(void*, void*), CUtlMemory<void (**)(void*, void*), int> > &);
	SchemaOnFieldChangedFnPtr_t GetValue(EnumeratorIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t *);
	SchemaOnFieldChangedFnPtr_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<void (**)(void*, void*), CUtlMemory<void (**)(void*, void*), int> > &);
	SchemaOnFieldChangedFnPtr_t GetValue(AtomicTypeIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t *);
	SchemaOnFieldChangedFnPtr_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<void (**)(void*, void*), CUtlMemory<void (**)(void*, void*), int> > &);
	SchemaOnFieldChangedFnPtr_t GetValue(MetadataIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, SchemaOnFieldChangedFnPtr_t *);
	SchemaOnFieldChangedFnPtr_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<void (**)(void*, void*), CUtlMemory<void (**)(void*, void*), int> > &);
	SchemaOnFieldChangedFnPtr_t GetValue(FieldIteratorHandle_t, SchemaOnFieldChangedFnPtr_t);
	bool TestAndGetValue(FieldIteratorHandle_t, SchemaOnFieldChangedFnPtr_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, SchemaOnFieldChangedFnPtr_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, SchemaOnFieldChangedFnPtr_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/schemasystem/schema.h:1366
class MNetworkSerializeAs {
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

// src/public/schemasystem/schema.h:1371
class MAlignment {
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

// src/public/schemasystem/schema.h:1488
class ISchemaCollectionManipulator {
	int ()() * * _vptr.ISchemaCollectionManipulator;  // +0x0
	ISchemaCollectionManipulator(ISchemaCollectionManipulator &);
	ISchemaCollectionManipulator(const ISchemaCollectionManipulator &);
	ISchemaCollectionManipulator();
	SchemaManipulatorInterfaceType_t InterfaceType();
	virtual int Count(void *);
	virtual void * Element(void *, int);
	virtual void SwapItems(void *, int, int);
	virtual void InsertMultipleBefore(void *, int, int);
	virtual void RemoveMultiple(void *, int, int);
	virtual void SetCount(void *, int);
	virtual CSchemaType * CollectionOfType();
	virtual void * AllocateUtlVector();
	virtual void DeallocateUtlVector(void *);
	virtual bool IsCollectionContiguous();
	virtual void * Base(void *);
	virtual const void * End(void *);

	// vtable[0] Count
	// vtable[1] Element
	// vtable[2] SwapItems
	// vtable[3] InsertMultipleBefore
	// vtable[4] RemoveMultiple
	// vtable[5] SetCount
	// vtable[6] CollectionOfType
	// vtable[7] AllocateUtlVector
	// vtable[8] DeallocateUtlVector
	// vtable[9] IsCollectionContiguous
	// vtable[10] Base
	// vtable[11] End
	// sizeof = 8
};
