// Reconstructed from DWARF by pahole; not original source.

// src/game/public/meshsystem/rendermesh_old_disk.h:74
struct RenderSkeletonData_t {
	enum FlagEnum_t {
		FLAG_BLEND_WEIGHT_COUNT_SHIFT = 0,
		FLAG_BLEND_WEIGHT_COUNT_MASK = 0xf,
	};

private:

	uint16 m_nBoneCount;  // +0x0
	uint16 m_nBoneWeightCount;  // +0x2
	uint32 m_nFlags;  // +0x34
	RenderSkeletonData_t();

	int FindBoneIndexByHash(uint32);
	int GetParent(int);

	// sizeof = 72
};

// src/game/public/meshsystem/rendermesh_old_disk.h:74
struct RenderSkeletonData_t {
	enum FlagEnum_t {
		FLAG_BLEND_WEIGHT_COUNT_SHIFT = 0,
		FLAG_BLEND_WEIGHT_COUNT_MASK = 0xf,
	};

private:

	uint16 m_nBoneCount;  // +0x0
	uint16 m_nBoneWeightCount;  // +0x2
	uint32 m_nFlags;  // +0x34
	RenderSkeletonData_t();

	int FindBoneIndexByHash(uint32);
	int GetParent(int);
	/* tag__fprintf: const_type tag not supported! */;
	RenderSkeletonData_t & operator=(const RenderSkeletonData_t &);

	// sizeof = 72
};

// src/game/public/meshsystem/rendermesh_old_disk.h:281
struct ConstraintTarget_t {
	enum {
		KV3TRANSFER_IS_VIRTUAL = 0,
	};

private:

	uint32 m_nBoneHash;  // +0x0
	float m_flWeight;  // +0x4
	bool m_bIsAttachment;  // +0x24
	ConstraintTarget_t();

	ConstraintTarget_t * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_ConstraintTarget_t(CKV3TransferSaveContext *);
	void KV3TransferLoad_ConstraintTarget_t(CKV3TransferLoadContext *);
	ConstraintTarget_t & operator=(const ConstraintTarget_t &);

	// sizeof = 40
};
