// Reconstructed from DWARF by pahole; not original source.

// src/game/public/mathlib/gjk.h:117
struct GJKSimplexCache_t {
	float m_flMetric;  // +0x0
	int m_nVertexCount;  // +0x4
	unsigned char m_Vertices1[4];  // +0x8
	unsigned char m_Vertices2[4];  // +0xc
	float m_Lambdas[4];  // +0x10
	GJKSimplexCache_t();
	void Clear();
	bool IsEmpty();

	// sizeof = 32
};
