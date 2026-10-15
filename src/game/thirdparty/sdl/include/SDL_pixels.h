// Reconstructed from DWARF by pahole; not original source.

// src/game/thirdparty/sdl/include/SDL_pixels.h:293
struct SDL_Color {
	Uint8 r;  // +0x0
	Uint8 g;  // +0x1
	Uint8 b;  // +0x2
	Uint8 a;  // +0x3

	// sizeof = 4
};

// src/game/thirdparty/sdl/include/SDL_pixels.h:302
struct SDL_Palette {
	int ncolors;  // +0x0

	SDL_Color * colors;  // +0x8
	Uint32 version;  // +0x10
	int refcount;  // +0x14

	// sizeof = 24
};

// src/game/thirdparty/sdl/include/SDL_pixels.h:313
struct SDL_PixelFormat {
	Uint32 format;  // +0x0

	SDL_Palette * palette;  // +0x8
	Uint8 BitsPerPixel;  // +0x10
	Uint8 BytesPerPixel;  // +0x11
	unsigned char padding[2];  // +0x12
	Uint32 Rmask;  // +0x14
	Uint32 Gmask;  // +0x18
	Uint32 Bmask;  // +0x1c
	Uint32 Amask;  // +0x20
	Uint8 Rloss;  // +0x24
	Uint8 Gloss;  // +0x25
	Uint8 Bloss;  // +0x26
	Uint8 Aloss;  // +0x27
	Uint8 Rshift;  // +0x28
	Uint8 Gshift;  // +0x29
	Uint8 Bshift;  // +0x2a
	Uint8 Ashift;  // +0x2b
	int refcount;  // +0x2c

	// sizeof = 56
};
