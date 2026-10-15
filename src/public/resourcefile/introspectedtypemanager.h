// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcefile/introspectedtypemanager.h:18
class CBaseIntrospectedTypeManager : public IResourceTypeManager {
public:

protected:

	const ResourceType_t m_nResourceType;  // +0x8
	const CSchemaClassBindingBase * m_pDiskDataClassBinding;  // +0x10
	bool m_bRequiresExtRefFixup;  // +0x18
	bool m_bRequiredSpecificResourceVersion;  // +0x19
	uint16 m_nRequiredResourceVersion;  // +0x1a

	CBaseIntrospectedTypeManager(const CBaseIntrospectedTypeManager &);
	CBaseIntrospectedTypeManager(ResourceType_t);
	~CBaseIntrospectedTypeManager();
	virtual bool Init(IResourceSystemUtils *);
	virtual void Shutdown();
	virtual bool NeedsFrameUpdate();
	virtual void FrameUpdate(int);
	virtual void * GetErrorResource();
	virtual void NotifyManifestResourceFinished(ResourceHandle_t, ResourceLoadType_t);
	virtual bool RequiresManifestResourceFinishedCall();
	virtual void DeallocateResource(void *, IResourceDeallocatorUtils *);
	virtual bool RequiresPostLoadFixup();
	virtual void AllocateResource(ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t *, IRD_RegisterResourceDataUtils *);
	void SetDiskDataBinding(const CSchemaClassBindingBase *);
	void DestroyResourceData(void *, ResourceHandle_t);
	virtual void * Allocate(const void *, IResourceAllocatorUtils *);
	virtual void Deallocate(void *, IResourceDeallocatorUtils *);
	virtual void * Reallocate(const void *, IResourceAllocatorUtils *, void *);
	bool FixupResourceReferences(void *, const void *, ResourceHandle_t, const CSchemaClassBindingBase *);
	void CleanupResourceReferences(void *, ResourceHandle_t, const CSchemaClassBindingBase *);

	// vtable[0] Init
	// vtable[1] Shutdown
	// vtable[3] NeedsFrameUpdate
	// vtable[4] FrameUpdate
	// vtable[2] GetErrorResource
	// vtable[6] NotifyManifestResourceFinished
	// vtable[5] RequiresManifestResourceFinishedCall
	// vtable[12] DeallocateResource
	// vtable[7] RequiresPostLoadFixup
	// vtable[11] AllocateResource
	// vtable[15] Allocate
	// vtable[16] Deallocate
	// vtable[17] Reallocate
	// sizeof = 40
};

// src/public/resourcefile/introspectedtypemanager.h:148
class CIntrospectedResourceDataHandler {
private:

	ResourceType_t m_nResourceType;  // +0x0
	const CSchemaClassBindingBase * m_pDiskDataClassBinding;  // +0x8
	bool m_bRequiresExtRefFixup;  // +0x10
	bool m_bRequiredSpecificResourceVersion;  // +0x11
	uint16 m_nRequiredResourceVersion;  // +0x12

	ResourceHandle_t m_hResource;  // +0x20
	const ResourceFileHeader_t * m_pHeader;  // +0x28

	void * m_pLoadedData;  // +0x68
	size_t m_nLoadedDataSize;  // +0x70
	bool m_bConversionCreatedSeparateAllocation;  // +0x78
	bool m_bExternalAssumedControlOfMemory;  // +0x79
	bool m_bDidExtrefFixup;  // +0x7a
	CIntrospectedResourceDataHandler(ResourceType_t, const CSchemaClassBindingBase *, bool, bool, uint16);
	~CIntrospectedResourceDataHandler();
	bool InitNoFixup(ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t *);
	bool InitAndFixup(ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t *, IRD_RegisterResourceDataUtils *);
	void * GetData();
	bool DataIsSeparateAllocation();
	void AssumeControlOfMemory();
	CResourceAllocatorUtils * PrepareAllocatorUtils();
	bool FixupExternalReferences(IRD_RegisterResourceDataUtils *);
	void CleanupAllocation();

	// sizeof = 128
};
