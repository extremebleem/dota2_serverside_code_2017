// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemadatatraversal.h:22
class CSchemaVisitorBase {
	int ()() * * _vptr.CSchemaVisitorBase;  // +0x0
	typedef CUtlScalarHash<void const*, CDefaultHash32> VisitedRelevantClasses_t;

protected:

	VisitedRelevantClasses_t m_VisitedClasses;  // +0x8
	bool m_bVisitFields;  // +0x28
	bool m_bVisitClasses;  // +0x29
	~CSchemaVisitorBase();
	CSchemaVisitorBase(CSchemaVisitorBase &);
	CSchemaVisitorBase(const CSchemaVisitorBase &);
	CSchemaVisitorBase(CSchemaVisitorInfoMapBase *);
	void TraverseClass(void *, ClassIntrospectionHandle_t);
	bool IsRelevantFieldType(const CSchemaType *);
	bool IsRelevantClassType(ClassIntrospectionHandle_t);
	void TraverseField(void *, CSchemaType *, FieldIntrospectionHandle_t);
	virtual void VisitRelevantField(void *, CSchemaType *, FieldIntrospectionHandle_t);
	virtual void VisitRelevantClass(void *, ClassIntrospectionHandle_t);

	// vtable[0] VisitRelevantField
	// vtable[1] VisitRelevantClass
	// sizeof = 48
};

// src/public/schemalib/schemadatatraversal.h:55
class CSchemaFieldVisitor : public CSchemaVisitorBase {
public:

	~CSchemaFieldVisitor();
	CSchemaFieldVisitor(CSchemaFieldVisitor &);
	CSchemaFieldVisitor(const CSchemaFieldVisitor &);
	CSchemaFieldVisitor(CSchemaVisitorInfoMapBase *);
	virtual void VisitRelevantClass(void *, ClassIntrospectionHandle_t);

	// vtable[1] VisitRelevantClass
	// sizeof = 48
};

// src/public/schemalib/schemadatatraversal.h:90
class CSchemaVisitorInfoMapBase {
	int ()() * * _vptr.CSchemaVisitorInfoMapBase;  // +0x0
	typedef CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> > LookupMap_t;

private:

	LookupMap_t m_Lookup;  // +0x8
	CSchemaVisitorInfoMapBase(const CSchemaVisitorInfoMapBase &);
	CSchemaVisitorInfoMapBase();
	~CSchemaVisitorInfoMapBase();
	CClassVisitInfo * LookupClass(ClassIntrospectionHandle_t);
	virtual bool IsRelevantFieldType(const CSchemaType *);
	virtual bool IsRelevantClassType(ClassIntrospectionHandle_t);
	CClassVisitInfo * FindOrCreate(ClassIntrospectionHandle_t);

	// vtable[0] IsRelevantFieldType
	// vtable[1] IsRelevantClassType
	// sizeof = 40
};

// src/public/schemalib/schemadatatraversal.h:154
class CClassVisitInfo {
	struct FieldInfo_t {
		uint32 m_nFieldOffset;  // +0x0

		FieldIntrospectionHandle_t m_pField;  // +0x8

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	bool m_bVirtualAndMightBeRelevant;  // +0x4
	bool m_bClassIsRelevantItself;  // +0x5

	ClassIntrospectionHandle_t m_pClassInfo;  // +0x8
	CClassVisitInfo();
	void SetClass(ClassIntrospectionHandle_t);
	void UpdateState(CSchemaVisitorInfoMapBase *);
	bool ClassIsRelevant();
	ClassVisitInfoState_t State();

	// sizeof = 64
};

// src/public/schemalib/schemadatatraversal.h:154
class CClassVisitInfo {
	struct FieldInfo_t {
		uint32 m_nFieldOffset;  // +0x0

		FieldIntrospectionHandle_t m_pField;  // +0x8

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	bool m_bVirtualAndMightBeRelevant;  // +0x4
	bool m_bClassIsRelevantItself;  // +0x5

	ClassIntrospectionHandle_t m_pClassInfo;  // +0x8
	CClassVisitInfo();
	void SetClass(ClassIntrospectionHandle_t);
	void UpdateState(CSchemaVisitorInfoMapBase *);
	bool ClassIsRelevant();
	ClassVisitInfoState_t State();
	~CClassVisitInfo();

	// sizeof = 64
};
