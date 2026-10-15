// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/sisterresourceloader.h:22
class CSisterResourceBlockLoader {
private:

	const ResourceFileHeader_t * m_pHeader;  // +0x8
	bool m_bOwnHeader;  // +0x18
	CSisterResourceBlockLoader();
	~CSisterResourceBlockLoader();
	bool Load_NoRecompile(const char *);
	bool Load_EnsureCompiled(const char *, IResourceCompilerContext *);
	bool IsValid();
	const ResourceFileHeader_t * GetHeader();
	const ResourceExtRefList_t * GetExtRefList();
	const void * GetDataBlock();
	void * UnserializeIntrospectedDataBlock(ResourceType_t, const CSchemaClassBindingBase *);
	bool LoadInternal(IResourceCompilerContext *, const char *, bool);
	void Free();
	bool BlockingLoadResourceFileData(const char *);
	const ResourceEditInfoBlock_t * GetBlock<ResourceEditInfoBlock_t>();
	const MaterialResourceData_t * UnserializeIntrospectedDataBlock<1952542070ull, MaterialResourceData_t>();

	// sizeof = 32
};
