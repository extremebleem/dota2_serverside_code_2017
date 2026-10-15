// Reconstructed from DWARF by pahole; not original source.

// src/game/thirdparty/sdl/include/SDL_surface.h:69
struct SDL_Surface {
	Uint32 flags;  // +0x0

	SDL_PixelFormat * format;  // +0x8
	int w;  // +0x10
	int h;  // +0x14
	int pitch;  // +0x18

	void * pixels;  // +0x20
	void * userdata;  // +0x28
	int locked;  // +0x30

	void * lock_data;  // +0x38
	SDL_Rect clip_rect;  // +0x40
	int refcount;  // +0x58

	// sizeof = 96
};
