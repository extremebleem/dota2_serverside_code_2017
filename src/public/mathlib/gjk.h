// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/gjk.h:13
struct CGJKShapeProxy {
protected:

	int m_nVertexCount;  // +0x0

	const Vector * m_pVertexBuffer;  // +0x8
	float m_flScale;  // +0x10
	CGJKShapeProxy(int, const Vector *, float);
	int GetSupport(const Vector &);
	Vector GetVertex(int);

	// sizeof = 24
};

// src/public/mathlib/gjk.h:60
struct CGJKSphereProxy : public CGJKShapeProxy {
public:

private:

	CGJKSphereProxy(const Vector &);

	// sizeof = 32
};

// src/public/mathlib/gjk.h:77
struct CGJKCapsuleProxy : public CGJKShapeProxy {
public:

private:

	CGJKCapsuleProxy(const Vector &, const Vector &);

	// sizeof = 48
};

// src/public/mathlib/gjk.h:93
struct CGJKBoxProxy : public CGJKShapeProxy {
public:

private:

	CGJKBoxProxy(const Vector &);

	// sizeof = 120
};

// src/public/mathlib/gjk.h:138
struct DistanceQueryResult_t {
	float m_flDistance;  // +0x18
	DistanceQueryResult_t();
	bool Overlap();
	Vector Normal();

	// sizeof = 28
};
