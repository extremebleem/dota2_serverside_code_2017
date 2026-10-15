// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/vector4d.h:31
class Vector4D {
	vec_t x;  // +0x0
	vec_t y;  // +0x4
	vec_t z;  // +0x8
	vec_t w;  // +0xc
	Vector4D();
	Vector4D(vec_t, vec_t, vec_t, vec_t);
	Vector4D(const Vector &, vec_t);
	Vector4D(const float *);
	void Init(vec_t, vec_t, vec_t, vec_t);
	void Init(const Vector &, vec_t);
	bool IsValid();
	vec_t operator[](int);
	vec_t & operator[](int);
	vec_t * Base();
	const vec_t * Base();
	Vector & AsVector3D();
	const Vector & AsVector3D();
	Vector2D & AsVector2D();
	const Vector2D & AsVector2D();
	void Random(vec_t, vec_t);
	bool operator==(const Vector4D &);
	bool operator!=(const Vector4D &);
	Vector4D & operator+=(const Vector4D &);
	Vector4D & operator-=(const Vector4D &);
	Vector4D & operator*=(const Vector4D &);
	Vector4D & operator*=(float);
	Vector4D & operator/=(const Vector4D &);
	Vector4D & operator/=(float);
	Vector4D operator-();
	Vector4D operator*(float);
	Vector4D operator/(float);
	Vector4D operator*(const Vector4D &);
	Vector4D operator+(const Vector4D &);
	Vector4D operator-(const Vector4D &);
	void Negate();
	vec_t Length();
	vec_t LengthSqr();
	bool IsZero(float);
	vec_t DistTo(const Vector4D &);
	vec_t DistToSqr(const Vector4D &);
	void CopyToArray(float *);
	void MulAdd(const Vector4D &, const Vector4D &, float);
	vec_t Dot(const Vector4D &);
	float Element(int, int);
	void SetElement(int, int, float);
	int Width();
	int Height();
	void SetDimensions(int, int);
	Vector4D(const Vector4D &);
	Vector4D & operator=(const Vector4D &);

	// sizeof = 16
};

// src/public/mathlib/vector4d.h:161
class Vector4DAligned : public Vector4D {
public:

	Vector4DAligned();
	Vector4DAligned(vec_t, vec_t, vec_t, vec_t);
	void Set(vec_t, vec_t, vec_t, vec_t);
	void InitZero();
	__m128 & AsM128();
	const __m128 & AsM128();
	Vector4DAligned & operator=(const Vector4D &);
	Vector4DAligned(const Vector4D &);
	Vector4DAligned & operator=(const Vector4DAligned &);

	// sizeof = 16
};
