// Reconstructed from DWARF by pahole; not original source.

// src/public/meshsystem/rendermesh_old_disk.h:62
struct SkeletonBoneBbox_t {
private:

	float32 m_pad0;  // +0xc
	float32 m_pad1;  // +0x1c
	SkeletonBoneBbox_t();

	// sizeof = 32
};

// src/public/meshsystem/rendermesh_old_disk.h:74
struct RenderSkeletonData_t {
private:

	uint16 m_nBoneCount;  // +0x0
	uint16 m_nBoneWeightCount;  // +0x2
	uint32 m_nFlags;  // +0x34
	RenderSkeletonData_t();

	int FindBoneIndexByHash(uint32);
	int GetParent(int);

	// sizeof = 72
};

// src/public/meshsystem/rendermesh_old_disk.h:133
struct RenderBufferBinding_t {
private:

	uint64 m_hBuffer;  // +0x0
	uint32 m_nBindOffsetBytes;  // +0x8

	// sizeof = 16
};

// src/public/meshsystem/rendermesh_old_disk.h:143
struct MaterialDrawDescriptor_t {
private:

	int32 m_nBaseVertex;  // +0x0
	int32 m_nVertexCount;  // +0x4
	int32 m_nStartIndex;  // +0x8
	int32 m_nIndexCount;  // +0xc
	int32 m_nStartInstance;  // +0x10
	int32 m_nInstanceCount;  // +0x14
	float32 m_flUvDensity;  // +0x18
	uint8 m_nPrimitiveType;  // +0x1c
	uint8 m_bAlphaBlendedMaterial;  // +0x1d
	uint8 m_nFlags;  // +0x1e
	uint8 m_padding;  // +0x1f
	unsigned int m_hInputLayoutHandle[5];  // +0x20

	MaterialDrawDescriptor_t();

	bool IsAlphaBlended();

	// sizeof = 88
};

// src/public/meshsystem/rendermesh_old_disk.h:167
struct OnDiskBufferData_t {
private:

	int32 m_nElementCount;  // +0x0
	int32 m_nElementSizeInBytes;  // +0x4
	OnDiskBufferData_t();

	// sizeof = 24
};

// src/public/meshsystem/rendermesh_old_disk.h:178
struct SceneObjectData_t {
private:

	SceneObjectData_t();

	// sizeof = 52
};

// src/public/meshsystem/rendermesh_old_disk.h:199
struct AttachmentData_t {
private:

	float m_influenceWeights[3];  // +0x64
	unsigned char m_nFlags[3];  // +0x70
	uint8 m_nInfluences;  // +0x73
	AttachmentData_t();

	// sizeof = 116
};

// src/public/meshsystem/rendermesh_old_disk.h:213
struct HitBox_t {
private:

	int32 m_nGroupId;  // +0x8
	uint32 m_nBoneNameHash;  // +0x10
	unsigned char m_cRenderColor[4];  // +0x14
	uint16 m_nHitBoxIndex;  // +0x18

	bool m_bVisible;  // +0x34
	HitBox_t();

	// sizeof = 56
};

// src/public/meshsystem/rendermesh_old_disk.h:233
struct HitBoxSet_t {
private:

	HitBoxSet_t();

	const char * pszName();
	int numhitboxes();
	const HitBox_t * pHitbox(int);

	// sizeof = 16
};

// src/public/meshsystem/rendermesh_old_disk.h:281
struct ConstraintTarget_t {
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

	// sizeof = 40
};

// src/public/meshsystem/rendermesh_old_disk.h:296
struct ConstraintSlave_t {
private:

	uint32 m_nBoneHash;  // +0x0
	float m_flWeight;  // +0x4
	ConstraintSlave_t();

	ConstraintSlave_t * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_ConstraintSlave_t(CKV3TransferSaveContext *);
	void KV3TransferLoad_ConstraintSlave_t(CKV3TransferLoadContext *);

	// sizeof = 36
};

// src/public/meshsystem/rendermesh_old_disk.h:310
struct BaseConstraint_t {
private:

	int32 m_nConstraintType;  // +0x4
	uint32 m_nTargetUpBoneHash;  // +0x24
	uint32 m_nUpType;  // +0x28
	bool m_bInverse;  // +0x2c

	BaseConstraint_t();

	// sizeof = 96
};

// src/public/meshsystem/rendermesh_old_disk.h:334
struct PermRenderMeshData_t {
private:

	PermRenderMeshData_t();

	// sizeof = 64
};
