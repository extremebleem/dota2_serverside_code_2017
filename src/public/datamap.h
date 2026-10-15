// Reconstructed from DWARF by pahole; not original source.

// src/public/datamap.h:396
struct typedescription_t {
	const char * fieldName;  // +0x8
	int fieldOffset;  // +0x10
	short unsigned int fieldSize;  // +0x14
	short int flags;  // +0x16
	const char * externalName;  // +0x18
	inputfunc_t inputFunc;  // +0x28
	int fieldSizeInBytes;  // +0x40
	float fieldTolerance;  // +0x44
	int flatOffset[2];  // +0x48
	short unsigned int flatGroup;  // +0x50

	bool IsMutated(const typedescription_t &);

	// sizeof = 104
};

// src/public/datamap.h:477
struct datamap_t {
	int dataNumFields;  // +0x8

	const char * dataClassName;  // +0x10
	int m_nPackedSize;  // +0x20

	void Clear();
	void CopyFrom(const datamap_t *);
	bool IsMutated(const datamap_t &);

	// sizeof = 56
};

// src/public/datamap.h:678
class CDatadescGeneratedNameHolder {
private:

	const char * m_pszBase;  // +0x0
	size_t m_nLenBase;  // +0x8
	CDatadescGeneratedNameHolder(const char *);
	~CDatadescGeneratedNameHolder();
	const char * GenerateName(const char *);

	// sizeof = 40
};

// src/public/datamap.h:712
struct ValidationResult_t {
	struct ValidationResultEntry_t {
		const datamap_t * m_pMap;  // +0x20
		ValidationResultEntry_t();

		// sizeof = 40
	};
	/* tag__fprintf: const_type tag not supported! */;

	bool m_bValid;  // +0x0

	CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToken&)> m_Visited;  // +0x20

	ValidationResult_t();
	void AddEntry(const char *, const char *, const datamap_t *, const char *, ...);
	bool VisitOnlyOnce(const CUtlStringToken &);

	// sizeof = 80
};

// src/public/datamap.h:800
class MIgnoreDataDescValidation {
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
