// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier0/stackannotations.h:218
class CStackAnnotationVariableHandler<float> {
	const float m_VarStorage;  // +0x0
	typedef const float ConstructorVarType;
	CStackAnnotationVariableHandler(float);
	void ResolveVar(IAnnotationPackager *, const char *);

	// sizeof = 4
};

// src/game/public/tier0/stackannotations.h:474
class CStackAnnotation<CEntityInstance*, CEntityInstance*, EntityIOOutputDesc_t*, CVariantBase<CVariantDefaultAllocator>*, float, void, void, void, void> : public IStack_Annotation {
public:

	const char * m_pVarDescA;  // +0x8
	const char * m_pVarDescB;  // +0x18
	const char * m_pVarDescC;  // +0x28
	const char * m_pVarDescD;  // +0x38
	const char * m_pVarDescE;  // +0x48
	CStackAnnotation(floa, CStackAnnotation<CEntityInstance*, CEntityInstance*, EntityIOOutputDesc_t*, CVariantBase<CVariantDefaultAllocator>*, floa);
	CStackAnnotation(floa, const CStackAnnotation<CEntityInstance*, CEntityInstance*, EntityIOOutputDesc_t*, CVariantBase<CVariantDefaultAllocator>*);
	CStackAnnotation(floa, const char *, ConstructorVarType, const char *, ConstructorVarType, const char *, ConstructorVarType, const char *, ConstructorVarType, const char *, float, const CCallStackMarkerBase &);
	virtual void Resolve(floa, IAnnotationPackager *);
	virtual ~CStackAnnotation(floa, int);

	// vtable[2] Resolve
	// sizeof = 88
};

// src/game/public/tier0/stackannotations.h:606
class CStackAnnotation<const CSchemaClassField*, void, void, void, void, void, void, void, void> : public IStack_Annotation {
public:

	const char * m_pVarDescA;  // +0x8
	CStackAnnotation(CStackAnnotation<const CSchemaClassField*, void, void, void, void, void, void, void, void> &);
	CStackAnnotation(const CStackAnnotation<const CSchemaClassField*, void, void, void, void, void, void, void, void> &);
	CStackAnnotation(const char *, ConstructorVarType, const CCallStackMarkerBase &);
	virtual void Resolve(IAnnotationPackager *);
	virtual ~CStackAnnotation();

	// vtable[2] Resolve
	// sizeof = 24
};
