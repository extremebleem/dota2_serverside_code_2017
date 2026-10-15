// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_poly.h:45
class CNavOrientedPortal {
	float m_flWidth;  // +0x18

	static float ms_flMinAllowedWidth;
	CNavOrientedPortal();
	CNavOrientedPortal(const Vector &, const Vector &, float);
	Vector GetCenter();
	void ExpandPortal(float, float);
	Vector CalcClosestPoint(const Vector &, float);
	Vector CalcClosestPointWithWindowedOffset(const Vector &, float, float, float);
	bool TestLineToPortalXY(const Vector &, const Vector &, float);
	void CalcClosestPointToRay(const Vector &, const Vector &, Vector *);

	// sizeof = 28
};

// src/public/navlib/nav_poly.h:419
class NavTriIterator {
private:

	const const CNavPoly & m_rPoly;  // +0x28
	int m_nVert;  // +0x30
	float m_flInset;  // +0x34
	NavTriIterator(const CNavPoly &, float);
	void ComputeBC();
	void Begin();
	bool IsEnd();
	bool IsLast();
	void Next();
	void GetTri(Vector *, Vector *, Vector *);
	Vector GetA();
	Vector GetB();
	Vector GetC();
	Vector GetCenter();
	float GetNormalAndArea(Vector *);
	float GetArea();

	// sizeof = 56
};
