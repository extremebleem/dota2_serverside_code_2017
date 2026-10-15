// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/ssemath.h:314
struct fourplanes_t {
	fltx4 nX;  // +0x0
	fltx4 nY;  // +0x10
	fltx4 nZ;  // +0x20
	fltx4 dist;  // +0x30
	fltx4 xSign;  // +0x40
	fltx4 ySign;  // +0x50
	fltx4 zSign;  // +0x60
	fltx4 nXAbs;  // +0x70
	fltx4 nYAbs;  // +0x80
	fltx4 nZAbs;  // +0x90
	void ComputeSignbits();
	void Set4Planes(const VPlane *);
	void Set2Planes(const VPlane *);
	void Get4Planes(VPlane *);
	void Get2Planes(VPlane *);
	void GetPlane(int, Vector *, float *);
	void SetPlane(int, const Vector &, float);

	// sizeof = 160
};

// src/public/mathlib/ssemath.h:339
class Frustum_t {
	Frustum_t();
	void SetPlane(int, const Vector &, float);
	void GetPlane(int, Vector *, float *);
	void SetPlanes(const VPlane *);
	void GetPlanes(VPlane *);
	bool Contains(const Vector &, const Vector &);
	bool Intersects(Frustum_t &);
	bool Intersects(Frustum_t &, Vector *, Vector *);
	bool Intersects(const Vector &, const Vector &);
	bool IntersectsCenterExtents(const Vector &, const Vector &);
	bool Intersects(const fltx4 &, const fltx4 &);
	bool IntersectsCenterExtents(const fltx4 &, const fltx4 &);
	void CreatePerspectiveFrustum(const Vector &, const Vector &, const Vector &, const Vector &, float, float, float, float);
	void CreatePerspectiveFrustumFLU(const Vector &, const Vector &, const Vector &, const Vector &, float, float, float, float);
	void CreatePerspectiveFrustum(const Vector &, const QAngle &, float, float, float, float);
	void CreateOrthoFrustum(const Vector &, const Vector &, const Vector &, const Vector &, float, float, float, float, float, float);
	void CreateOrthoFrustumFLU(const Vector &, const Vector &, const Vector &, const Vector &, float, float, float, float, float, float);
	bool GetCorners(Vector *);

	// sizeof = 320
};

// src/public/mathlib/ssemath.h:401
class FourVectors {
	fltx4 x;  // +0x0
	fltx4 y;  // +0x10
	fltx4 z;  // +0x20
	FourVectors();
	FourVectors(const FourVectors &);
	void Init();
	void Init(float, float, float);
	FourVectors(float, float, float);
	void Init(const fltx4 &, const fltx4 &, const fltx4 &);
	FourVectors(const fltx4 &, const fltx4 &, const fltx4 &);
	FourVectors(const Vector &, const Vector &, const Vector &, const Vector &);
	FourVectors(const VectorAligned &, const VectorAligned &, const VectorAligned &, const VectorAligned &);
	FourVectors(const float *, const float *, const float *);
	void DuplicateVector(const Vector &);
	const fltx4 & operator[](int);
	fltx4 & operator[](int);
	void operator+=(const FourVectors &);
	FourVectors operator+(const FourVectors &);
	void operator-=(const FourVectors &);
	void operator*=(const FourVectors &);
	void operator*=(const fltx4 &);
	void operator*=(float);
	fltx4 operator*(const FourVectors &);
	fltx4 operator*(const Vector &);
	FourVectors operator*(FLTX4);
	void VProduct(const FourVectors &);
	void MakeReciprocal();
	void MakeReciprocalSaturate();
	void MaskedAssign(FLTX4, const FourVectors &);
	void RotateManyBy(unsigned int, const matrix3x4_t &);
	void RotateManyBy(unsigned int, const matrix3x4_t &, FourVectors *);
	void TransformManyBy(unsigned int, const matrix3x4_t &, FourVectors *);
	void TransformManyBy(unsigned int, const matrix3x4_t &);
	void CalcClosestPointOnLineSIMD(const FourVectors &, const FourVectors &, const FourVectors &, FourVectors &, fltx4 *);
	fltx4 CalcClosestPointToLineTSIMD(const FourVectors &, const FourVectors &, const FourVectors &, FourVectors &);
	const float & X(int);
	const float & Y(int);
	const float & Z(int);
	float & X(int);
	float & Y(int);
	float & Z(int);
	Vector Vec(int);
	void SetVec(const Vector &, int);
	void operator=(const FourVectors &);
	void LoadAndSwizzle(const Vector &, const Vector &, const Vector &, const Vector &);
	void LoadAndSwizzle(const Vector &);
	void Load(const float &, const float &, const float &, const float &);
	void LoadAndSwizzle(FLTX4, FLTX4, FLTX4, FLTX4);
	void LoadAndSwizzleAligned(const float *, const float *, const float *, const float *);
	void LoadAndSwizzleAligned(const Vector &, const Vector &, const Vector &, const Vector &);
	void TransposeOnto(fltx4 &, fltx4 &, fltx4 &, fltx4 &, FLTX4);
	void StoreUnalignedVector3SIMD(Vector *, Vector *, Vector *, Vector *);
	void StoreAlignedVectorSIMD(VectorAligned *, VectorAligned *, VectorAligned *, VectorAligned *);
	void StoreUnalignedContigVector3SIMD(Vector *);
	void StoreAlignedContigVector3SIMD(Vector *);
	void StoreAlignedContigVectorASIMD(VectorAligned *);
	fltx4 LengthSqr();
	fltx4 length2();
	fltx4 length();
	fltx4 Length();
	void VectorNormalizeFast();
	void VectorNormalizeFastSaturate();
	void VectorNormalize();
	fltx4 DistToSqr(const FourVectors &);
	fltx4 DistTo(const FourVectors &);
	fltx4 TValueOfClosestPointOnLine(const FourVectors &, const FourVectors &);
	fltx4 DistSqrToLineSegment(const FourVectors &, const FourVectors &);
	FourVectors Normalized();
	FourVectors NormalizedSafeX();
	FourVectors NormalizedSafeY();
	FourVectors NormalizedSafeZ();

	// sizeof = 48
};
