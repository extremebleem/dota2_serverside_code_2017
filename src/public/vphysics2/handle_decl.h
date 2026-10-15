// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysics2/handle_decl.h:42
struct PhysicsTrace_t {
	HPhysicsBody m_HitObject;  // +0x0
	HPhysicsShape m_HitShape;  // +0x8
	float m_flHitOffset;  // +0x28
	float m_flFraction;  // +0x2c
	bool m_bStartInSolid;  // +0x30

	const CPhysSurfaceProperties * m_pSurfaceProperties;  // +0x38
	PhysicsTrace_t();
	bool DidHit();
	bool DidStartSolid();
	const Vector & GetEndPoint();
	bool IsValid();
	int Compare(const PhysicsTrace_t *);

	// sizeof = 64
};

// src/public/vphysics2/handle_decl.h:115
struct CSweepResult {
	HPhysicsBody m_hBody;  // +0x0
	HPhysicsShape m_hShape;  // +0x8
	float m_flAlpha;  // +0x10
	int m_nTriangle;  // +0x14
	CSweepResult();
	CSweepResult(HPhysicsBody, HPhysicsShape, float, int);
	bool DidHit();
	bool StartInSolid();
	Vector EndPos(const CTransform &, const CTransform &);

	// sizeof = 24
};

// src/public/vphysics2/handle_decl.h:163
struct CLinearSweepResult : public CSweepResult {
public:

	CLinearSweepResult();

	// sizeof = 48
};

// src/public/vphysics2/handle_decl.h:195
class CRnPlaneResult {
	HPhysicsShape m_hShape;  // +0x10
	CRnPlaneResult(const RnPlane_t &, HPhysicsShape);

	// sizeof = 24
};
