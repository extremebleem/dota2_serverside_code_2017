// Reconstructed from DWARF by pahole; not original source.

// src/public/trace.h:27
class CBaseTrace {
	float fraction;  // +0x2c
	uint64 contents;  // +0x30
	bool startsolid;  // +0x38
	CBaseTrace();

	// sizeof = 64
};

// src/public/trace.h:48
class CGameTrace : public CBaseTrace {
public:

	const CPhysSurfaceProperties * m_pSurfaceProperties;  // +0x40
	const CHitBox * m_pHitbox;  // +0x50
	HPhysicsBody m_hBody;  // +0x58
	HPhysicsShape m_hShape;  // +0x60
	uint m_nFaceIndex;  // +0xa0
	short int hitboxBoneIndex;  // +0xa4
	short int unused0;  // +0xa6
	CGameTrace();
	void Init();
	bool DidHitNonWorldEntity();
	bool DidHit();
	int GetHitboxIndex();
	int GetHitGroup();
	bool DidHitContents(uint64);
	uint GetEntityId();
	HPhysicsBody GetPhysicsBody();
	void SetPhysicsBody(HPhysicsBody);
	HPhysicsShape GetPhysicsShape();
	void SetPhysicsShape(HPhysicsShape);
	const RnCollisionAttr_t & GetShapeAttributes();
	void SetShapeAttributes(const RnCollisionAttr_t &);
	void SetEntityId(uint32);
	const CPhysSurfaceProperties * GetSurfaceProperties();
	void SetSurfaceProperties(const CPhysSurfaceProperties *);
	bool IsWorldHit();
	bool DidHitWorld();
	const Vector & GetEndPoint();
	void SetEndPoint(const Vector &);
	const Vector & GetNormal();
	void SetNormal(const Vector &);
	float GetFraction();
	void SetFraction(float);
	CBaseEntity * GetHitEntity();

	// sizeof = 168
};
