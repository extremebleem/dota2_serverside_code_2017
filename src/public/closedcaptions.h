// Reconstructed from DWARF by pahole; not original source.

// src/public/closedcaptions.h:18
struct AsyncCaption_t {
	struct BlockInfo_t {
		int fileindex;  // +0x0
		int blocknum;  // +0x4
		memhandle_t handle;  // +0x8
		bool Less(const BlockInfo_t &, const BlockInfo_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	CUtlRBTree<AsyncCaption_t::BlockInfo_t, short unsigned int, bool (*)(const AsyncCaption_t::BlockInfo_t&, const AsyncCaption_t::BlockInfo_t&), CUtlMemory<UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t, short unsigned int>, short unsigned int> > m_RequestedBlocks;  // +0x0
	CaptionDictionary_t m_CaptionDirectory;  // +0x28
	AsyncCaption_t();
	AsyncCaption_t & operator=(const AsyncCaption_t &);
	bool LoadFromFile(const char *);
	void ClearCache();

private:

	bool LoadFromFile_Internal(const char *);
	~AsyncCaption_t();

	// sizeof = 112
};
