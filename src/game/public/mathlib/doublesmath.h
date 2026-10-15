// Reconstructed from DWARF by pahole; not original source.

// src/game/public/mathlib/doublesmath.h:23
class VecDouble2 {
	double x;  // +0x0
	double y;  // +0x8
	VecDouble2();
	VecDouble2(const double &, const double &);
	const double Dot(const VecDouble2 &);
	void MulAdd(const VecDouble2 &, const VecDouble2 &, double);

	// sizeof = 16
};

// src/game/public/mathlib/doublesmath.h:37
class VecDouble3 {
	double x;  // +0x0
	double y;  // +0x8
	double z;  // +0x10
	VecDouble3();
	VecDouble3(const double &, const double &, const double &);
	VecDouble3(const Vector &);
	const Vector AsVector();
	const Vector2D AsVector2D();
	const VecDouble2 AsVecDouble2();
	const VecDouble3 Cross(const VecDouble3 &);
	double Dot(const VecDouble3 &);
	double LengthSqr();
	double Length();
	double Normalize();
	const VecDouble3 operator*=(const double &);
	const VecDouble3 operator+=(const VecDouble3 &);
	const VecDouble3 operator-();
	bool IsValid();

	// sizeof = 24
};
