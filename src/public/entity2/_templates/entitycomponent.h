// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/entitycomponent.h:86
class CSchemaTypeOf<EntityDormancyType_t> {
	CSchemaType * Get(ISchemaSystemTypeScope *);
	const char * GetEnumName();

	// sizeof = 1
};

// src/public/entity2/entitycomponent.h:550
struct EntScriptDescDeducer_t<CBodyComponentSkeletonInstance, 0> {
	ScriptClassDesc_t * GetComponentScriptDesc();

	// sizeof = 1
};

// src/public/entity2/entitycomponent.h:550
struct EntScriptDescDeducer_t<CBodyComponentPoint, 0> {
	ScriptClassDesc_t * GetComponentScriptDesc();

	// sizeof = 1
};

// src/public/entity2/entitycomponent.h:550
struct EntScriptDescDeducer_t<CHitboxComponent, 0> {
	ScriptClassDesc_t * GetComponentScriptDesc();

	// sizeof = 1
};

// src/public/entity2/entitycomponent.h:802
class CEntityComponentHelperContained<CHitboxComponent> : public CEntityComponentHelper {
	enum {
		EC_IS_CONTAINED = 0x1,
	};

public:

	CEntityComponentHelperContained(CEntityComponentHelperContained<CHitboxComponent> &);
	CEntityComponentHelperContained(const CEntityComponentHelperContained<CHitboxComponent> &);
	CEntityComponentHelperContained();

	// sizeof = 40
};

// src/public/entity2/entitycomponent.h:802
class CEntityComponentHelperContained<CDamageComponent> : public CEntityComponentHelper {
	enum {
		EC_IS_CONTAINED = 0x1,
	};

public:

	CEntityComponentHelperContained(CEntityComponentHelperContained<CDamageComponent> &);
	CEntityComponentHelperContained(const CEntityComponentHelperContained<CDamageComponent> &);
	CEntityComponentHelperContained();

	// sizeof = 40
};

// src/public/entity2/entitycomponent.h:802
class CEntityComponentHelperContained<CHealthComponent> : public CEntityComponentHelper {
	enum {
		EC_IS_CONTAINED = 0x1,
	};

public:

	CEntityComponentHelperContained(CEntityComponentHelperContained<CHealthComponent> &);
	CEntityComponentHelperContained(const CEntityComponentHelperContained<CHealthComponent> &);
	CEntityComponentHelperContained();

	// sizeof = 40
};

// src/public/entity2/entitycomponent.h:814
class CEntityComponentHelperReferenced<CBodyComponent> : public CEntityComponentHelper {
	enum {
		EC_IS_CONTAINED = 0,
	};

public:

	typedef CBodyComponent * Storage_t;
	CEntityComponentHelperReferenced(CEntityComponentHelperReferenced<CBodyComponent> &);
	CEntityComponentHelperReferenced(const CEntityComponentHelperReferenced<CBodyComponent> &);
	CEntityComponentHelperReferenced();
	virtual bool Allocate(CEntityIdentity *, void *);
	virtual void Free(CEntityIdentity *, void *);

	// vtable[3] Allocate
	// vtable[4] Free
	// sizeof = 40
};

// src/public/entity2/entitycomponent.h:814
class CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> : public CEntityComponentHelper {
	enum {
		EC_IS_CONTAINED = 0,
	};

public:

	typedef CBodyComponentSkeletonInstance * Storage_t;
	CEntityComponentHelperReferenced(CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> &);
	CEntityComponentHelperReferenced(const CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> &);
	CEntityComponentHelperReferenced();
	virtual bool Allocate(CEntityIdentity *, void *);
	virtual void Free(CEntityIdentity *, void *);

	// vtable[3] Allocate
	// vtable[4] Free
	// sizeof = 40
};

// src/public/entity2/entitycomponent.h:814
class CEntityComponentHelperReferenced<CBodyComponentPoint> : public CEntityComponentHelper {
	enum {
		EC_IS_CONTAINED = 0,
	};

public:

	typedef CBodyComponentPoint * Storage_t;
	CEntityComponentHelperReferenced(CEntityComponentHelperReferenced<CBodyComponentPoint> &);
	CEntityComponentHelperReferenced(const CEntityComponentHelperReferenced<CBodyComponentPoint> &);
	CEntityComponentHelperReferenced();
	virtual bool Allocate(CEntityIdentity *, void *);
	virtual void Free(CEntityIdentity *, void *);

	// vtable[3] Allocate
	// vtable[4] Free
	// sizeof = 40
};

// src/public/entity2/entitycomponent.h:844
class CEntityComponentHelperT<CRenderComponent, CEntityComponentHelperReferenced<CRenderComponent> > : public CEntityComponentHelperReferenced<CRenderComponent> {
public:

	bool m_bFinalized;  // +0x28
	CEntityComponentHelperT(CEntityComponentHelperT<CRenderComponent, CEntityComponentHelperReferenced<CRenderComponent> > *, CEntityComponentHelperT<CRenderComponent, CEntityComponentHelperReferenced<CRenderComponent> > &);
	CEntityComponentHelperT(CEntityComponentHelperT<CRenderComponent, CEntityComponentHelperReferenced<CRenderComponent> > *, const CEntityComponentHelperT<CRenderComponent, CEntityComponentHelperReferenced<CRenderComponent> > &);
	CEntityComponentHelperT(CEntityComponentHelperT<CRenderComponent, CEntityComponentHelperReferenced<CRenderComponent> > *);
	virtual void Finalize(CEntityComponentHelperT<CRenderComponent, CEntityComponentHelperReferenced<CRenderComponent> > *);
	virtual const CSchemaClassBindingBase * GetSchemaBinding(CEntityComponentHelperT<CRenderComponent, CEntityComponentHelperReferenced<CRenderComponent> > *);

	// vtable[1] Finalize
	// vtable[2] GetSchemaBinding
	// sizeof = 48
};

// src/public/entity2/entitycomponent.h:844
class CEntityComponentHelperT<CLightComponent, CEntityComponentHelperReferenced<CLightComponent> > : public CEntityComponentHelperReferenced<CLightComponent> {
public:

	bool m_bFinalized;  // +0x28
	CEntityComponentHelperT(CEntityComponentHelperT<CLightComponent, CEntityComponentHelperReferenced<CLightComponent> > *, CEntityComponentHelperT<CLightComponent, CEntityComponentHelperReferenced<CLightComponent> > &);
	CEntityComponentHelperT(CEntityComponentHelperT<CLightComponent, CEntityComponentHelperReferenced<CLightComponent> > *, const CEntityComponentHelperT<CLightComponent, CEntityComponentHelperReferenced<CLightComponent> > &);
	CEntityComponentHelperT(CEntityComponentHelperT<CLightComponent, CEntityComponentHelperReferenced<CLightComponent> > *);
	virtual void Finalize(CEntityComponentHelperT<CLightComponent, CEntityComponentHelperReferenced<CLightComponent> > *);
	virtual const CSchemaClassBindingBase * GetSchemaBinding(CEntityComponentHelperT<CLightComponent, CEntityComponentHelperReferenced<CLightComponent> > *);

	// vtable[1] Finalize
	// vtable[2] GetSchemaBinding
	// sizeof = 48
};

// src/public/entity2/entitycomponent.h:844
class CEntityComponentHelperT<CHitboxComponent, CEntityComponentHelperContained<CHitboxComponent> > : public CEntityComponentHelperContained<CHitboxComponent> {
public:

	bool m_bFinalized;  // +0x28
	CEntityComponentHelperT(CEntityComponentHelperT<CHitboxComponent, CEntityComponentHelperContained<CHitboxComponent> > *, CEntityComponentHelperT<CHitboxComponent, CEntityComponentHelperContained<CHitboxComponent> > &);
	CEntityComponentHelperT(CEntityComponentHelperT<CHitboxComponent, CEntityComponentHelperContained<CHitboxComponent> > *, const CEntityComponentHelperT<CHitboxComponent, CEntityComponentHelperContained<CHitboxComponent> > &);
	CEntityComponentHelperT(CEntityComponentHelperT<CHitboxComponent, CEntityComponentHelperContained<CHitboxComponent> > *);
	virtual void Finalize(CEntityComponentHelperT<CHitboxComponent, CEntityComponentHelperContained<CHitboxComponent> > *);
	virtual const CSchemaClassBindingBase * GetSchemaBinding(CEntityComponentHelperT<CHitboxComponent, CEntityComponentHelperContained<CHitboxComponent> > *);

	// vtable[1] Finalize
	// vtable[2] GetSchemaBinding
	// sizeof = 48
};

// EntScriptDescDeducer_t: 9 more instantiations (full list in INDEX.tsv)
//   EntScriptDescDeducer_t<CLightComponent, 0>
//   EntScriptDescDeducer_t<CRenderComponent, 0>
//   EntScriptDescDeducer_t<CBodyComponentBaseAnimating, 0>
//   EntScriptDescDeducer_t<CBodyComponentBaseAnimatingOverlay, 0>
//   EntScriptDescDeducer_t<CBodyComponentBaseModelEntity, 0>
//   EntScriptDescDeducer_t<CDamageComponent, 0>
//   EntScriptDescDeducer_t<CHealthComponent, 0>
//   EntScriptDescDeducer_t<CScriptComponent, 0>
//   EntScriptDescDeducer_t<CBodyComponent, 16>

// CEntityComponentHelperReferenced: 6 more instantiations (full list in INDEX.tsv)
//   CEntityComponentHelperReferenced<CLightComponent>
//   CEntityComponentHelperReferenced<CRenderComponent>
//   CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>
//   CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>
//   CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>
//   CEntityComponentHelperReferenced<CScriptComponent>

// CEntityComponentHelperT: 9 more instantiations (full list in INDEX.tsv)
//   CEntityComponentHelperT<CBodyComponentPoint, CEntityComponentHelperReferenced<CBodyComponentPoint> >
//   CEntityComponentHelperT<CBodyComponentSkeletonInstance, CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance>
//   CEntityComponentHelperT<CBodyComponent, CEntityComponentHelperReferenced<CBodyComponent> >
//   CEntityComponentHelperT<CBodyComponentBaseModelEntity, CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity> >
//   CEntityComponentHelperT<CBodyComponentBaseAnimatingOverlay, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating
//   CEntityComponentHelperT<CBodyComponentBaseAnimating, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating> >
//   CEntityComponentHelperT<CDamageComponent, CEntityComponentHelperContained<CDamageComponent> >
//   CEntityComponentHelperT<CHealthComponent, CEntityComponentHelperContained<CHealthComponent> >
//   CEntityComponentHelperT<CScriptComponent, CEntityComponentHelperReferenced<CScriptComponent> >
