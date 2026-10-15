// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/femodeldesc.h:48
struct PhysFeModelDesc_t {
private:

	uint32 m_nStaticNodeFlags;  // +0x10
	uint32 m_nDynamicNodeFlags;  // +0x14
	float32 m_flLocalForce;  // +0x18
	float32 m_flLocalRotation;  // +0x1c
	uint16 m_nNodeCount;  // +0x20
	uint16 m_nStaticNodes;  // +0x22
	uint16 m_nRotLockStaticNodes;  // +0x24
	uint16 m_nSimdTriCount1;  // +0x26
	uint16 m_nSimdTriCount2;  // +0x28
	uint16 m_nSimdQuadCount1;  // +0x2a
	uint16 m_nSimdQuadCount2;  // +0x2c
	uint16 m_nQuadCount1;  // +0x2e
	uint16 m_nQuadCount2;  // +0x30
	uint16 m_nCollisionSphereInclusiveCount;  // +0x32
	uint16 m_nTreeDepth;  // +0x34
	uint16 m_nFitMatrixCount1;  // +0x36
	uint16 m_nFitMatrixCount2;  // +0x38
	uint16 m_nSimdFitMatrixCount1;  // +0x3a
	uint16 m_nSimdFitMatrixCount2;  // +0x3c
	uint16 m_nRopeCount;  // +0x3e
	unsigned int m_nReserved[30];  // +0x160
	float32 m_flWindage;  // +0x1d8
	float32 m_flWindDrag;  // +0x1dc
	float32 m_flDefaultSurfaceStretch;  // +0x1e0
	float32 m_flDefaultThreadStretch;  // +0x1e4
	float32 m_flDefaultGravityScale;  // +0x1e8
	float32 m_flDefaultVelAirDrag;  // +0x1ec
	float32 m_flDefaultExpAirDrag;  // +0x1f0
	float32 m_flDefaultVelQuadAirDrag;  // +0x1f4
	float32 m_flDefaultExpQuadAirDrag;  // +0x1f8
	float32 m_flDefaultVelRodAirDrag;  // +0x1fc
	float32 m_flDefaultExpRodAirDrag;  // +0x200
	float32 m_flRodVelocitySmoothRate;  // +0x204
	float32 m_flQuadVelocitySmoothRate;  // +0x208
	float32 m_flAddWorldCollisionRadius;  // +0x20c
	float32 m_flDefaultVolumetricSolveAmount;  // +0x210
	uint16 m_nRodVelocitySmoothIterations;  // +0x214
	uint16 m_nQuadVelocitySmoothIterations;  // +0x216
	PhysFeModelDesc_t();

	uint GetNodeCount();
	uint GetDynamicNodeCount();

	// sizeof = 536
};
