// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/basetypes.h:481
struct Rect_t {
	int x;  // +0x0
	int y;  // +0x4
	int width;  // +0x8
	int height;  // +0xc
	Rect_t(int, int, int, int);
	Rect_t();
	int Size();
	bool IsEmpty();
	int MaximumX();
	int MaximumY();
	bool Intersects(const Rect_t &);
	bool operator==(const Rect_t &);
	bool operator!=(const Rect_t &);
	void SetFromMaxMins(int, int, int, int);
	Rect_t & operator&=(const Rect_t &);

	// sizeof = 16
};

// src/public/tier0/basetypes.h:543
struct Rect3D_t {
	int x;  // +0x0
	int y;  // +0x4
	int z;  // +0x8
	int width;  // +0xc
	int height;  // +0x10
	int depth;  // +0x14
	Rect3D_t(int, int, int, int, int, int);
	Rect3D_t();
	void Init(int, int, int, int, int, int);
	int Size();
	bool Intersects(const Rect3D_t &);
	bool operator==(const Rect3D_t &);
	bool operator!=(const Rect3D_t &);

	// sizeof = 24
};

// src/public/tier0/basetypes.h:600
struct interval_t {
	float start;  // +0x0
	float range;  // +0x4

	// sizeof = 8
};

// src/public/tier0/basetypes.h:685
class IGenericInterface {
	int ()() * * _vptr.IGenericInterface;  // +0x0
	IGenericInterface();

protected:

	virtual ~IGenericInterface();

	// sizeof = 8
};

// src/public/tier0/basetypes.h:860
class CSplitScreenSlot {
private:

	int32 m_Data;  // +0x0
	CSplitScreenSlot(int32);
	int32 GetRaw();
	void SetRaw(int32);
	int32 * GetRawPtrForWrite();
	bool operator==(const CSplitScreenSlot &);
	bool operator!=(const CSplitScreenSlot &);
	bool operator<(const CSplitScreenSlot &);
	bool operator<=(const CSplitScreenSlot &);
	bool operator>(const CSplitScreenSlot &);
	bool operator>=(const CSplitScreenSlot &);
	CSplitScreenSlot & operator++();
	CSplitScreenSlot operator++(int);
	CSplitScreenSlot & operator--();
	CSplitScreenSlot operator--(int);
	CSplitScreenSlot & operator=(int32);

	// sizeof = 4
};

// src/public/tier0/basetypes.h:861
class CPlayerSlot {
private:

	int32 m_Data;  // +0x0
	CPlayerSlot(int32);
	int32 GetRaw();
	void SetRaw(int32);
	int32 * GetRawPtrForWrite();
	bool operator==(const CPlayerSlot &);
	bool operator!=(const CPlayerSlot &);
	bool operator<(const CPlayerSlot &);
	bool operator<=(const CPlayerSlot &);
	bool operator>(const CPlayerSlot &);
	bool operator>=(const CPlayerSlot &);
	CPlayerSlot & operator++();
	CPlayerSlot operator++(int);
	CPlayerSlot & operator--();
	CPlayerSlot operator--(int);
	CPlayerSlot & operator=(int32);

	// sizeof = 4
};

// src/public/tier0/basetypes.h:863
class CEntityIndex {
private:

	int32 m_Data;  // +0x0
	CEntityIndex(int32);
	int32 GetRaw();
	void SetRaw(int32);
	int32 * GetRawPtrForWrite();
	bool operator==(const CEntityIndex &);
	bool operator!=(const CEntityIndex &);
	bool operator<(const CEntityIndex &);
	bool operator<=(const CEntityIndex &);
	bool operator>(const CEntityIndex &);
	bool operator>=(const CEntityIndex &);
	CEntityIndex & operator++();
	CEntityIndex operator++(int);
	CEntityIndex & operator--();
	CEntityIndex operator--(int);
	CEntityIndex & operator=(int32);

	// sizeof = 4
};

// src/public/tier0/basetypes.h:868
class SoundGuid_t {
private:

	int32 m_Data;  // +0x0
	SoundGuid_t(int32);
	int32 GetRaw();
	void SetRaw(int32);
	int32 * GetRawPtrForWrite();
	bool operator==(const SoundGuid_t &);
	bool operator!=(const SoundGuid_t &);
	bool operator<(const SoundGuid_t &);
	bool operator<=(const SoundGuid_t &);
	bool operator>(const SoundGuid_t &);
	bool operator>=(const SoundGuid_t &);
	SoundGuid_t & operator++();
	SoundGuid_t operator++(int);
	SoundGuid_t & operator--();
	SoundGuid_t operator--(int);
	SoundGuid_t & operator=(int32);

	// sizeof = 4
};

// src/public/tier0/basetypes.h:873
class SoundEventGuid_t {
private:

	int32 m_Data;  // +0x0
	SoundEventGuid_t(int32);
	int32 GetRaw();
	void SetRaw(int32);
	int32 * GetRawPtrForWrite();
	bool operator==(const SoundEventGuid_t &);
	bool operator!=(const SoundEventGuid_t &);
	bool operator<(const SoundEventGuid_t &);
	bool operator<=(const SoundEventGuid_t &);
	bool operator>(const SoundEventGuid_t &);
	bool operator>=(const SoundEventGuid_t &);
	SoundEventGuid_t & operator++();
	SoundEventGuid_t operator++(int);
	SoundEventGuid_t & operator--();
	SoundEventGuid_t operator--(int);
	SoundEventGuid_t & operator=(int32);

	// sizeof = 4
};

// src/public/tier0/basetypes.h:876
struct HSCRIPT__ {
	int unused;  // +0x0

	// sizeof = 4
};
