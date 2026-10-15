// Reconstructed from DWARF by pahole; not original source.

// src/game/public/gcsdk/gcsteamdefines.h:25
class CRWLockAutoWrite<CThreadSpinRWLock> {
private:

	const CThreadSpinRWLock & m_RWLock;  // +0x0
	CRWLockAutoWrite(CThreadSpinRWLock &);
	~CRWLockAutoWrite();

	// sizeof = 8
};
