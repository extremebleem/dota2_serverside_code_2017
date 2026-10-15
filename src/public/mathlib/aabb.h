// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/aabb.h:15
struct AABB_t {
private:

	AABB_t();
	AABB_t(const Vector &, const Vector &);
	Vector GetCenter();
	float GetBoundingRadius();
	float GetSurfaceArea();
	float GetVolume();
	float GetMinDistToPoint(const Vector &);
	float GetMinAxialDistanceToPoint(const Vector &);
	void operator|=(const Vector &);
	void operator|=(const AABB_t &);
	void operator&=(const AABB_t &);
	void CreatePlanesFrom(Vector4D *);
	void MakeInvalid();
	bool IsInvalid();
	bool IsEmpty();
	bool Overlaps(AABB_t);
	bool ContainsPoint(const Vector &);
	bool Contains(const AABB_t &);
	void SetToPoint(const Vector &);
	float LengthOfSmallestDimension();
	const Vector GetSize();
	void EnsureMinSize(const Vector &);
	void Move(const Vector &);
	void Expand(float);

	// sizeof = 24
};

// src/public/mathlib/aabb.h:355
class IntAABB_t : public GenericBoundingBox_t<IntVector3D, 3> {
public:

	IntAABB_t(IntVector3D, IntVector3D);
	IntAABB_t();
	void MakeInvalid();
	int Height();
	int Width();
	int Depth();
	int NumberOfCells();
	IntVector3D Size();
	IntAABB_CellRangeReference Indices();
	IntAABB_CellRangeReference IndicesNonInclusive();

	// sizeof = 24
};

// src/public/mathlib/aabb.h:399
class IntAABB_CellRangeReference : public IntAABB_t {
public:

	IntAABB_CellRangeReference();
	IntAABBIterator begin();
	IntAABBIterator end();

	// sizeof = 24
};

// src/public/mathlib/aabb.h:413
class IntAABBIterator {
	int m_nIndex;  // +0x0
	IntAABBIterator(const IntAABB_t &, int);
	void operator++();
	bool operator!=(const IntAABBIterator &);
	IntVector3D operator*();

	// sizeof = 28
};
