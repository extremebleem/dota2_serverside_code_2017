// Reconstructed from DWARF by pahole; not original source.

// src/public/tier0/threadtools.h:634
class CThreadSyncValue<int> {
protected:

	int m_value;  // +0x0
	int Load();
	void Store(int);

	// sizeof = 4
};

// src/public/tier0/threadtools.h:634
class CThreadSyncValue<bool> {
protected:

	bool m_value;  // +0x0
	bool Load();
	void Store(bool);

	// sizeof = 1
};

// src/public/tier0/threadtools.h:634
class CThreadSyncValue<CModelSkeleton::BoneFlags_t> {
protected:

	BoneFlags_t Load();
	void Store(BoneFlags_t);

	// sizeof = 4
};

// src/public/tier0/threadtools.h:1166
class CAutoLockMutexTrait<CThreadFastMutex> {
	void Lock(CThreadFastMutex &);
	void Unlock(CThreadFastMutex &);

	// sizeof = 1
};

// src/public/tier0/threadtools.h:1166
class CAutoLockMutexTrait<CThreadMutex> {
	void Lock(CThreadMutex &);
	void Unlock(CThreadMutex &);

	// sizeof = 1
};

// src/public/tier0/threadtools.h:1190
class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > {
private:

	const CThreadMutex & m_lock;  // +0x0
	CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, CThreadMutex &);
	CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const CThreadMutex &);
	~CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, int);
	CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > &);
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > & operator=(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > &);

	// sizeof = 8
};

// src/public/tier0/threadtools.h:1190
class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > {
private:

	const CThreadFastMutex & m_lock;  // +0x0
	CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, CThreadFastMutex &);
	CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const CThreadFastMutex &);
	~CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, int);
	CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > &);
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > & operator=(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > &);

	// sizeof = 8
};

// src/public/tier0/threadtools.h:1535
class CThreadLockableObject<CThreadNullMutex> {
protected:

	bool TryLock();
	bool TryLockForWrite();
	bool TryLockForRead();
	void Lock();
	void LockForRead();
	void LockForWrite();
	void Unlock();
	void UnlockRead();
	void UnlockWrite();

	// sizeof = 1
};

// src/public/tier0/threadtools.h:2495
class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1u> : public CThreadFastMutex {
public:

	CCopyableLock();
	CCopyableLock(const CThreadFastMutex &);
	CCopyableLock(const CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1u> &);
	CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1u> & operator=(const CThreadFastMutex &);
	CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1u> & operator=(const CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1u> &);

private:

	void Copy(const CThreadFastMutex &);

	// sizeof = 16
};
