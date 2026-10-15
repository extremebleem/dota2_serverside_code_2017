// Reconstructed from DWARF by pahole; not original source.

// src/public/bitmap/imageformat.h:196
struct BGRA8888_t {
	uint8 b;  // +0x0
	uint8 g;  // +0x1
	uint8 r;  // +0x2
	uint8 a;  // +0x3
	BGRA8888_t & operator=(const BGRA8888_t &);
	float RToFloat();
	float GToFloat();
	float BToFloat();
	float AToFloat();
	int RTo10Bit();
	int GTo10Bit();
	int BTo10Bit();
	int ATo10Bit();
	void RFrom10Bit(int);
	void GFrom10Bit(int);
	void BFrom10Bit(int);
	void AFrom10Bit(int);
	void RFromFloat(float);
	void GFromFloat(float);
	void BFromFloat(float);
	void AFromFloat(float);

	// sizeof = 4
};

// src/public/bitmap/imageformat.h:304
struct RGBA8888_t {
	uint8 r;  // +0x0
	uint8 g;  // +0x1
	uint8 b;  // +0x2
	uint8 a;  // +0x3
	RGBA8888_t & operator=(const BGRA8888_t &);
	float RToFloat();
	float GToFloat();
	float BToFloat();
	float AToFloat();
	int RTo10Bit();
	int GTo10Bit();
	int BTo10Bit();
	int ATo10Bit();
	void RFrom10Bit(int);
	void GFrom10Bit(int);
	void BFrom10Bit(int);
	void AFrom10Bit(int);
	void RFromFloat(float);
	void GFromFloat(float);
	void BFromFloat(float);
	void AFromFloat(float);

	// sizeof = 4
};

// src/public/bitmap/imageformat.h:651
struct RGBA16161616_t {
	uint16 r;  // +0x0
	uint16 g;  // +0x2
	uint16 b;  // +0x4
	uint16 a;  // +0x6
	RGBA16161616_t & operator=(const RGBA16161616_t &);
	float RToFloat();
	float GToFloat();
	float BToFloat();
	float AToFloat();
	int RTo10Bit();
	int GTo10Bit();
	int BTo10Bit();
	int ATo10Bit();
	void RFrom10Bit(int);
	void GFrom10Bit(int);
	void BFrom10Bit(int);
	void AFrom10Bit(int);
	void RFromFloat(float);
	void GFromFloat(float);
	void BFromFloat(float);
	void AFromFloat(float);

	// sizeof = 8
};

// src/public/bitmap/imageformat.h:688
struct R16_t {
	uint16 r;  // +0x0
	float IToFloat();
	int ITo10Bit();
	void IFrom10Bit(int);
	void IFromFloat(float);

	// sizeof = 2
};

// src/public/bitmap/imageformat.h:698
struct RG1616_t {
	uint16 r;  // +0x0
	uint16 g;  // +0x2
	float IToFloat();
	float AToFloat();
	int ITo10Bit();
	int ATo10Bit();
	void IFrom10Bit(int);
	void AFrom10Bit(int);
	void IFromFloat(float);
	void AFromFloat(float);

	// sizeof = 4
};
