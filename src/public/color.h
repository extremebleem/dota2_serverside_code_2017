// Reconstructed from DWARF by pahole; not original source.

// src/public/color.h:15
struct color24 {
	uint8 r;  // +0x0
	uint8 g;  // +0x1
	uint8 b;  // +0x2

	// sizeof = 3
};

// src/public/color.h:25
class Color {
	enum {
		RED = 0,
		GREEN = 0x1,
		BLUE = 0x2,
		ALPHA = 0x3,
	};

private:

	unsigned char _color[4];  // +0x0
	Color();
	Color(int, int, int);
	Color(int, int, int, int);
	void SetColor(int, int, int, int);
	void Init(int, int, int, int);
	void GetColor(int &, int &, int &, int &);
	void SetRawColor(int32);
	int32 GetRawColor();
	uint32 AsUint32();
	void FromUint32(uint32);
	uint8 SetRed(int);
	uint8 SetGreen(int);
	uint8 SetBlue(int);
	uint8 SetAlpha(int);
	uint8 & operator[](int);
	uint8 & r();
	uint8 & g();
	uint8 & b();
	uint8 & a();
	const uint8 & operator[](int);
	const uint8 & r();
	const uint8 & g();
	const uint8 & b();
	const uint8 & a();
	bool operator==(const Color &);
	bool operator!=(const Color &);
	Color & operator=(const Color &);
	Color Lerp(float, const Color &, const Color &);
	color24 ToColor24();
	Color ScaleColor(const Color &, float);

	// sizeof = 4
};
