// Reconstructed from DWARF by pahole; not original source.

// src/public/animationsystem/hsequence.h:14
class HSequence {
private:

	int32 m_Data;  // +0x0
	HSequence();
	HSequence(int32);
	int32 GetRaw();
	void SetRaw(int32);
	int32 * GetRawPtrForWrite();
	bool operator==(const HSequence &);
	bool operator!=(const HSequence &);
	bool operator<(const HSequence &);
	bool operator<=(const HSequence &);
	bool operator>(const HSequence &);
	bool operator>=(const HSequence &);
	HSequence & operator++();
	HSequence operator++(int);
	HSequence & operator--();
	HSequence operator--(int);
	HSequence & operator=(int32);

	// sizeof = 4
};
