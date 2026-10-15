// Reconstructed from DWARF by pahole; not original source.

// src/game/public/vphysx/vphysx_shape_resource.h:8
struct VPhysXDiskShapeHeader_t {
	enum VersinEnum_t {
		VERSION = 0x81,
	};

private:

	uint8 m_nType;  // +0x0

	uint16 m_nCollisionAttribute;  // +0x2

	VPhysXDiskShapeHeader_t();
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 4
};

// src/game/public/vphysx/vphysx_shape_resource.h:18
struct VPhysXDiskMesh2_t : public VPhysXDiskShapeHeader_t {
public:

private:

	float m_flSkinWidth;  // +0xc
	float m_flMaxVelocity;  // +0x10
	unsigned int m_nReserved2[2];  // +0x14
	VPhysXDiskMesh2_t();

	VPhysXDiskMesh2_t & operator=(const VPhysXDiskMesh2_t &);

	// sizeof = 28
};

// src/game/public/vphysx/vphysx_shape_resource.h:30
struct VPhysXShapeCompoundHeader2_t : public VPhysXDiskShapeHeader_t {
public:

private:

	VPhysXShapeCompoundHeader2_t();

	VPhysXShapeCompoundHeader2_t & operator=(const VPhysXShapeCompoundHeader2_t &);

	// sizeof = 20
};

// src/game/public/vphysx/vphysx_shape_resource.h:38
struct VPhysXDiskCapsule_t : public VPhysXDiskShapeHeader_t {
public:

private:

	float m_flRadius;  // +0x1c
	VPhysXDiskCapsule_t();

	VPhysXDiskCapsule_t & operator=(const VPhysXDiskCapsule_t &);

	// sizeof = 32
};
