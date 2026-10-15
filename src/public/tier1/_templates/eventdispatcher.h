// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/eventdispatcher.h:103
class CEventDispatcher_Identified<CEventIDManager_Default> : public CEventDispatcher_Base {
public:

private:

	CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)> m_EventListenerMap;  // +0x18
	typedef EventID_t EventID_t;

	struct DelegateIterator_t {
		// sizeof = 0
	};
	CEventDispatcher_Identified(int);
	const char * GetEventName(EventID_t, char *, size_t);
	bool HasListeners(EventID_t);
	void GetListenerNames(EventID_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool IterateListeners_Start(DelegateIterator_t &, EventID_t, bool);
	void IterateListeners_End(DelegateIterator_t &);
	bool IDLessFunc(const EventID_t &, const EventID_t &);
	/* tag__fprintf: const_type tag not supported! */;
	void UnregisterEventListener_Abstract(const CUtlAbstractDelegate &, EventID_t);

protected:

	void RegisterEventListener_Abstract(const CUtlAbstractDelegate &, unsigned int, bool, EventID_t, int, const char *);
	void RegisterEventListener();
	void UnregisterEventListener();

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:103
class CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > : public CEventDispatcher_Base {
public:

private:

	CUtlMap<unsigned int, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_EventListenerMap;  // +0x18
	typedef EventID_t EventID_t;

	struct DelegateIterator_t {
		// sizeof = 0
	};
	CEventDispatcher_Identified(CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, int);
	const char * GetEventName(EventID_t, char *, size_t);
	bool HasListeners(CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, EventID_t);
	void GetListenerNames(CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, EventID_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool IterateListeners_Start(CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, DelegateIterator_t &, EventID_t, bool);
	void IterateListeners_End(CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, DelegateIterator_t &);
	bool IDLessFunc(const EventID_t &, const EventID_t &);
	/* tag__fprintf: const_type tag not supported! */;
	void UnregisterEventListener_Abstract(CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, const CUtlAbstractDelegate &, EventID_t);

protected:

	void RegisterEventListener_Abstract(CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, const CUtlAbstractDelegate &, unsigned int, bool, EventID_t, int, const char *);
	void RegisterEventListener(CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *);
	void UnregisterEventListener(CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *);
	~CEventDispatcher_Identified(CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, int);

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:293
class CEventID_IntegralType<unsigned int, CEventID_IntegralType_GetEventID<unsigned int>::CInner> {
	typedef unsigned int EventID_t;
	bool IsValidEventID(EventID_t);
	const char * GetEventName(EventID_t, char *, size_t);

	// sizeof = 1
};

// src/public/tier1/eventdispatcher.h:408
class CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> : public CEventID_IntegralType<unsigned int, CEventID_IntegralType_GetEventID<unsigned int>::CInner> {
public:

	// sizeof = 1
};

// src/public/tier1/eventdispatcher.h:563
class CEvent_Register<CEventIDManager_Default, EventServerSimulate_t, void, 0> : public CEventDispatcher_Identified<CEventIDManager_Default> {
public:

	void RegisterEventListener(const CUtlDelegate<void()> &, int, const char *, EventID_t);
	void UnregisterEventListener(const CUtlDelegate<void()> &, EventID_t);

private:

	CEvent_Register();
	using ::RegisterEventListener;
	using ::UnregisterEventListener;

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:563
class CEvent_Register<CEventIDManager_Default, EventServerSimulate_t, bool, 0> : public CEvent_Register<CEventIDManager_Default, EventServerSimulate_t, void, 1> {
public:

	void RegisterEventListener(const CUtlDelegate<bool()> &, int, const char *, EventID_t);
	void UnregisterEventListener(const CUtlDelegate<bool()> &, EventID_t);

private:

	CEvent_Register();
	using ::RegisterEventListener;
	using ::UnregisterEventListener;

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:563
class CEvent_Register<CEventIDManager_Default, EventServerPostSimulate_t, void, 0> : public CEventDispatcher_Identified<CEventIDManager_Default> {
public:

	void RegisterEventListener(const CUtlDelegate<void()> &, int, const char *, EventID_t);
	void UnregisterEventListener(const CUtlDelegate<void()> &, EventID_t);

private:

	CEvent_Register();
	using ::RegisterEventListener;
	using ::UnregisterEventListener;

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:760
class CEvent_Dispatch<CEventIDManager_Default, EventServerSimulate_t, 1> : public CEvent_Register<CEventIDManager_Default, EventServerSimulate_t, bool, 1> {
public:

	typedef EventID_t EventID_t;
	typedef ReturnType_t ReturnType_t;
	typedef CBundledParams_Reference<const EventServerSimulate_t&, void, void, void> CEventParams_Reference;
	typedef CBundledParams_Copy<const EventServerSimulate_t&, EventServerSimulate_t, void, void, void, void, void, void> CEventParams_Copy;
	ReturnType_t DispatchEvent(Param1Type_t, bool, EventID_t);
	ReturnType_t DispatchEvent(CEventParams_Copy &, bool, EventID_t);
	ReturnType_t DispatchEvent(CEventParams_Reference &, bool, EventID_t);

private:

	CEvent_Dispatch();

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:760
class CEvent_Dispatch<CEventIDManager_Default, EventServerPostSimulate_t, 1> : public CEvent_Register<CEventIDManager_Default, EventServerPostSimulate_t, bool, 1> {
public:

	typedef EventID_t EventID_t;
	typedef ReturnType_t ReturnType_t;
	typedef CBundledParams_Reference<const EventServerPostSimulate_t&, void, void, void> CEventParams_Reference;
	typedef CBundledParams_Copy<const EventServerPostSimulate_t&, EventServerPostSimulate_t, void, void, void, void, void, void> CEventParams_Copy;
	ReturnType_t DispatchEvent(Param1Type_t, bool, EventID_t);
	ReturnType_t DispatchEvent(CEventParams_Copy &, bool, EventID_t);
	ReturnType_t DispatchEvent(CEventParams_Reference &, bool, EventID_t);

private:

	CEvent_Dispatch();

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:760
class CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1> : public CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 1> {
public:

	typedef EventID_t EventID_t;
	typedef ReturnType_t ReturnType_t;
	typedef CBundledParams_Reference<const EventFrameBoundary_t&, void, void, void> CEventParams_Reference;
	typedef CBundledParams_Copy<const EventFrameBoundary_t&, EventFrameBoundary_t, void, void, void, void, void, void> CEventParams_Copy;
	ReturnType_t DispatchEvent(Param1Type_t, bool, EventID_t);
	ReturnType_t DispatchEvent(CEventParams_Copy &, bool, EventID_t);
	ReturnType_t DispatchEvent(CEventParams_Reference &, bool, EventID_t);

private:

	CEvent_Dispatch();

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:1055
class CEvent_Manager<CEventIDManager_Default, EventServerSimulate_t> : public CEvent_Dispatch<CEventIDManager_Default, EventServerSimulate_t, 1> {
public:

private:

	CEvent_Manager();

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:1055
class CEvent_Manager<CEventIDManager_Default, EventServerPostSimulate_t> : public CEvent_Dispatch<CEventIDManager_Default, EventServerPostSimulate_t, 1> {
public:

private:

	CEvent_Manager();

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:1055
class CEvent_Manager<CEventIDManager_Default, EventFrameBoundary_t> : public CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1> {
public:

private:

	CEvent_Manager();

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:1107
class CEventDispatcher<CEventIDManager_Default> : public CEventDispatcher_Identified<CEventIDManager_Default> {
public:

	CEventDispatcher(int);

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:1107
class CEventDispatcher<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > : public CEventDispatcher_Identified<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > {
public:

	CEventDispatcher(CEventDispatcher<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, int);
	~CEventDispatcher(CEventDispatcher<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> > *, int);

	// sizeof = 72
};

// src/public/tier1/eventdispatcher.h:1317
class CEventMapEmptyRegistrar<CEventIDManager_Default> {
	void OnEventMapRegistration(CEventDispatcher<CEventIDManager_Default> *, EventMapRegistrationType_t);

	// sizeof = 1
};

// CEvent_Register: 9 more instantiations (full list in INDEX.tsv)
//   CEvent_Register<CEventIDManager_Default, EventServerPostSimulate_t, bool, 0>
//   CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 0>
//   CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 0>
//   CEvent_Register<CEventIDManager_Default, EventServerSimulate_t, void, 1>
//   CEvent_Register<CEventIDManager_Default, EventServerSimulate_t, bool, 1>
//   CEvent_Register<CEventIDManager_Default, EventServerPostSimulate_t, void, 1>
//   CEvent_Register<CEventIDManager_Default, EventServerPostSimulate_t, bool, 1>
//   CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, void, 1>
//   CEvent_Register<CEventIDManager_Default, EventFrameBoundary_t, bool, 1>
