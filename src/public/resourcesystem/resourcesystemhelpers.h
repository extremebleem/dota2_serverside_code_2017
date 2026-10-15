// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/resourcesystemhelpers.h:16
class CResourceAllocatorUtils : public IResourceAllocatorUtils {
public:

private:

	const void * m_pData;  // +0x8
	size_t m_nSize;  // +0x10
	int m_nAlignment;  // +0x18
	bool m_bMustCopy;  // +0x1c
	bool m_bAssumedControl;  // +0x1d

	size_t m_nStreamingDataOffset;  // +0x20
	ResourceHandle_t m_hResource;  // +0x28
	uint16 m_nResourceVersion;  // +0x30
	~CResourceAllocatorUtils();
	CResourceAllocatorUtils(CResourceAllocatorUtils &);
	CResourceAllocatorUtils(const CResourceAllocatorUtils &);
	CResourceAllocatorUtils();
	CResourceAllocatorUtils(ResourceHandle_t, const void *, size_t, int, bool, size_t, uint16);
	void Init(ResourceHandle_t, const void *, size_t, int, bool, size_t, uint16);
	virtual void * AssumeControl(const void *);
	virtual size_t GetStreamingDataOffset();
	virtual size_t GetDataSize();
	virtual ResourceHandle_t GetResourceHandle();
	bool DidAllocatorAssumeControl();

	// vtable[0] AssumeControl
	// vtable[1] GetStreamingDataOffset
	// vtable[2] GetDataSize
	// vtable[3] GetResourceHandle
	// sizeof = 56
};
