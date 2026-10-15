// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/transform.h:26
class CTransform {
	CTransform();
	CTransform(const Vector &, const Quaternion &);
	CTransform(const Vector &, const QAngle &);
	bool IsValid();
	bool operator==(const CTransform &);
	bool operator!=(const CTransform &);
	void InitFromQAngles(const QAngle &, const Vector &);
	void InitFromMatrix(const matrix3x4_t &);
	void InitFromQuaternion(const Quaternion &, const Vector &);
	Quaternion ToQuaternion();
	QAngle ToQAngle();
	matrix3x4_t ToMatrix();
	void SetToIdentity();
	void SetOrigin(const Vector &);
	void SetAngles(const QAngle &);
	Vector GetOrigin();
	void GetBasisVectorsFLU(Vector *, Vector *, Vector *);
	Vector GetForward();
	Vector TransformVector(const Vector &);
	Vector RotateVector(const Vector &);
	Vector TransformVectorByInverse(const Vector &);
	Vector RotateVectorByInverse(const Vector &);
	Vector RotateExtents(const Vector &);
	void TransformAABB(const Vector &, const Vector &, Vector &, Vector &);
	void TransformAABBByInverse(const Vector &, const Vector &, Vector &, Vector &);
	void RotateAABB(const Vector &, const Vector &, Vector &, Vector &);
	void RotateAABBByInverse(const Vector &, const Vector &, Vector &, Vector &);
	void InverseTR(CTransform &);
	CTransform InverseTR();
	CTransform & operator=(const CTransformUnaligned &);
	CTransform & operator=(const CTransform &);

	// sizeof = 32
};

// src/public/mathlib/transform.h:98
class CTransformUnaligned {
	CTransformUnaligned();
	CTransformUnaligned(const Vector &, const Quaternion &);
	CTransformUnaligned(const CTransform &);
	CTransform AsTransform();
	bool IsValid();
	CTransformUnaligned & operator=(const CTransform &);

	// sizeof = 28
};
