// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/breakable_shared.h:27
struct breakmodel_t {
	char modelName[512];  // +0x20
	char placementName[512];  // +0x220
	float fadeTime;  // +0x420
	float fadeMinDist;  // +0x424
	float fadeMaxDist;  // +0x428
	float health;  // +0x42c
	float burstScale;  // +0x430
	float burstRandomize;  // +0x434
	int collisionGroup;  // +0x438
	bool isRagdoll;  // +0x43c
	bool placementIsBone;  // +0x43d
	bool isMotionDisabled;  // +0x43e

	const VpropBreakablePartData_t * m_pBreakData;  // +0x448
	breakmodel_t();

	// sizeof = 1104
};

// src/game/shared/breakable_shared.h:76
class CBreakParser : public IVPhysicsKeyHandler {
public:

private:

	int m_defaultCollisionGroup;  // +0x8
	float m_defaultBurstScale;  // +0xc
	float m_defaultBurstRandomize;  // +0x10
	bool m_wroteCollisionGroup;  // +0x14
	CBreakParser(float, float, int);
	void ParseModelName(breakmodel_t *, const char *);
	virtual void ParseKeyValue(void *, const char *, const char *);
	virtual void SetDefaults(void *);

	// vtable[0] ParseKeyValue
	// vtable[1] SetDefaults
	// sizeof = 24
};
