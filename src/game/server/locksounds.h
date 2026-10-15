// Reconstructed from DWARF by pahole; not original source.

// src/game/server/locksounds.h:18
struct locksound_t {
	int ()() * * _vptr.locksound_t;  // +0x0
private:

	static datamap_t m_DataMap;

	string_t sLockedSound;  // +0x8
	string_t sLockedSentence;  // +0x10
	string_t sUnlockedSound;  // +0x18
	string_t sUnlockedSentence;  // +0x20
	int iLockedSentence;  // +0x28
	int iUnlockedSentence;  // +0x2c
	float flwaitSound;  // +0x30
	float flwaitSentence;  // +0x34
	uint8 bEOFLocked;  // +0x38
	uint8 bEOFUnlocked;  // +0x39
	locksound_t(locksound_t &);
	locksound_t(const locksound_t &);
	~locksound_t();
	locksound_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 64
};
