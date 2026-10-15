// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/vplane.h:22
class VPlane {
	vec_t m_Dist;  // +0xc
	VPlane();
	VPlane(const Vector &, vec_t);
	void Init(const Vector &, vec_t);
	void InitFromPointAndNormal(const Vector &, const Vector &);
	VPlane & operator=(const VPlane &);
	vec_t DistTo(const Vector &);
	bool IntersectLineSegment(const Vector &, const Vector &, Vector &);
	SideType GetPointSide(const Vector &, vec_t);
	SideType GetPointSideExact(const Vector &);
	SideType BoxOnPlaneSide(const Vector &, const Vector &);
	bool PointInFront(const Vector &);
	void ReflectPoint(Vector &);
	void ReflectDirection(Vector &);
	void ConvertToPlaneEquation(Vector4D &);
	VPlane Flip();
	Vector GetPointOnPlane();
	Vector SnapPointToPlane(const Vector &);
	bool IsZero();

	// sizeof = 16
};
