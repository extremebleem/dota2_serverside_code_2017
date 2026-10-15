// Reconstructed from DWARF by pahole; not original source.

// src/public/rubikon/param_types.h:186
struct Range_t {
	float m_flMin;  // +0x0
	float m_flMax;  // +0x4
	Range_t();
	Range_t(float, float);
	float Restrict(float);

	// sizeof = 8
};

// src/public/rubikon/param_types.h:322
struct GJKSupport_t {
	int nIndex;  // +0x0
	float flSupport;  // +0x4
	int operator int();

	// sizeof = 8
};

// src/public/rubikon/param_types.h:337
class CGJKProxy {
private:

	int m_nVertexCount;  // +0x0

	const Vector * m_pVertexBuffer;  // +0x8
	float m_flScale;  // +0x10
	CGJKProxy();
	CGJKProxy(int, const Vector *, float);
	void Init(int, const Vector *, float);
	void Init(const RnHull_t *);
	GJKSupport_t GetSupport(const Vector &);
	Vector GetVertex(int);

	// sizeof = 24
};

// src/public/rubikon/param_types.h:435
struct RnLinearCastResult_t {
	float m_flTime;  // +0x4
	RnLinearCastResult_t();

	// sizeof = 44
};

// src/public/rubikon/param_types.h:457
struct RnConvexCastResult_t {
	float m_flTime;  // +0x4
	RnConvexCastResult_t GetDefault();

	// sizeof = 8
};

// src/public/rubikon/param_types.h:514
struct RnDistanceQueryResult_t {
	float m_flDistance;  // +0x0
	RnDistanceQueryResult_t();
	bool Overlap();
	Vector GetNormal();

	// sizeof = 28
};

// src/public/rubikon/param_types.h:536
struct RnSimplexCache_t {
	float m_flMetric;  // +0x0
	int m_nVertexCount;  // +0x4
	unsigned char m_Vertices1[4];  // +0x8
	unsigned char m_Vertices2[4];  // +0xc
	float m_Lambdas[4];  // +0x10
	void Clear();
	bool IsEmpty();

	// sizeof = 32
};

// src/public/rubikon/param_types.h:548
struct RnIteration_t {
	float m_flAlpha;  // +0x0
	int m_nWitnessA;  // +0x7c
	int m_nWitnessB;  // +0x80
	RnIteration_t();

	// sizeof = 132
};

// src/public/rubikon/param_types.h:568
struct RnMaterial_t {
	float m_flDensity;  // +0x0
	float m_flFriction;  // +0x4
	float m_flRestitution;  // +0x8

	RnMaterial_t();
	RnMaterial_t(float, float);

	// sizeof = 24
};

// src/public/rubikon/param_types.h:613
struct ManifoldPoint_t {
	float m_flSeparation;  // +0x24
	float m_flImpulse;  // +0x28
	uint32 m_nID;  // +0x2c
	int m_nTriangle;  // +0x30
	ManifoldPoint_t();

	// sizeof = 52
};

// src/public/rubikon/param_types.h:623
struct Manifold_t {
	int m_nPointCount;  // +0x0
	float m_flTangentImpulse1;  // +0x104
	float m_flTangentImpulse2;  // +0x108
	float m_flTwistImpulse;  // +0x10c
	Manifold_t();
	bool Empty();

	// sizeof = 272
};

// src/public/rubikon/param_types.h:647
struct RnSweptTransform_t {
	RnSweptTransform_t();
	RnSweptTransform_t(const CTransform &, const CTransform &);
	RnSweptTransform_t(matrix3x4_t, matrix3x4_t);
	CTransform Interpolate(float);
	void Normalize();
	bool IsNormalized();

	// sizeof = 56
};

// src/public/rubikon/param_types.h:792
struct RnInertiaProperties_t {
	float m_flMass;  // +0x30
	RnInertiaProperties_t();
	const Vector GetMassCenter();
	float GetMass();
	Quaternion GetOrientation(Vector &);
	Quaternion GetOrientation();
	matrix3x4_t GetPrincipalTransform();
	void SetMassCenter(const Vector &);
	const RnInertiaProperties_t GetDefault();

	// sizeof = 52
};
