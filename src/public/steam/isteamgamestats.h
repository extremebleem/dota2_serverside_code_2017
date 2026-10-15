// Reconstructed from DWARF by pahole; not original source.

// src/public/steam/isteamgamestats.h:55
struct GameStatsSessionIssued_t {
	enum {
		k_iCallback = 0x7d1,
	};

	uint64 m_ulSessionID;  // +0x0
	bool m_bCollectingAny;  // +0xc
	bool m_bCollectingDetails;  // +0xd

	// sizeof = 16
};

// src/public/steam/isteamgamestats.h:69
struct GameStatsSessionClosed_t {
	enum {
		k_iCallback = 0x7d2,
	};

	uint64 m_ulSessionID;  // +0x0

	// sizeof = 16
};
