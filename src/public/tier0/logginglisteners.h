// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/logginglisteners.h:26
class CSimpleLoggingListener : public ILoggingListener {
public:

	bool m_bQuietPrintf;  // +0x8
	bool m_bQuietDebugger;  // +0x9
	CSimpleLoggingListener(CSimpleLoggingListener &);
	CSimpleLoggingListener(const CSimpleLoggingListener &);
	CSimpleLoggingListener(bool, bool);
	virtual void Log(const LoggingContext_t *, const tchar *);

	// vtable[0] Log
	// sizeof = 16
};

// src/public/tier0/logginglisteners.h:134
class CSimpleWindowsLoggingListener : public ILoggingListener {
public:

	CSimpleWindowsLoggingListener(CSimpleWindowsLoggingListener &);
	CSimpleWindowsLoggingListener(const CSimpleWindowsLoggingListener &);
	CSimpleWindowsLoggingListener();
	virtual void Log(const LoggingContext_t *, const tchar *);

	// vtable[0] Log
	// sizeof = 8
};
