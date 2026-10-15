// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/threadtools_ordered.h:27
class CThreadLocalScope {
protected:

	ThreadHandle_t m_hOwningThread;  // +0x8
	int m_nTier0ThreadID;  // +0x10
	char m_szThreadName[32];  // +0x14
	CThreadLocalScope(ThreadHandle_t);
	~CThreadLocalScope();
	bool IsLocalThreadScope();
	CThreadFastMutex & GetScopeListMutex();
	CThreadLocalScope * FindScopeForThreadHandle(ThreadHandle_t);
	const char * GetThreadName();
	void SetThreadName(const char *);

	// sizeof = 56
};
