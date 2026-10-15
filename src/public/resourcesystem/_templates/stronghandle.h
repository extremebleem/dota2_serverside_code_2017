// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/stronghandle.h:82
class CStrongHandle<ResourceBindingVoid_t> : public CStrongHandleBase {
public:

	typedef const ResourceBinding_t<ResourceBindingVoid_t> * ResourceHandleTyped_t;
	typedef void ResourceDataTyped_t;
	CStrongHandle();
	CStrongHandle(ResourceHandleTyped_t);
	CStrongHandle(ResourceId_t);
	CStrongHandle(const char *);
	CStrongHandle(CStrongHandle<ResourceBindingVoid_t> &);
	CStrongHandle(const CWeakHandle<ResourceBindingVoid_t> &);
	~CStrongHandle();
	void Init(ResourceHandleTyped_t);
	void Init(ResourceId_t);
	void Init(const char *);
	void Init(const CWeakHandle<ResourceBindingVoid_t> &);
	void Init(const CStrongHandle<ResourceBindingVoid_t> &);
	void Shutdown();
	CStrongHandle<ResourceBindingVoid_t> & operator=(ResourceHandleTyped_t);
	CStrongHandle<ResourceBindingVoid_t> & operator=(const CStrongHandle<ResourceBindingVoid_t> &);
	CStrongHandle<ResourceBindingVoid_t> & operator=(const CWeakHandle<ResourceBindingVoid_t> &);
	bool IsValid();
	bool IsLoaded();
	bool IsError();
	const ResourceDataTyped_t * operator const ResourceDataTyped_t*();
	/* tag__fprintf: const_type tag not supported! */;
	const ResourceDataTyped_t * operator->();
	ResourceHandleTyped_t operator CStrongHandle<ResourceBindingVoid_t>::ResourceHandleTyped_t();
	ResourceHandle_t operator ResourceHandle_t();
	CWeakHandle<ResourceBindingVoid_t> operator CWeakHandle<ResourceBindingVoid_t>();
	const CWeakHandle<ResourceBindingVoid_t> GetHandle();
	const ResourceBinding_t<ResourceBindingVoid_t> * GetBinding();
	const ResourceDataTyped_t * GetData();
	bool operator==(ResourceHandle_t);
	bool operator==(ResourceHandleTyped_t);
	bool operator==(const CStrongHandle<ResourceBindingVoid_t> &);
	bool operator==(const CWeakHandle<ResourceBindingVoid_t> &);
	bool operator!=(ResourceHandle_t);
	bool operator!=(ResourceHandleTyped_t);
	bool operator!=(const CStrongHandle<ResourceBindingVoid_t> &);
	bool operator!=(const CWeakHandle<ResourceBindingVoid_t> &);
	int GetRefCount();
	int GetReloadCounter();
	void GetResourceName(char *, int);
	ResourceType_t GetResourceType();
	void Move(CStrongHandle<ResourceBindingVoid_t> &);

private:

	CStrongHandle(const CStrongHandle<ResourceBindingVoid_t> &);

	// sizeof = 8
};

// src/public/resourcesystem/stronghandle.h:82
class CStrongHandle<InfoForResourceTypeIMaterial2> : public CStrongHandleBase {
public:

	typedef const ResourceBinding_t<InfoForResourceTypeIMaterial2> * ResourceHandleTyped_t;
	CStrongHandle();
	CStrongHandle(ResourceHandleTyped_t);
	CStrongHandle(ResourceId_t);
	CStrongHandle(const char *);
	CStrongHandle(CStrongHandle<InfoForResourceTypeIMaterial2> &);
	CStrongHandle(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	~CStrongHandle();
	void Init(ResourceHandleTyped_t);
	void Init(ResourceId_t);
	void Init(const char *);
	void Init(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	void Init(const CStrongHandle<InfoForResourceTypeIMaterial2> &);
	void Shutdown();
	CStrongHandle<InfoForResourceTypeIMaterial2> & operator=(ResourceHandleTyped_t);
	CStrongHandle<InfoForResourceTypeIMaterial2> & operator=(const CStrongHandle<InfoForResourceTypeIMaterial2> &);
	CStrongHandle<InfoForResourceTypeIMaterial2> & operator=(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	bool IsValid();
	bool IsLoaded();
	bool IsError();
	const RuntimeClass_t * operator const RuntimeClass_t*();
	const RuntimeClass_t * operator->();
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t();
	ResourceHandle_t operator ResourceHandle_t();
	CWeakHandle<InfoForResourceTypeIMaterial2> operator CWeakHandle<InfoForResourceTypeIMaterial2>();
	const CWeakHandle<InfoForResourceTypeIMaterial2> GetHandle();
	const ResourceBinding_t<InfoForResourceTypeIMaterial2> * GetBinding();
	const RuntimeClass_t * GetData();
	bool operator==(ResourceHandle_t);
	bool operator==(ResourceHandleTyped_t);
	bool operator==(const CStrongHandle<InfoForResourceTypeIMaterial2> &);
	bool operator==(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	bool operator!=(ResourceHandle_t);
	bool operator!=(ResourceHandleTyped_t);
	bool operator!=(const CStrongHandle<InfoForResourceTypeIMaterial2> &);
	bool operator!=(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	int GetRefCount();
	int GetReloadCounter();
	void GetResourceName(char *, int);
	ResourceType_t GetResourceType();
	void Move(CStrongHandle<InfoForResourceTypeIMaterial2> &);

private:

	CStrongHandle(const CStrongHandle<InfoForResourceTypeIMaterial2> &);

	// sizeof = 8
};

// src/public/resourcesystem/stronghandle.h:82
class CStrongHandle<InfoForResourceTypeMorphSetData_t> : public CStrongHandleBase {
public:

	typedef const ResourceBinding_t<InfoForResourceTypeMorphSetData_t> * ResourceHandleTyped_t;
	CStrongHandle();
	CStrongHandle(ResourceHandleTyped_t);
	CStrongHandle(ResourceId_t);
	CStrongHandle(const char *);
	CStrongHandle(CStrongHandle<InfoForResourceTypeMorphSetData_t> &);
	CStrongHandle(const CWeakHandle<InfoForResourceTypeMorphSetData_t> &);
	~CStrongHandle();
	void Init(ResourceHandleTyped_t);
	void Init(ResourceId_t);
	void Init(const char *);
	void Init(const CWeakHandle<InfoForResourceTypeMorphSetData_t> &);
	void Init(const CStrongHandle<InfoForResourceTypeMorphSetData_t> &);
	void Shutdown();
	CStrongHandle<InfoForResourceTypeMorphSetData_t> & operator=(ResourceHandleTyped_t);
	CStrongHandle<InfoForResourceTypeMorphSetData_t> & operator=(const CStrongHandle<InfoForResourceTypeMorphSetData_t> &);
	CStrongHandle<InfoForResourceTypeMorphSetData_t> & operator=(const CWeakHandle<InfoForResourceTypeMorphSetData_t> &);
	bool IsValid();
	bool IsLoaded();
	bool IsError();
	const RuntimeClass_t * operator const RuntimeClass_t*();
	const RuntimeClass_t * operator->();
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeMorphSetData_t>::ResourceHandleTyped_t();
	ResourceHandle_t operator ResourceHandle_t();
	CWeakHandle<InfoForResourceTypeMorphSetData_t> operator CWeakHandle<InfoForResourceTypeMorphSetData_t>();
	const CWeakHandle<InfoForResourceTypeMorphSetData_t> GetHandle();
	const ResourceBinding_t<InfoForResourceTypeMorphSetData_t> * GetBinding();
	const RuntimeClass_t * GetData();
	bool operator==(ResourceHandle_t);
	bool operator==(ResourceHandleTyped_t);
	bool operator==(const CStrongHandle<InfoForResourceTypeMorphSetData_t> &);
	bool operator==(const CWeakHandle<InfoForResourceTypeMorphSetData_t> &);
	bool operator!=(ResourceHandle_t);
	bool operator!=(ResourceHandleTyped_t);
	bool operator!=(const CStrongHandle<InfoForResourceTypeMorphSetData_t> &);
	bool operator!=(const CWeakHandle<InfoForResourceTypeMorphSetData_t> &);
	int GetRefCount();
	int GetReloadCounter();
	void GetResourceName(char *, int);
	ResourceType_t GetResourceType();
	void Move(CStrongHandle<InfoForResourceTypeMorphSetData_t> &);

private:

	CStrongHandle(const CStrongHandle<InfoForResourceTypeMorphSetData_t> &);

	// sizeof = 8
};

// src/public/resourcesystem/stronghandle.h:166
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeCModel> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/resourcesystem/stronghandle.h:166
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeIMaterial2> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/resourcesystem/stronghandle.h:166
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeCTextureBase> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/resourcesystem/stronghandle.h:173
class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> : public CStrongHandle<InfoForResourceTypeIMaterial2> {
public:

	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	CStrongHandleCopyable();
	CStrongHandleCopyable(ResourceHandleTyped_t);
	CStrongHandleCopyable(ResourceId_t);
	CStrongHandleCopyable(const char *);
	CStrongHandleCopyable(const CStrongHandleCopyable<InfoForResourceTypeIMaterial2> &);
	CStrongHandleCopyable(const CStrongHandle<InfoForResourceTypeIMaterial2> &);
	CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2> & operator=(ResourceHandleTyped_t);
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2> & operator=(const CStrongHandle<InfoForResourceTypeIMaterial2> &);
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2> & operator=(const CWeakHandle<InfoForResourceTypeIMaterial2> &);
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2> & operator=(const CStrongHandleCopyable<InfoForResourceTypeIMaterial2> &);

	// sizeof = 8
};

// src/public/resourcesystem/stronghandle.h:173
class CStrongHandleCopyable<InfoForResourceTypeCPhysAggregateData> : public CStrongHandle<InfoForResourceTypeCPhysAggregateData> {
public:

	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	CStrongHandleCopyable();
	CStrongHandleCopyable(ResourceHandleTyped_t);
	CStrongHandleCopyable(ResourceId_t);
	CStrongHandleCopyable(const char *);
	CStrongHandleCopyable(const CStrongHandleCopyable<InfoForResourceTypeCPhysAggregateData> &);
	CStrongHandleCopyable(const CStrongHandle<InfoForResourceTypeCPhysAggregateData> &);
	CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeCPhysAggregateData> &);
	CStrongHandleCopyable<InfoForResourceTypeCPhysAggregateData> & operator=(ResourceHandleTyped_t);
	CStrongHandleCopyable<InfoForResourceTypeCPhysAggregateData> & operator=(const CStrongHandle<InfoForResourceTypeCPhysAggregateData> &);
	CStrongHandleCopyable<InfoForResourceTypeCPhysAggregateData> & operator=(const CWeakHandle<InfoForResourceTypeCPhysAggregateData> &);
	CStrongHandleCopyable<InfoForResourceTypeCPhysAggregateData> & operator=(const CStrongHandleCopyable<InfoForResourceTypeCPhysAggregateData> &);
	~CStrongHandleCopyable();

	// sizeof = 8
};

// src/public/resourcesystem/stronghandle.h:216
class CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCModel> : public ISchemaInspectionManipulator {
public:

	~CSchemaStrongHandleInspectionManipulator();
	CSchemaStrongHandleInspectionManipulator(CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCModel> &);
	CSchemaStrongHandleInspectionManipulator(const CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCModel> &);
	CSchemaStrongHandleInspectionManipulator();
	virtual void Inspect(const void *, ISchemaSerializationTarget *);

	// vtable[0] Inspect
	// sizeof = 8
};

// src/public/resourcesystem/stronghandle.h:216
class CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIMaterial2> : public ISchemaInspectionManipulator {
public:

	~CSchemaStrongHandleInspectionManipulator();
	CSchemaStrongHandleInspectionManipulator(CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIMaterial2> &);
	CSchemaStrongHandleInspectionManipulator(const CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIMaterial2> &);
	CSchemaStrongHandleInspectionManipulator();
	virtual void Inspect(const void *, ISchemaSerializationTarget *);

	// vtable[0] Inspect
	// sizeof = 8
};

// src/public/resourcesystem/stronghandle.h:216
class CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCTextureBase> : public ISchemaInspectionManipulator {
public:

	~CSchemaStrongHandleInspectionManipulator();
	CSchemaStrongHandleInspectionManipulator(CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCTextureBase> &);
	CSchemaStrongHandleInspectionManipulator(const CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCTextureBase> &);
	CSchemaStrongHandleInspectionManipulator();
	virtual void Inspect(const void *, ISchemaSerializationTarget *);

	// vtable[0] Inspect
	// sizeof = 8
};

// src/public/resourcesystem/stronghandle.h:239
class CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel> > : public ISchemaManipulator {
public:

	CSchemaManipulator(CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel> > *, CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel> > &);
	CSchemaManipulator(CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel> > *, const CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel> > &);
	CSchemaManipulator(CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel> > *);
	ISchemaManipulator * StaticAccessor();
	virtual void * SearchForInterface(CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel> > *, SchemaManipulatorInterfaceType_t);

	// vtable[0] SearchForInterface
	// sizeof = 16
};

// src/public/resourcesystem/stronghandle.h:239
class CSchemaManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> > : public ISchemaManipulator {
public:

	CSchemaManipulator(CSchemaManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> > *, CSchemaManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> > &);
	CSchemaManipulator(CSchemaManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> > *, const CSchemaManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> > &);
	CSchemaManipulator(CSchemaManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> > *);
	ISchemaManipulator * StaticAccessor();
	virtual void * SearchForInterface(CSchemaManipulator<CStrongHandle<InfoForResourceTypeIMaterial2> > *, SchemaManipulatorInterfaceType_t);

	// vtable[0] SearchForInterface
	// sizeof = 16
};

// src/public/resourcesystem/stronghandle.h:239
class CSchemaManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> > : public ISchemaManipulator {
public:

	CSchemaManipulator(CSchemaManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> > *, CSchemaManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> > &);
	CSchemaManipulator(CSchemaManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> > *, const CSchemaManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> > &);
	CSchemaManipulator(CSchemaManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> > *);
	ISchemaManipulator * StaticAccessor();
	virtual void * SearchForInterface(CSchemaManipulator<CStrongHandle<InfoForResourceTypeCTextureBase> > *, SchemaManipulatorInterfaceType_t);

	// vtable[0] SearchForInterface
	// sizeof = 16
};

// CStrongHandle: 7 more instantiations (full list in INDEX.tsv)
//   CStrongHandle<InfoForResourceTypeCModel>
//   CStrongHandle<InfoForResourceTypeCTextureBase>
//   CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
//   CStrongHandle<InfoForResourceTypeCPhysAggregateData>
//   CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>
//   CStrongHandle<InfoForResourceTypeCRenderMesh>
//   CStrongHandle<InfoForResourceTypeCPostProcessingResource>

// CSchemaTypeOf: 2 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> >
//   CSchemaTypeOf<CStrongHandle<InfoForResourceTypeCPostProcessingResource> >

// CSchemaStrongHandleInspectionManipulator: 2 more instantiations (full list in INDEX.tsv)
//   CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition>
//   CSchemaStrongHandleInspectionManipulator<InfoForResourceTypeCPostProcessingResource>

// CSchemaManipulator: 2 more instantiations (full list in INDEX.tsv)
//   CSchemaManipulator<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> >
//   CSchemaManipulator<CStrongHandle<InfoForResourceTypeCPostProcessingResource> >
