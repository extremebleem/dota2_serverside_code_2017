// Reconstructed from DWARF by pahole; not original source.

// src/public/steam/isteamgameserverstats.h:70
struct GSStatsReceived_t {
	enum {
		k_iCallback = 0x708,
	};
	GSStatsReceived_t();

	// sizeof = 12
} __attribute__((__packed__));

// src/public/steam/isteamgameserverstats.h:81
struct GSStatsStored_t {
	enum {
		k_iCallback = 0x709,
	};
	GSStatsStored_t();

	// sizeof = 12
} __attribute__((__packed__));

// src/public/steam/isteamgameserverstats.h:92
struct GSStatsUnloaded_t {
	enum {
		k_iCallback = 0x454,
	};
	GSStatsUnloaded_t();

	// sizeof = 8
};
