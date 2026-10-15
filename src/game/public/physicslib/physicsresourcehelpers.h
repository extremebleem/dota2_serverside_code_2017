// Reconstructed from DWARF by pahole; not original source.

// src/game/public/physicslib/physicsresourcehelpers.h:35
struct VertexPositionColor_t {
private:

	VertexPositionColor_t();
	VertexPositionColor_t(const Vector &, const VertexColor_t &);
	void Init(const Vector &, const VertexColor_t &);

	// sizeof = 16
};

// src/game/public/physicslib/physicsresourcehelpers.h:83
class CRnHullSeparator : public CUtlVector<RnHull_t*, CUtlMemory<RnHull_t*, int> > {
public:

	CRnHullSeparator(const matrix3x4_t &, CMesh *);
	CRnHullSeparator(const CUtlVector<Vector, CUtlMemory<Vector, int> > &, const CUtlVector<int, CUtlMemory<int, int> > &, int);
	void DestroyHulls();

protected:

	void Init(const CUtlVector<Vector, CUtlMemory<Vector, int> > &, const CUtlVector<int, CUtlMemory<int, int> > &, int);

	// sizeof = 24
};
