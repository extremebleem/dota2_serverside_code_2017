// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/utlbufferstrider.h:14
class CBufferStrider {
protected:

	uint8 * m_pBuffer;  // +0x0
	CBufferStrider(void *);
	char * StrideString();
	char * StrideString(const void *);
	uint8 * Get();
	void Set(void *);
	void Align(uint);
	matrix3x4_t * Stride<matrix3x4_t>(int);
	unsigned int * Stride<unsigned int>(int);
	short unsigned int * Stride<short unsigned int>(int);

	// sizeof = 8
};
