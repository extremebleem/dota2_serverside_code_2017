// Reconstructed from DWARF by pahole; not original source.

// src/public/rubikon/profile.h:10
struct PhysicsStats_t<27> {
	PhysicsStats_t();
	CMicroProfiler & operator[](int);
	const CMicroProfiler & operator[](int);
	void Reset();
	int Count();
	bool IsEmpty();
	void Accumulate(const PhysicsStats_t<27> &);

	// sizeof = 432
};
