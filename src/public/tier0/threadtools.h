// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/threadtools.h:792
class CThreadMutex {
private:

	pthread_mutex_t m_Mutex;  // +0x0
	pthread_mutexattr_t m_Attr;  // +0x28

	ThreadId_t m_currentOwnerID;  // +0x30
	uint16 m_lockCount;  // +0x38
	bool m_bTrace;  // +0x3a
	CThreadMutex();
	~CThreadMutex();
	void Lock();
	void Lock();
	void Unlock();
	void Unlock();
	bool TryLock();
	bool TryLock();
	void LockSilent();
	void UnlockSilent();
	bool TryLockForWrite();
	bool TryLockForRead();
	void LockForRead();
	void LockForWrite();
	void UnlockRead();
	void UnlockWrite();
	RWLockTranstionResult_t UnlockRead_LockForWrite();
	RWLockTranstionResult_t UnlockWrite_LockForRead();
	bool OwnedByCurrentThread();
	bool AssertOwnedByCurrentThread();
	bool IsOwnedByCurrentThread_DebugOnly();
	void SetTrace(bool);
	CThreadMutex(const CThreadMutex &);
	CThreadMutex & operator=(const CThreadMutex &);

	// sizeof = 64
};

// src/public/tier0/threadtools.h:892
class CThreadFastMutex {
private:

	ThreadId_t m_ownerID;  // +0x0
	int m_depth;  // +0x8
	CThreadFastMutex();
	bool TryLockInline(volatile CThreadFastMutex *, ThreadId_t);
	bool TryLock(volatile CThreadFastMutex *, ThreadId_t);
	void Lock(volatile CThreadFastMutex *, ThreadId_t, unsigned int);
	bool TryLock(volatile CThreadFastMutex *);
	void Lock(volatile CThreadFastMutex *, unsigned int);
	void Unlock(volatile CThreadFastMutex *);
	bool TryLock(const volatile CThreadFastMutex *);
	void Lock(const volatile CThreadFastMutex *, unsigned int);
	void Unlock(const volatile CThreadFastMutex *);
	bool OwnedByCurrentThread();
	bool AssertOwnedByCurrentThread();
	void SetTrace(bool);
	bool IsLocked();
	ThreadId_t GetOwnerId();
	int GetDepth();
	bool TryLockForWrite();
	bool TryLockForRead();
	void LockForRead();
	void LockForWrite();
	void UnlockRead();
	void UnlockWrite();
	RWLockTranstionResult_t UnlockRead_LockForWrite();
	RWLockTranstionResult_t UnlockWrite_LockForRead();
	CThreadFastMutex(const CThreadFastMutex &);
	CThreadFastMutex & operator=(const CThreadFastMutex &);

	// sizeof = 16
};

// src/public/tier0/threadtools.h:1103
class CThreadNullMutex {
	void Lock();
	void Unlock();
	bool TryLock();
	bool AssertOwnedByCurrentThread();
	void SetTrace(bool);
	uint32 GetOwnerId();
	int GetDepth();
	bool TryLockForWrite();
	bool TryLockForRead();
	void LockForRead();
	void LockForWrite();
	void UnlockRead();
	void UnlockWrite();
	RWLockTranstionResult_t UnlockRead_LockForWrite();
	RWLockTranstionResult_t UnlockWrite_LockForRead();

	// sizeof = 1
};

// src/public/tier0/threadtools.h:1816
class CThreadEvent : public CThreadSyncObject {
public:

	~CThreadEvent();
	CThreadEvent(bool);
	CThreadEvent(const char *, bool, bool);
	bool Set();
	bool Reset();
	bool Check();
	uint32 WaitForMultiple(int, CThreadEvent * *, bool, uint32);
	uint32 WaitForMultiple(int, CThreadEvent *, bool, uint32);

private:

	CThreadEvent(const CThreadEvent &);
	CThreadEvent & operator=(const CThreadEvent &);

	// sizeof = 128
};

// src/public/tier0/threadtools.h:1927
class CThreadManualEvent : public CThreadEvent {
public:

	~CThreadManualEvent();
	CThreadManualEvent(CThreadManualEvent &);
	CThreadManualEvent(const CThreadManualEvent &);
	CThreadManualEvent();

	// sizeof = 128
};

// src/public/tier0/threadtools.h:1981
struct ThreadMultiWaitExtra_t {
	uint32 nFlags;  // +0x0

	// sizeof = 4
};

// src/public/tier0/threadtools.h:2013
class CThreadMultiWaitObject {
protected:

	int m_hEventFd;  // +0x0
	uint32 m_nExtraFlags;  // +0x4
	CThreadMultiWaitObject();
	~CThreadMultiWaitObject();
	bool Wait(uint32);
	bool Check();
	void GetWaitItem(ThreadMultiWaitItem_t *, ThreadMultiWaitExtra_t *);

	// sizeof = 8
};

// src/public/tier0/threadtools.h:2091
class CThreadMultiWaitEvent : public CThreadMultiWaitObject {
public:

	CThreadMultiWaitEvent(bool);
	~CThreadMultiWaitEvent();
	void Set();
	void Reset();

	// sizeof = 8
};

// src/public/tier0/threadtools.h:2221
class CThreadRWLock {
private:

	int m_nWriters;  // +0x140
	int m_nActiveReaders;  // +0x144
	int m_nPendingReaders;  // +0x148
	CThreadRWLock();
	bool TryLockForRead();
	void LockForRead();
	void UnlockRead();
	bool TryLockForWrite();
	void LockForWrite();
	void UnlockWrite();
	RWLockTranstionResult_t UnlockRead_LockForWrite();
	RWLockTranstionResult_t UnlockWrite_LockForRead();
	bool TryLockForRead();
	void LockForRead();
	void UnlockRead();
	bool TryLockForWrite();
	void LockForWrite();
	void UnlockWrite();
	RWLockTranstionResult_t UnlockRead_LockForWrite();
	RWLockTranstionResult_t UnlockWrite_LockForRead();
	bool TryLock();
	void Lock();
	void Unlock();
	CThreadRWLock(const CThreadRWLock &);
	CThreadRWLock & operator=(const CThreadRWLock &);
	void WaitForRead();

	// sizeof = 336
};

// src/public/tier0/threadtools.h:2307
class CThreadRWLock_FastRead {
	enum InterlockBits_t {
		READ_LOCK_MASK = 0x3ff,
		WAITING_READ_LOCK_INCREMENT = 0x400,
		WAITING_READ_LOCK_MASK = 0xffc00,
		WRITE_LOCK_INCREMENT = 0x100000,
		WRITE_LOCK_MASK = 0x7ff00000,
		READ_LOCK_ACCOUNTING_BIT = 0x80000000,
	};

protected:

	CInterlockedUInt m_Interlock;  // +0x0
	CInterlockedInt m_ReadlockAccounting;  // +0x4

	ThreadId_t m_WritingThreadID;  // +0x188
	int m_nWritingThreadLockCount;  // +0x190
	CThreadRWLock_FastRead();
	bool TryLockForRead();
	void LockForRead();
	void UnlockRead();
	bool TryLockForWrite();
	void LockForWrite();
	void UnlockWrite();
	RWLockTranstionResult_t UnlockRead_LockForWrite();
	RWLockTranstionResult_t UnlockWrite_LockForRead();
	ThreadId_t GetWriteLockThreadID();
	bool OwnedByCurrentThread();
	bool AssertOwnedByCurrentThread();
	int GetDepth();
	bool TryLock();
	void Lock();
	void Unlock();
	void HandleFirstWriteLockTransition();
	void WaitForReadLockTransition(uint32);
	void UnlockReadAccounting(uint32);

private:

	CThreadRWLock_FastRead(const CThreadRWLock_FastRead &);
	CThreadRWLock_FastRead & operator=(const CThreadRWLock_FastRead &);
	~CThreadRWLock_FastRead();

	// sizeof = 408
};

// src/public/tier0/threadtools.h:2382
class CThreadSpinRWLock {
	union LockInfo_t {
		struct {
			ThreadId_t m_writerId;  // +0x0
			int64 m_nReaders;  // +0x8
		};
		int128 m_i128;  // +0x0
	};

private:

	CInterlockedInt m_nWriters;  // +0x10
	CThreadSpinRWLock();
	bool TryLockForWrite();
	bool TryLockForRead();
	void LockForRead();
	void UnlockRead();
	void LockForWrite();
	void UnlockWrite();
	RWLockTranstionResult_t UnlockRead_LockForWrite();
	RWLockTranstionResult_t UnlockWrite_LockForRead();
	bool TryLockForWrite();
	bool TryLockForRead();
	void LockForRead();
	void UnlockRead();
	void LockForWrite();
	void UnlockWrite();
	RWLockTranstionResult_t UnlockRead_LockForWrite();
	RWLockTranstionResult_t UnlockWrite_LockForRead();
	bool TryLock();
	void Lock();
	void Unlock();
	CThreadSpinRWLock(const CThreadSpinRWLock &);
	CThreadSpinRWLock & operator=(const CThreadSpinRWLock &);
	bool AssignIf(const LockInfo_t &, const LockInfo_t &);
	/* tag__fprintf: const_type tag not supported! */;
	bool TryLockForWrite(ThreadId_t);
	void SpinLockForWrite(ThreadId_t);

	// sizeof = 32
};

// src/public/tier0/threadtools.h:2751
class CValidatableThread : public CThread {
public:

protected:

	bool m_bSleepForValidate;  // +0x188
	bool m_bSleepingForValidate;  // +0x189
	CValidatableThread();
	virtual ~CValidatableThread();

	// sizeof = 400
};
