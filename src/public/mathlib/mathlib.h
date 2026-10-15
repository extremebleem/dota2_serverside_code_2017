// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/mathlib.h:35
struct bbox_t {
	bbox_t();
	void SetEmpty();
	bool IsEmpty();
	bool Contains(const Vector &);
	bool Contains(const bbox_t &);
	void Inflate(float);
	void Join(const Vector &);
	void Join(const bbox_t &);
	const Vector GetCenter();
	float SmallestDimension();

	// sizeof = 24
};

// src/public/mathlib/mathlib.h:120
struct cplane_t {
	float dist;  // +0xc
	uint8 type;  // +0x10
	uint8 signbits;  // +0x11
	unsigned char pad[2];  // +0x12
	cplane_t();
	void Zero();

	// sizeof = 20
};

// src/public/mathlib/mathlib.h:201
struct matrix3x4_t {
	float m_flMatVal[3][4];  // +0x0
	matrix3x4_t();
	matrix3x4_t(float, float, float, float, float, float, float, float, float, float, float, float);
	void InitXYZ(const Vector &, const Vector &, const Vector &, const Vector &);
	void InitFLU(const Vector &, const Vector &, const Vector &, const Vector &);
	void InitFromQAngles(const QAngle &, const Vector &);
	void InitFromQAngles(const QAngle &);
	void InitFromRadianEuler(const RadianEuler &, const Vector &);
	void InitFromRadianEuler(const RadianEuler &);
	void InitFromCTransform(const CTransform &);
	void InitFromQuaternion(const Quaternion &, const Vector &);
	void InitFromQuaternion(const Quaternion &);
	void InitFromDiagonal(const Vector &);
	Quaternion ToQuaternion();
	QAngle ToQAngle();
	CTransform ToCTransform();
	void SetToZero();
	void SetToIdentity();
	void ScaleUpper3x3Matrix(float);
	void SetOrigin(const Vector &);
	Vector GetOrigin();
	void Invalidate();
	bool IsValid();
	matrix3x4_t & operator*=(const matrix3x4_t &);
	matrix3x4_t & operator+=(const matrix3x4_t &);
	matrix3x4_t & operator-=(const matrix3x4_t &);
	bool operator==(const matrix3x4_t &);
	bool operator!=(const matrix3x4_t &);
	bool IsEqualTo(const matrix3x4_t &, float);
	void GetBasisVectorsFLU(Vector *, Vector *, Vector *);
	Vector TransformVector(const Vector &);
	Vector RotateVector(const Vector &);
	Vector TransformVectorByInverse(const Vector &);
	Vector RotateVectorByInverse(const Vector &);
	Vector RotateExtents(const Vector &);
	void TransformAABB(const Vector &, const Vector &, Vector &, Vector &);
	void TransformAABBByInverse(const Vector &, const Vector &, Vector &, Vector &);
	void RotateAABB(const Vector &, const Vector &, Vector &, Vector &);
	void RotateAABBByInverse(const Vector &, const Vector &, Vector &, Vector &);
	void TransformPlane(const cplane_t &, cplane_t &);
	void TransformPlaneByInverse(const cplane_t &, cplane_t &);
	float GetOrthogonalityError();
	float GetDeterminant();
	float GetSylvestersCriterion();
	float GetTrace();
	Vector GetColumn(MatrixAxisType_t);
	void SetColumn(const Vector &, MatrixAxisType_t);
	Vector GetForward();
	Vector GetLeft();
	Vector GetUp();
	Vector GetRow(int);
	void SetRow(int, const Vector &);
	void Transposed(matrix3x4_t &);
	matrix3x4_t Transposed();
	void InverseTR(matrix3x4_t &);
	matrix3x4_t InverseTR();
	float * operator[](int);
	const float * operator[](int);
	float * Base();
	const float * Base();
	bool TypeIsAlignedForSIMD();

	// sizeof = 48
};

// src/public/mathlib/mathlib.h:387
class matrix3x4a_t : public matrix3x4_t {
public:

	matrix3x4a_t(const matrix3x4_t &);
	matrix3x4a_t & operator=(const matrix3x4_t &);
	matrix3x4a_t(float, float, float, float, float, float, float, float, float, float, float, float);
	matrix3x4a_t();
	bool TypeIsAlignedForSIMD();
	fltx4 & SIMDRow(uint);
	const fltx4 & SIMDRow(uint);

	// sizeof = 48
};
