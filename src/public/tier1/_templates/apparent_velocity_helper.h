// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/apparent_velocity_helper.h:34
class CDefaultCalcDistance<Vector> {
	float CalcDistance(const Vector &, const Vector &);

	// sizeof = 1
};

// src/public/tier1/apparent_velocity_helper.h:54
class CComputeApparentVelocity<Vector, CDefaultCalcDistance<Vector> > {
	float Compute(float, const Vector *, float, const Vector *);

	// sizeof = 1
};
