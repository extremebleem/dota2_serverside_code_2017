// Reconstructed from DWARF by pahole; not original source.

// src/game/public/navlib/nav_poly.h:139
class CNavPoly {
	enum {
		NAV_MAX_POLYS_FROM_SPLIT = 0x3,
	};

	class CSplitInfo_t {
		signed char nVertsInSrc[4];  // +0x0
		signed char nInternalEdgeOtherPoly[4];  // +0x4
		signed char nInternalEdgeOtherEdge[4];  // +0x8
		CSplitInfo_t();

		// sizeof = 12
	};

	int ()() * * _vptr.CNavPoly;  // +0x0
private:

	int m_nVerts;  // +0x68
	float m_flSurfaceArea;  // +0x6c
	float m_flDiameterMin;  // +0x70
	float m_flDiameterMax;  // +0x74
	float m_flClearance;  // +0x78
	uint8 m_nHighestVert:2;  // +0x7c:0
	uint8 m_nLowestVert:2;  // +0x7c:2
	bool m_bMostlyFlat:1;  // +0x7c:4

protected:

	uint8 m_nGenIndex;  // +0x7d

	const CNavMesh & m_rNavMesh;  // +0x80
	uint8 m_nHullSupport;  // +0x88
	uint8 m_nBoundaryEdges;  // +0x89

	CNavPoly(CNavPoly &);
	CNavPoly(const CNavPoly &);
	CNavPoly(CNavMesh &);
	void NonGenericPoly();
	void SavePoly(CUtlBuffer &);
	NavErrorType LoadPoly(CUtlBuffer &, unsigned int, unsigned int);
	virtual void GeometryChanged();
	bool IsDegenerate();
	int GetNumEdges();
	bool IsEdgeIndexValid(NavEdgeIndex);
	NavEdgeIndex GetNextEdgeIndexCW(NavEdgeIndex);
	NavEdgeIndex GetNextEdgeIndexCCW(NavEdgeIndex);
	Vector GetEdgeNormal(NavEdgeIndex);
	Vector GetEdgeNormalXY(NavEdgeIndex);
	float GetEdgeLength(NavEdgeIndex);
	int GetNumVerts();
	bool IsVertIndexValid(int);
	Vector GetVert(int);
	Vector GetVertXY(int);
	int GetNextVertIndexCW(int);
	int GetNextVertIndexCCW(int);
	Vector GetVertInset(int, float);
	int GetVertIndexCWForEdge(NavEdgeIndex);
	int GetVertIndexCCWForEdge(NavEdgeIndex);
	NavEdgeIndex GetEdgeIndexCWFromVert(int);
	NavEdgeIndex GetEdgeIndexCCWFromVert(int);
	float GetSurfaceArea();
	float GetDiameterMin();
	float GetDiameterMax();
	Vector GetCenter();
	Vector GetNormal_New();
	bool HasLowAspectRatio();
	bool IsPlanar(float);
	bool IsCoplanar(const CNavPoly &, float);
	float GetZ(const Vector &);
	float GetZ(float, float);
	void FixupZ(Vector *);
	float GetHighestZ();
	float GetLowestZ();
	int FindClosestVertIndex(const Vector &);
	int FindClosestVertIndex2D(const Vector2D &);
	float GetZDeltaAtEdgeToArea(const CNavPoly &);
	float GetZDeltaAtEdgeToPoly(const CNavPoly &);
	void GetClosestPointOnArea(const Vector &, Vector *);
	Vector GetClosestPointOnPoly(const Vector &);
	float GetClosestPointOnPolyAndDistSqrThresholded(const Vector &, float, Vector *);
	Vector GetClosestPointOnPoly2D(const Vector2D &);
	Vector GetRandomPoint();
	Vector FindRandomSpot();
	float GetClearance();
	void SetClearance(float);
	float GetDistanceSquaredToPoint(const Vector &);
	float CalcDistanceSquaredToPoint(const Vector &);
	float CalcDistanceSquaredFarthestToPoint(const Vector &);
	bool IsClosestPointFartherThanThreshold2D(const Vector2D &, float);
	bool IsOverlappingPoint(const Vector &, float);
	bool IsOverlappingPoint(const Vector2D &, float);
	bool IsOverlappingPointForHull(const Vector2D &, NavHull_t, float);
	bool IsOverlappingPoly(const CNavPoly &);
	bool IsOverlappingExtent(const Extent &);
	bool IsOverlappingSphere(const Vector &, float);
	bool IsOverlappingOBB(const Vector &, const Vector &, const matrix3x4_t &);
	bool IsOverlappingSegment2D(const Vector2D &, const Vector2D &);
	bool ContainsPoint(const Vector &);
	bool ContainsPoly(const CNavPoly &);
	bool IsExtentIntersectingBox(const Vector &, const Vector &, float);
	float IntersectRayWithPoly(const Ray_t &);
	NavEdgeIndex IntersectRayWithPolyEdge2D(const Ray2D_t &, bool, float *);
	bool GetClosestPointOnPolyWithHullClearance(const Vector &, NavHull_t, Vector *);
	bool GetRandomPointWithHullClearance(float, Vector *);
	int ClipPolyVertsToHullClearance(float, Vector *);
	Vector GetCorner(NavCornerType);
	bool IsOverlappingX(const CNavPoly &, float);
	bool IsOverlappingY(const CNavPoly &, float);
	void GetExtent(Extent *);
	void SetCorner(NavCornerType, const Vector &);
	void SetCorners(const CNavPoly &);
	void SetCorners(const Vector &, const Vector &);
	void SetCorners(const Vector &, const Vector &, const Vector &);
	void SetCorners(const Vector &, const Vector &, const Vector &, const Vector &);
	void SetCorners(NavCornerType, const Vector &, const Vector &, const Vector &, const Vector &);
	void SetCorners(const Vector &, const Vector &, const CNavPoly &, const CNavPoly *);
	void ShiftPoly(const Vector &);
	void ComputeNormal_Old(Vector *, bool);
	void RaiseVert(int, float);
	bool SplitByPlane_Old(const Vector &, float, FuncPolyFactory_t &, CNavPoly * *, CNavPoly * *);
	int SplitByPlane(const Vector &, float, FuncPolyFactory_t &, CNavPoly * *, CSplitInfo_t *, bool);
	void DumpSplitInfo(int, CNavPoly * *, CSplitInfo_t *);
	bool MergeWithPoly(const CNavPoly &);
	bool SpliceWithPoly(CNavPoly &, CNavPoly &, int *, int *, int *, int *);
	void ComputePortal_Old(const CNavPoly &, NavEdgeIndex, Vector *, float *);
	void ComputeOrientedPortal(const CNavPoly &, NavEdgeIndex, NavEdgeIndex, CNavOrientedPortal *);
	void ComputeOrientedPortal(const CNavPoly &, NavEdgeIndex, NavEdgeIndex, float, CNavOrientedPortal *);
	NavEdgeIndex ComputeLargestPortal(const CNavPoly &, Vector *, float *);
	void GetVertHotspot(int, Vector *);
	int TestRayToVertHotspots(const Vector &, const Vector &);
	Vector GetVertWithHullMargin(int, float);
	bool CanSupportHull(NavHull_t);
	uint8 GetHullSupport();
	float GetHullSupportRadius();
	uint8 GetGenIndex();

private:

	void ComputeCenter();
	void ComputeMinMaxVertZ();
	void ComputeSurfaceArea();
	void ComputeDiameters();
	void ComputeExtent();
	void ComputeNormal_New();
	void UpdateFlagMostlyFlat();

	// vtable[0] GeometryChanged
	// sizeof = 192
};
