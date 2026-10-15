// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier2/tier2_logging.h:23
class IFileLoggingListener : public ILoggingListener {
public:

	~IFileLoggingListener();
	IFileLoggingListener(IFileLoggingListener &);
	IFileLoggingListener(const IFileLoggingListener &);
	IFileLoggingListener();
	virtual void Log(const LoggingContext_t *, const char *);
	virtual LoggingFileHandle_t BeginLoggingToFile(const char *, const char *, const char *);
	virtual void EndLoggingToFile(LoggingFileHandle_t);
	virtual void AssignLogChannel(LoggingChannelID_t, LoggingFileHandle_t);
	virtual void UnassignLogChannel(LoggingChannelID_t);
	virtual void AssignAllLogChannels(LoggingFileHandle_t);
	virtual void UnassignAllLogChannels();

	// vtable[0] Log
	// vtable[4] BeginLoggingToFile
	// vtable[5] EndLoggingToFile
	// vtable[6] AssignLogChannel
	// vtable[7] UnassignLogChannel
	// vtable[8] AssignAllLogChannels
	// vtable[9] UnassignAllLogChannels
	// sizeof = 8
};

// src/game/public/tier2/tier2_logging.h:38
class CFileLoggingListener : public IFileLoggingListener {
	struct FileInfo_t {
		FileHandle_t m_FileHandle;  // +0x0
		bool IsOpen();
		void Reset();

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int m_FileIndices[256];  // +0x88
	bool m_bLogTimestamps;  // +0x488
	bool m_bNeedsTimestamp;  // +0x489
	CFileLoggingListener(const CFileLoggingListener &);
	CFileLoggingListener();
	~CFileLoggingListener();
	virtual void Log(const LoggingContext_t *, const char *);
	virtual LoggingFileHandle_t BeginLoggingToFile(const char *, const char *, const char *);
	virtual void ReOpenLoggingToFile(LoggingFileHandle_t, const char *, const char *, const char *);
	virtual void EndLoggingToFile(LoggingFileHandle_t);
	virtual void AssignLogChannel(LoggingChannelID_t, LoggingFileHandle_t);
	virtual void UnassignLogChannel(LoggingChannelID_t);
	virtual void AssignAllLogChannels(LoggingFileHandle_t);
	virtual void UnassignAllLogChannels();
	void SetLogTimestamps(bool);
	int GetUnusedFileInfo();

	// vtable[0] Log
	// vtable[4] BeginLoggingToFile
	// vtable[10] ReOpenLoggingToFile
	// vtable[5] EndLoggingToFile
	// vtable[6] AssignLogChannel
	// vtable[7] UnassignLogChannel
	// vtable[8] AssignAllLogChannels
	// vtable[9] UnassignAllLogChannels
	// sizeof = 1168
};

// src/game/public/tier2/tier2_logging.h:82
class CHtmlFormattedLoggingListener : public ILoggingListener {
public:

	CHtmlFormattedLoggingListener();

private:

	virtual void Log(const LoggingContext_t *, const char *);

	// vtable[0] Log
	// sizeof = 8
};
