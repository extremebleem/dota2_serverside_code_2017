// Reconstructed from DWARF by pahole; not original source.

// src/game/thirdparty/sdl/include/SDL_rwops.h:52
struct SDL_RWops {
	union {
		struct {
			SDL_bool autoclose;  // +0x0

			FILE * fp;  // +0x8
		} stdio;
		struct {
			Uint8 * base;  // +0x0
			Uint8 * here;  // +0x8
			Uint8 * stop;  // +0x10
		} mem;
		struct {
			void * data1;  // +0x0
			void * data2;  // +0x8
		} unknown;
	};

	Sint64 (*size)();  // +0x0
	Sint64 (*seek)(Sint64, int);  // +0x8
	size_t (*read)(void *, size_t, size_t);  // +0x10
	size_t (*write)(const void *, size_t, size_t);  // +0x18
	int (*close)();  // +0x20
	Uint32 type;  // +0x28

	union {
		struct {
			SDL_bool autoclose;  // +0x30

			FILE * fp;  // +0x38
		} stdio;
		struct {
			Uint8 * base;  // +0x30
			Uint8 * here;  // +0x38
			Uint8 * stop;  // +0x40
		} mem;
		struct {
			void * data1;  // +0x30
			void * data2;  // +0x38
		} unknown;
	} hidden;

	// sizeof = 72
};
