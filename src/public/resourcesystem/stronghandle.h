// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/stronghandle.h:36
class CStrongHandleBase {
protected:

	const ResourceBindingBase_t * m_pBinding;  // +0x0
	const ResourceBindingBase_t * GetResourceBindingBase();
	CStrongHandleBase();

	// sizeof = 8
};

// src/public/resourcesystem/stronghandle.h:261
class CStrongHandleVoid : public CStrongHandle<ResourceBindingVoid_t> {
public:

	CStrongHandleVoid();
	CStrongHandleVoid(ResourceHandle_t);
	CStrongHandleVoid & operator=(ResourceHandle_t);
	CStrongHandleVoid & operator=(CStrongHandleVoid &);
	~CStrongHandleVoid();

	// sizeof = 8
};
