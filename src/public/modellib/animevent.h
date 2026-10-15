// Reconstructed from DWARF by pahole; not original source.

// src/public/modellib/animevent.h:14
struct animevent_t {
	int event;  // +0x0

	const char * options;  // +0x8
	float cycle;  // +0x10
	float eventtime;  // +0x14
	int type;  // +0x18

	int m_nOrder;  // +0x28
	bool m_bHandledByScript;  // +0x2c
	int Event();

	// sizeof = 48
};
