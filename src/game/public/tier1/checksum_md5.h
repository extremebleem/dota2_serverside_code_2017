// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/checksum_md5.h:14
struct MD5Value_t {
	unsigned char bits[16];  // +0x0
	void Zero();
	bool IsZero();
	bool operator==(const MD5Value_t &);
	bool operator!=(const MD5Value_t &);

	// sizeof = 16
};
