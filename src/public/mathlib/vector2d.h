// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/vector2d.h:26
class Vector2D {
	vec_t x;  // +0x0
	vec_t y;  // +0x4
	Vector2D();
	Vector2D(vec_t, vec_t);
	Vector2D(const float *);
	void Init(vec_t, vec_t);
	Vector2D & operator=(const Vector2D &);
	bool IsValid();
	vec_t operator[](int);
	vec_t & operator[](int);
	vec_t * Base();
	const vec_t * Base();
	void Random(float, float);
	bool operator==(const Vector2D &);
	bool operator!=(const Vector2D &);
	Vector2D & operator+=(const Vector2D &);
	Vector2D & operator-=(const Vector2D &);
	Vector2D & operator*=(const Vector2D &);
	Vector2D & operator*=(float);
	Vector2D & operator/=(const Vector2D &);
	Vector2D & operator/=(float);
	void Negate();
	vec_t Length();
	vec_t LengthSqr();
	bool IsZero(float);
	vec_t NormalizeInPlace();
	vec_t NormalizeInPlaceSafe(const Vector2D &);
	bool IsLengthGreaterThan(float);
	bool IsLengthLessThan(float);
	vec_t DistTo(const Vector2D &);
	vec_t DistToSqr(const Vector2D &);
	float LargestComponentValue();
	void CopyToArray(float *);
	void MulAdd(const Vector2D &, const Vector2D &, float);
	vec_t Dot(const Vector2D &);
	Vector2D(const Vector2D &);
	Vector2D operator-();
	Vector2D operator+(const Vector2D &);
	Vector2D operator-(const Vector2D &);
	Vector2D operator*(const Vector2D &);
	Vector2D operator/(const Vector2D &);
	Vector2D operator*(float);
	Vector2D operator/(float);
	Vector2D Cross(const Vector2D &);
	Vector2D Min(const Vector2D &);
	Vector2D Max(const Vector2D &);

	// sizeof = 8
};
