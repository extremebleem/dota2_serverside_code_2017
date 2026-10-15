// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/ssebase.h:125
struct intx4 {
	int m_i32[4];  // +0x0
	int & operator[](int);
	const int & operator[](int);
	int32 * Base();
	const int32 * Base();
	const bool operator==(const intx4 &);

	// sizeof = 16
};
