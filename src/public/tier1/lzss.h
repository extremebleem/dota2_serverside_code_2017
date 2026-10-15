// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/lzss.h:29
class CLZSS {
	struct lzss_node_t {
		unsigned char * pData;  // +0x0
		char empty[4];  // +0x18

		// sizeof = 32
	};

	struct lzss_list_t {
		// sizeof = 16
	};

private:

	int m_nWindowSize;  // +0x10
	unsigned char * Compress(unsigned char *, int, unsigned int *, bool);
	unsigned char * CompressNoAlloc(unsigned char *, int, unsigned char *, unsigned int *, bool);
	unsigned int Uncompress(unsigned char *, unsigned char *);
	unsigned int SafeUncompress(unsigned char *, unsigned char *, unsigned int);
	bool IsCompressed(unsigned char *);
	unsigned int GetActualSize(unsigned char *);
	CLZSS(int);
	void BuildHash(unsigned char *);

	// sizeof = 24
};
