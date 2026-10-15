// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlsignalslot.h:64
class CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > : public CUtlSignaller_Base {
	struct ConnectedSlot_t {
		ConnectedSlot_t();
		~ConnectedSlot_t();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

private:

	typedef EventID_t EventID_t;

	struct EventAndDelegate_t {
		EventID_t EventID;  // +0x18
		EventAndDelegate_t();

		// sizeof = 32
	};
	CUtlSignaller_Identified(CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, int);
	~CUtlSignaller_Identified(CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, int);
	bool HasListeners(CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, EventID_t);
	void UnregisterSlot_Abstract(CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, CUtlSlot *, const CUtlAbstractDelegate &, EventID_t);

protected:

	void RegisterSlotInternal(CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, CUtlSlot *, const CUtlAbstractDelegate &, EventID_t);
	void RegisterSlot(CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *);
	void UnregisterSlot(CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *);

private:

	void SlotDeletionHandler(CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, CUtlSlot *);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 208
};

// src/public/tier1/utlsignalslot.h:454
class CUtlSignaller<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > : public CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > {
public:

	CUtlSignaller(CUtlSignaller<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, int);
	~CUtlSignaller(CUtlSignaller<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, int);

	// sizeof = 208
};

// src/public/tier1/utlsignalslot.h:505
class CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > {
	class IUtlQueuedSignal {
		// sizeof = 0
	};

	struct RefCountedSignallerPointer_t {
		CInterlockedInt nReferences;  // +0x8
		RefCountedSignallerPointer_t();

		// sizeof = 16
	};

private:

	CUtlSignalQueue(CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *);
	~CUtlSignalQueue(CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, int);
	void DispatchSignals(CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *);
	bool DispatchSignalsWithReturnValue(CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *);
	IUtlQueuedSignal * DequeueSignal(CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *);
	void OnSignallerDeleted(CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *);
	RefCountedSignallerPointer_t * GetIndirect(CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, CUtlSignaller<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *);

	// sizeof = 160
};
