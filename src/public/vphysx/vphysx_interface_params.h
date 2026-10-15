// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysx/vphysx_interface_params.h:23
struct DebugMeshParams_t {
	const CModelSkeleton * m_pMasterSkeleton;  // +0x0
	float m_flConstraintScale;  // +0x10
	int m_nSelectedConstraint;  // +0x14
	int m_nSelectedPart;  // +0x18
	uint8 m_nConstraintAlpha;  // +0x1c
	uint8 m_nSelectedConstraintAlpha;  // +0x1d

	uint m_nFlags;  // +0x2c
	DebugMeshParams_t();
	~DebugMeshParams_t();

	// sizeof = 48
};

// src/public/vphysx/vphysx_interface_params.h:23
struct DebugMeshParams_t {
	enum FlagEnum_t {
		FLAG_APPEND_ENTITY_BONE = 0x1,
	};

	const CModelSkeleton * m_pMasterSkeleton;  // +0x0
	float m_flConstraintScale;  // +0x10
	int m_nSelectedConstraint;  // +0x14
	int m_nSelectedPart;  // +0x18
	uint8 m_nConstraintAlpha;  // +0x1c
	uint8 m_nSelectedConstraintAlpha;  // +0x1d

	uint m_nFlags;  // +0x2c
	DebugMeshParams_t();
	~DebugMeshParams_t();

	// sizeof = 48
};

// src/public/vphysx/vphysx_interface_params.h:62
struct DebugTraceDataParams_t : public DebugMeshParams_t {
public:

	uint m_nPoseCount;  // +0x38
	DebugTraceDataParams_t();

	// sizeof = 64
};

// src/public/vphysx/vphysx_interface_params.h:76
struct DebugSceneObjectParams_t : public DebugMeshParams_t {
public:

	uint m_nSortPoseCount;  // +0x3c
	DebugSceneObjectParams_t();
	~DebugSceneObjectParams_t();

	// sizeof = 80
};

// src/public/vphysx/vphysx_interface_params.h:96
struct PhysicsWorldUpdateConCommParams_t {
	float m_flCurrentGameTime;  // +0x0

	// sizeof = 4
};
