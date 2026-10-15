// Reconstructed from DWARF by pahole; not original source.

// src/game/thirdparty/sdl/include/SDL_syswm.h:134
struct SDL_SysWMmsg {
	union {
		struct {
			XEvent event;  // +0x0
		} x11;
		int dummy;  // +0x0
	};

	SDL_version version;  // +0x0

	SDL_SYSWM_TYPE subsystem;  // +0x4
	union {
		struct {
			XEvent event;  // +0x8
		} x11;
		int dummy;  // +0x8
	} msg;

	// sizeof = 200
};

// src/game/thirdparty/sdl/include/SDL_syswm.h:193
struct SDL_SysWMinfo {
	union {
		struct {
			Display * display;  // +0x0
			Window window;  // +0x8
		} x11;
		int dummy;  // +0x0
	};

	SDL_version version;  // +0x0

	SDL_SYSWM_TYPE subsystem;  // +0x4
	union {
		struct {
			Display * display;  // +0x8
			Window window;  // +0x10
		} x11;
		int dummy;  // +0x8
	} info;

	// sizeof = 24
};
