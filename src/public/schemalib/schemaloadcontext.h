// Reconstructed from DWARF by pahole; not original source.

// src/public/schemalib/schemaloadcontext.h:18
class CSchemaLoadContext {
private:

	void * m_pAdditionalAllocation;  // +0x48
	uint32 m_nAdditionalAllocationSize;  // +0x50

	int m_nFlags;  // +0x60
	CSchemaLoadContext();
	~CSchemaLoadContext();
	bool Load(SchemaEncoding_t, CUtlBuffer *);
	void * GetRootObjectVoid(int);
	void * GetRootObjectOfType(const CSchemaType *, int);
	const CSchemaType * GetRootObjectType(int);
	int GetRootCount();
	bool HasAdditionalAllocation();
	uint32 GetAdditionalAllocationSize();
	const void * GetAdditionAllocation();
	const char * GetErrorMessage();
	bool GetPerformBlockAllocation();
	void SetPerformSingleAllocation(bool);
	void TakeControlOfObject(int);
	void TakeControlOfObjects(int, int *);
	void AddObject(const CSchemaType *, void *);
	void CallOnUnserializationCallbacks();
	void FreeMemory();
	VsInputSignature_t * GetRootObject<VsInputSignature_t>(int);

	// sizeof = 104
};
