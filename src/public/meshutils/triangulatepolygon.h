// Reconstructed from DWARF by pahole; not original source.

// src/public/meshutils/triangulatepolygon.h:37
class CTriangulatedPolygon {
	enum PolygonClassification_t {
		POLYGON_TYPE_UKNOWN = 0,
		POLYGON_TYPE_CONVEX = 0x1,
		POLYGON_TYPE_CONCAVE = 0x2,
	};

private:

	CTriangulatedPolygon();
	CTriangulatedPolygon(const Vector *, const Vector2D *, int);
	void ConstructPolygon(const Vector *, const Vector2D *, int);
	bool IsPointInPolygon(const Vector &);
	bool IsPointInPolygon(const Vector &, float);
	bool IntersectLineSegment(const Vector &, const Vector &, Vector *);
	Vector2D ComputeTextureCoordinateForPoint(const Vector &);
	void ClipTrianglesToPolygonProjection(float, bool, const CUtlVector<Vector, CUtlMemory<Vector, int> > &, CUtlVector<Vector, CUtlMemory<Vector, int> > *);
	bool IsConvex();
	Vector ComputeCenter();
	void GetPlane(VPlane *);
	void SnapVertices(float);
	void RebaseTextureCoordinates();
	bool HasTextureCoordinates();
	const Vector & GetNormal();
	const Vector & GetMin();
	const Vector & GetMax();
	int GetNumTriangleIndices();
	int GetNumVertices();
	const Vector * GetVertices();

	// sizeof = 616
};
