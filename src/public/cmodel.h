// Reconstructed from DWARF by pahole; not original source.

// src/public/cmodel.h:21
struct Ray_t {
	float m_flRadius;  // +0x40
	bool m_IsRay;  // +0x44
	bool m_IsSwept;  // +0x45
	Ray_t();
	Ray_t(const Vector &, const Vector &, float);
	Ray_t(const Vector &, const Vector &, const Vector &, const Vector &);
	void Init(const Vector &, const Vector &, float);
	void Init(const Vector &, const Vector &, const Vector &, const Vector &);
	Vector InvDelta();
	void Bounds(Vector &, Vector &);

	// sizeof = 80
};

// src/public/cmodel.h:118
class Ray2D_t {
	Ray2D_t(const Vector &, const Vector &);
	Ray2D_t(const Vector2D &, const Vector2D &);
	Ray2D_t(Ray_t &);

	// sizeof = 16
};
