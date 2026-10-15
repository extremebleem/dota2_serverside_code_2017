// Reconstructed from DWARF by pahole; not original source.

// src/public/modellib/eventlist.h:25
class AnimEventIndex_t {
private:

	int32 m_Data;  // +0x0
	AnimEventIndex_t(int32);
	int32 GetRaw();
	void SetRaw(int32);
	int32 * GetRawPtrForWrite();
	bool operator==(const AnimEventIndex_t &);
	bool operator!=(const AnimEventIndex_t &);
	bool operator<(const AnimEventIndex_t &);
	bool operator<=(const AnimEventIndex_t &);
	bool operator>(const AnimEventIndex_t &);
	bool operator>=(const AnimEventIndex_t &);
	AnimEventIndex_t & operator++();
	AnimEventIndex_t operator++(int);
	AnimEventIndex_t & operator--();
	AnimEventIndex_t operator--(int);
	AnimEventIndex_t & operator=(int32);

	// sizeof = 4
};
