// Reconstructed from DWARF by pahole; not original source.

// src/public/rope_physics.h:98
class CRopePhysics<512> : public CBaseRopePhysics {
public:

	float m_SpringDistsSqr[511];  // +0x6840
	CRopePhysics(CRopePhysics<512> &);
	CRopePhysics(const CRopePhysics<512> &);
	CRopePhysics();

	// sizeof = 28736
};

// src/public/rope_physics.h:98
class CRopePhysics<10> : public CBaseRopePhysics {
public:

	float m_SpringDistsSqr[9];  // +0x248
	~CRopePhysics();
	CRopePhysics(CRopePhysics<10> &);
	CRopePhysics(const CRopePhysics<10> &);
	CRopePhysics();

	// sizeof = 624
};
