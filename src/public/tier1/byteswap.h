// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/byteswap.h:17
class CByteswap {
private:

	unsigned int m_bSwapBytes:1;  // +0x0:0
	unsigned int m_bBigEndian:1;  // +0x0:1
	CByteswap();
	void SwapFieldToTargetEndian(void *, void *, typedescription_t *);
	void SwapFieldsToTargetEndian(void *, void *, datamap_t *);
	bool IsMachineBigEndian();
	void SetTargetBigEndian(bool);
	void FlipTargetEndian();
	void ActivateByteSwapping(bool);
	bool IsSwappingBytes();
	bool IsTargetBigEndian();
	void SwapBufferToTargetEndian<char>(char *, char *, int);

	// sizeof = 4
};
