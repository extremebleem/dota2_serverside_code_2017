// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/weakhandle.h:20
class CWeakHandleBase {
protected:

	const ResourceBindingBase_t * m_pBinding;  // +0x0
	CWeakHandleBase();

	// sizeof = 8
};

// src/public/resourcesystem/weakhandle.h:202
class CWeakHandleVoid : public CWeakHandle<ResourceBindingVoid_t> {
public:

	CWeakHandleVoid();
	CWeakHandleVoid(ResourceHandle_t);
	CWeakHandleVoid & operator=(ResourceHandle_t);
	CWeakHandleVoid & operator=(CWeakHandleVoid &);
	~CWeakHandleVoid();

	// sizeof = 8
};
