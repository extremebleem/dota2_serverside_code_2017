// Reconstructed from DWARF by pahole; not original source.

// src/public/physicslib/physaggregatedata.h:30
struct CPhysConstraintData {
	uint32 m_nFlags;  // +0x0
	uint16 m_nParent;  // +0x4
	uint16 m_nChild;  // +0x6
	const VPhysXConstraintParams_t * m_pParams;  // +0x8

	// sizeof = 16
};

// src/public/physicslib/physaggregatedata.h:54
class CPhysAggregateData {
	CInterlockedUInt m_nRefCounter;  // +0x0
	uint16 m_nFlags;  // +0x4
	int16 m_nIncrementalVectorIndex;  // +0x6
	int16 m_nReserved;  // +0x8

	const CFeModel * m_pFeModel;  // +0x90
	const CResourceString * m_pDebugPartNames;  // +0xb0
	const char * m_pEmbeddedKeyvalues;  // +0xb8
	void * operator new(size_t, size_t);
	void operator delete(void *);
	CPhysAggregateData(const CPhysAggregateData * *, uint);
	CPhysAggregateData(uint16);
	~CPhysAggregateData();
	uintp GetRuntimeSize();
	void AddRef();
	void Release();
	uint32 GetChecksum();
	int GetBoneCount();
	const char * GetBoneName(int);
	int FindBodyPartByHash(uint);
	int GetPartCount();
	uint32 GetBoneHash(int);
	uint GetIndexHash(int);
	const matrix3x4a_t GetScaledBindPose(uint, float);
	const CPhysSurfaceProperties * GetSurfaceProperties(int, const CPhysSurfaceProperties *);
	uint64 GetUsedGroupMask();
	uint64 GetUsedLayerMask();
	bool HasBreakablePartData();
	CPhysAggregateData * AllocAligned(uint);
	CPhysAggregateData * AllocAligned(const void *, uint, uint);

protected:

	void Init();

	// sizeof = 192
};

// src/public/physicslib/physaggregatedata.h:169
class CPhysBodyDesc {
	struct SphereAndAttr_t {
		SphereAndAttr_t();

		// sizeof = 48
	};

	struct CapsuleAndAttr_t {
		CapsuleAndAttr_t();

		// sizeof = 64
	};

	struct HullAndAttr_t {
		HullAndAttr_t();

		// sizeof = 40
	};

	struct MeshAndAttr_t {
		MeshAndAttr_t();

		// sizeof = 40
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	float m_flMass;  // +0x0

	const char * m_pBoneName;  // +0x8
	bool m_bOwnsShapes;  // +0x10

	const CPhysSurfaceProperties * m_pSurfaceProp;  // +0x48
	CPhysBodyDesc(bool);
	~CPhysBodyDesc();
	void AddSphere(const RnSphere_t &, const RnCollisionAttr_t &);
	void AddCapsule(const RnCapsule_t &, const RnCollisionAttr_t &);
	void AddHull(RnHull_t *, const RnCollisionAttr_t &);
	void AddMesh(RnMesh_t *, const RnCollisionAttr_t &);

	// sizeof = 176
};
