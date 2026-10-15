// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlsignalslot.h:52
class CUtlSignaller_Base {
protected:

	CUtlDelegate<void(CUtlSlot*)> m_SlotDeletionDelegate;  // +0x0
	CUtlSignaller_Base();

	// sizeof = 24
};

// src/public/tier1/utlsignalslot.h:481
class CUtlSlot {
private:

	CUtlVectorMT<CUtlVector<CUtlSignaller_Base*, CUtlMemory<CUtlSignaller_Base*, int> >, CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1u> > m_ConnectedSignallers;  // +0x0
	CUtlSlot();
	~CUtlSlot();

	// sizeof = 56
};
