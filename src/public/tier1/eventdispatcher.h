// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/eventdispatcher.h:51
class CEventDispatcher_Base {
	struct EventListenerInfo_t {
		const char * m_pszName;  // +0x18
		int32 m_nPriority;  // +0x20
		uint8 m_nDelegateParamCount;  // +0x24
		bool m_bDelegateReturnsVoid;  // +0x25
		EventListenerInfo_t();

		// sizeof = 40
	};

	struct DelegateIterator_Base_t {
		const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> pListeners;  // +0x0
		int nCurrent;  // +0x30

		bool bIteratingForward;  // +0x40
		bool bIsInListenerTelemetryScope;  // +0x41
		DelegateIterator_Base_t();

		// sizeof = 72
	};

protected:

	CEventDispatcher_Base();
	void RegisterEventListener_Base(const CUtlAbstractDelegate &, unsigned int, bool, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &, int, const char *);
	bool UnregisterEventListener_Base(const CUtlAbstractDelegate &, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &);
	void GetListenerNames_Base(const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool IterateListeners_Start(DelegateIterator_Base_t &, bool);
	const EventListenerInfo_t * IterateListener(DelegateIterator_Base_t &);
	/* tag__fprintf: const_type tag not supported! */;
	void IterateListeners_End(DelegateIterator_Base_t &);
	int FindInsertionPoint(const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , int);

	// sizeof = 24
};

// src/public/tier1/eventdispatcher.h:51
class CEventDispatcher_Base {
	struct EventListenerInfo_t {
		const char * m_pszName;  // +0x18
		int32 m_nPriority;  // +0x20
		uint8 m_nDelegateParamCount;  // +0x24
		bool m_bDelegateReturnsVoid;  // +0x25
		EventListenerInfo_t();
		EventListenerInfo_t & operator=(const EventListenerInfo_t &);

		// sizeof = 40
	};

	struct DelegateIterator_Base_t {
		const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> pListeners;  // +0x0
		int nCurrent;  // +0x30

		bool bIteratingForward;  // +0x40
		bool bIsInListenerTelemetryScope;  // +0x41
		DelegateIterator_Base_t();

		// sizeof = 72
	};

protected:

	CEventDispatcher_Base();
	void RegisterEventListener_Base(const CUtlAbstractDelegate &, unsigned int, bool, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &, int, const char *);
	bool UnregisterEventListener_Base(const CUtlAbstractDelegate &, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> > &);
	void GetListenerNames_Base(const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool IterateListeners_Start(DelegateIterator_Base_t &, bool);
	const EventListenerInfo_t * IterateListener(DelegateIterator_Base_t &);
	/* tag__fprintf: const_type tag not supported! */;
	void IterateListeners_End(DelegateIterator_Base_t &);
	int FindInsertionPoint(const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> , int);

	// sizeof = 24
};

// src/public/tier1/eventdispatcher.h:218
class CEventID_SchemaBinding {
	typedef const ISchemaBinding * EventID_t;
	bool IsValidEventID(EventID_t);
	const char * GetEventName(EventID_t, char *, size_t);

	// sizeof = 1
};

// src/public/tier1/eventdispatcher.h:357
class CEventSignature_Bool_ConstStructRef {
	class EventSignature_Base {
		enum {
			PARAMETER_COUNT = 0x1,
		};
		typedef bool ReturnType_t;
		ReturnType_t GetDefaultReturnValue();
		bool MergeReturnValueAndContinueIterating(ReturnType_t &, const ReturnType_t &);
		/* tag__fprintf: const_type tag not supported! */;

		// sizeof = 1
	};

	class EventSignature<EventServerSimulate_t> : public EventSignature_Base {
	public:

		typedef const EventServerSimulate_t & Param1Type_t;

		// sizeof = 1
	};

	class EventSignature<EventServerPostSimulate_t> : public EventSignature_Base {
	public:

		typedef const EventServerPostSimulate_t & Param1Type_t;

		// sizeof = 1
	};

	class EventSignature<EventFrameBoundary_t> : public EventSignature_Base {
	public:

		typedef const EventFrameBoundary_t & Param1Type_t;

		// sizeof = 1
	};

	// sizeof = 1
};

// src/public/tier1/eventdispatcher.h:394
class CEventIDManager_SchemaBinding : public CEventID_SchemaBinding {
public:

	// sizeof = 1
};

// src/public/tier1/eventdispatcher.h:1062
class CEventIDManager_Default : public CEventIDManager_SchemaBinding {
public:

	// sizeof = 1
};
