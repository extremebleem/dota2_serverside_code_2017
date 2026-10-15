// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/ientity2_entityio.h:39
class CSchemaTypeOf<EntityIOTargetType_t> {
	CSchemaType * Get(ISchemaSystemTypeScope *);
	const char * GetEnumName();

	// sizeof = 1
};

// src/public/entity2/ientity2_entityio.h:416
class CEntityOutputTemplate<float> : public CEntityIOOutput {
public:

private:

	float m_Value;  // +0x18
	CEntityOutputTemplate(CEntityOutputTemplate<float> &);
	CEntityOutputTemplate(const CEntityOutputTemplate<float> &);
	~CEntityOutputTemplate();
	CEntityOutputTemplate();
	void Init(float);
	void Set(float, CEntityInstance *, CEntityInstance *);
	float Get();

	// sizeof = 32
};

// src/public/entity2/ientity2_entityio.h:416
class CEntityOutputTemplate<int> : public CEntityIOOutput {
public:

private:

	int m_Value;  // +0x18
	~CEntityOutputTemplate();
	CEntityOutputTemplate(CEntityOutputTemplate<int> &);
	CEntityOutputTemplate(const CEntityOutputTemplate<int> &);
	CEntityOutputTemplate();
	void Init(int);
	void Set(int, CEntityInstance *, CEntityInstance *);
	int Get();
	CEntityOutputTemplate<int> & operator=(const CEntityOutputTemplate<int> &);

	// sizeof = 32
};

// src/public/entity2/ientity2_entityio.h:416
class CEntityOutputTemplate<Vector> : public CEntityIOOutput {
public:

private:

	~CEntityOutputTemplate();
	CEntityOutputTemplate(CEntityOutputTemplate<Vector> &);
	CEntityOutputTemplate(const CEntityOutputTemplate<Vector> &);
	CEntityOutputTemplate();
	void Init(Vector);
	void Set(Vector, CEntityInstance *, CEntityInstance *);
	Vector Get();
	CEntityOutputTemplate<Vector> & operator=(const CEntityOutputTemplate<Vector> &);

	// sizeof = 40
};

// src/public/entity2/ientity2_entityio.h:443
class CSchemaTypeOf<CEntityOutputTemplate<float> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/entity2/ientity2_entityio.h:443
class CSchemaTypeOf<CEntityOutputTemplate<int> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/entity2/ientity2_entityio.h:484
class CStackAnnotationVariableHandler<EntityIOOutputDesc_t*> {
	const const EntityIOOutputDesc_t * m_VarStorage;  // +0x0
	typedef const EntityIOOutputDesc_t * ConstructorVarType;
	CStackAnnotationVariableHandler(ConstructorVarType);
	void ResolveVar(IAnnotationPackager *, const char *);

	// sizeof = 8
};

// CEntityOutputTemplate: 2 more instantiations (full list in INDEX.tsv)
//   CEntityOutputTemplate<Color>
//   CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator> >

// CSchemaTypeOf: 3 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<CEntityOutputTemplate<Vector> >
//   CSchemaTypeOf<CEntityOutputTemplate<Color> >
//   CSchemaTypeOf<CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator> > >
