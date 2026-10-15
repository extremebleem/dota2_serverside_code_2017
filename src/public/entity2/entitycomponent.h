// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entitycomponent.h:91
struct ComponentUnserializerFieldInfo_t {
	const char * m_pName;  // +0x8
	ResourceType_t m_resourceType;  // +0x10
	uint16 m_nOffset;  // +0x18
	bool m_bIsMatrix3x4SubKey:1;  // +0x1b:0
	bool m_bDeallocateName:1;  // +0x1b:1
	bool m_bIsRemovalOverride:1;  // +0x1b:2
	EnumIntrospectionHandle_t GetEnum();
	bool IsEqual(const ComponentUnserializerFieldInfo_t &);

	// sizeof = 32
};

// src/public/entity2/entitycomponent.h:123
struct ComponentUnserializerPtrToClassInfo_t {
	uint32 m_nOffset;  // +0x0

	// sizeof = 16
};

// src/public/entity2/entitycomponent.h:129
struct ComponentPostUnserializerInfo_t {
	uint32 m_nOffset;  // +0x0

	ComponentPostUnserializerInfo_t();

	// sizeof = 32
};

// src/public/entity2/entitycomponent.h:139
struct EntOutput_t {
private:

	EntOutput_t();

	// sizeof = 16
};

// src/public/entity2/entitycomponent.h:146
struct ComponentUnserializerClassInfo_t {
	const ComponentUnserializerClassInfo_t * m_pBaseClassUnserializer;  // +0x0
	typedef CUtlNonTSHashPreHashedKeys<ComponentUnserializerFieldInfo_t, 16, unsigned int> FieldHash_t;

	FieldHash_t m_atomicFields;  // +0x8
	ComponentUnserializerClassInfo_t();
	ComponentUnserializerClassInfo_t(const ComponentUnserializerClassInfo_t &);
	ComponentUnserializerClassInfo_t & operator=(const ComponentUnserializerClassInfo_t &);
	bool IsInitialized();
	void SetInitialized();
	~ComponentUnserializerClassInfo_t();

	// sizeof = 408
};

// src/public/entity2/entitycomponent.h:146
struct ComponentUnserializerClassInfo_t {
	const ComponentUnserializerClassInfo_t * m_pBaseClassUnserializer;  // +0x0
	typedef CUtlNonTSHashPreHashedKeys<ComponentUnserializerFieldInfo_t, 16, unsigned int> FieldHash_t;

	FieldHash_t m_atomicFields;  // +0x8
	ComponentUnserializerClassInfo_t();
	ComponentUnserializerClassInfo_t(const ComponentUnserializerClassInfo_t &);
	ComponentUnserializerClassInfo_t & operator=(const ComponentUnserializerClassInfo_t &);
	bool IsInitialized();
	void SetInitialized();

	// sizeof = 408
};

// src/public/entity2/entitycomponent.h:196
struct ComponentKeyField_t {
	const char * m_pKeyName;  // +0x0
	ComponentKeyField_t(const char *, CSchemaType *);
	bool operator==(const ComponentKeyField_t &);

	// sizeof = 16
};

// src/public/entity2/entitycomponent.h:212
class MKeyField {
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
	ComponentKeyField_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<ComponentKeyField_t*, CUtlMemory<ComponentKeyField_t*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	ComponentKeyField_t GetValue(ClassIntrospectionHandle_t, ComponentKeyField_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, ComponentKeyField_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	ComponentKeyField_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<ComponentKeyField_t*, CUtlMemory<ComponentKeyField_t*, int> > &);
	ComponentKeyField_t GetValue(FieldIntrospectionHandle_t, ComponentKeyField_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, ComponentKeyField_t *);
	ComponentKeyField_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<ComponentKeyField_t*, CUtlMemory<ComponentKeyField_t*, int> > &);
	ComponentKeyField_t GetValue(StaticFieldIntrospectionHandle_t, ComponentKeyField_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, ComponentKeyField_t *);
	ComponentKeyField_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<ComponentKeyField_t*, CUtlMemory<ComponentKeyField_t*, int> > &);
	ComponentKeyField_t GetValue(EnumIntrospectionHandle_t, ComponentKeyField_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, ComponentKeyField_t *);
	ComponentKeyField_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<ComponentKeyField_t*, CUtlMemory<ComponentKeyField_t*, int> > &);
	ComponentKeyField_t GetValue(EnumeratorIntrospectionHandle_t, ComponentKeyField_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, ComponentKeyField_t *);
	ComponentKeyField_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<ComponentKeyField_t*, CUtlMemory<ComponentKeyField_t*, int> > &);
	ComponentKeyField_t GetValue(AtomicTypeIntrospectionHandle_t, ComponentKeyField_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, ComponentKeyField_t *);
	ComponentKeyField_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<ComponentKeyField_t*, CUtlMemory<ComponentKeyField_t*, int> > &);
	ComponentKeyField_t GetValue(MetadataIntrospectionHandle_t, ComponentKeyField_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, ComponentKeyField_t *);
	ComponentKeyField_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<ComponentKeyField_t*, CUtlMemory<ComponentKeyField_t*, int> > &);
	ComponentKeyField_t GetValue(FieldIteratorHandle_t, ComponentKeyField_t);
	bool TestAndGetValue(FieldIteratorHandle_t, ComponentKeyField_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, ComponentKeyField_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, ComponentKeyField_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/entity2/entitycomponent.h:218
struct EntComponentInfo_t {
private:

	const char * m_pName;  // +0x10
	const char * m_pCPPClassname;  // +0x18
	const char * m_pNetworkDataReferencedDescription;  // +0x20
	const char * m_pNetworkDataReferencedPtrPropDescription;  // +0x28
	int m_nRuntimeIndex;  // +0x30
	uint32 m_nFlags;  // +0x34
	EntComponentInfo_t();

	// sizeof = 480
};

// src/public/entity2/entitycomponent.h:243
class CEntityComponent {
private:

	int CheckDeclareClass(const char *);
	CEntityComponentHelper * GetBaseComponentHelper();

	// sizeof = 1
};

// src/public/entity2/entitycomponent.h:300
struct EntInput_t {
private:

	EntInput_t();

	// sizeof = 56
};

// src/public/entity2/entitycomponent.h:486
class CEntitySpawnHelper {
protected:

	static CEntityInstance * gm_pCurEntityPtr;

	// sizeof = 1
};

// src/public/entity2/entitycomponent.h:493
class CEntityOwnerPtr : public CSmartPtr<CEntityInstance, CNullRefCountAccessor>, CEntitySpawnHelper {
public:

	CEntityOwnerPtr();
	CEntityInstance * operator CEntityInstance*();
	const CEntityInstance * operator const CEntityInstance*();
	void Set(CEntityInstance *);

	// sizeof = 8
};

// src/public/entity2/entitycomponent.h:710
class CEntityComponentHelper {
	int ()() * * _vptr.CEntityComponentHelper;  // +0x0
private:

protected:

	uint32 m_flags;  // +0x8

	int m_nPriority;  // +0x18

private:

	CEntityComponentHelper();
	CEntityComponentHelper * GetNext();
	const EntComponentInfo_t * GetComponentInfo();
	int GetRuntimeComponentIndex();
	virtual void Finalize();
	virtual const CSchemaClassBindingBase * GetSchemaBinding();
	int GetRuntimeIndex();
	void SetRuntimeIndex(int);
	virtual bool Allocate(CEntityIdentity *, void *);
	virtual void Free(CEntityIdentity *, void *);
	uint32 GetAllFlags();
	void SetPriority(int);
	int GetPriority();
	void * StorageToComponentPtr(void *);
	bool IsContained();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] Finalize
	// vtable[2] GetSchemaBinding
	// vtable[3] Allocate
	// vtable[4] Free
	// sizeof = 40
};

// src/public/entity2/entitycomponent.h:876
class CEntityComponentHelpers {
	CEntityComponentHelper * * GetList();

protected:

	void AddToList(CEntityComponentHelper *);
	CEntityComponentHelpers();

	// sizeof = 1
};
