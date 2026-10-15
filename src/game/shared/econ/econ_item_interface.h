// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_interface.h:78
class IEconItemAttributeIterator {
	int ()() * * _vptr.IEconItemAttributeIterator;  // +0x0
	IEconItemAttributeIterator(const IEconItemAttributeIterator &);
	IEconItemAttributeIterator();
	virtual ~IEconItemAttributeIterator();
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, attrib_value_t);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, float);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, uint64);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_String &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);

	// vtable[2] OnIterateAttributeValue
	// vtable[3] OnIterateAttributeValue
	// vtable[4] OnIterateAttributeValue
	// vtable[5] OnIterateAttributeValue
	// vtable[6] OnIterateAttributeValue
	// vtable[7] OnIterateAttributeValue
	// vtable[8] OnIterateAttributeValue
	// sizeof = 8
};

// src/game/shared/econ/econ_item_interface.h:101
class CEconItemSpecificAttributeIterator : public IEconItemAttributeIterator {
public:

	CEconItemSpecificAttributeIterator(CEconItemSpecificAttributeIterator &);
	CEconItemSpecificAttributeIterator(const CEconItemSpecificAttributeIterator &);
	CEconItemSpecificAttributeIterator();

private:

	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, attrib_value_t);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, float);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, uint64);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_String &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);
	virtual ~CEconItemSpecificAttributeIterator();

	// vtable[2] OnIterateAttributeValue
	// vtable[3] OnIterateAttributeValue
	// vtable[4] OnIterateAttributeValue
	// vtable[5] OnIterateAttributeValue
	// vtable[6] OnIterateAttributeValue
	// vtable[7] OnIterateAttributeValue
	// vtable[8] OnIterateAttributeValue
	// sizeof = 8
};

// src/game/shared/econ/econ_item_interface.h:124
class IEconItemUntypedAttributeIterator : public IEconItemAttributeIterator {
public:

	IEconItemUntypedAttributeIterator(IEconItemUntypedAttributeIterator &);
	IEconItemUntypedAttributeIterator(const IEconItemUntypedAttributeIterator &);
	IEconItemUntypedAttributeIterator();
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, attrib_value_t);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, float);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, uint64);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_String &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);

private:

	virtual bool OnIterateAttributeValueUntyped(const CEconItemAttributeDefinition *);
	virtual ~IEconItemUntypedAttributeIterator();

	// vtable[2] OnIterateAttributeValue
	// vtable[3] OnIterateAttributeValue
	// vtable[4] OnIterateAttributeValue
	// vtable[5] OnIterateAttributeValue
	// vtable[6] OnIterateAttributeValue
	// vtable[7] OnIterateAttributeValue
	// vtable[8] OnIterateAttributeValue
	// vtable[9] OnIterateAttributeValueUntyped
	// sizeof = 8
};

// src/game/shared/econ/econ_item_interface.h:173
class CAttributeIterator_HasAttribute : public IEconItemUntypedAttributeIterator {
public:

private:

	const CEconItemAttributeDefinition * m_pAttrDef;  // +0x8
	bool m_bFound;  // +0x10
	CAttributeIterator_HasAttribute(CAttributeIterator_HasAttribute &);
	CAttributeIterator_HasAttribute(const CAttributeIterator_HasAttribute &);
	CAttributeIterator_HasAttribute(const CEconItemAttributeDefinition *);
	bool WasFound();
	virtual bool OnIterateAttributeValueUntyped(const CEconItemAttributeDefinition *);
	virtual ~CAttributeIterator_HasAttribute();

	// vtable[9] OnIterateAttributeValueUntyped
	// sizeof = 24
};

// src/game/shared/econ/econ_item_interface.h:448
class IItemSocket {
	int ()() * * _vptr.IItemSocket;  // +0x0
	IItemSocket();
	virtual ~IItemSocket();
	virtual IItemSocket * CopyItemSocket();
	virtual void ParseFromString(const string &);
	virtual void ConvertToString(string *);
	virtual void ParseFromByteStream(const string &);
	virtual void ConvertToByteStream(string *);
	virtual void GetName(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetDescription(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetItemType(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetImage(CUtlConstString &, CUtlConstString &);
	virtual bool IsEmpty();
	virtual ESocketType GetRequiredType();
	virtual void SetRequiredType(ESocketType);
	virtual uint32 GetRequiredHeroID();
	virtual void SetRequiredHeroID(uint32);
	virtual int GetRequiredItemLoadoutSlot();
	virtual void SetRequiredItemLoadoutSlot(int);
	virtual bool IsTradable();
	virtual void SetTradable(bool);
	virtual ESocketType GetSocketType();
	virtual item_definition_index_t GetGemDefIndex();
	virtual void SetGemDefIndex(item_definition_index_t);
	virtual const char * LocKey();
	virtual uint32 GetFieldUInt32(const char *);
	virtual EEconItemQuality GetQuality();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool HasUnremovableGem();

	// vtable[2] CopyItemSocket
	// vtable[3] ParseFromString
	// vtable[4] ConvertToString
	// vtable[5] ParseFromByteStream
	// vtable[6] ConvertToByteStream
	// vtable[7] GetName
	// vtable[8] GetDescription
	// vtable[9] GetItemType
	// vtable[10] GetImage
	// vtable[11] IsEmpty
	// vtable[12] GetRequiredType
	// vtable[13] SetRequiredType
	// vtable[14] GetRequiredHeroID
	// vtable[15] SetRequiredHeroID
	// vtable[16] GetRequiredItemLoadoutSlot
	// vtable[17] SetRequiredItemLoadoutSlot
	// vtable[18] IsTradable
	// vtable[19] SetTradable
	// vtable[20] GetSocketType
	// vtable[21] GetGemDefIndex
	// vtable[22] SetGemDefIndex
	// vtable[23] LocKey
	// vtable[24] GetFieldUInt32
	// vtable[25] GetQuality
	// vtable[26] Precache
	// vtable[27] HasUnremovableGem
	// sizeof = 8
};

// src/game/shared/econ/econ_item_interface.h:507
struct GemInfo_t {
	int m_nRequiredHeroID;  // +0x4
	int m_nRequiredItemSlot;  // +0x8
	bool m_bIsUnremovableGem;  // +0xc
	bool m_bIsUntradable;  // +0xd
	GemInfo_t();

	// sizeof = 16
};

// src/game/shared/econ/econ_item_interface.h:523
class IEconItemInterface {
	int ()() * * _vptr.IEconItemInterface;  // +0x0
private:

	IEconItemInterface(const IEconItemInterface &);
	IEconItemInterface & operator=(const IEconItemInterface &);
	IEconItemInterface();

	virtual ~IEconItemInterface();
	bool FindAttribute(const CEconItemAttributeDefinition *);
	virtual bool IsTradable(bool);
	virtual bool IsMarketable();
	virtual bool IsCommodity();
	virtual bool IsUsableInCrafting();
	virtual bool IsDynamicRecipe();
	virtual bool IsPennant();
	virtual bool IsDeletable();
	virtual bool IsGiftable();
	virtual RTime32 GetExpirationDate();
	virtual const GameItemDefinition_t * GetItemDefinition();
	virtual uint32 GetAccountID();
	virtual itemid_t GetItemID();
	virtual int32 GetQuality();
	virtual style_index_t GetStyle();
	virtual uint8 GetFlags();
	virtual eEconItemOrigin GetOrigin();
	virtual uint16 GetQuantity();
	virtual uint32 GetItemLevel();
	virtual bool GetInUse();
	virtual const char * GetCustomName();
	virtual const char * GetCustomDesc();
	virtual bool IsStyleUnlocked(style_index_t);
	virtual bool IsSocketable();
	virtual bool CanAddSockets(int);
	virtual bool GetGemInfo(GemInfo_t *);
	virtual void IterateAttributes(IEconItemAttributeIterator *);
	virtual uint32 GetInventoryToken();
	bool BIsItemInPurgatoryWindow(RTime32 *);

protected:

	RTime32 GetTradableAfterDateTime();
	bool BDoSocketsPreventTrade();
	bool FindAttribute<unsigned int>(const CEconItemAttributeDefinition *, unsigned int *);
	bool FindAttribute<long long unsigned int>(const CEconItemAttributeDefinition *, long long unsigned int *);
	bool FindAttribute<CAttribute_Socket>(const CEconItemAttributeDefinition *, CAttribute_Socket *);
	bool FindAttribute<float>(const CEconItemAttributeDefinition *, float *);
	bool FindAttribute<CAttribute_String>(const CEconItemAttributeDefinition *, CAttribute_String *);
	bool FindAttribute<CAttribute_ItemDynamicRecipeComponent>(const CEconItemAttributeDefinition *, CAttribute_ItemDynamicRecipeComponent *);

	// vtable[0] Schema_DynamicBinding
	// vtable[3] IsTradable
	// vtable[4] IsMarketable
	// vtable[5] IsCommodity
	// vtable[6] IsUsableInCrafting
	// vtable[7] IsDynamicRecipe
	// vtable[8] IsPennant
	// vtable[9] IsDeletable
	// vtable[10] IsGiftable
	// vtable[11] GetExpirationDate
	// vtable[12] GetItemDefinition
	// vtable[13] GetAccountID
	// vtable[14] GetItemID
	// vtable[15] GetQuality
	// vtable[16] GetStyle
	// vtable[17] GetFlags
	// vtable[18] GetOrigin
	// vtable[19] GetQuantity
	// vtable[20] GetItemLevel
	// vtable[21] GetInUse
	// vtable[22] GetCustomName
	// vtable[23] GetCustomDesc
	// vtable[24] IsStyleUnlocked
	// vtable[25] IsSocketable
	// vtable[26] CanAddSockets
	// vtable[27] GetGemInfo
	// vtable[28] IterateAttributes
	// vtable[29] GetInventoryToken
	// sizeof = 8
};
