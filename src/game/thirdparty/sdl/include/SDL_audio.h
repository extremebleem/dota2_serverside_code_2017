// Reconstructed from DWARF by pahole; not original source.

// src/game/thirdparty/sdl/include/SDL_audio.h:168
struct SDL_AudioSpec {
	int freq;  // +0x0
	SDL_AudioFormat format;  // +0x4
	Uint8 channels;  // +0x6
	Uint8 silence;  // +0x7
	Uint16 samples;  // +0x8
	Uint16 padding;  // +0xa
	Uint32 size;  // +0xc
	SDL_AudioCallback callback;  // +0x10
	void * userdata;  // +0x18

	// sizeof = 32
};
