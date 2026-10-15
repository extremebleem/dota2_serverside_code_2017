// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier0/logging.h:101
struct LoggingTag_t {
	const char * m_pTagName;  // +0x0

	// sizeof = 16
};

// src/game/public/tier0/logging.h:108
struct LoggingChannel_t {
	LoggingChannelID_t m_ID;  // +0x0
	char m_Name[32];  // +0x18
	uint8 m_nModifiedFields;  // +0x40
	LoggingChannel_t();
	bool HasTag(const char *);
	bool IsEnabled(LoggingVerbosity_t);
	void SetVerbosity(LoggingVerbosity_t);
	void SetFlags(LoggingChannelFlags_t);

	// sizeof = 72
};
