// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcefile/resourcetype.h:241
struct ResourceBinding_t<ResourceBindingVoid_t> : public ResourceBindingBase_t {
public:

	ResourceBinding_t();

	// sizeof = 32
};

// src/public/resourcefile/resourcetype.h:241
struct ResourceBinding_t<InfoForResourceTypeCTextureBase> : public ResourceBindingBase_t {
public:

	ResourceBinding_t();

	// sizeof = 32
};

// src/public/resourcefile/resourcetype.h:241
struct ResourceBinding_t<InfoForResourceTypeIMaterial2> : public ResourceBindingBase_t {
public:

	ResourceBinding_t();

	// sizeof = 32
};

// src/public/resourcefile/resourcetype.h:372
class CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > : public CResourceExtReferenceBase {
public:

	CResourceExtReference(CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > *);
	CResourceExtReference(CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > *, CWeakHandle<InfoForResourceTypeIMaterial2>);
	CWeakHandle<InfoForResourceTypeIMaterial2> GetHandle(const CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > *);
	bool operator!=(const CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > *, const CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > &);
	bool operator==(const CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > *, const CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > &);

	// sizeof = 8
};

// src/public/resourcefile/resourcetype.h:372
class CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > : public CResourceExtReferenceBase {
public:

	CResourceExtReference(CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > *);
	CResourceExtReference(CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > *, CWeakHandle<InfoForResourceTypeCTextureBase>);
	CWeakHandle<InfoForResourceTypeCTextureBase> GetHandle(const CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > *);
	bool operator!=(const CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > *, const CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > &);
	bool operator==(const CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > *, const CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > &);

	// sizeof = 8
};

// src/public/resourcefile/resourcetype.h:372
class CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > : public CResourceExtReferenceBase {
public:

	CResourceExtReference(CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > *);
	CResourceExtReference(CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > *, CWeakHandle<InfoForResourceTypeMorphSetData_t>);
	CWeakHandle<InfoForResourceTypeMorphSetData_t> GetHandle(const CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > *);
	bool operator!=(const CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > *, const CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > &);
	bool operator==(const CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > *, const CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > &);

	// sizeof = 8
};

// src/public/resourcefile/resourcetype.h:403
class CSchemaTypeOf<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/resourcefile/resourcetype.h:403
class CSchemaTypeOf<CResourceExtReference<CWeakHandle<InfoForResourceTypeMorphSetData_t> > > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/resourcefile/resourcetype.h:403
class CSchemaTypeOf<CResourceExtReference<CWeakHandle<InfoForResourceTypeCModel> > > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// ResourceBinding_t: 9 more instantiations (full list in INDEX.tsv)
//   ResourceBinding_t<InfoForResourceTypeCModel>
//   ResourceBinding_t<InfoForResourceTypeIParticleSystemDefinition>
//   ResourceBinding_t<InfoForResourceTypeCPhysAggregateData>
//   ResourceBinding_t<InfoForResourceTypeWorldLighting_t>
//   ResourceBinding_t<InfoForResourceTypeCPostProcessingResource>
//   ResourceBinding_t<InfoForResourceTypeCRenderMesh>
//   ResourceBinding_t<InfoForResourceTypeSequenceGroupResourceData_t>
//   ResourceBinding_t<InfoForResourceTypeAnimationGroupResourceData_t>
//   ResourceBinding_t<InfoForResourceTypeMorphSetData_t>

// CResourceExtReference: 7 more instantiations (full list in INDEX.tsv)
//   CResourceExtReference<CWeakHandle<InfoForResourceTypeCLightTree> >
//   CResourceExtReference<CWeakHandle<InfoForResourceTypePRTMatrixData_t> >
//   CResourceExtReference<CWeakHandle<InfoForResourceTypeCModel> >
//   CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> >
//   CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> >
//   CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> >
//   CResourceExtReference<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> >

// CSchemaTypeOf: 5 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > >
//   CSchemaTypeOf<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > >
//   CSchemaTypeOf<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >
//   CSchemaTypeOf<CResourceExtReference<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> > >
//   CSchemaTypeOf<CResourceExtReference<CWeakHandle<InfoForResourceTypeCTextureBase> > >
