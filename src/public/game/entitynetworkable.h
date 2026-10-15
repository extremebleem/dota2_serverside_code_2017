// Reconstructed from DWARF by pahole; not original source.

// src/public/game/entitynetworkable.h:44
class CChangeInfoAccessor {
private:

	short unsigned int m_iChangeInfo;  // +0x0
	short unsigned int m_iChangeInfoSerialNumber;  // +0x2
	void SetChangeInfo(short unsigned int);
	void SetChangeInfoSerialNumber(short unsigned int);
	short unsigned int GetChangeInfo();
	short unsigned int GetChangeInfoSerialNumber();

	// sizeof = 4
};

// src/public/game/entitynetworkable.h:72
struct Entity2Networkable_t {
	union {
	};

	union {
	} u;
	SpawnGroupHandle_t m_SpawnGroupHandle;  // +0x20
	int m_nSerialNumber;  // +0x24
	uint32 * m_pnChangeFlags;  // +0x30
	int32 m_nEntryIndex;  // +0x38
	bool m_bIsPlayer:1;  // +0x3c:0
	Entity2Networkable_t();

	// sizeof = 64
};
