// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/quantizedfloatencoder.h:42
class CQuantizedFloatEncoder {
	const char * m_pFieldName;  // +0x0
	float m_flMinValue;  // +0x8
	float m_flMaxValue;  // +0xc
	float m_flHighLowMul;  // +0x10
	float m_flDecodeMul;  // +0x14
	float m_flOffset;  // +0x18
	uint8 m_nBitCount;  // +0x1c
	uint8 m_nFlags:4;  // +0x1d:0
	uint8 m_nEncodeFlags:4;  // +0x1d:4
	uint8 m_bNoScale:1;  // +0x1e:0
	uint8 m_bInitialized:1;  // +0x1e:1
	uint8 m_nUnused:6;  // +0x1e:2
	CQuantizedFloatEncoder();
	float GetExactEncodeTestCase(int);
	void RecomputeOriginalRange(float &, float &);
	int ValidateFlags(int);
	uint32 QFE_log2(unsigned int);
	float DecodeFloat(bf_read &);

private:

	bool QuantizedFloatIsUnchanged(float);
	bool AssignMultipliers(int);
	float AssignRangeMultiplier(uint32, float);

	// sizeof = 32
};
