// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcefile/resourcetype.h:35
class ResourceId_t {
private:

	uint64 m_Data;  // +0x0
	ResourceId_t(uint64);
	uint64 GetRaw();
	void SetRaw(uint64);
	uint64 * GetRawPtrForWrite();
	bool operator==(const ResourceId_t &);
	bool operator!=(const ResourceId_t &);
	bool operator<(const ResourceId_t &);
	bool operator<=(const ResourceId_t &);
	bool operator>(const ResourceId_t &);
	bool operator>=(const ResourceId_t &);
	ResourceId_t & operator++();
	ResourceId_t operator++(int);
	ResourceId_t & operator--();
	ResourceId_t operator--(int);
	ResourceId_t & operator=(uint64);

	// sizeof = 8
};

// src/public/resourcefile/resourcetype.h:157
struct ResourceNameInfo_t {
	ResourceNameInfo_t();

	// sizeof = 8
};

// src/public/resourcefile/resourcetype.h:184
struct ResourceBindingBase_t {
	void * m_pData;  // +0x0
	ResourceNameHandle_t m_Name;  // +0x8
	uint16 m_nFlags;  // +0x10
	uint16 m_nReloadCounter;  // +0x12
	ResourceTypeIndex_t m_nTypeIndex;  // +0x14
	uint8 m_nPadding;  // +0x15
	LoadingResourceIndex_t m_nLoadingResource;  // +0x16
	CInterlockedInt m_nRefCount;  // +0x18
	ExtRefIndex_t m_nExtRefHandle;  // +0x1c
	ResourceBindingBase_t();

	// sizeof = 32
};

// src/public/resourcefile/resourcetype.h:252
class MResourceTypeForInfoType {
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
	ResourceType_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	ResourceType_t GetValue(ClassIntrospectionHandle_t, ResourceType_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, ResourceType_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	ResourceType_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(FieldIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(StaticFieldIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(EnumIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(EnumeratorIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(AtomicTypeIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(MetadataIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(FieldIteratorHandle_t, ResourceType_t);
	bool TestAndGetValue(FieldIteratorHandle_t, ResourceType_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, ResourceType_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, ResourceType_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/resourcefile/resourcetype.h:253
class MResourceVersion {
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

// src/public/resourcefile/resourcetype.h:256
class MDiskDataForResourceType {
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
	ResourceType_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	ResourceType_t GetValue(ClassIntrospectionHandle_t, ResourceType_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, ResourceType_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	ResourceType_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(FieldIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(StaticFieldIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(EnumIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(EnumeratorIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(AtomicTypeIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(MetadataIntrospectionHandle_t, ResourceType_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, ResourceType_t *);
	ResourceType_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<long long unsigned int*, CUtlMemory<long long unsigned int*, int> > &);
	ResourceType_t GetValue(FieldIteratorHandle_t, ResourceType_t);
	bool TestAndGetValue(FieldIteratorHandle_t, ResourceType_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, ResourceType_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, ResourceType_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/resourcefile/resourcetype.h:308
class CResourceExtReferenceBase {
	union {
		ResourceIdUnsafe_t m_nResourceId;  // +0x0
		ResourceHandle_t m_hResource;  // +0x0
	};

protected:

	union {
		ResourceIdUnsafe_t m_nResourceId;  // +0x0
		ResourceHandle_t m_hResource;  // +0x0
	};
	CResourceExtReferenceBase();
	CResourceExtReferenceBase(ResourceHandle_t);
	void WriteReference(ResourceId_t);
	void operator=(ResourceId_t);
	bool IsNull();
	ResourceId_t GetResourceId();
	void SetHandle(ResourceHandle_t);
	ResourceHandle_t GetHandle();

	// sizeof = 8
};

// src/public/resourcefile/resourcetype.h:424
struct ResourceBindingVoid_t {
	// sizeof = 1
};
