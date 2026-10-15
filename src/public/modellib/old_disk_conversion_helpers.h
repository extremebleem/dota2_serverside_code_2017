// Reconstructed from DWARF by pahole; not original source.

// src/public/modellib/old_disk_conversion_helpers.h:29
struct CConvertOldDiskCtx {
private:

	bool m_bReportPool;  // +0x10

	CConvertOldDiskCtx(CModelMemoryPool *, CUtlScratchMemoryPool *, const char *);
	~CConvertOldDiskCtx();
	const char * AllocDupString(const char *);
	void * AllocDupBytes(const void *, int);
	CModelMemoryPool * ModelPool();
	bool RegisterNewSubresource(ResourceHandle_t);

	// sizeof = 56
};
