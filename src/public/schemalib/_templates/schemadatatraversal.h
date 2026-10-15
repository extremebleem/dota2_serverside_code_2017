// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemadatatraversal.h:112
class CSchemaFieldVisitorInfoMap<CExtrefTraversal> : public CSchemaVisitorInfoMapBase {
public:

	CSchemaFieldVisitorInfoMap(CSchemaFieldVisitorInfoMap<CExtrefTraversal> &);
	CSchemaFieldVisitorInfoMap(const CSchemaFieldVisitorInfoMap<CExtrefTraversal> &);
	CSchemaFieldVisitorInfoMap();

protected:

	virtual bool IsRelevantFieldType(const CSchemaType *);
	virtual bool IsRelevantClassType(ClassIntrospectionHandle_t);
	~CSchemaFieldVisitorInfoMap();

	// vtable[0] IsRelevantFieldType
	// vtable[1] IsRelevantClassType
	// sizeof = 40
};
