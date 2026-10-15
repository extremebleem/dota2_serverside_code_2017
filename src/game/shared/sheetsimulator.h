// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/sheetsimulator.h:36
class CSheetSimulator {
	struct Particle_t {
		float m_Mass;  // +0x0
		int m_Collided;  // +0x28
		int m_CollisionPlane;  // +0x2c
		float m_CollisionDist;  // +0x30
		Particle_t();

		// sizeof = 52
	};

	struct Spring_t {
		int m_Particle1;  // +0x0
		int m_Particle2;  // +0x4
		float m_RestLength;  // +0x8

		// sizeof = 12
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	int m_HorizontalCount;  // +0x0
	int m_VerticalCount;  // +0x4
	int m_FixedPointCount;  // +0x18

	TraceLineFunc_t m_TraceLine;  // +0x60
	TraceHullFunc_t m_TraceHull;  // +0x68
	float m_FixedSpringConstant;  // +0x70
	float m_PointSpringConstant;  // +0x74
	float m_DampConstant;  // +0x78
	float m_ViscousDrag;  // +0x7c
	int m_CollisionGroup;  // +0x80

	bool * m_pValidCollisionPlane;  // +0xc0
	float m_GravityConstant;  // +0xd4
	CSheetSimulator(TraceLineFunc_t, TraceHullFunc_t);
	~CSheetSimulator();
	void Init(int, int, int);
	void SetPosition(const Vector &, const QAngle &);
	void AddSpring(int, int, float);
	void AddFixedPointSpring(int, int, float);
	void SetPointSpringConstant(float);
	void SetFixedSpringConstant(float);
	void SetSpringDampConstant(float);
	void SetViscousDrag(float);
	void SetCollisionGroup(int);
	void SetBoundingBox(Vector &, Vector &);
	void ComputeBounds(Vector &, Vector &);
	void Simulate(float);
	void Simulate(float, int);
	int NumHorizontal();
	int NumVertical();
	int PointCount();
	Vector & GetFixedPoint(int);
	const Vector & GetPoint(int, int);
	const Vector & GetPoint(int);
	void DetectCollision(int, float);
	void InitPosition(int);
	void SetControlPointOffset(const Vector &);
	void SetGravityConstant(float);
	void AddGravityForce(int);
	int NumParticles();
	void EulerStep(float);
	void ComputeControlPoints();
	void ClearForces();
	void ComputeForces();
	void TestVertAgainstPlane(int, int, bool);
	void SatisfyCollisionConstraints();
	void DetermineBestCollisionPlane(bool);
	void ClampPointsToCollisionPlanes();

	// sizeof = 216
};

// src/game/shared/sheetsimulator.h:184
class CIterativeSheetSimulator : public CSheetSimulator {
public:

private:

	float m_TimeStep;  // +0xd8
	float m_SubSteps;  // +0xdc
	char m_TotalSteps;  // +0xe0
	char m_SimulationSteps;  // +0xe1
	char m_CollisionCount;  // +0xe2
	char m_CurrentCollisionPt;  // +0xe3
	bool m_InitialPass;  // +0xe4
	CIterativeSheetSimulator(TraceLineFunc_t, TraceHullFunc_t);
	void BeginSimulation(float, int, int, int);
	bool Think();
	bool IsDone();
	int StepsRemaining();
	CIterativeSheetSimulator(const CIterativeSheetSimulator &);
	void DetectCollisions();

	// sizeof = 232
};
