// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysics2/iphysicscontact.h:21
struct PhysicsContact_t {
	PhysicsContact_t();
	PhysicsContact_t(const PhysicsContact_t &);
	PhysicsContact_t & operator=(const PhysicsContact_t &);
	IPhysicsShape * GetShape1();
	const IPhysicsShape * GetShape1();
	IPhysicsShape * GetShape2();
	const IPhysicsShape * GetShape2();
	IPhysicsShape * GetOther(IPhysicsShape *);
	const IPhysicsShape * GetShape2(const IPhysicsShape *);
	IPhysicsBody * GetBody1();
	const IPhysicsBody * GetBody1();
	IPhysicsBody * GetBody2();
	const IPhysicsBody * GetBody2();
	IPhysicsBody * GetOther(IPhysicsBody *);
	const IPhysicsBody * GetOther(const IPhysicsBody *);
	bool Empty();
	void Reset();
	int GetManifoldCount();
	int GetContactPointCount();
	Manifold_t & GetManifold(int);
	const Manifold_t & GetManifold(int);
	float GetMinSeparation();

	// sizeof = 24
};
