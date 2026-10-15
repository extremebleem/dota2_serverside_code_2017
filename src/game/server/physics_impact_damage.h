// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physics_impact_damage.h:14
struct impactentry_t {
	float impulse;  // +0x0
	float damage;  // +0x4

	// sizeof = 8
};

// src/game/server/physics_impact_damage.h:21
struct impactdamagetable_t {
	int linearCount;  // +0x10
	int angularCount;  // +0x14
	float minSpeedSqr;  // +0x18
	float minRotSpeedSqr;  // +0x1c
	float minMass;  // +0x20
	float smallMassMax;  // +0x24
	float smallMassCap;  // +0x28
	float smallMassMinSpeedSqr;  // +0x2c
	float largeMassMin;  // +0x30
	float largeMassScale;  // +0x34
	float largeMassFallingScale;  // +0x38
	float myMinVelocity;  // +0x3c

	// sizeof = 64
};

// src/game/server/physics_impact_damage.h:56
struct vphysics_objectstress_t {
	float exertedStress;  // +0x0
	float receivedStress;  // +0x4
	bool hasNonStaticStress;  // +0x8
	bool hasLargeObjectContact;  // +0x9

	// sizeof = 12
};
