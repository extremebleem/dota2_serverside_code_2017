// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysics2/surfaceproperties_resource.h:21
class CPhysSurfacePropertiesPhysics {
	float m_friction;  // +0x0
	float m_elasticity;  // +0x4
	float m_density;  // +0x8
	float m_thickness;  // +0xc
	float m_dampening;  // +0x10
private:

	CPhysSurfacePropertiesPhysics * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CPhysSurfacePropertiesPhysics(CKV3TransferSaveContext *);
	void KV3TransferLoad_CPhysSurfacePropertiesPhysics(CKV3TransferLoadContext *);

	// sizeof = 20
};

// src/public/vphysics2/surfaceproperties_resource.h:38
class CPhysSurfacePropertiesAudio {
	float m_reflectivity;  // +0x0
	float m_hardnessFactor;  // +0x4
	float m_roughnessFactor;  // +0x8
	float m_roughThreshold;  // +0xc
	float m_hardThreshold;  // +0x10
	float m_hardVelocityThreshold;  // +0x14
private:

	CPhysSurfacePropertiesAudio * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CPhysSurfacePropertiesAudio(CKV3TransferSaveContext *);
	void KV3TransferLoad_CPhysSurfacePropertiesAudio(CKV3TransferLoadContext *);

	// sizeof = 24
};

// src/public/vphysics2/surfaceproperties_resource.h:59
class CPhysSurfacePropertiesSoundNames {
private:

	CPhysSurfacePropertiesSoundNames();

	CPhysSurfacePropertiesSoundNames * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CPhysSurfacePropertiesSoundNames(CKV3TransferSaveContext *);
	void KV3TransferLoad_CPhysSurfacePropertiesSoundNames(CKV3TransferLoadContext *);

	// sizeof = 96
};

// src/public/vphysics2/surfaceproperties_resource.h:82
class CPhysSurfacePropertiesGame {
	float m_flMaxSpeedFactor;  // +0x0
	float m_flJumpFactor;  // +0x4
	uint16 m_nMaterial;  // +0x8
	bool m_bClimbable;  // +0xa
private:

	CPhysSurfacePropertiesGame * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CPhysSurfacePropertiesGame(CKV3TransferSaveContext *);
	void KV3TransferLoad_CPhysSurfacePropertiesGame(CKV3TransferLoadContext *);

	// sizeof = 12
};

// src/public/vphysics2/surfaceproperties_resource.h:105
class CPhysSurfaceProperties {
	uint32 m_nameHash;  // +0x8

private:

	CPhysSurfaceProperties();

	CPhysSurfaceProperties * KV3TransferAllocateClassInstance(CKV3TransferBlockAllocator *, const char *);
	void KV3TransferSave(CKV3TransferSaveContext *);
	void KV3TransferLoad(CKV3TransferLoadContext *);
	void KV3TransferSave_CPhysSurfaceProperties(CKV3TransferSaveContext *);
	void KV3TransferLoad_CPhysSurfaceProperties(CKV3TransferLoadContext *);
	CUtlStringToken GetNameHash();

	// sizeof = 184
};
