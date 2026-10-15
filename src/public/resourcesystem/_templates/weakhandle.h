// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/weakhandle.h:34
class CWeakHandle<ResourceBindingVoid_t> : public CWeakHandleBase {
public:

	typedef const ResourceBinding_t<ResourceBindingVoid_t> * ResourceHandleTyped_t;
	typedef void ResourceDataTyped_t;
	CWeakHandle();
	CWeakHandle(const CWeakHandle<ResourceBindingVoid_t> &);
	CWeakHandle(ResourceHandleTyped_t);
	CWeakHandle(ResourceId_t);
	CWeakHandle(const char *);
	~CWeakHandle();
	void Init(ResourceHandleTyped_t);
	void Init(ResourceId_t);
	void Init(const char *);
	void Init(const CWeakHandle<ResourceBindingVoid_t> &);
	void InitUntyped(ResourceHandle_t);
	void InitUntypedUnchecked(ResourceHandle_t);
	CWeakHandle<ResourceBindingVoid_t> & operator=(const CWeakHandle<ResourceBindingVoid_t> &);
	bool IsValid();
	bool IsLoaded();
	bool IsError();
	const ResourceDataTyped_t * operator const ResourceDataTyped_t*();
	/* tag__fprintf: const_type tag not supported! */;
	const ResourceDataTyped_t * operator->();
	ResourceHandleTyped_t operator CWeakHandle<ResourceBindingVoid_t>::ResourceHandleTyped_t();
	ResourceHandle_t operator ResourceHandle_t();
	const ResourceBinding_t<ResourceBindingVoid_t> * GetBinding();
	const ResourceDataTyped_t * GetData();
	bool operator==(ResourceHandle_t);
	bool operator==(ResourceHandleTyped_t);
	bool operator==(const CWeakHandle<ResourceBindingVoid_t> &);
	bool operator!=(ResourceHandle_t);
	bool operator!=(ResourceHandleTyped_t);
	bool operator!=(const CWeakHandle<ResourceBindingVoid_t> &);
	bool operator<(const CWeakHandle<ResourceBindingVoid_t> &);
	bool operator<=(const CWeakHandle<ResourceBindingVoid_t> &);
	bool operator>(const CWeakHandle<ResourceBindingVoid_t> &);
	bool operator>=(const CWeakHandle<ResourceBindingVoid_t> &);
	bool operator!();
	int GetRefCount();
	int GetReloadCounter();
	ResourceType_t GetResourceType();
	CWeakHandle<ResourceBindingVoid_t> FromUntypedHandle(ResourceHandle_t);
	CWeakHandle<ResourceBindingVoid_t> FromUntypedHandleUnchecked(ResourceHandle_t);
	CWeakHandle<ResourceBindingVoid_t> StaticInvalidHandle();
	void GetResourceName(char *, int);

	// sizeof = 8
};

// src/public/resourcesystem/weakhandle.h:34
class CWeakHandle<InfoForResourceTypeIMaterial2> : public CWeakHandleBase {
public:

	typedef const ResourceBinding_t<InfoForResourceTypeIMaterial2> * ResourceHandleTyped_t;
	CWeakHandle();
	CWeakHandle(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	CWeakHandle(ResourceHandleTyped_t);
	CWeakHandle(ResourceId_t);
	CWeakHandle(const char *);
	~CWeakHandle();
	void Init(ResourceHandleTyped_t);
	void Init(ResourceId_t);
	void Init(const char *);
	void Init(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	void InitUntyped(ResourceHandle_t);
	void InitUntypedUnchecked(ResourceHandle_t);
	CWeakHandle<InfoForResourceTypeIMaterial2> & operator=(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	bool IsValid();
	bool IsLoaded();
	bool IsError();
	const RuntimeClass_t * operator const RuntimeClass_t*();
	const RuntimeClass_t * operator->();
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t();
	ResourceHandle_t operator ResourceHandle_t();
	const ResourceBinding_t<InfoForResourceTypeIMaterial2> * GetBinding();
	const RuntimeClass_t * GetData();
	bool operator==(ResourceHandle_t);
	bool operator==(ResourceHandleTyped_t);
	bool operator==(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	bool operator!=(ResourceHandle_t);
	bool operator!=(ResourceHandleTyped_t);
	bool operator!=(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	bool operator<(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	bool operator<=(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	bool operator>(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	bool operator>=(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	bool operator!();
	int GetRefCount();
	int GetReloadCounter();
	ResourceType_t GetResourceType();
	CWeakHandle<InfoForResourceTypeIMaterial2> FromUntypedHandle(ResourceHandle_t);
	CWeakHandle<InfoForResourceTypeIMaterial2> FromUntypedHandleUnchecked(ResourceHandle_t);
	CWeakHandle<InfoForResourceTypeIMaterial2> StaticInvalidHandle();
	void GetResourceName(char *, int);

	// sizeof = 8
};

// src/public/resourcesystem/weakhandle.h:34
class CWeakHandle<InfoForResourceTypeCModel> : public CWeakHandleBase {
public:

	typedef const ResourceBinding_t<InfoForResourceTypeCModel> * ResourceHandleTyped_t;
	CWeakHandle();
	CWeakHandle(const CWeakHandle<InfoForResourceTypeCModel> &);
	CWeakHandle(ResourceHandleTyped_t);
	CWeakHandle(ResourceId_t);
	CWeakHandle(const char *);
	~CWeakHandle();
	void Init(ResourceHandleTyped_t);
	void Init(ResourceId_t);
	void Init(const char *);
	void Init(const CWeakHandle<InfoForResourceTypeCModel> &);
	void InitUntyped(ResourceHandle_t);
	void InitUntypedUnchecked(ResourceHandle_t);
	CWeakHandle<InfoForResourceTypeCModel> & operator=(const CWeakHandle<InfoForResourceTypeCModel> &);
	bool IsValid();
	bool IsLoaded();
	bool IsError();
	const RuntimeClass_t * operator const RuntimeClass_t*();
	const RuntimeClass_t * operator->();
	ResourceHandleTyped_t operator CWeakHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t();
	ResourceHandle_t operator ResourceHandle_t();
	const ResourceBinding_t<InfoForResourceTypeCModel> * GetBinding();
	const RuntimeClass_t * GetData();
	bool operator==(ResourceHandle_t);
	bool operator==(ResourceHandleTyped_t);
	bool operator==(const CWeakHandle<InfoForResourceTypeCModel> &);
	bool operator!=(ResourceHandle_t);
	bool operator!=(ResourceHandleTyped_t);
	bool operator!=(const CWeakHandle<InfoForResourceTypeCModel> &);
	bool operator<(const CWeakHandle<InfoForResourceTypeCModel> &);
	bool operator<=(const CWeakHandle<InfoForResourceTypeCModel> &);
	bool operator>(const CWeakHandle<InfoForResourceTypeCModel> &);
	bool operator>=(const CWeakHandle<InfoForResourceTypeCModel> &);
	bool operator!();
	int GetRefCount();
	int GetReloadCounter();
	ResourceType_t GetResourceType();
	CWeakHandle<InfoForResourceTypeCModel> FromUntypedHandle(ResourceHandle_t);
	CWeakHandle<InfoForResourceTypeCModel> FromUntypedHandleUnchecked(ResourceHandle_t);
	CWeakHandle<InfoForResourceTypeCModel> StaticInvalidHandle();
	void GetResourceName(char *, int);

	// sizeof = 8
};

// src/public/resourcesystem/weakhandle.h:150
class CSchemaTypeOf<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/resourcesystem/weakhandle.h:150
class CSchemaTypeOf<CWeakHandle<InfoForResourceTypeIMaterial2> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/resourcesystem/weakhandle.h:150
class CSchemaTypeOf<CWeakHandle<InfoForResourceTypeMorphSetData_t> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/resourcesystem/weakhandle.h:156
class CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition> : public ISchemaInspectionManipulator {
public:

	~CSchemaWeakHandleInspectionManipulator();
	CSchemaWeakHandleInspectionManipulator(CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition> &);
	CSchemaWeakHandleInspectionManipulator(const CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition> &);
	CSchemaWeakHandleInspectionManipulator();
	virtual void Inspect(const void *, ISchemaSerializationTarget *);

	// vtable[0] Inspect
	// sizeof = 8
};

// src/public/resourcesystem/weakhandle.h:156
class CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeMorphSetData_t> : public ISchemaInspectionManipulator {
public:

	~CSchemaWeakHandleInspectionManipulator();
	CSchemaWeakHandleInspectionManipulator(CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeMorphSetData_t> &);
	CSchemaWeakHandleInspectionManipulator(const CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeMorphSetData_t> &);
	CSchemaWeakHandleInspectionManipulator();
	virtual void Inspect(const void *, ISchemaSerializationTarget *);

	// vtable[0] Inspect
	// sizeof = 8
};

// src/public/resourcesystem/weakhandle.h:156
class CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIMaterial2> : public ISchemaInspectionManipulator {
public:

	~CSchemaWeakHandleInspectionManipulator();
	CSchemaWeakHandleInspectionManipulator(CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIMaterial2> &);
	CSchemaWeakHandleInspectionManipulator(const CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIMaterial2> &);
	CSchemaWeakHandleInspectionManipulator();
	virtual void Inspect(const void *, ISchemaSerializationTarget *);

	// vtable[0] Inspect
	// sizeof = 8
};

// src/public/resourcesystem/weakhandle.h:181
class CSchemaManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> > : public ISchemaManipulator {
public:

	CSchemaManipulator(CSchemaManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> > *, CSchemaManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> > &);
	CSchemaManipulator(CSchemaManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> > *, const CSchemaManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> > &);
	CSchemaManipulator(CSchemaManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> > *);
	ISchemaManipulator * StaticAccessor();
	virtual void * SearchForInterface(CSchemaManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> > *, SchemaManipulatorInterfaceType_t);

	// vtable[0] SearchForInterface
	// sizeof = 16
};

// src/public/resourcesystem/weakhandle.h:181
class CSchemaManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t> > : public ISchemaManipulator {
public:

	CSchemaManipulator(CSchemaManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t> > *, CSchemaManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t> > &);
	CSchemaManipulator(CSchemaManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t> > *, const CSchemaManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t> > &);
	CSchemaManipulator(CSchemaManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t> > *);
	ISchemaManipulator * StaticAccessor();
	virtual void * SearchForInterface(CSchemaManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t> > *, SchemaManipulatorInterfaceType_t);

	// vtable[0] SearchForInterface
	// sizeof = 16
};

// src/public/resourcesystem/weakhandle.h:181
class CSchemaManipulator<CWeakHandle<InfoForResourceTypeIMaterial2> > : public ISchemaManipulator {
public:

	CSchemaManipulator(CSchemaManipulator<CWeakHandle<InfoForResourceTypeIMaterial2> > *, CSchemaManipulator<CWeakHandle<InfoForResourceTypeIMaterial2> > &);
	CSchemaManipulator(CSchemaManipulator<CWeakHandle<InfoForResourceTypeIMaterial2> > *, const CSchemaManipulator<CWeakHandle<InfoForResourceTypeIMaterial2> > &);
	CSchemaManipulator(CSchemaManipulator<CWeakHandle<InfoForResourceTypeIMaterial2> > *);
	ISchemaManipulator * StaticAccessor();
	virtual void * SearchForInterface(CSchemaManipulator<CWeakHandle<InfoForResourceTypeIMaterial2> > *, SchemaManipulatorInterfaceType_t);

	// vtable[0] SearchForInterface
	// sizeof = 16
};

// CWeakHandle: 9 more instantiations (full list in INDEX.tsv)
//   CWeakHandle<InfoForResourceTypeCTextureBase>
//   CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
//   CWeakHandle<InfoForResourceTypeCPhysAggregateData>
//   CWeakHandle<InfoForResourceTypeWorldLighting_t>
//   CWeakHandle<InfoForResourceTypeCPostProcessingResource>
//   CWeakHandle<InfoForResourceTypeCRenderMesh>
//   CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t>
//   CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t>
//   CWeakHandle<InfoForResourceTypeMorphSetData_t>

// CSchemaTypeOf: 6 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<CWeakHandle<InfoForResourceTypeCModel> >
//   CSchemaTypeOf<CWeakHandle<InfoForResourceTypeCRenderMesh> >
//   CSchemaTypeOf<CWeakHandle<InfoForResourceTypeCPhysAggregateData> >
//   CSchemaTypeOf<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> >
//   CSchemaTypeOf<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> >
//   CSchemaTypeOf<CWeakHandle<InfoForResourceTypeCTextureBase> >

// CSchemaWeakHandleInspectionManipulator: 6 more instantiations (full list in INDEX.tsv)
//   CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeSequenceGroupResourceData_t>
//   CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeAnimationGroupResourceData_t>
//   CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCPhysAggregateData>
//   CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCRenderMesh>
//   CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCModel>
//   CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCTextureBase>

// CSchemaManipulator: 6 more instantiations (full list in INDEX.tsv)
//   CSchemaManipulator<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> >
//   CSchemaManipulator<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> >
//   CSchemaManipulator<CWeakHandle<InfoForResourceTypeCPhysAggregateData> >
//   CSchemaManipulator<CWeakHandle<InfoForResourceTypeCRenderMesh> >
//   CSchemaManipulator<CWeakHandle<InfoForResourceTypeCModel> >
//   CSchemaManipulator<CWeakHandle<InfoForResourceTypeCTextureBase> >
