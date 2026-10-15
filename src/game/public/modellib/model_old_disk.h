// Reconstructed from DWARF by pahole; not original source.

// src/game/public/modellib/model_old_disk.h:12
struct MaterialGroup_t {
private:

	MaterialGroup_t();

	// sizeof = 12
};

// src/game/public/modellib/model_old_disk.h:21
struct ModelSkeletonData_t {
	enum BoneFlags_t {
		FLAG_NO_BONE_FLAGS = 0,
		FLAG_BONEFLEXDRIVER = 0x4,
		FLAG_CLOTH = 0x8,
		FLAG_PHYSICS = 0x10,
		FLAG_ATTACHMENT = 0x20,
		FLAG_ANIMATION = 0x40,
		FLAG_MESH = 0x80,
		FLAG_HITBOX = 0x100,
		FLAG_RETARGET_SRC = 0x200,
		FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
		FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
		FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
		FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
		FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
		FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
		FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
		FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
		FLAG_BONE_MERGE_READ = 0x40000,
		FLAG_BONE_MERGE_WRITE = 0x80000,
		FLAG_ALL_BONE_FLAGS = 0xfffff,
		BLEND_PREALIGNED = 0x100000,
		FLAG_RIGIDLENGTH = 0x200000,
		FLAG_PROCEDURAL = 0x400000,
	};

private:

	ModelSkeletonData_t();

	// sizeof = 48
};

// src/game/public/modellib/model_old_disk.h:21
struct ModelSkeletonData_t {
	enum BoneFlags_t {
		FLAG_NO_BONE_FLAGS = 0,
		FLAG_BONEFLEXDRIVER = 0x4,
		FLAG_CLOTH = 0x8,
		FLAG_PHYSICS = 0x10,
		FLAG_ATTACHMENT = 0x20,
		FLAG_ANIMATION = 0x40,
		FLAG_MESH = 0x80,
		FLAG_HITBOX = 0x100,
		FLAG_RETARGET_SRC = 0x200,
		FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
		FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
		FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
		FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
		FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
		FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
		FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
		FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
		FLAG_BONE_MERGE_READ = 0x40000,
		FLAG_BONE_MERGE_WRITE = 0x80000,
		FLAG_ALL_BONE_FLAGS = 0xfffff,
		BLEND_PREALIGNED = 0x100000,
		FLAG_RIGIDLENGTH = 0x200000,
		FLAG_PROCEDURAL = 0x400000,
	};

private:

	ModelSkeletonData_t();

	/* tag__fprintf: const_type tag not supported! */;
	ModelSkeletonData_t & operator=(const ModelSkeletonData_t &);

	// sizeof = 48
};

// src/game/public/modellib/model_old_disk.h:72
struct PermModelInfo_t {
	enum FlagEnum {
		FLAG_TRANSLUCENT = 0x1,
		FLAG_TRANSLUCENT_TWO_PASS = 0x2,
		FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
		FLAG_SOURCE1_IMPORT = 0x8,
		FLAG_MODEL_PART_CHILD = 0x10,
		FLAG_NAV_GEN_NONE = 0x20,
		FLAG_NAV_GEN_HULL = 0x40,
		FLAG_NO_FORCED_FADE = 0x800,
		FLAG_HAS_SKINNED_MESHES = 0x400,
		FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
		FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
		FLAG_NO_ANIM_EVENTS = 0x100000,
		FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
		FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
	};

	uint32 m_nFlags;  // +0x0
	float m_flMass;  // +0x34
	float m_flMaxEyeDeflection;  // +0x44
private:

	PermModelInfo_t();

	// sizeof = 80
};

// src/game/public/modellib/model_old_disk.h:72
struct PermModelInfo_t {
	enum FlagEnum {
		FLAG_TRANSLUCENT = 0x1,
		FLAG_TRANSLUCENT_TWO_PASS = 0x2,
		FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
		FLAG_SOURCE1_IMPORT = 0x8,
		FLAG_MODEL_PART_CHILD = 0x10,
		FLAG_NAV_GEN_NONE = 0x20,
		FLAG_NAV_GEN_HULL = 0x40,
		FLAG_NO_FORCED_FADE = 0x800,
		FLAG_HAS_SKINNED_MESHES = 0x400,
		FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
		FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
		FLAG_NO_ANIM_EVENTS = 0x100000,
		FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
		FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
	};

	uint32 m_nFlags;  // +0x0
	float m_flMass;  // +0x34
	float m_flMaxEyeDeflection;  // +0x44
private:

	PermModelInfo_t();

	/* tag__fprintf: const_type tag not supported! */;
	PermModelInfo_t & operator=(const PermModelInfo_t &);

	// sizeof = 80
};

// src/game/public/modellib/model_old_disk.h:124
struct PermModelExtPart_t {
private:

	int32 m_nParent;  // +0x24
	PermModelExtPart_t();

	// sizeof = 48
};

// src/game/public/modellib/model_old_disk.h:151
struct ModelBoneFlexDriverControl_t {
private:

	uint32 m_flexControllerToken;  // +0x8
	float m_flMin;  // +0xc
	float m_flMax;  // +0x10
	ModelBoneFlexDriverControl_t();

	// sizeof = 20
};

// src/game/public/modellib/model_old_disk.h:166
struct ModelBoneFlexDriver_t {
private:

	uint32 m_boneNameToken;  // +0x4
	ModelBoneFlexDriver_t();

	// sizeof = 16
};

// src/game/public/modellib/model_old_disk.h:179
struct PermModelData_t {
private:

	MeshGroupMask_t m_nDefaultMeshGroupMask;  // +0xb8
	PermModelData_t();

	// sizeof = 264
};
