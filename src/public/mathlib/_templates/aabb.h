// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/aabb.h:224
struct GenericBoundingBox_t<IntVector3D, 3> {
	GenericBoundingBox_t();
	GenericBoundingBox_t(const IntVector3D &, const IntVector3D &);
	IntVector3D GetCenter();
	void AddPointToBounds(const IntVector3D &);
	void operator|=(const GenericBoundingBox_t<IntVector3D, 3> &);
	void operator&=(const GenericBoundingBox_t<IntVector3D, 3> &);
	bool IsInvalid();
	bool IsEmpty();
	bool Overlaps(GenericBoundingBox_t<IntVector3D, 3>);
	bool ContainsPoint(const IntVector3D &);
	void SetToPoint(const IntVector3D &);

	// sizeof = 24
};
