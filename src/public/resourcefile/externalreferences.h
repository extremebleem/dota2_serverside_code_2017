// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcefile/externalreferences.h:26
class CResourceRefTable {
	ResourceRefHash_t m_ExtrefLookup;  // +0x0
	CResourceRefTable();
	~CResourceRefTable();

	// sizeof = 32
};

// src/public/resourcefile/externalreferences.h:35
class CExtrefTraversal : public CSchemaFieldVisitor {
public:

	~CExtrefTraversal();
	CExtrefTraversal(CExtrefTraversal &);
	CExtrefTraversal(const CExtrefTraversal &);
	CExtrefTraversal(CSchemaVisitorInfoMapBase *);
	bool IsRelevantFieldType(const CSchemaType *);
	virtual void VisitRelevantField(void *, CSchemaType *, FieldIntrospectionHandle_t);
	virtual void HandleExtref(ResourceType_t, CResourceExtReferenceBase *, FieldIntrospectionHandle_t);

	// vtable[0] VisitRelevantField
	// vtable[2] HandleExtref
	// sizeof = 48
};

// src/public/resourcefile/externalreferences.h:55
class CResourceReferenceFixupTraversal : public CExtrefTraversal {
public:

private:

	const ResourceFileHeader_t * m_pHeader;  // +0x50
	ResourceHandle_t m_hOriginiatingResource;  // +0x58
	const char * m_pOriginatingResourceName;  // +0x68
	bool m_bInvalidReferencesEncountered;  // +0x70

	ResourceType_t m_nOriginatingResourceType;  // +0x80
	CResourceReferenceFixupTraversal(CResourceReferenceFixupTraversal &);
	CResourceReferenceFixupTraversal(const CResourceReferenceFixupTraversal &);
	CResourceReferenceFixupTraversal(IRD_RegisterResourceDataUtils *, const ResourceFileHeader_t *, ResourceHandle_t, ResourceType_t);
	virtual void HandleExtref(ResourceType_t, CResourceExtReferenceBase *, FieldIntrospectionHandle_t);
	bool InvalidReferencesEncountered();
	void RegisterRefs();

	// vtable[2] HandleExtref
	// sizeof = 136
};

// src/public/resourcefile/externalreferences.h:79
class CReferenceCleanupTraversal : public CExtrefTraversal {
public:

private:

	ResourceHandle_t m_hOriginatingResource;  // +0x30
	ResourceType_t m_nOriginatingResourceType;  // +0x38
	CReferenceCleanupTraversal(CReferenceCleanupTraversal &);
	CReferenceCleanupTraversal(const CReferenceCleanupTraversal &);
	CReferenceCleanupTraversal(ResourceHandle_t, ResourceType_t);
	virtual void HandleExtref(ResourceType_t, CResourceExtReferenceBase *, FieldIntrospectionHandle_t);

	// vtable[2] HandleExtref
	// sizeof = 64
};
