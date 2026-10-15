// Reconstructed from DWARF by pahole; not original source.

// src/game/public/mathlib/polyhedron.h:27
struct Polyhedron_IndexedLine_t {
	short unsigned int iPointIndices[2];  // +0x0

	// sizeof = 4
};

// src/game/public/mathlib/polyhedron.h:32
struct Polyhedron_IndexedLineReference_t {
	uint16 iLineIndex;  // +0x0
	uint8 iEndPointIndex;  // +0x2

	// sizeof = 4
};

// src/game/public/mathlib/polyhedron.h:38
struct Polyhedron_IndexedPolygon_t {
	uint16 iFirstIndex;  // +0x0
	uint16 iIndexCount;  // +0x2
	Polyhedron_IndexedPolygon_t();

	// sizeof = 16
};

// src/game/public/mathlib/polyhedron.h:45
class CPolyhedron {
	int ()() * * _vptr.CPolyhedron;  // +0x0
	uint16 iVertexCount;  // +0x28
	uint16 iLineCount;  // +0x2a
	uint16 iIndexCount;  // +0x2c
	uint16 iPolygonCount;  // +0x2e
	CPolyhedron(const CPolyhedron &);
	CPolyhedron();
	virtual ~CPolyhedron();
	virtual void Release();
	Vector Center();

	// vtable[2] Release
	// sizeof = 48
};
