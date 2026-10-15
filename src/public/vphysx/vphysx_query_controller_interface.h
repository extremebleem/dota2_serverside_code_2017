// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysx/vphysx_query_controller_interface.h:16
class COverlapHit {
protected:

	const CPhysSurfaceProperties * m_pSurfaceProperties;  // +0x20
	HPhysicsBody m_hBody;  // +0x28
	HPhysicsShape m_hShape;  // +0x30
	bool m_bHitboxHit;  // +0x38
	COverlapHit();
	bool DidHit();
	bool IsWorldHit();
	HPhysicsBody GetPhysicsBody();
	void SetPhysicsBody(HPhysicsBody);
	HPhysicsShape GetShape();
	void SetShape(HPhysicsShape);
	const RnCollisionAttr_t & GetShapeAttributes();
	void SetShapeAttributes(const RnCollisionAttr_t &);
	const CPhysSurfaceProperties * GetSurfaceProperties();
	void SetSurfaceProperties(const CPhysSurfaceProperties *);
	uint GetEntityId();
	void SetEntityId(uint32);
	CBaseEntity * GetHitEntity();
	bool IsHitboxHit();
	void SetHitboxHit(bool);

	// sizeof = 64
};

// src/public/vphysx/vphysx_query_controller_interface.h:51
class COverlapList {
	COverlapList();
	void SetCount(int);
	void EnsureCapacity(int);
	int Count();
	bool IsEmpty();
	COverlapHit & operator[](int);
	const COverlapHit & operator[](int);
	COverlapHit * begin();
	const COverlapHit * begin();
	COverlapHit * end();
	const COverlapHit * end();
	COverlapHit * Base();
	void SetCountNonDestructively(int);

	// sizeof = 4120
};

// src/public/vphysx/vphysx_query_controller_interface.h:79
class CGameTraceList {
	CGameTraceList();
	void EnsureCapacity(int);
	int Count();
	CGameTrace & operator[](int);
	const CGameTrace & operator[](int);

	// sizeof = 10776
};
