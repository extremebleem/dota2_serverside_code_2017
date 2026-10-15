// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/tslist.h:63
struct TSLNodeBase_t {
	// sizeof = 16
};

// src/public/tier0/tslist.h:68
union TSLHead_t {
	int128 value64x128;  // +0x0
};

// src/public/tier0/tslist.h:113
class CTSListBase {
private:

	CTSListBase();
	~CTSListBase();
	TSLNodeBase_t * Push(TSLNodeBase_t *);
	TSLNodeBase_t * Pop();
	TSLNodeBase_t * Detach();
	TSLHead_t * AccessUnprotected();
	int Count();

	// sizeof = 16
};
