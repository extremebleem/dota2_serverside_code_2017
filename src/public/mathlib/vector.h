// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/vector.h:65
class Vector {
	enum VectorConstructFLU_t {
		kFLU = 0,
	};

	vec_t x;  // +0x0
	vec_t y;  // +0x4
	vec_t z;  // +0x8
	Vector();
	Vector(vec_t, vec_t, vec_t);
	Vector(VectorConstructFLU_t, vec_t, vec_t, vec_t);
	Vector FLU(vec_t, vec_t, vec_t);
	void Init(vec_t, vec_t, vec_t);
	void InitFLU(vec_t, vec_t, vec_t);
	void Zero();
	void Random(vec_t, vec_t);
	Vector & operator=(const Vector &);
	bool operator==(const Vector &);
	bool operator!=(const Vector &);
	bool IsZero(float);
	bool IsZeroFast();
	bool IsValid();
	bool IsReasonable(float);
	void Invalidate();
	vec_t operator[](int);
	vec_t & operator[](int);
	vec_t * Base();
	const vec_t * Base();
	void CopyToArray(float *);
	VectorByValue & operator VectorByValue&();
	const VectorByValue & operator const VectorByValue&();
	Vector & operator+=(const Vector &);
	Vector & operator-=(const Vector &);
	Vector & operator*=(const Vector &);
	Vector & operator*=(float);
	Vector & operator/=(const Vector &);
	Vector & operator/=(float);
	Vector operator-();
	Vector operator+(const Vector &);
	Vector operator-(const Vector &);
	Vector operator*(const Vector &);
	Vector operator/(const Vector &);
	Vector operator*(float);
	Vector operator/(float);
	Vector Cross(const Vector &);
	Vector Min(const Vector &);
	Vector Max(const Vector &);
	void Negate();
	bool WithinAABox(const Vector &, const Vector &);
	void MulAdd(const Vector &, const Vector &, float);
	vec_t Dot(const Vector &);
	vec_t Length();
	vec_t LengthSqr();
	vec_t LengthRecipFast();
	vec_t NormalizeInPlace();
	vec_t NormalizeInPlaceSafe(const Vector &);
	Vector Normalized();
	Vector NormalizedSafe(const Vector &);
	bool IsLengthGreaterThan(float);
	bool IsLengthLessThan(float);
	vec_t DistTo(const Vector &);
	vec_t DistToSqr(const Vector &);
	int LargestComponent();
	vec_t LargestComponentValue();
	int SmallestComponent();
	vec_t SmallestComponentValue();
	vec_t Length2D();
	vec_t Length2DSqr();
	Vector ProjectOnto(const Vector &);
	Vector2D & AsVector2D();
	const Vector2D & AsVector2D();
	float Element(int, int);
	void SetElement(int, int, float);
	int Width();
	int Height();
	void SetDimensions(int, int);

	// sizeof = 12
};

// src/public/mathlib/vector.h:389
class VectorByValue : public Vector {
public:

	VectorByValue();
	VectorByValue(vec_t, vec_t, vec_t);
	VectorByValue(const VectorByValue &);

	// sizeof = 12
};

// src/public/mathlib/vector.h:436
class VectorAligned : public Vector {
public:

	float w;  // +0xc
	VectorAligned();
	VectorAligned(vec_t, vec_t, vec_t);
	VectorAligned(const Vector &);
	VectorAligned & operator=(const Vector &);
	VectorAligned & operator=(const VectorAligned &);

	// sizeof = 16
};

// src/public/mathlib/vector.h:1839
class Quaternion {
	vec_t x;  // +0x0
	vec_t y;  // +0x4
	vec_t z;  // +0x8
	vec_t w;  // +0xc
	Quaternion();
	Quaternion(vec_t, vec_t, vec_t, vec_t);
	Quaternion(const Vector &, float);
	Quaternion(const RadianEuler &);
	Quaternion(const DegreeEuler &);
	Quaternion(const QAngle &);
	void Init(vec_t, vec_t, vec_t, vec_t);
	void Init(const Vector &, float);
	bool IsValid();
	void Invalidate();
	bool operator==(const Quaternion &);
	bool operator!=(const Quaternion &);
	const Quaternion & operator=(const Quaternion &);
	const Vector GetForward();
	const Vector GetLeft();
	const Vector GetUp();
	vec_t * Base();
	const vec_t * Base();
	Vector & ImaginaryPart();
	const Vector & ImaginaryPart();
	float & RealPart();
	float RealPart();
	QAngle ToQAngle();
	matrix3x4_t ToMatrix();
	vec_t operator[](int);
	vec_t & operator[](int);
	Quaternion operator+();
	Quaternion operator-();

	// sizeof = 16
};

// src/public/mathlib/vector.h:1992
class QuaternionAligned : public Quaternion {
public:

	QuaternionAligned();
	QuaternionAligned(vec_t, vec_t, vec_t, vec_t);
	Quaternion * operator Quaternion*();
	const Quaternion * operator const Quaternion*();
	QuaternionAligned(const Quaternion &);
	QuaternionAligned & operator=(const Quaternion &);
	QuaternionAligned & operator=(const QuaternionAligned &);

	// sizeof = 16
};

// src/public/mathlib/vector.h:2050
class RadianEuler {
	vec_t x;  // +0x0
	vec_t y;  // +0x4
	vec_t z;  // +0x8
	RadianEuler();
	RadianEuler(vec_t, vec_t, vec_t);
	RadianEuler(const Quaternion &);
	RadianEuler(const QAngle &);
	RadianEuler(const DegreeEuler &);
	void Init(vec_t, vec_t, vec_t);
	QAngle ToQAngle();
	bool IsValid();
	void Invalidate();
	vec_t * Base();
	const vec_t * Base();
	vec_t operator[](int);
	vec_t & operator[](int);

	// sizeof = 12
};

// src/public/mathlib/vector.h:2186
class DegreeEuler {
	vec_t x;  // +0x0
	vec_t y;  // +0x4
	vec_t z;  // +0x8
	DegreeEuler();
	DegreeEuler(vec_t, vec_t, vec_t);
	DegreeEuler(const Quaternion &);
	DegreeEuler(const QAngle &);
	DegreeEuler(const RadianEuler &);
	void Init(vec_t, vec_t, vec_t);
	QAngle ToQAngle();
	bool IsValid();
	void Invalidate();
	vec_t * Base();
	const vec_t * Base();
	vec_t operator[](int);
	vec_t & operator[](int);

	// sizeof = 12
};

// src/public/mathlib/vector.h:2298
class QAngle {
	vec_t x;  // +0x0
	vec_t y;  // +0x4
	vec_t z;  // +0x8
	QAngle();
	QAngle(vec_t, vec_t, vec_t);
	QAngleByValue & operator QAngleByValue&();
	const QAngleByValue & operator const QAngleByValue&();
	void Init(vec_t, vec_t, vec_t);
	void Random(vec_t, vec_t);
	bool IsValid();
	void Invalidate();
	vec_t operator[](int);
	vec_t & operator[](int);
	vec_t * Base();
	const vec_t * Base();
	bool operator==(const QAngle &);
	bool operator!=(const QAngle &);
	QAngle & operator+=(const QAngle &);
	QAngle & operator-=(const QAngle &);
	QAngle & operator*=(float);
	QAngle & operator/=(float);
	vec_t Length();
	vec_t LengthSqr();
	QAngle & operator=(const QAngle &);
	void Normalize();
	void NormalizePositive();
	matrix3x4_t ToMatrix();
	Quaternion ToQuaternion();
	QAngle operator-();
	QAngle operator+(const QAngle &);
	QAngle operator-(const QAngle &);
	QAngle operator*(float);
	QAngle operator/(float);

	// sizeof = 12
};

// src/public/mathlib/vector.h:2382
class QAngleByValue : public QAngle {
public:

	QAngleByValue();
	QAngleByValue(vec_t, vec_t, vec_t);
	QAngleByValue(const QAngleByValue &);

	// sizeof = 12
};
