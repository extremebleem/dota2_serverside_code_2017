// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemaiterator.h:15
class CSchemaInheritanceIterator {
	struct ClassToTraverse_t {
		ClassIntrospectionHandle_t m_Class;  // +0x0
		uint32 m_nClassOffset;  // +0x8
		int m_nDerivedClassIndex;  // +0xc

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	ClassIntrospectionHandle_t m_CurrentClass;  // +0x98
	ClassIntrospectionHandle_t m_ClassToSkip;  // +0xa0
	int m_nCurrentClassIndex;  // +0xa8
	uint32 m_nCurrentClassOffset;  // +0xac
	CSchemaInheritanceIterator();
	CSchemaInheritanceIterator(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t);
	CSchemaInheritanceIterator(const CSchemaClassBindingBase *, SchemaBaseClassTraversal_t);
	CSchemaInheritanceIterator(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void Init(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void Reset();
	void Invalidate();
	void Advance();
	bool IsValid();
	ClassIntrospectionHandle_t GetClass();
	uint32 GetClassOffset();
	void BuildDerivedClassList(CUtlVectorFixedGrowable<const CSchemaClassInfo*, 32ul> &);
	void AdvanceClass();
	void PopulateTraversal(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	int PopulateTraversal_R(ClassIntrospectionHandle_t, ClassIntrospectionHandle_t, uint32, bool, bool);

	// sizeof = 176
};

// src/public/schemalib/schemaiterator.h:15
class CSchemaInheritanceIterator {
	struct ClassToTraverse_t {
		ClassIntrospectionHandle_t m_Class;  // +0x0
		uint32 m_nClassOffset;  // +0x8
		int m_nDerivedClassIndex;  // +0xc

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	ClassIntrospectionHandle_t m_CurrentClass;  // +0x98
	ClassIntrospectionHandle_t m_ClassToSkip;  // +0xa0
	int m_nCurrentClassIndex;  // +0xa8
	uint32 m_nCurrentClassOffset;  // +0xac
	CSchemaInheritanceIterator();
	CSchemaInheritanceIterator(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t);
	CSchemaInheritanceIterator(const CSchemaClassBindingBase *, SchemaBaseClassTraversal_t);
	CSchemaInheritanceIterator(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void Init(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void Reset();
	void Invalidate();
	void Advance();
	bool IsValid();
	ClassIntrospectionHandle_t GetClass();
	uint32 GetClassOffset();
	void BuildDerivedClassList(CUtlVectorFixedGrowable<const CSchemaClassInfo*, 32ul> &);
	void AdvanceClass();
	void PopulateTraversal(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	int PopulateTraversal_R(ClassIntrospectionHandle_t, ClassIntrospectionHandle_t, uint32, bool, bool);
	~CSchemaInheritanceIterator();

	// sizeof = 176
};

// src/public/schemalib/schemaiterator.h:60
class CSchemaFieldIterator {
private:

	FieldIntrospectionHandle_t m_CurrentField;  // +0xb0
	int m_nFieldIndex;  // +0xb8
	CSchemaFieldIterator();
	CSchemaFieldIterator(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t);
	CSchemaFieldIterator(const CSchemaClassBindingBase *, SchemaBaseClassTraversal_t);
	CSchemaFieldIterator(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	CSchemaFieldIterator(FieldIntrospectionHandle_t);
	void Init(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void InitForSingleField(FieldIntrospectionHandle_t);
	void Reset();
	void Invalidate();
	bool FindField(const char *);
	bool FindField(FieldIntrospectionHandle_t);
	void Advance();
	bool IsValid();
	bool IsSingleFieldRestricted();
	const char * GetFieldName();
	CUtlString GetFullyQualifiedFieldName();
	FieldIntrospectionHandle_t GetRawFieldHandle();
	int32 GetFieldMemorySize();
	uint32 GetFieldMemoryOffset();
	ClassIntrospectionHandle_t CurrentClass();
	int CurrentFieldIndex();
	void * GetMetaPtr(const char *);
	bool IsMetaPresent(const char *);
	void * PointerFromClass(void *);
	const void * PointerFromClass(const void *);
	CSchemaType * GetType();
	void AdvanceUntilCurrentClassHasMembers();
	void GetAllMetaPtrsInternal(const char *, CUtlVector<void*, CUtlMemory<void*, int> > &);

	// sizeof = 192
};
