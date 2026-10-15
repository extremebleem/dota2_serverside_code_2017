// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item.h:48
struct schema_attribute_stat_bucket_t {
	const schema_attribute_stat_bucket_t * m_pNext;  // +0x0
	const char * m_pszDesc;  // +0x8
	uint64 m_unLifetimeInlineCount;  // +0x10
	uint64 m_unLifetimeHeapCount;  // +0x18
	CInterlockedUInt m_unLiveInlineCount;  // +0x20
	CInterlockedUInt m_unLiveHeapCount;  // +0x24
	schema_attribute_stat_bucket_t();
	void OnAllocateInlineInstance();
	void OnFreeInlineInstance();
	void OnAllocateHeapInstance();
	void OnFreeHeapInstance();

	// sizeof = 40
};

// src/game/shared/econ/econ_item.h:65
class CSchemaAttributeStats {
private:

	static const schema_attribute_stat_bucket_t * m_pHead;
	const schema_attribute_stat_bucket_t * GetFirstStatBucket();
	void RegisterAttributeType<ISchemaAttributeTypeBase<CAttribute_HeroStatue>, CAttribute_HeroStatue>();

	// sizeof = 1
};

// src/game/shared/econ/econ_item.h:368
class CEconItem : public CSharedObject, public IEconItemInterface {
	struct attribute_t {
		attrib_definition_index_t m_unDefinitionIndex;  // +0x0

	private:

		void operator=(const attribute_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct EquippedInstance_t {
		equipped_class_t m_unEquippedClass;  // +0x0
		equipped_slot_t m_unEquippedSlot;  // +0x2
		EquippedInstance_t();
		EquippedInstance_t(equipped_class_t, equipped_slot_t);

		// sizeof = 4
	};

	struct dirty_bits_t {
		uint8 m_bInUse:1;  // +0x0:0
		uint8 m_bHasEquipSingleton:1;  // +0x0:1
		uint8 m_bHasAttribSingleton:1;  // +0x0:2

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

	static const int k_nTypeID = 1;
private:

	uint32 m_unAccountID;  // +0x20
	uint32 m_unInventory;  // +0x24
	uint8 m_unLevel;  // +0x2a
	uint8 m_nQuality;  // +0x2b
	uint8 m_unFlags;  // +0x2c
	uint8 m_unOrigin;  // +0x2d

	uint16 m_unQuantity;  // +0x34

	virtual int GetTypeID();
	CEconItem();
	CEconItem(const CEconItem &);
	virtual ~CEconItem();
	CEconItem & operator=(const CEconItem &);
	RTime32 GetTradableAfterDateTime();
	void SetTradableAfterDateTime(RTime32);
	virtual const GameItemDefinition_t * GetItemDefinition();
	virtual void IterateAttributes(IEconItemAttributeIterator *);
	void FastIterateAttributesOfType(IEconItemAttributeIterator *, const CEconItemAttributeDefinition &, const CEconItemDefinition &);
	virtual itemid_t GetItemID();
	void SetItemID(itemid_t);
	itemid_t GetOriginalID();
	void SetOriginalID(itemid_t);
	virtual uint32 GetAccountID();
	void SetAccountID(uint32);
	item_definition_index_t GetDefinitionIndex();
	void SetDefinitionIndex(item_definition_index_t);
	virtual uint32 GetItemLevel();
	void SetItemLevel(uint32);
	int32 GetDBQuality();
	virtual int32 GetQuality();
	void SetQuality(int32);
	virtual uint32 GetInventoryToken();
	void SetInventoryToken(uint32);
	virtual uint16 GetQuantity();
	void SetQuantity(uint16);
	virtual uint8 GetFlags();
	void SetFlags(uint8);
	void SetFlag(uint8);
	void ClearFlag(uint8);
	bool CheckFlags(uint8);
	virtual eEconItemOrigin GetOrigin();
	void SetOrigin(eEconItemOrigin);
	bool IsForeign();
	virtual style_index_t GetStyle();
	void SetStyle(style_index_t);
	virtual bool IsStyleUnlocked(style_index_t);
	virtual const char * GetCustomName();
	void SetCustomName(const char *);
	virtual const char * GetCustomDesc();
	void SetCustomDesc(const char *);
	bool IsEquipped();
	bool IsEquippedForClass(equipped_class_t);
	equipped_slot_t GetEquippedPositionForClass(equipped_class_t);
	void Equip(equipped_class_t, equipped_slot_t);
	void Unequip();
	void UnequipFromClass(equipped_class_t);
	uint32 GetEquippedInstanceList(const EquippedInstance_t * *);
	int GetEquippedInstanceCount();
	const EquippedInstance_t & GetEquippedInstance(int);
	virtual bool GetInUse();
	void SetInUse(bool);
	bool IsTradable();
	virtual bool IsMarketable();
	virtual bool IsCommodity();
	virtual bool IsUsableInCrafting();
	virtual bool IsSocketable();
	virtual bool CanAddSockets(int);
	virtual bool GetGemInfo(GemInfo_t *);
	CEconItemAssetInfo * GetAssetInfo();
	void SetDynamicMaxTimeAttributeValue(const CEconItemAttributeDefinition *, RTime32);
	void RemoveDynamicAttribute(const CEconItemAttributeDefinition *);
	void CopyAttributesFrom(const CEconItem &);
	int GetCustomAttributeCount();
	const attribute_t & GetCustomAttribute(int);
	uint32 GetCustomAttributeList(const attribute_t * *);
	void Compact();
	virtual bool BParseFromMessage(const CUtlBuffer &);
	virtual bool BUpdateFromNetwork(const CSharedObject &);
	virtual bool BAddToMessage(string *);
	virtual bool BAddDestroyToMessage(string *);
	virtual bool BIsKeyLess(const CSharedObject &);
	virtual void Copy(const CSharedObject &);
	virtual void Dump();
	void SerializeToProtoBufItem(CSOEconItem &);
	void DeserializeFromProtoBufItem(const CSOEconItem &);
	CEconItem * GetInteriorItem();
	const CEconItem * GetInteriorItem();
	const CEconItemCustomData * GetCustomData();

protected:

	void GetDirtyColumnSet(const CUtlVector<int, CUtlMemory<int, int> > &, CColumnSet &);
	void EnsureCustomDataExists();
	bool BYieldingLoadInteriorItem();
	attribute_t & AddDynamicAttributeInternal();
	attribute_t * FindDynamicAttributeInternal(const CEconItemAttributeDefinition *);
	int GetDynamicAttributeCountInternal();
	attribute_t & GetMutableDynamicAttributeInternal(int);
	const attribute_t & GetDynamicAttributeInternal(int);
	void IterateDynamicAttributes(IEconItemAttributeIterator *);
	const EquippedInstance_t * FindEquippedInstanceForClass(equipped_class_t);
	void InternalVerifyEquipInstanceIntegrity();
	void SetDynamicAttributeValue<unsigned int>(const CEconItemAttributeDefinition *, const unsigned int &);

private:

	const ISchemaAttributeTypeBase<unsigned int> * GetTypedAttributeType<unsigned int>(const CEconItemAttributeDefinition *);
	void SetDynamicAttributeValue<CAttribute_HeroStatue>(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);
	const ISchemaAttributeTypeBase<CAttribute_HeroStatue> * GetTypedAttributeType<CAttribute_HeroStatue>(const CEconItemAttributeDefinition *);
	void SetDynamicAttributeValue<CAttribute_String>(const CEconItemAttributeDefinition *, const CAttribute_String &);
	const ISchemaAttributeTypeBase<CAttribute_String> * GetTypedAttributeType<CAttribute_String>(const CEconItemAttributeDefinition *);

	// vtable[2] GetTypeID
	// vtable[10] GetItemDefinition
	// vtable[11] IterateAttributes
	// vtable[12] GetItemID
	// vtable[13] GetAccountID
	// vtable[14] GetItemLevel
	// vtable[15] GetQuality
	// vtable[16] GetInventoryToken
	// vtable[17] GetQuantity
	// vtable[18] GetFlags
	// vtable[19] GetOrigin
	// vtable[20] GetStyle
	// vtable[21] IsStyleUnlocked
	// vtable[22] GetCustomName
	// vtable[23] GetCustomDesc
	// vtable[24] GetInUse
	// vtable[25] IsMarketable
	// vtable[26] IsCommodity
	// vtable[27] IsUsableInCrafting
	// vtable[28] IsSocketable
	// vtable[29] CanAddSockets
	// vtable[30] GetGemInfo
	// vtable[3] BParseFromMessage
	// vtable[4] BUpdateFromNetwork
	// vtable[8] BAddToMessage
	// vtable[9] BAddDestroyToMessage
	// vtable[5] BIsKeyLess
	// vtable[6] Copy
	// vtable[7] Dump
	// sizeof = 80
};

// src/game/shared/econ/econ_item.h:776
class CEconItemCustomData {
	CEconItemCustomData();
	~CEconItemCustomData();
	void FreeAttributeMemory(attribute_t *);

	// sizeof = 56
};
