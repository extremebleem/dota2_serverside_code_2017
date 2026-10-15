// Reconstructed from DWARF by pahole; not original source.

// src/game/public/steam/isteamuser.h:224
struct SteamServerConnectFailure_t {
	enum {
		k_iCallback = 0x66,
	};

	bool m_bStillRetrying;  // +0x4

	// sizeof = 8
};

// src/game/public/steam/isteamuser.h:236
struct SteamServersDisconnected_t {
	enum {
		k_iCallback = 0x67,
	};

	// sizeof = 4
};
