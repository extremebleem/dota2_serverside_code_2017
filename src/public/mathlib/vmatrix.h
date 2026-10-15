// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/vmatrix.h:39
class VMatrix {
	float m[4][4];  // +0x0
	VMatrix();
	VMatrix(vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t);
	VMatrix(const Vector &, const Vector &, const Vector &);
	VMatrix(const matrix3x4_t &);
	void Init(vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t, vec_t);
	void InitFLU(const Vector &, const Vector &, const Vector &, const Vector &);
	void Init(const matrix3x4_t &);
	float * operator[](int);
	const float * operator[](int);
	float * Base();
	const float * Base();
	void SetLeft(const Vector &);
	void SetUp(const Vector &);
	void SetForward(const Vector &);
	void GetBasisVectors(Vector &, Vector &, Vector &);
	void SetBasisVectors(const Vector &, const Vector &, const Vector &);
	Vector & GetTranslation(Vector &);
	void SetTranslation(const Vector &);
	void PreTranslate(const Vector &);
	void PostTranslate(const Vector &);
	matrix3x4_t & As3x4();
	const matrix3x4_t & As3x4();
	void CopyFrom3x4(const matrix3x4_t &);
	void Set3x4(matrix3x4_t &);
	bool operator==(const VMatrix &);
	bool operator!=(const VMatrix &);
	Vector GetLeft();
	Vector GetUp();
	Vector GetForward();
	Vector GetTranslation();
	void V3Mul(const Vector &, Vector &);
	void V4Mul(const Vector4D &, Vector4D &);
	Vector ApplyRotation(const Vector &);
	Vector operator*(const Vector &);
	Vector VMul3x3(const Vector &);
	Vector VMul3x3Transpose(const Vector &);
	Vector VMul4x3(const Vector &);
	Vector VMul4x3Transpose(const Vector &);
	void TransformPlane(const VPlane &, VPlane &);
	VPlane operator*(const VPlane &);
	VMatrix & operator=(const VMatrix &);
	void MatrixMul(const VMatrix &, VMatrix &);
	const VMatrix & operator+=(const VMatrix &);
	VMatrix operator*(const VMatrix &);
	VMatrix operator+(const VMatrix &);
	VMatrix operator-(const VMatrix &);
	VMatrix operator-();
	void Identity();
	bool IsIdentity();
	const VMatrix & GetIdentityMatrix();
	void SetupMatrixOrgAngles(const Vector &, const QAngle &);
	VMatrix operator~();
	bool InverseGeneral(VMatrix &);
	void InverseTR(VMatrix &);
	bool IsRotationMatrix();
	float Element(int, int);
	void SetElement(int, int, float);
	int Width();
	int Height();
	void SetDimensions(int, int);
	VMatrix InverseTR();
	Vector GetScale();
	VMatrix Scale(const Vector &);
	void ScaleUpper3x3Matrix(float);
	VMatrix NormalizeBasisVectors();
	VMatrix Transpose();
	VMatrix Transpose3x3();

	// sizeof = 64
};
