// Reconstructed from DWARF by pahole; not original source.

// src/public/rope_physics.h:16
class CRopeSpring {
	// sizeof = 16
};

// src/public/rope_physics.h:24
class CBaseRopePhysics : public IHelper {
public:

protected:

	int m_nNodes;  // +0x18

	float m_flSpringDist;  // +0x28
	float m_flSpringDistSqr;  // +0x2c
	float * m_flNodeSpringDistsSqr;  // +0x30

	CBaseRopePhysics(CBaseRopePhysics &);
	CBaseRopePhysics(const CBaseRopePhysics &);
	CBaseRopePhysics(CNode *, int, CRopeSpring *, float *);
	void SetNumNodes(int);
	void Restart();
	void ResetSpringLength(float);
	float GetSpringLength();
	void ResetNodeSpringLength(int, float);
	void SetupSimulation(float, IHelper *);
	void SetDelegate(IHelper *);
	void Simulate(float);
	int NumNodes();
	CNode * GetNode(int);
	const CNode * GetNode(int);
	CNode * GetFirstNode();
	const CNode * GetFirstNode();
	CNode * GetLastNode();
	const CNode * GetLastNode();
	virtual void GetNodeForces(CNode *, int, Vector *);
	virtual void ApplyConstraints(CNode *, int);

private:

	int NumSprings();

	// vtable[0] GetNodeForces
	// vtable[1] ApplyConstraints
	// sizeof = 80
};
