// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/iresourcesystem.h:59
class IResourceAllocatorUtils {
	int ()() * * _vptr.IResourceAllocatorUtils;  // +0x0
	IResourceAllocatorUtils(IResourceAllocatorUtils &);
	IResourceAllocatorUtils(const IResourceAllocatorUtils &);
	IResourceAllocatorUtils();
	virtual void * AssumeControl(const void *);
	virtual size_t GetStreamingDataOffset();
	virtual size_t GetDataSize();
	virtual ResourceHandle_t GetResourceHandle();

	// vtable[0] AssumeControl
	// vtable[1] GetStreamingDataOffset
	// vtable[2] GetDataSize
	// vtable[3] GetResourceHandle
	// sizeof = 8
};

// src/public/resourcesystem/iresourcesystem.h:72
class IResourceDeallocatorUtils {
	int ()() * * _vptr.IResourceDeallocatorUtils;  // +0x0
	IResourceDeallocatorUtils(IResourceDeallocatorUtils &);
	IResourceDeallocatorUtils(const IResourceDeallocatorUtils &);
	IResourceDeallocatorUtils();
	virtual void ReleaseControl(const void *);
	virtual ResourceDeallocationType_t GetDeallocationType();
	virtual ResourceHandle_t GetResourceHandle();
	virtual bool IsQueuedDeallocate();
	virtual void * GetReleasedData();

	// vtable[0] ReleaseControl
	// vtable[1] GetDeallocationType
	// vtable[2] GetResourceHandle
	// vtable[3] IsQueuedDeallocate
	// vtable[4] GetReleasedData
	// sizeof = 8
};

// src/public/resourcesystem/iresourcesystem.h:160
class IResourceTypeManager {
	int ()() * * _vptr.IResourceTypeManager;  // +0x0
	IResourceTypeManager(IResourceTypeManager &);
	IResourceTypeManager(const IResourceTypeManager &);
	IResourceTypeManager();
	virtual bool Init(IResourceSystemUtils *);
	virtual void Shutdown();
	virtual void * GetErrorResource();
	virtual bool NeedsFrameUpdate();
	virtual void FrameUpdate(int);
	virtual bool RequiresManifestResourceFinishedCall();
	virtual void NotifyManifestResourceFinished(ResourceHandle_t, ResourceLoadType_t);
	virtual bool RequiresPostLoadFixup();
	virtual ResourceStreamingType_t GetStreamingType();
	virtual int GetNonStreamingDataLoadSize();
	virtual void LoadStreamingData(ResourceHandle_t, IResourceSystemUtils *);
	virtual void AllocateResource(ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t *, IRD_RegisterResourceDataUtils *);
	virtual void DeallocateResource(void *, IResourceDeallocatorUtils *);
	virtual bool UsesData();
	virtual bool IsStreamingDataAlreadyLoaded(ResourceHandle_t);

	// vtable[0] Init
	// vtable[1] Shutdown
	// vtable[2] GetErrorResource
	// vtable[3] NeedsFrameUpdate
	// vtable[4] FrameUpdate
	// vtable[5] RequiresManifestResourceFinishedCall
	// vtable[6] NotifyManifestResourceFinished
	// vtable[7] RequiresPostLoadFixup
	// vtable[8] GetStreamingType
	// vtable[9] GetNonStreamingDataLoadSize
	// vtable[10] LoadStreamingData
	// vtable[11] AllocateResource
	// vtable[12] DeallocateResource
	// vtable[13] UsesData
	// vtable[14] IsStreamingDataAlreadyLoaded
	// sizeof = 8
};

// src/public/resourcesystem/iresourcesystem.h:226
class IToolsResourceListener {
	int ()() * * _vptr.IToolsResourceListener;  // +0x0
	IToolsResourceListener(IToolsResourceListener &);
	IToolsResourceListener(const IToolsResourceListener &);
	IToolsResourceListener();
	virtual void NotifyResourceStatusChange(ResourceId_t, ResourceHandle_t, ResourceType_t, ResourceLoadType_t);

	// vtable[0] NotifyResourceStatusChange
	// sizeof = 8
};

// src/public/resourcesystem/iresourcesystem.h:299
struct ResourceManifestCreationInfo_t {
	int m_nCount;  // +0x0

	const char * * m_ppResourceFiles;  // +0x8
	const char * m_pDebugName;  // +0x18

	ResourceManifestLoadCompletionCallback_t m_callback;  // +0x28
	void * m_pContext;  // +0x30
	ResourceManifestCreationInfo_t();
	ResourceManifestCreationInfo_t(int, const char * *, ResourceManifestLoadBehavior_t, const char *, ResourceManifestLoadPriority_t);
	ResourceManifestCreationInfo_t(int, const char * *, ResourceManifestType_t, ResourceManifestLoadBehavior_t, const char *, ResourceManifestLoadPriority_t);

	// sizeof = 56
};
