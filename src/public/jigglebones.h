// Reconstructed from DWARF by pahole; not original source.

// src/public/jigglebones.h:25
struct JiggleData {
private:

	int bone;  // +0x0
	int id;  // +0x4
	float lastUpdate;  // +0x8
	JiggleData();

	void Init(int, float, const Vector &, const Vector &);

	// sizeof = 96
};

// src/public/jigglebones.h:60
class CJiggleBones {
private:

	CJiggleBones();

	JiggleData * GetJiggleData(int, float, const Vector &, const Vector &);
	void BuildJiggleTransformations(int, float, const mstudiojigglebone_t *, const matrix3x4_t &, matrix3x4_t &);
	~CJiggleBones();

	// sizeof = 40
};
