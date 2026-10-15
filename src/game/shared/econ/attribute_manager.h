// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/attribute_manager.h:46
class CAttributeManager {
	class NetworkVar_m_iReapplyProvisionParity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hOuter {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_ProviderType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	struct cached_attribute_float_t {
	private:

		float flIn;  // +0x0

		string_t iAttribHook;  // +0x8
		float flOut;  // +0x10
		cached_attribute_float_t();

		cached_attribute_float_t & operator=(const cached_attribute_float_t &);

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CAttributeManager;  // +0x0
private:

	static datamap_t m_DataMap;

protected:

	bool m_bPreventLoopback;  // +0x40

private:

	int m_iOldReapplyProvisionParity;  // +0x60
	typedef CAttributeManager ThisClass;
	CAttributeManager & operator=(const CAttributeManager &);
	CAttributeManager(const CAttributeManager &);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CAttributeManager();
	virtual ~CAttributeManager();
	virtual void InitializeAttributes(CBaseEntity *);
	CBaseEntity * GetOuter();
	void ProvideTo(CBaseEntity *);
	void StopProvidingTo(CBaseEntity *);

protected:

	void AddProvider(CBaseEntity *);
	void RemoveProvider(CBaseEntity *);
	bool IsProvidingTo(CBaseEntity *);
	bool IsBeingProvidedToBy(CBaseEntity *);
	void SetProviderType(attributeprovidertypes_t);
	attributeprovidertypes_t GetProviderType();
	virtual float ApplyAttributeFloat(float, CBaseEntity *, string_t, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > *);
	virtual void OnAttributeValuesChanged();

private:

	void ClearCache();
	virtual float ApplyAttributeFloatWrapper(float, CBaseEntity *, string_t, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] GetDataDescMap
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChanged
	// vtable[4] NetworkStateChangedLog
	// vtable[7] InitializeAttributes
	// vtable[8] ApplyAttributeFloat
	// vtable[9] OnAttributeValuesChanged
	// vtable[10] ApplyAttributeFloatWrapper
	// sizeof = 104
};

// src/game/shared/econ/attribute_manager.h:161
class CAttributeContainer : public CAttributeManager {
public:

private:

	static datamap_t m_DataMap;

	class NetworkVar_m_Item : public CEconItemView {
	public:

		NetworkVar_m_Item & operator=(NetworkVar_m_Item &);
		NetworkVar_m_Item & operator=(const NetworkVar_m_Item &);
		NetworkVar_m_Item(NetworkVar_m_Item &);
		NetworkVar_m_Item(const NetworkVar_m_Item &);
		NetworkVar_m_Item();
		void CopyFrom(const CEconItemView &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
		virtual ~NetworkVar_m_Item();

		// vtable[30] NetworkStateChanged
		// vtable[32] NetworkStateChangedLog
		// vtable[31] NetworkStateChanged
		// sizeof = 216
	};

	typedef CAttributeContainer ThisClass;
	typedef ThisClass ThisClass_m_Item;
	CAttributeContainer(CAttributeContainer &);
	CAttributeContainer(const CAttributeContainer &);
	CAttributeContainer & operator=(CAttributeContainer &);
	CAttributeContainer & operator=(const CAttributeContainer &);
	CAttributeContainer();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	virtual void InitializeAttributes(CBaseEntity *);
	virtual float ApplyAttributeFloat(float, CBaseEntity *, string_t, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > *);
	CEconItemView * GetItem();
	const CEconItemView * GetItem();
	void SetItem(CEconItemView *);
	virtual void OnAttributeValuesChanged();
	int GetOffset_m_Item();
	virtual ~CAttributeContainer();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChanged
	// vtable[4] NetworkStateChangedLog
	// vtable[7] InitializeAttributes
	// vtable[8] ApplyAttributeFloat
	// vtable[9] OnAttributeValuesChanged
	// sizeof = 320
};
