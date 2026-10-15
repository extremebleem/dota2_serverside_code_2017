// Reconstructed from DWARF by pahole; not original source.

// src/public/networksystem/networksystemtypes.h:96
struct NetworkUserGroupProxyInfo_t {
	const char * m_pUserGroupName;  // +0x0
	UserGroupSerializerProxyFn_t m_pfnUserGroupSerializerProxyFn;  // +0x8
	NetworkUserGroupProxyInfo_t();
	NetworkUserGroupProxyInfo_t(const char *, UserGroupSerializerProxyFn_t);

	// sizeof = 16
};

// src/public/networksystem/networksystemtypes.h:112
struct NetworkVarDecl_t {
	const char * m_pVarName;  // +0x0
	const char * m_pVarType;  // +0x8
	NetworkVarDecl_t();
	NetworkVarDecl_t(const char *, const char *);
	bool operator==(const NetworkVarDecl_t &);

	// sizeof = 16
};

// src/public/networksystem/networksystemtypes.h:133
struct OffsetIgnore_t {
private:

	typedef uint16 OffsetIgnoreValueType_t;

	OffsetIgnoreValueType_t m_unMaxOffset;  // +0x20
	OffsetIgnore_t();
	bool ShouldIgnore(uint32);
	OffsetIgnoreValueType_t MaxVal();
	void Insert(uint32);
	void Remove(uint32);
	bool operator==(const OffsetIgnore_t &);
	int Count();
	uint32 EstimateMemory();
	void RecomputeComputeMax();

	// sizeof = 40
};

// src/public/networksystem/networksystemtypes.h:223
class ChangeAccessorFieldPathIndex_t {
private:

	int16 m_Value;  // +0x0

	ChangeAccessorFieldPathIndex_t();
	ChangeAccessorFieldPathIndex_t(int16);
	int16 operator int16();
	int16 GetValue();
	bool operator==(const ChangeAccessorFieldPathIndex_t &);
	bool operator!=(const ChangeAccessorFieldPathIndex_t &);
	bool operator==(const int16 &);
	bool operator!=(const int16 &);
	bool Less(const ChangeAccessorFieldPathIndex_t &, const ChangeAccessorFieldPathIndex_t &);

	// sizeof = 2
};

// src/public/networksystem/networksystemtypes.h:267
struct ChangeAccessorFieldPathIndexInfo_t {
	struct IgnoreCache_t {
		short unsigned int m_Offsets[16];  // +0x0
		int m_nCount;  // +0x40
		int m_nFirstElement;  // +0x44
		IgnoreCache_t();
		bool Lookup(uint32, ChangeAccessorFieldPathIndex_t);
		void Cache(uint32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 80
	};
	/* tag__fprintf: const_type tag not supported! */;

	PackedFieldPathVec_t m_ChangeAccessorFieldPathIdList;  // +0x0
	const OffsetIgnore_t * m_pBaseOffsetToIgnore;  // +0x10

	ChangeAccessorFieldPathIndexInfo_t();
	PackedFieldPath_t GetChangeAccessorPath(ChangeAccessorFieldPathIndex_t);
	ChangeAccessorFieldPathIndex_t FindChangeAccessorPath(PackedFieldPath_t);
	ChangeAccessorFieldPathIndex_t AddChangeAccessorPath(PackedFieldPath_t, const OffsetIgnore_t *);
	const OffsetIgnore_t * LookupOffsetsToIgnoreForPath(const ChangeAccessorFieldPathIndex_t &);
	~ChangeAccessorFieldPathIndexInfo_t();

	// sizeof = 240
};

// src/public/networksystem/networksystemtypes.h:267
struct ChangeAccessorFieldPathIndexInfo_t {
	struct IgnoreCache_t {
		short unsigned int m_Offsets[16];  // +0x0
		int m_nCount;  // +0x40
		int m_nFirstElement;  // +0x44
		IgnoreCache_t();
		bool Lookup(uint32, ChangeAccessorFieldPathIndex_t);
		void Cache(uint32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 80
	};
	/* tag__fprintf: const_type tag not supported! */;

	PackedFieldPathVec_t m_ChangeAccessorFieldPathIdList;  // +0x0
	const OffsetIgnore_t * m_pBaseOffsetToIgnore;  // +0x10

	ChangeAccessorFieldPathIndexInfo_t();
	PackedFieldPath_t GetChangeAccessorPath(ChangeAccessorFieldPathIndex_t);
	ChangeAccessorFieldPathIndex_t FindChangeAccessorPath(PackedFieldPath_t);
	ChangeAccessorFieldPathIndex_t AddChangeAccessorPath(PackedFieldPath_t, const OffsetIgnore_t *);
	const OffsetIgnore_t * LookupOffsetsToIgnoreForPath(const ChangeAccessorFieldPathIndex_t &);

	// sizeof = 240
};

// src/public/networksystem/networksystemtypes.h:341
struct VarChangeInfo_t {
	int16 m_nArrayIndex;  // +0x2
	int32 m_nFieldOffset:31;  // +0x4:0
	uint32 m_bResolved:1;  // +0x4:31
	VarChangeInfo_t();
	bool operator==(const VarChangeInfo_t &);
	bool Less(const VarChangeInfo_t &, const VarChangeInfo_t &);

	// sizeof = 8
};

// src/public/networksystem/networksystemtypes.h:390
struct NetMessageHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/networksystem/networksystemtypes.h:394
struct FlattenedSerializerHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/networksystem/networksystemtypes.h:398
class MNetworkAssumeNotNetworkable {
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

// src/public/networksystem/networksystemtypes.h:399
class MNetworkGroup {
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

// src/public/networksystem/networksystemtypes.h:400
class MNetworkBufType {
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

// src/public/networksystem/networksystemtypes.h:403
class MNetworkProceduralDataHelper {
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

// src/public/networksystem/networksystemtypes.h:414
struct NetworkOverride_t {
	const char * m_pClassName;  // +0x0
	const char * m_pFieldName;  // +0x8
	const char * m_pNewValueString;  // +0x10
	NetworkOverride_t();
	NetworkOverride_t(const char *, NetworkOverrideType_t, const char *);
	NetworkOverride_t(const char *, const char *, NetworkOverrideType_t, const char *);
	bool operator==(const NetworkOverride_t &);

	// sizeof = 32
};

// src/public/networksystem/networksystemtypes.h:447
class MNetworkOverride {
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
	NetworkOverride_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<NetworkOverride_t*, CUtlMemory<NetworkOverride_t*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	NetworkOverride_t GetValue(ClassIntrospectionHandle_t, NetworkOverride_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, NetworkOverride_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	NetworkOverride_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<NetworkOverride_t*, CUtlMemory<NetworkOverride_t*, int> > &);
	NetworkOverride_t GetValue(FieldIntrospectionHandle_t, NetworkOverride_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, NetworkOverride_t *);
	NetworkOverride_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<NetworkOverride_t*, CUtlMemory<NetworkOverride_t*, int> > &);
	NetworkOverride_t GetValue(StaticFieldIntrospectionHandle_t, NetworkOverride_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, NetworkOverride_t *);
	NetworkOverride_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<NetworkOverride_t*, CUtlMemory<NetworkOverride_t*, int> > &);
	NetworkOverride_t GetValue(EnumIntrospectionHandle_t, NetworkOverride_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, NetworkOverride_t *);
	NetworkOverride_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<NetworkOverride_t*, CUtlMemory<NetworkOverride_t*, int> > &);
	NetworkOverride_t GetValue(EnumeratorIntrospectionHandle_t, NetworkOverride_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, NetworkOverride_t *);
	NetworkOverride_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<NetworkOverride_t*, CUtlMemory<NetworkOverride_t*, int> > &);
	NetworkOverride_t GetValue(AtomicTypeIntrospectionHandle_t, NetworkOverride_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, NetworkOverride_t *);
	NetworkOverride_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<NetworkOverride_t*, CUtlMemory<NetworkOverride_t*, int> > &);
	NetworkOverride_t GetValue(MetadataIntrospectionHandle_t, NetworkOverride_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, NetworkOverride_t *);
	NetworkOverride_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<NetworkOverride_t*, CUtlMemory<NetworkOverride_t*, int> > &);
	NetworkOverride_t GetValue(FieldIteratorHandle_t, NetworkOverride_t);
	bool TestAndGetValue(FieldIteratorHandle_t, NetworkOverride_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, NetworkOverride_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, NetworkOverride_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/networksystem/networksystemtypes.h:450
class MNetworkNoBase {
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

// src/public/networksystem/networksystemtypes.h:456
class MNetworkExcludeByName {
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

// src/public/networksystem/networksystemtypes.h:458
class MNetworkIncludeByName {
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

// src/public/networksystem/networksystemtypes.h:461
class MNetworkExcludeByUserGroup {
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

// src/public/networksystem/networksystemtypes.h:463
class MNetworkIncludeByUserGroup {
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

// src/public/networksystem/networksystemtypes.h:474
class MNetworkUserGroupSendProxyRecipientsFilter {
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
	NetworkUserGroupProxyInfo_t * * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<NetworkUserGroupProxyInfo_t**, CUtlMemory<NetworkUserGroupProxyInfo_t**, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	NetworkUserGroupProxyInfo_t * GetValue(ClassIntrospectionHandle_t, NetworkUserGroupProxyInfo_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, NetworkUserGroupProxyInfo_t * *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	NetworkUserGroupProxyInfo_t * * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<NetworkUserGroupProxyInfo_t**, CUtlMemory<NetworkUserGroupProxyInfo_t**, int> > &);
	NetworkUserGroupProxyInfo_t * GetValue(FieldIntrospectionHandle_t, NetworkUserGroupProxyInfo_t *);
	bool TestAndGetValue(FieldIntrospectionHandle_t, NetworkUserGroupProxyInfo_t * *);
	NetworkUserGroupProxyInfo_t * * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<NetworkUserGroupProxyInfo_t**, CUtlMemory<NetworkUserGroupProxyInfo_t**, int> > &);
	NetworkUserGroupProxyInfo_t * GetValue(StaticFieldIntrospectionHandle_t, NetworkUserGroupProxyInfo_t *);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, NetworkUserGroupProxyInfo_t * *);
	NetworkUserGroupProxyInfo_t * * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<NetworkUserGroupProxyInfo_t**, CUtlMemory<NetworkUserGroupProxyInfo_t**, int> > &);
	NetworkUserGroupProxyInfo_t * GetValue(EnumIntrospectionHandle_t, NetworkUserGroupProxyInfo_t *);
	bool TestAndGetValue(EnumIntrospectionHandle_t, NetworkUserGroupProxyInfo_t * *);
	NetworkUserGroupProxyInfo_t * * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<NetworkUserGroupProxyInfo_t**, CUtlMemory<NetworkUserGroupProxyInfo_t**, int> > &);
	NetworkUserGroupProxyInfo_t * GetValue(EnumeratorIntrospectionHandle_t, NetworkUserGroupProxyInfo_t *);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, NetworkUserGroupProxyInfo_t * *);
	NetworkUserGroupProxyInfo_t * * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<NetworkUserGroupProxyInfo_t**, CUtlMemory<NetworkUserGroupProxyInfo_t**, int> > &);
	NetworkUserGroupProxyInfo_t * GetValue(AtomicTypeIntrospectionHandle_t, NetworkUserGroupProxyInfo_t *);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, NetworkUserGroupProxyInfo_t * *);
	NetworkUserGroupProxyInfo_t * * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<NetworkUserGroupProxyInfo_t**, CUtlMemory<NetworkUserGroupProxyInfo_t**, int> > &);
	NetworkUserGroupProxyInfo_t * GetValue(MetadataIntrospectionHandle_t, NetworkUserGroupProxyInfo_t *);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, NetworkUserGroupProxyInfo_t * *);
	NetworkUserGroupProxyInfo_t * * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<NetworkUserGroupProxyInfo_t**, CUtlMemory<NetworkUserGroupProxyInfo_t**, int> > &);
	NetworkUserGroupProxyInfo_t * GetValue(FieldIteratorHandle_t, NetworkUserGroupProxyInfo_t *);
	bool TestAndGetValue(FieldIteratorHandle_t, NetworkUserGroupProxyInfo_t * *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, NetworkUserGroupProxyInfo_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, NetworkUserGroupProxyInfo_t *);
	int MetaFlags();

	// sizeof = 1
};

// src/public/networksystem/networksystemtypes.h:475
class MNetworkVarNames {
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
	NetworkVarDecl_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<NetworkVarDecl_t*, CUtlMemory<NetworkVarDecl_t*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	NetworkVarDecl_t GetValue(ClassIntrospectionHandle_t, NetworkVarDecl_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, NetworkVarDecl_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	NetworkVarDecl_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<NetworkVarDecl_t*, CUtlMemory<NetworkVarDecl_t*, int> > &);
	NetworkVarDecl_t GetValue(FieldIntrospectionHandle_t, NetworkVarDecl_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, NetworkVarDecl_t *);
	NetworkVarDecl_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<NetworkVarDecl_t*, CUtlMemory<NetworkVarDecl_t*, int> > &);
	NetworkVarDecl_t GetValue(StaticFieldIntrospectionHandle_t, NetworkVarDecl_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, NetworkVarDecl_t *);
	NetworkVarDecl_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<NetworkVarDecl_t*, CUtlMemory<NetworkVarDecl_t*, int> > &);
	NetworkVarDecl_t GetValue(EnumIntrospectionHandle_t, NetworkVarDecl_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, NetworkVarDecl_t *);
	NetworkVarDecl_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<NetworkVarDecl_t*, CUtlMemory<NetworkVarDecl_t*, int> > &);
	NetworkVarDecl_t GetValue(EnumeratorIntrospectionHandle_t, NetworkVarDecl_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, NetworkVarDecl_t *);
	NetworkVarDecl_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<NetworkVarDecl_t*, CUtlMemory<NetworkVarDecl_t*, int> > &);
	NetworkVarDecl_t GetValue(AtomicTypeIntrospectionHandle_t, NetworkVarDecl_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, NetworkVarDecl_t *);
	NetworkVarDecl_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<NetworkVarDecl_t*, CUtlMemory<NetworkVarDecl_t*, int> > &);
	NetworkVarDecl_t GetValue(MetadataIntrospectionHandle_t, NetworkVarDecl_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, NetworkVarDecl_t *);
	NetworkVarDecl_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<NetworkVarDecl_t*, CUtlMemory<NetworkVarDecl_t*, int> > &);
	NetworkVarDecl_t GetValue(FieldIteratorHandle_t, NetworkVarDecl_t);
	bool TestAndGetValue(FieldIteratorHandle_t, NetworkVarDecl_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, NetworkVarDecl_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, NetworkVarDecl_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/networksystem/networksystemtypes.h:476
class MNetworkVarsDisable {
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

// src/public/networksystem/networksystemtypes.h:478
class MNetworkVarsAtomic {
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

// src/public/networksystem/networksystemtypes.h:481
class MNetworkOkToRedispatch {
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

// src/public/networksystem/networksystemtypes.h:482
class MNetworkDisable {
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

// src/public/networksystem/networksystemtypes.h:485
class MNetworkEnable {
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

// src/public/networksystem/networksystemtypes.h:486
class MNetworkSerializer {
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

// src/public/networksystem/networksystemtypes.h:487
class MNetworkArraySerializer {
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

// src/public/networksystem/networksystemtypes.h:488
class MNetworkCountField {
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

// src/public/networksystem/networksystemtypes.h:489
class MNetworkIfFieldTrue {
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

// src/public/networksystem/networksystemtypes.h:490
class MNetworkOptionalSerializer {
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

// src/public/networksystem/networksystemtypes.h:491
class MNetworkEncoder {
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

// src/public/networksystem/networksystemtypes.h:492
class MNetworkMinValue {
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
	float * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	float GetValue(ClassIntrospectionHandle_t, float, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, float *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	float * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(FieldIntrospectionHandle_t, float);
	bool TestAndGetValue(FieldIntrospectionHandle_t, float *);
	float * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(StaticFieldIntrospectionHandle_t, float);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, float *);
	float * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(EnumIntrospectionHandle_t, float);
	bool TestAndGetValue(EnumIntrospectionHandle_t, float *);
	float * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(EnumeratorIntrospectionHandle_t, float);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, float *);
	float * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(AtomicTypeIntrospectionHandle_t, float);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, float *);
	float * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(MetadataIntrospectionHandle_t, float);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, float *);
	float * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(FieldIteratorHandle_t, float);
	bool TestAndGetValue(FieldIteratorHandle_t, float *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, float, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, float);
	int MetaFlags();

	// sizeof = 1
};

// src/public/networksystem/networksystemtypes.h:493
class MNetworkMaxValue {
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
	float * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	float GetValue(ClassIntrospectionHandle_t, float, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, float *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	float * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(FieldIntrospectionHandle_t, float);
	bool TestAndGetValue(FieldIntrospectionHandle_t, float *);
	float * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(StaticFieldIntrospectionHandle_t, float);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, float *);
	float * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(EnumIntrospectionHandle_t, float);
	bool TestAndGetValue(EnumIntrospectionHandle_t, float *);
	float * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(EnumeratorIntrospectionHandle_t, float);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, float *);
	float * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(AtomicTypeIntrospectionHandle_t, float);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, float *);
	float * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(MetadataIntrospectionHandle_t, float);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, float *);
	float * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<float*, CUtlMemory<float*, int> > &);
	float GetValue(FieldIteratorHandle_t, float);
	bool TestAndGetValue(FieldIteratorHandle_t, float *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, float, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, float);
	int MetaFlags();

	// sizeof = 1
};

// src/public/networksystem/networksystemtypes.h:494
class MNetworkBitCount {
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

// src/public/networksystem/networksystemtypes.h:495
class MNetworkEncodeFlags {
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

// src/public/networksystem/networksystemtypes.h:498
class MNetworkChangeCallback {
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

// src/public/networksystem/networksystemtypes.h:499
class MNetworkSendProxyRecipientsFilter {
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
	SendProxyRecipientsFilter_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<void (**)(void*, void*, void*, CSendProxyRecipients*, int), CUtlMemory<void (**)(void*, void*, void*, CSendPro, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SendProxyRecipientsFilter_t GetValue(ClassIntrospectionHandle_t, SendProxyRecipientsFilter_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, SendProxyRecipientsFilter_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	SendProxyRecipientsFilter_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<void (**)(void*, void*, void*, CSendProxyRecipients*, int), CUtlMemory<void (**)(void*, void*, void*, CSendPro);
	SendProxyRecipientsFilter_t GetValue(FieldIntrospectionHandle_t, SendProxyRecipientsFilter_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, SendProxyRecipientsFilter_t *);
	SendProxyRecipientsFilter_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<void (**)(void*, void*, void*, CSendProxyRecipients*, int), CUtlMemory<void (**)(void*, void*, void*, CSendPro);
	SendProxyRecipientsFilter_t GetValue(StaticFieldIntrospectionHandle_t, SendProxyRecipientsFilter_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, SendProxyRecipientsFilter_t *);
	SendProxyRecipientsFilter_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<void (**)(void*, void*, void*, CSendProxyRecipients*, int), CUtlMemory<void (**)(void*, void*, void*, CSendPro);
	SendProxyRecipientsFilter_t GetValue(EnumIntrospectionHandle_t, SendProxyRecipientsFilter_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, SendProxyRecipientsFilter_t *);
	SendProxyRecipientsFilter_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<void (**)(void*, void*, void*, CSendProxyRecipients*, int), CUtlMemory<void (**)(void*, void*, void*, CSendPro);
	SendProxyRecipientsFilter_t GetValue(EnumeratorIntrospectionHandle_t, SendProxyRecipientsFilter_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, SendProxyRecipientsFilter_t *);
	SendProxyRecipientsFilter_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<void (**)(void*, void*, void*, CSendProxyRecipients*, int), CUtlMemory<void (**)(void*, void*, void*, CSendPro);
	SendProxyRecipientsFilter_t GetValue(AtomicTypeIntrospectionHandle_t, SendProxyRecipientsFilter_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, SendProxyRecipientsFilter_t *);
	SendProxyRecipientsFilter_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<void (**)(void*, void*, void*, CSendProxyRecipients*, int), CUtlMemory<void (**)(void*, void*, void*, CSendPro);
	SendProxyRecipientsFilter_t GetValue(MetadataIntrospectionHandle_t, SendProxyRecipientsFilter_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, SendProxyRecipientsFilter_t *);
	SendProxyRecipientsFilter_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<void (**)(void*, void*, void*, CSendProxyRecipients*, int), CUtlMemory<void (**)(void*, void*, void*, CSendPro);
	SendProxyRecipientsFilter_t GetValue(FieldIteratorHandle_t, SendProxyRecipientsFilter_t);
	bool TestAndGetValue(FieldIteratorHandle_t, SendProxyRecipientsFilter_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, SendProxyRecipientsFilter_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, SendProxyRecipientsFilter_t);
	int MetaFlags();

	// sizeof = 1
};

// src/public/networksystem/networksystemtypes.h:500
class MNetworkPriority {
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

// src/public/networksystem/networksystemtypes.h:503
class MNetworkAlias {
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

// src/public/networksystem/networksystemtypes.h:505
class MNetworkTypeAlias {
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

// src/public/networksystem/networksystemtypes.h:507
class MNetworkUserGroup {
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
