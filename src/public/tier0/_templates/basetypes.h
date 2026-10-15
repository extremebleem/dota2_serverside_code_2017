// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/basetypes.h:324
class CSchemaTypeOf<ThreeState_t> {
	CSchemaType * Get(ISchemaSystemTypeScope *);
	const char * GetEnumName();

	// sizeof = 1
};

// src/public/tier0/basetypes.h:615
class CBaseIntHandle<unsigned int> {
protected:

	unsigned int m_Handle;  // +0x0
	typedef unsigned int HANDLE_TYPE;
	bool operator==(const CBaseIntHandle<unsigned int> &);
	bool operator!=(const CBaseIntHandle<unsigned int> &);
	unsigned int GetHandleValue();
	void SetHandleValue(unsigned int);

	// sizeof = 4
};

// src/public/tier0/basetypes.h:654
class CIntHandle32<RenderInputLayout_t__handle*> : public CBaseIntHandle<unsigned int> {
public:

	CIntHandle32();
	CIntHandle32<RenderInputLayout_t__handle*> MakeHandle(HANDLE_TYPE);

protected:

	CIntHandle32(HANDLE_TYPE);

	// sizeof = 4
};
