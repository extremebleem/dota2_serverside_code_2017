// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/loggingtypes.h:189
struct LoggingMetaData_t {
	uint64 m_TypeID;  // +0x8
	uint8 * m_pData;  // +0x10
	size_t m_nDataSize;  // +0x18
	uint8 m_nVerbosity;  // +0x20
	LoggingMetaData_t();
	LoggingMetaData_t(uint64, uint8 *, size_t, LoggingVerbosity_t);

	// sizeof = 40
};

// src/public/tier0/loggingtypes.h:205
struct LoggingContext_t {
	LoggingChannelID_t m_ChannelID;  // +0x0
	const LoggingMetaData_t * m_pMetaData;  // +0x10
	LoggingContext_t();

	// sizeof = 24
};

// src/public/tier0/loggingtypes.h:235
class ILoggingListener {
	int ()() * * _vptr.ILoggingListener;  // +0x0
	ILoggingListener(ILoggingListener &);
	ILoggingListener(const ILoggingListener &);
	ILoggingListener();
	virtual void Log(const LoggingContext_t *, const tchar *);
	virtual void OnChannelRegistered(LoggingChannelID_t);
	virtual void OnChannelVerbosityChanged(LoggingChannelID_t);
	virtual void OnChannelFlagsChanged(LoggingChannelID_t);

	// vtable[0] Log
	// vtable[1] OnChannelRegistered
	// vtable[2] OnChannelVerbosityChanged
	// vtable[3] OnChannelFlagsChanged
	// sizeof = 8
};
