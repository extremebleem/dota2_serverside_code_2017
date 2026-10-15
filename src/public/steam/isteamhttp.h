// Reconstructed from DWARF by pahole; not original source.

// src/public/steam/isteamhttp.h:153
struct HTTPRequestCompleted_t {
	enum {
		k_iCallback = 0x835,
	};

	HTTPRequestHandle m_hRequest;  // +0x0
	uint64 m_ulContextValue;  // +0x4
	bool m_bRequestSuccessful;  // +0xc

	uint32 m_unBodySize;  // +0x14

	// sizeof = 24
};
