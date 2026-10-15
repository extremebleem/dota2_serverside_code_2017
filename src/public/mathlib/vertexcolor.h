// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/vertexcolor.h:24
struct VertexColor_t {
	union {
		uint32 color;  // +0x0
		struct {
			uint8 r;  // +0x0
			uint8 g;  // +0x1
			uint8 b;  // +0x2
			uint8 a;  // +0x3
		};
	};

	union {
		uint32 color;  // +0x0
		struct {
			uint8 r;  // +0x0
			uint8 g;  // +0x1
			uint8 b;  // +0x2
			uint8 a;  // +0x3
		};
	};
	VertexColor_t();
	VertexColor_t(const VertexColor_t &);
	VertexColor_t(uint8, uint8, uint8, uint8);
	VertexColor_t(const Color &);
	VertexColor_t(const Vector &);
	VertexColor_t(const Vector4D &);
	VertexColor_t(const Vector &, float);
	void Init(uint8, uint8, uint8, uint8);
	void InitFromPackedARGB(uint32);
	uint32 AsUint32();
	uint32 * AsUint32Ptr();
	const uint32 * AsUint32Ptr();
	uint8 & operator[](int);
	const uint8 & operator[](int);
	VertexColor_t & operator=(const VertexColor_t &);
	VertexColor_t & operator=(const Color &);
	bool operator==(const VertexColor_t &);
	bool operator!=(const VertexColor_t &);

	// sizeof = 4
};
