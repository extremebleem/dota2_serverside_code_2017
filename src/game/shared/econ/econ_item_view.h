// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_view.h:39
struct AutoStyleHash_t {
	unsigned int operator()(const CUtlStringToken &);

	// sizeof = 1
};

// src/game/shared/econ/econ_item_view.h:49
class CAutoStyleCriteria {
private:

	CAutoStyleCriteria();
	void SetCriteria(CUtlStringToken, float);
	void Clear();
	AutoStyleCriteriaHandle_t FirstCriteria();
	AutoStyleCriteriaHandle_t NextCriteria(UtlHashHandle_t);
	AutoStyleCriteriaHandle_t InvalidHandle();
	void GetCriteria(AutoStyleCriteriaHandle_t, CUtlStringToken *, float *);

	// sizeof = 32
};

// src/game/shared/econ/econ_item_view.h:94
class CAttributeList {
	class NetworkVar_m_Attributes {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};
	typedef CAttributeList ThisClass;

	int ()() * * _vptr.CAttributeList;  // +0x0
private:

	static datamap_t m_DataMap;

	~CAttributeList();
	CAttributeList(const CAttributeList &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CAttributeList();
	void operator=(const CAttributeList &);
	void Init();
	void SetManager(CAttributeManager *);
	void IterateAttributes(IEconItemAttributeIterator *);
	void DestroyAllAttributes();
	void RemoveAttribute(const CEconItemAttributeDefinition *);
	void RemoveAttributeByIndex(int);
	const CEconItemAttribute * GetAttributeByName(const char *);
	const CEconItemAttribute * GetAttributeByID(int);
	void SetRuntimeAttributeValue(const CEconItemAttributeDefinition *, float);
	void NotifyManagerOfAttributeValueChanges();
	int GetNumAttributes();
	CEconItemAttribute * GetAttribute(int);
	const CEconItemAttribute * GetAttribute(int);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// vtable[4] GetDataDescMap
	// sizeof = 88
};

// src/game/shared/econ/econ_item_view.h:153
class CEconItemAttribute {
	class NetworkVar_m_iAttributeDefinitionIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CEconItemAttribute;  // +0x0
private:

	typedef CEconItemAttribute ThisClass;
	~CEconItemAttribute();
	CEconItemAttribute(const CEconItemAttribute &);

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CEconItemAttribute();
	void operator=(const CEconItemAttribute &);
	attrib_definition_index_t GetAttribIndex();
	void SetAttribIndex(attrib_definition_index_t);
	const CEconItemAttributeDefinition * GetStaticData();
	void Init();

	// vtable[0] Schema_DynamicBinding
	// sizeof = 24
};

// src/game/shared/econ/econ_item_view.h:209
struct AttachedParticleFilter_t {
	bool m_bIsInLoadout;  // +0x8
	bool m_bSkipIntroLoadoutEffects;  // +0x9
	bool m_bIsAlternateLoadout;  // +0xa
	bool m_bSuppressAllEffects;  // +0xb
	AttachedParticleFilter_t();

	// sizeof = 24
};

// src/game/shared/econ/econ_item_view.h:233
struct AttachedParticlesOnItem_t {
	const attachedparticlesystem_t * m_pAttachedSystem;  // +0x0
	bool m_bIsFakeSystem;  // +0x8
	bool m_bShouldDestroyImmediately;  // +0x9

	// sizeof = 16
};

// src/game/shared/econ/econ_item_view.h:240
class CEconItemView : public IEconItemInterface {
	class NetworkVar_m_iItemDefinitionIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iEntityQuality {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iEntityLevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iItemID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iAccountID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iInventoryPosition {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bInitialized {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nOverrideStyle {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	bool m_bIsStoreItem;  // +0x32
	bool m_bIsTradeItem;  // +0x33
	bool m_bHasComputedAttachedParticles;  // +0x34
	bool m_bHasAttachedParticles;  // +0x35

	int m_iEntityQuantity;  // +0x38
	uint8 m_unClientFlags;  // +0x3c

private:

	char * m_pszGrayedOutReason;  // +0x50
	class NetworkVar_m_AttributeList : public CAttributeList {
	public:

		NetworkVar_m_AttributeList & operator=(NetworkVar_m_AttributeList &);
		NetworkVar_m_AttributeList & operator=(const NetworkVar_m_AttributeList &);
		NetworkVar_m_AttributeList(NetworkVar_m_AttributeList &);
		NetworkVar_m_AttributeList(const NetworkVar_m_AttributeList &);
		~NetworkVar_m_AttributeList();
		NetworkVar_m_AttributeList();
		void CopyFrom(const CAttributeList &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 88
	};
	typedef CEconItemView ThisClass;
	typedef ThisClass ThisClass_m_AttributeList;

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CEconItemView();
	CEconItemView(const CEconItemView &);
	virtual ~CEconItemView();
	CEconItemView & operator=(const CEconItemView &);
	bool operator==(const CEconItemView &);
	bool operator!=(const CEconItemView &);
	virtual const GameItemDefinition_t * GetItemDefinition();
	virtual int32 GetQuality();
	virtual style_index_t GetStyle();
	virtual uint8 GetFlags();
	virtual eEconItemOrigin GetOrigin();
	virtual uint16 GetQuantity();
	virtual const char * GetCustomName();
	virtual const char * GetCustomDesc();
	virtual bool GetInUse();
	virtual uint32 GetInventoryToken();
	virtual void IterateAttributes(IEconItemAttributeIterator *);
	bool IsValid();
	void Invalidate();
	void Init(item_definition_index_t, int, int, uint32, CEconItem *, style_index_t);
	void SetInitialized(bool);
	bool Init(CEconItem *, style_index_t);
	void Init(const CEconItemView *, style_index_t);
	const GameItemDefinition_t * GetStaticData();
	void SetNonSOEconItem(CEconItem *);
	void OnAttributeValuesChanged();
	void MarkDescriptionDirty();
	const char * GetDescriptionUTF8(int, char *, int);
	virtual bool IsStyleUnlocked(style_index_t);
	RTime32 GetTradableAfterDateTime();
	void EnsureDescriptionIsBuilt();
	void SetGrayedOutReason(const char *);
	void SetItemIndex(item_definition_index_t);
	item_definition_index_t GetItemIndex();
	void SetItemQuality(int);
	int GetItemQuality();
	void SetItemLevel(uint32);
	virtual uint32 GetItemLevel();
	int GetItemQuantity();
	bool SelectAutoStyle(const CAutoStyleCriteria &);
	style_index_t ComputeAutoStyle(const CAutoStyleCriteria &);
	bool SetStyleOverride(style_index_t);
	CEconItemAssetInfo * GetAssetInfo();
	void SetItemID(itemid_t);
	virtual itemid_t GetItemID();
	virtual uint32 GetAccountID();
	EconItemIDs_t GetItemIDs();
	void SetInventoryPosition(uint32);
	const uint32 GetInventoryPosition();
	const char * GetInventoryModel();
	const char * GetInventoryImage();
	bool GetInventoryImageData(int *, int *);
	const char * GetInventoryOverlayImage();
	const char * GetPlayerDisplayModel(int);
	void GetAttachedParticles(CUtlVector<AttachedParticlesOnItem_t, CUtlMemory<AttachedParticlesOnItem_t, int> > &, const char *);
	void GetAttachedParticles(CUtlVector<AttachedParticlesOnItem_t, CUtlMemory<AttachedParticlesOnItem_t, int> > &, const AttachedParticleFilter_t &);
	bool HasAttachedParticles();
	int GetAnimationSlot();
	int GetDropType();
	int GetModifiedRGBValue(bool);
	bool CanCollect(CEconItemView &);
	uint64 GetCustomUserTextureID();
	CEconItem * GetSOCData();
	bool IsEquipped();
	bool IsEquippedForClass(equipped_class_t);
	equipped_slot_t GetEquippedPositionForClass(equipped_class_t);
	int GetQualityParticleType();
	int GetSkin();
	void CacheAssetModifiers();
	const CAssetModifierContainer & GetAssetModifierContainer();
	bool HasAssetModifierContainer();
	const IEconTool * GetEconTool();
	virtual bool IsSocketable();
	virtual bool CanAddSockets(int);
	virtual bool GetGemInfo(GemInfo_t *);
	bool IsBaseItem();
	CAttributeList * GetAttributeList();
	const CAttributeList * GetAttributeList();
	uint32 GetItemCategories();
	bool DoesSystemPassFilter(const attachedparticlesystem_t *, const AttachedParticleFilter_t &);
	void InitInternal(item_definition_index_t, int, int, uint32, CEconItem *, style_index_t);
	void CopyInternal(const CEconItemView &);
	void ComputeItemCriteria(CAssetModifierCriteria &);
	int GetOffset_m_AttributeList();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[30] NetworkStateChanged
	// vtable[31] NetworkStateChanged
	// vtable[32] NetworkStateChangedLog
	// vtable[33] GetDataDescMap
	// vtable[12] GetItemDefinition
	// vtable[15] GetQuality
	// vtable[16] GetStyle
	// vtable[17] GetFlags
	// vtable[18] GetOrigin
	// vtable[19] GetQuantity
	// vtable[22] GetCustomName
	// vtable[23] GetCustomDesc
	// vtable[21] GetInUse
	// vtable[29] GetInventoryToken
	// vtable[28] IterateAttributes
	// vtable[24] IsStyleUnlocked
	// vtable[20] GetItemLevel
	// vtable[14] GetItemID
	// vtable[13] GetAccountID
	// vtable[25] IsSocketable
	// vtable[26] CanAddSockets
	// vtable[27] GetGemInfo
	// sizeof = 216
};
