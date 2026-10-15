// Reconstructed from DWARF by pahole; not original source.

// src/public/simple_physics.h:23
class CSimplePhysics {
	class CNode {
		CNode();
		void Init(const Vector &);

		// sizeof = 36
	};

private:

	double m_flPredictedTime;  // +0x0
	int m_iCurTimeStep;  // +0x8
	float m_flTimeStep;  // +0xc
	float m_flTimeStepMul;  // +0x10
	class IHelper {
		int ()() * * _vptr.IHelper;  // +0x0
		IHelper(IHelper &);
		IHelper(const IHelper &);
		IHelper();
		virtual void GetNodeForces(CNode *, int, Vector *);
		virtual void ApplyConstraints(CNode *, int);

		// vtable[0] GetNodeForces
		// vtable[1] ApplyConstraints
		// sizeof = 8
	};
	CSimplePhysics();
	void Init(float);
	void Simulate(CNode *, int, IHelper *, float, float);
	double GetCurTime();
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 24
};

// src/public/simple_physics.h:23
class CSimplePhysics {
	class CNode {
		CNode();
		void Init(const Vector &);

		// sizeof = 36
	};

private:

	double m_flPredictedTime;  // +0x0
	int m_iCurTimeStep;  // +0x8
	float m_flTimeStep;  // +0xc
	float m_flTimeStepMul;  // +0x10
	class IHelper {
		int ()() * * _vptr.IHelper;  // +0x0
		IHelper(IHelper &);
		IHelper(const IHelper &);
		IHelper();
		virtual void GetNodeForces(CNode *, int, Vector *);
		virtual void ApplyConstraints(CNode *, int);

		// vtable[0] GetNodeForces
		// vtable[1] ApplyConstraints
		// sizeof = 8
	};
	CSimplePhysics();
	void Init(float);
	void Simulate(CNode *, int, IHelper *, float, float);
	double GetCurTime();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 24
};
