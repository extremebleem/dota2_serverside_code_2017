// Reconstructed from DWARF by pahole; not original source.

// src/public/steam/isteamgameserver.h:288
struct GSClientDeny_t {
	enum {
		k_iCallback = 0xca,
	};

	char m_rgchOptionalText[128];  // +0xc
	GSClientDeny_t();

	// sizeof = 140
} __attribute__((__packed__));

// src/public/steam/isteamgameserver.h:298
struct GSClientKick_t {
	enum {
		k_iCallback = 0xcb,
	};
	GSClientKick_t();

	// sizeof = 12
} __attribute__((__packed__));
