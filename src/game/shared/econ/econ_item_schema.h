// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_schema.h:85
class CEconItemRarityDefinition {
private:

	int32 m_nValue;  // +0x0
	int m_iWhiteCount;  // +0x30
	int m_iBlackCount;  // +0x34
	float m_flWeight;  // +0x38
	CEconItemRarityDefinition();
	CEconItemRarityDefinition(const CEconItemRarityDefinition &);
	CEconItemRarityDefinition & operator=(const CEconItemRarityDefinition &);
	~CEconItemRarityDefinition();
	bool BInitFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int32 GetDBValue();
	const char * GetName();
	const char * GetLocKey();
	const char * GetLootList();
	const char * GetRecycleLootList();
	attrib_colors_t GetAttribColor();
	const char * GetNextRarity();
	int GetWhiteCount();
	int GetBlackCount();
	float GetWeight();

	// sizeof = 64
};

// src/game/shared/econ/econ_item_schema.h:139
union attribute_data_union_t {
	float asFloat;  // +0x0
	uint32 asUint32;  // +0x0
	uint8 * asBlobPointer;  // +0x0
	uint64 asUint64;  // +0x0
};

// src/game/shared/econ/econ_item_schema.h:147
class static_attrib_t {
	attrib_definition_index_t iDefIndex;  // +0x0

	static_attrib_t();
	bool BInitFromKV_MultiLine(const char *, KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitFromKV_SingleLine(const char *, KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	void Unload();
	const CEconItemAttributeDefinition * GetAttributeDefinition();

	// sizeof = 16
};

// src/game/shared/econ/econ_item_schema.h:205
class CEconItemQualityDefinition {
private:

	int32 m_nValue;  // +0x0
	uint16 m_nSortPriority;  // +0x4
	bool m_bCanSupportSet;  // +0x6
	bool m_bExportAssetTag;  // +0x7
	CEconItemQualityDefinition();
	bool BInitFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int32 GetDBValue();
	const char * GetName();
	bool CanSupportSet();
	bool ShouldExportAsAssetTag();
	const char * GetHexColor();
	int32 GetSortPriority();
	const char * GetDisplayName();

	// sizeof = 32
};

// src/game/shared/econ/econ_item_schema.h:246
class CEconColorDefinition {
private:

	uint32 m_unRed;  // +0x18
	uint32 m_unGreen;  // +0x1c
	uint32 m_unBlue;  // +0x20
	CEconColorDefinition();
	bool BInitFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	const char * GetName();
	const char * GetColorName();
	const char * GetHexColor();
	Color GetColor();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_schema.h:276
class CEconItemSetDefinition : public IEconItemSetDefinition {
	struct itemset_attrib_t {
		attrib_definition_index_t m_iAttribDefIndex;  // +0x0

		float m_flValue;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	bool m_bIsHiddenSet:1;  // +0x3a:0
	bool m_bIsTestItemSet:1;  // +0x3a:1

	CEconItemSetDefinition();
	CEconItemSetDefinition(const CEconItemSetDefinition &);
	CEconItemSetDefinition & operator=(const CEconItemSetDefinition &);
	~CEconItemSetDefinition();
	virtual bool BInitFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual const char * GetName();
	virtual const char * GetLocKey();
	virtual const char * GetUnlocalizedName();
	virtual item_definition_index_t GetBundle();
	virtual int GetItemCount();
	virtual item_definition_index_t GetItemDef(int);
	virtual uint8 GetMaxItemRarity();
	virtual bool IsTestItemSet();

	// vtable[8] BInitFromKV
	// vtable[0] GetName
	// vtable[1] GetLocKey
	// vtable[2] GetUnlocalizedName
	// vtable[3] GetBundle
	// vtable[4] GetItemCount
	// vtable[5] GetItemDef
	// vtable[6] GetMaxItemRarity
	// vtable[7] IsTestItemSet
	// sizeof = 88
};

// src/game/shared/econ/econ_item_schema.h:338
struct lootlist_attrib_t {
	float m_flWeight;  // +0x10
	lootlist_attrib_t();
	bool BInitFromKV(const char *, KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);

	// sizeof = 24
};

// src/game/shared/econ/econ_item_schema.h:346
class random_attrib_t {
	float m_flChanceOfRandomAttribute;  // +0x0
	float m_flTotalAttributeWeight;  // +0x4
	random_attrib_t();
	~random_attrib_t();

	// sizeof = 32
};

// src/game/shared/econ/econ_item_schema.h:365
struct rolled_item_defs_t {
	const CEconItemDefinition * m_pItemDef;  // +0x8
	bool m_bIsAdditionalDrop;  // +0x10

	rolled_item_defs_t();
	~rolled_item_defs_t();

	// sizeof = 48
};

// src/game/shared/econ/econ_item_schema.h:379
class CEconLootListDefinition : public IEconLootListDefinition {
	struct loot_list_additional_drop_t {
		float m_flChance;  // +0x0
		bool m_bPremiumOnly;  // +0x4

		bool m_bReplaceOriginalDrop;  // +0x18

		loot_list_additional_drop_t();
		loot_list_additional_drop_t(const loot_list_additional_drop_t &);
		loot_list_additional_drop_t & operator=(const loot_list_additional_drop_t &);

		// sizeof = 56
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct loot_list_escalating_chance_drop_t {
		loot_list_escalating_chance_drop_t();
		~loot_list_escalating_chance_drop_t();
		loot_list_escalating_chance_drop_t & operator=(const loot_list_escalating_chance_drop_t &);

		// sizeof = 64
	};

public:

private:

	uint32 m_unHeroID;  // +0x70
	bool m_bPublicListContents;  // +0x74

	float m_flTotalWeight;  // +0x78

	bool m_bServerList;  // +0xb0
	bool m_bAddRandomGems;  // +0xb1
	bool m_bHeroGemsOnly;  // +0xb2

	int m_unEmptySocketCount;  // +0xb4
	bool m_bCanHaveDuplicates;  // +0xb8
	bool m_bGrantOneOfEachItem;  // +0xb9
	bool m_bAdditionalDropsReplace;  // +0xba
	CEconLootListDefinition();
	CEconLootListDefinition(const CEconLootListDefinition &);
	CEconLootListDefinition & operator=(const CEconLootListDefinition &);
	~CEconLootListDefinition();
	bool BInitFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, bool);
	virtual const char * GetName();
	virtual const CUtlVector<int, CUtlMemory<int, int> > & GetLootListContents();
	virtual float GetWeight(int);
	virtual float GetTotalWeight();
	virtual KeyValues * GenerateKeyValues();
	virtual bool IsServerList();
	virtual bool ShouldGrantOneOfEach();
	virtual bool CanHaveDuplicates();
	virtual int GetAdditionalDropCount();
	virtual bool GetAdditionalDrop(int, CUtlString &, CUtlString &, float &);
	virtual int GetEscalatingChanceSlotCount();
	virtual const char * GetEscalatingChanceDropItemName(int);
	virtual const char * GetEscalatingChanceDropTreasureRarityOverride(int);
	virtual int GetRandomAttributeGroupCount();
	virtual bool GetRandomAttributeGroup(int, float &, float &);
	virtual int GetRandomAttributeCount(int);
	virtual bool GetRandomAttribute(int, int, float &, int &, int &);
	virtual bool HasRandomGems();
	virtual bool HeroGemsOnly();
	virtual bool HasEmptySockets();
	virtual bool AdditionalDropsReplace();
	virtual bool AddItem(int, float);
	virtual void PurgeItems();
	virtual void GetItems(CUtlVector<rolled_item_defs_t, CUtlMemory<rolled_item_defs_t, int> > *, bool);
	bool GetAdditionalDropDisplayInfo(int, const char * &, const char * &, const char * &);
	const char * GetTreasureDisplayOverride();
	const char * GetTreasureRarityOverride();
	const char * GetTreasureClassOverride();
	const CEconLootListDefinition * GetLootListFromNegativeIndex(int);
	bool GetPublicListContents();
	bool ContainsItemDef(item_definition_index_t, bool, bool);
	void GetItems_R(CUtlVector<rolled_item_defs_t, CUtlMemory<rolled_item_defs_t, int> > *, bool, bool);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] GetName
	// vtable[1] GetLootListContents
	// vtable[2] GetWeight
	// vtable[16] GetTotalWeight
	// vtable[3] GenerateKeyValues
	// vtable[4] IsServerList
	// vtable[17] ShouldGrantOneOfEach
	// vtable[18] CanHaveDuplicates
	// vtable[5] GetAdditionalDropCount
	// vtable[6] GetAdditionalDrop
	// vtable[7] GetEscalatingChanceSlotCount
	// vtable[8] GetEscalatingChanceDropItemName
	// vtable[9] GetEscalatingChanceDropTreasureRarityOverride
	// vtable[10] GetRandomAttributeGroupCount
	// vtable[11] GetRandomAttributeGroup
	// vtable[12] GetRandomAttributeCount
	// vtable[13] GetRandomAttribute
	// vtable[19] HasRandomGems
	// vtable[20] HeroGemsOnly
	// vtable[21] HasEmptySockets
	// vtable[22] AdditionalDropsReplace
	// vtable[14] AddItem
	// vtable[15] PurgeItems
	// vtable[23] GetItems
	// sizeof = 192
};

// src/game/shared/econ/econ_item_schema.h:566
class CEconItemAttributeDefinition : public IEconItemAttributeDefinition {
public:

private:

	attrib_definition_index_t m_nDefIndex;  // +0x8

	const ISchemaAttributeType * m_pAttrType;  // +0x10
	bool m_bHidden;  // +0x18
	bool m_bWebSchemaOutputForced;  // +0x19
	bool m_bStoredAsInteger;  // +0x1a
	bool m_bInstanceData;  // +0x1b
	bool m_bPropagateFromBundle;  // +0x1c
	bool m_bRemoveOnTransfer;  // +0x1d
	bool m_bSaveToAttributeTable;  // +0x1e

	uint32 m_iStorageTypeFlags;  // +0x24
	int m_iDescriptionFormat;  // +0x28

	bool m_bCanAffectMarketName;  // +0x50

	string_t m_iszAttributeClass;  // +0x58
	CEconItemAttributeDefinition();
	CEconItemAttributeDefinition(const CEconItemAttributeDefinition &);
	CEconItemAttributeDefinition & operator=(const CEconItemAttributeDefinition &);
	~CEconItemAttributeDefinition();
	bool BInitFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual attrib_definition_index_t GetDefinitionIndex();
	virtual const char * GetDefinitionName();
	bool ShouldSaveToAttributeTable();
	bool IsHidden();
	bool BForceWebSchemaOutput();
	bool CanAffectMarketName();
	bool IsStoredAsInteger();
	bool IsStoredAsFloat();
	bool IsInstanceData();
	bool IsPropagateFromBundle();
	bool IsRemoveOnTransfer();
	int GetDescriptionFormat();
	virtual const char * GetDescriptionString();
	const char * GetArmoryDescString();
	virtual const char * GetAttributeClass();
	attrib_effect_types_t GetEffectType();
	uint32 GetStorageTypeFlags();
	bool CanBeDynamic();
	bool CanBeStatic();
	const ISchemaAttributeType * GetAttributeType();
	void ClearStringCache();
	string_t GetCachedClass();

	// vtable[0] GetDefinitionIndex
	// vtable[1] GetDefinitionName
	// vtable[2] GetDescriptionString
	// vtable[3] GetAttributeClass
	// sizeof = 96
};

// src/game/shared/econ/econ_item_schema.h:687
class CEconSoundMaterialDefinition {
private:

	int32 m_nID;  // +0x0

	CEconSoundMaterialDefinition();
	CEconSoundMaterialDefinition(const CEconSoundMaterialDefinition &);
	CEconSoundMaterialDefinition & operator=(const CEconSoundMaterialDefinition &);
	~CEconSoundMaterialDefinition();
	bool BInitFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int32 GetID();
	const char * GetName();
	const char * GetStartDragSound();
	const char * GetEndDragSound();
	const char * GetEquipSound();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_schema.h:748
class style_unlock_info {
	int iPrice;  // +0x4
	int iStylePreReq;  // +0x8

	uint32 iAttribValue;  // +0x18

	uint32 unGemTypeValue;  // +0x28

	uint32 unGemUnlockValue;  // +0x38
	style_unlock_info();
	bool IsLockable();
	bool HasUnlockPrice();
	bool HasUnlockAttrib();
	bool HasUnlockGem();

	// sizeof = 64
};

// src/game/shared/econ/econ_item_schema.h:793
class CEconStyleInfo {
	int ()() * * _vptr.CEconStyleInfo;  // +0x0
protected:

	int m_iIndex;  // +0x8
	int m_iSkin;  // +0xc
	int m_iIcon;  // +0x10
	float m_flFlyingScale;  // +0x14

	CEconStyleInfo(const CEconStyleInfo &);
	CEconStyleInfo();
	virtual ~CEconStyleInfo();
	virtual void BInitFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual void Precache(const CEntityPrecacheContext *);
	int GetSkin();
	int GetIndex();
	const char * GetName();
	const char * GetBasePlayerDisplayModel();
	int GetIcon();
	const style_unlock_info * GetUnlockInfo();
	float GetFlyingScale();
	const char * GetAutoStyleReason();
	CExpressionCalculator * GetExpression();

	// vtable[2] BInitFromKV
	// vtable[3] Precache
	// sizeof = 120
};

// src/game/shared/econ/econ_item_schema.h:866
struct player_card_visual_t {
	wchar_t m_wcsPlayerName[128];  // +0x0
	int m_unAge;  // +0x210

	player_card_visual_t();

	// sizeof = 600
};

// src/game/shared/econ/econ_item_schema.h:880
struct autograph_t {
	struct level_t {
		uint32 m_unMinScore;  // +0x0

		level_t();
		bool operator<(const level_t &);

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	uint32 m_unLanguage;  // +0x10
	uint32 m_unEventID;  // +0x14
private:

	autograph_t();
	const char * GetImage(uint32);
	const char * GetNameModifier(uint32);
	uint32 GetNumLevels();
	~autograph_t();

	// sizeof = 64
};

// src/game/shared/econ/econ_item_schema.h:880
struct autograph_t {
	struct level_t {
		uint32 m_unMinScore;  // +0x0

		level_t();
		bool operator<(const level_t &);
		level_t(const level_t &);
		level_t(level_t &);
		level_t & operator=(level_t &);
		level_t & operator=(const level_t &);

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	uint32 m_unLanguage;  // +0x10
	uint32 m_unEventID;  // +0x14
private:

	autograph_t();
	const char * GetImage(uint32);
	const char * GetNameModifier(uint32);
	uint32 GetNumLevels();
	~autograph_t();
	autograph_t(const autograph_t &);
	autograph_t & operator=(const autograph_t &);

	// sizeof = 64
};

// src/game/shared/econ/econ_item_schema.h:907
class CEconItemAssetInfo {
private:

	int m_iSkin;  // +0x30
	bool m_bSkipModelCombine;  // +0x34
	bool m_bHideOnPortrait;  // +0x35
	bool m_bHasAutoStyles;  // +0x36

	CUtlMap<unsigned int, CEconSchemaSymbol, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> * m_pMapAlternateIcons;  // +0x38
	CEconItemAssetInfo();
	~CEconItemAssetInfo();
	void InitFromVisualsKV(KeyValues *, IEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	const char * GetAlternateIcon(int);
	const CUtlMap<unsigned int, CEconSchemaSymbol, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> * GetAlternateIconsMap();
	int GetStyleCount();
	CEconStyleInfo * GetStyle(style_index_t);
	int GetStyleSkin(style_index_t);
	bool HasAutoStyles();
	const player_card_visual_t * GetPlayerCardVisual();
	const CAssetModifierContainer & GetAssetModifierContainer();
	bool HasAssetModifierContainer();
	void Precache(const CEntityPrecacheContext *);
	int GetNumAnimationModifiers();
	const char * GetAnimationModifier(int);
	int GetSkin();
	bool SkipModelCombine();
	bool HideOnPortrait();
	bool InitStyles(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool InitAlternateIcons(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	void CleanUp();

	// sizeof = 80
};

// src/game/shared/econ/econ_item_schema.h:1024
struct bundleinfo_t {
	bundleinfo_t();

	// sizeof = 24
};

// src/game/shared/econ/econ_item_schema.h:1029
struct BundleSetupInfo_t {
	int m_nItemCount;  // +0x8
	BundleSetupInfo_t();

	// sizeof = 16
};

// src/game/shared/econ/econ_item_schema.h:1058
class IEconConsumable {
	IEconConsumable();

	// sizeof = 1
};

// src/game/shared/econ/econ_item_schema.h:1066
class IEconTool {
	int ()() * * _vptr.IEconTool;  // +0x0
private:

	bool m_bUnserializeStandardKeys;  // +0x40
	IEconTool(const IEconTool &);
	IEconTool();
	IEconTool(const char *, const char *, const char *, item_capabilities_t, KeyValues *);
	virtual ~IEconTool();
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	const char * GetUsageRestriction();
	item_capabilities_t GetCapabilities();
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	virtual bool ShouldDisplayQuantity(const IEconItemInterface *);
	virtual bool RequiresToolEscrowPeriod();
	virtual bool BFinishInitialization();
	const char * GetTypeName();
	const char * GetUseString();
	int GetBonusItemDefCount();
	item_definition_index_t GetBonusItemDef(int);
	uint32 GetLevelRequirementToUse(const IEconItemInterface *);
	virtual IEconConsumable * CreateEconConsumable();
	void UnserializeStandardUsageKeys(KeyValues *);

	// vtable[2] BInitFromKV
	// vtable[3] CanApplyTo
	// vtable[4] ShouldDisplayQuantity
	// vtable[5] RequiresToolEscrowPeriod
	// vtable[6] BFinishInitialization
	// vtable[7] CreateEconConsumable
	// sizeof = 72
};

// src/game/shared/econ/econ_item_schema.h:1168
struct BonusLootInfo_t {
	BonusLootInfo_t();
	BonusLootInfo_t(const BonusLootInfo_t &);

	// sizeof = 24
};

// src/game/shared/econ/econ_item_schema.h:1179
class CEconItemDefinition : public IEconItemDefinition {
public:

private:

	uint8 m_unMinItemLevel;  // +0x1c
	uint8 m_unMaxItemLevel;  // +0x1d
	uint8 m_nItemRarity;  // +0x1e
	uint8 m_nItemQuality;  // +0x1f
	uint8 m_nForcedItemQuality;  // +0x20
	uint8 m_nDefaultDropQuantity;  // +0x21
	uint8 m_nPopularitySeed;  // +0x22

	static CUtlVector<static_attrib_t, CUtlMemory<static_attrib_t, int> > sm_vecDynamicAttributes;
	RTime32 m_rtExpiration;  // +0x58
	RTime32 m_rtDefCreation;  // +0x5c
	int m_iInventoryImagePosition[2];  // +0x98
	int m_iInventoryImageSize[2];  // +0xa0
	const CEconItemSetDefinition * m_pItemSetDef;  // +0xa8
	uint32 m_unNumConcreteItems;  // +0xd8
	int m_nSoundMaterialID;  // +0xdc
	uint32 m_nPartnerID;  // +0xe0
	bool m_bEnabled:1;  // +0x110:0
	bool m_bHidden:1;  // +0x110:1
	bool m_bShouldShowInArmory:1;  // +0x110:2
	bool m_bBaseItem:1;  // +0x110:3
	bool m_bImported:1;  // +0x110:4
	bool m_bHasStoreCustomItemDetailsPanel:1;  // +0x110:5
	bool m_bRemovePriceBlockFromStore:1;  // +0x110:6
	bool m_bShouldHideTradeCraftDelete:1;  // +0x110:7
	bool m_bIgnoreInCollectionView:1;  // +0x111:0
	bool m_bAlwaysSendToServers:1;  // +0x111:1
	bool m_bIsFirstPurchasePromo:1;  // +0x111:2
	bool m_bPreventGifting:1;  // +0x111:3
	bool m_bHideQuantity:1;  // +0x111:4
	bool m_bShowItemAssetLootList:1;  // +0x111:5
	bool m_bAllowedInThisMatch:1;  // +0x111:6
	bool m_bPublicItem:1;  // +0x111:7
	bool m_bOverrideAttackAttachments:1;  // +0x112:0
	bool m_bProperName:1;  // +0x112:1
	bool m_bHasBeenLoaded:1;  // +0x112:2
	bool m_bHideBodyGroupsDeployedOnly:1;  // +0x112:3
	bool m_bAttachToHands:1;  // +0x112:4
	bool m_bAttachToHandsVMOnly:1;  // +0x112:5
	bool m_bFlipViewModel:1;  // +0x112:6
	bool m_bActAsWearable:1;  // +0x112:7
	bool m_bDisableStyleSelection:1;  // +0x113:0

	int m_iDropType;  // +0x158
	int m_iSubType;  // +0x15c
	equip_region_mask_t m_unEquipRegionMask;  // +0x160
	equip_region_mask_t m_unEquipRegionConflictMask;  // +0x164

	CEconItemDefinition(const CEconItemDefinition &);
	CEconItemDefinition();
	virtual ~CEconItemDefinition();
	bool BInitFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);

protected:

	virtual bool BInitFromKVOverride(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BInitFromTestItemKVs(item_definition_index_t, KeyValues *, CEconItemSchema &);
	virtual void Precache(const CEntityPrecacheContext *);
	bool IsTestItem();
	bool BInitItemMappings(CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BResolveBundle(CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual item_definition_index_t GetDefinitionIndex();
	item_definition_index_t GetAssociatedItemDefinitionIndex();
	virtual const char * GetPrefabName();
	bool BEnabled();
	bool BHasBeenLoaded();
	const char * GetDefinitionName();
	CEconSchemaSymbol GetDefinitionSymbol();
	const char * GetItemClass();
	virtual const char * GetItemBaseName();
	const char * GetBrassModelOverride();
	virtual const char * GetItemTypeName();
	uint8 GetMinLevel();
	uint8 GetMaxLevel();
	virtual uint8 GetRarity();
	const char * GetRarityName();
	virtual const char * GetSlotTypeName();
	uint8 GetQuality();
	uint8 GetForcedQuality();
	uint8 GetDefaultDropQuantity();
	const CUtlVector<static_attrib_t, CUtlMemory<static_attrib_t, int> > & GetStaticAttributes();
	const CUtlVector<static_attrib_t, CUtlMemory<static_attrib_t, int> > & GetDynamicAttributes();
	uint32 GetNumConcreteItems();
	int GetSoundMaterialID();
	bool IsHidden();
	bool IsImported();
	bool IsAllowedInMatch();
	virtual bool IsBaseItem();
	virtual bool IsBundle();
	bool HasProperName();
	const char * GetClassToken();
	const char * GetSlotToken();
	const char * GetRewardSound();
	bool ShouldAttachToHands();
	bool ShouldAttachToHandsVMOnly();
	bool ShouldFlipViewmodels();
	int GetInventoryImagePosition(int);
	int GetInventoryImageSize(int);
	int GetDropType();
	const char * GetDropTypeName();
	const char * GetHolidayRestriction();
	int GetSubType();
	item_capabilities_t GetCapabilities();
	item_definition_index_t GetArmoryRemap();
	item_definition_index_t GetStoreRemap();
	bool ShouldHideTradeCraftDelete();
	bool PreventGifting();
	bool ShouldHideQuantity();
	virtual int GetLoadoutSlot();
	virtual int GetHeroID();
	virtual uint32 GetNumItemHeroes();
	virtual int GetItemHeroID(uint32);
	bool HasHeroID(int);
	item_definition_index_t GetSetItemRemap();
	const CEconItemSetDefinition * GetItemSetDefinition();
	void SetItemSetDefinition(const CEconItemSetDefinition *);
	void ClearItemSetDefinition();
	CEconItemAssetInfo * GetAssetInfo();
	const CAssetModifierContainer & GetAssetModifierContainer();
	bool HasAssetModifierContainer();
	virtual int GetSkin();
	virtual void GetStyleInformation(CUtlVector<EconItemStyleInfo_t, CUtlMemory<EconItemStyleInfo_t, int> > *);
	virtual void GetAssetModifiersActiveForStyle(int, CUtlVector<AssetModifierEntry_t, CUtlMemory<AssetModifierEntry_t, int> > *);
	virtual const char * FindEntityModelModifier(const char *);
	bool IsTool();
	const IEconTool * GetEconTool();
	virtual bool IsPreviewableInStore();
	const bundleinfo_t * GetBundleInfo();
	virtual int GetBundleItemCount();
	virtual item_definition_index_t GetBundleItem(int);
	const char * GetIconClassname();
	const char * GetInventoryModel();
	virtual const char * GetInventoryImage();
	const char * GetInventoryOverlayImage();
	const char * GetTooltipBanner();
	const BonusLootInfo_t * GetBonusLootInfo(const char *);
	virtual int GetBasePlayerDisplayModelCount();
	virtual const char * GetBasePlayerDisplayModel(int);
	virtual const char * GetParticleFolder();
	virtual const char * GetItemDesc();
	const char * GetArmoryDescString();
	RTime32 GetExpirationDate();
	RTime32 GetDefCreationDate();
	bool ShouldShowInArmory();
	bool HasStoreCustomItemDetailsPanel();
	bool HasRemovePriceBlockFromStore();
	bool ShouldAlwaysSendToServers();
	bool IsActingAsAWearable();
	bool GetHideBodyGroupsDeployedOnly();
	bool IsFirstPurchasePromo();
	bool ShouldShowItemAssetLootList();
	equip_region_mask_t GetEquipRegionMask();
	equip_region_mask_t GetEquipRegionConflictMask();
	void SetAllowedInMatch(bool);
	void SetHasBeenLoaded(bool);
	uint32 RollItemLevel();
	const char * GetFirstSaleDate();
	virtual bool IsRecent();
	void IterateAttributes(IEconItemAttributeIterator *);
	void IterateAttributesOfType(IEconItemAttributeIterator *, const CEconItemAttributeDefinition &);
	int GetPopularitySeed();
	bool HasEconTag(econ_tag_handle_t);
	bool ShoulDisableStyleSelector();
	bool ShouldOverrideAttackAttachments();
	uint32 GetBrandPartnerID(EItemPartnerType);
	EItemPartnerType GetBrandPartnerType();
	virtual bool IsPublicItem();
	virtual bool IgnoreInCollectionView();

private:

	bool BInitBundleFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual void BInitVisualBlockFromKV(KeyValues *, IEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	void BInitBrandInfoFromKV(KeyValues *, IEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitPaymentRulesFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);

	// vtable[23] BInitFromKVOverride
	// vtable[24] BInitFromTestItemKVs
	// vtable[25] Precache
	// vtable[0] GetDefinitionIndex
	// vtable[1] GetPrefabName
	// vtable[2] GetItemBaseName
	// vtable[3] GetItemTypeName
	// vtable[10] GetRarity
	// vtable[11] GetSlotTypeName
	// vtable[14] IsBaseItem
	// vtable[16] IsBundle
	// vtable[8] GetLoadoutSlot
	// vtable[9] GetHeroID
	// vtable[26] GetNumItemHeroes
	// vtable[27] GetItemHeroID
	// vtable[17] GetSkin
	// vtable[18] GetStyleInformation
	// vtable[19] GetAssetModifiersActiveForStyle
	// vtable[20] FindEntityModelModifier
	// vtable[28] IsPreviewableInStore
	// vtable[12] GetBundleItemCount
	// vtable[13] GetBundleItem
	// vtable[5] GetInventoryImage
	// vtable[6] GetBasePlayerDisplayModelCount
	// vtable[7] GetBasePlayerDisplayModel
	// vtable[29] GetParticleFolder
	// vtable[4] GetItemDesc
	// vtable[30] IsRecent
	// vtable[15] IsPublicItem
	// vtable[31] IgnoreInCollectionView
	// vtable[32] BInitVisualBlockFromKV
	// sizeof = 400
};

// src/game/shared/econ/econ_item_schema.h:1697
class CTimedItemRewardDefinition {
private:

	uint32 m_unMinFreq;  // +0x0
	uint32 m_unMaxFreq;  // +0x4
	float m_flChance;  // +0x8
	bool m_bAbsoluteTime;  // +0xc
	bool m_bSupplyCrate;  // +0xd

	const CEconLootListDefinition * m_pLootList;  // +0x10
	CTimedItemRewardDefinition();
	CTimedItemRewardDefinition(const CTimedItemRewardDefinition &);
	CTimedItemRewardDefinition & operator=(const CTimedItemRewardDefinition &);
	~CTimedItemRewardDefinition();
	bool BInitFromKV(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	uint32 GetRandomFrequency();
	uint32 GetMinFrequency();
	uint32 GetMaxFrequency();
	float GetChance();
	bool IsAbsoluteTime();
	bool IsSupplyCrate();
	const CEconLootListDefinition * GetLootList();

	// sizeof = 24
};

// src/game/shared/econ/econ_item_schema.h:1737
class CItemLevelingDefinition {
private:

	uint32 m_unLevel;  // +0x0
	uint32 m_unRequiredScore;  // +0x4
	CItemLevelingDefinition();
	CItemLevelingDefinition(const CItemLevelingDefinition &);
	CItemLevelingDefinition & operator=(const CItemLevelingDefinition &);
	~CItemLevelingDefinition();
	bool BInitFromKV(KeyValues *, CEconItemSchema &, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	uint32 GetLevel();
	uint32 GetRequiredScore();
	const char * GetNameLocalizationKey();

	// sizeof = 16
};

// src/game/shared/econ/econ_item_schema.h:1761
struct AssetModifier_t {
	AssetModifier_t();
	~AssetModifier_t();

	// sizeof = 48
};

// src/game/shared/econ/econ_item_schema.h:1771
struct ItemPartner_t {
	ItemPartner_t();

	// sizeof = 56
};

// src/game/shared/econ/econ_item_schema.h:1787
struct AchievementAward_t {
	AppId_t m_unSourceAppId;  // +0x8
	uint32 m_unAuditData;  // +0xc
	AchievementAward_t(const AchievementAward_t &);
	AchievementAward_t();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_schema.h:1811
struct kill_eater_score_type_t {
	bool m_bUseLevelBlock;  // +0x10
	bool m_bAllowCountReset;  // +0x11
	kill_eater_score_type_t();

	// sizeof = 24
};

// src/game/shared/econ/econ_item_schema.h:1827
class CForeignAppImports {
private:

	CUtlMap<short unsigned int, const CEconItemDefinition*, short unsigned int, bool (*)(short unsigned int const&, short unsigned int const&)> m_mapDefinitions;  // +0x0
	CForeignAppImports();
	void AddMapping(uint16, const CEconItemDefinition *);
	const CEconItemDefinition * FindMapping(uint16);

	// sizeof = 40
};

// src/game/shared/econ/econ_item_schema.h:1913
class ISchemaAttributeType {
	int ()() * * _vptr.ISchemaAttributeType;  // +0x0
	ISchemaAttributeType();
	virtual ~ISchemaAttributeType();
	virtual unsigned int GetTypeUniqueIdentifier();
	virtual void LoadEconAttributeValue(CEconItem *, const CEconItemAttributeDefinition *, const attribute_data_union_t &);
	virtual void ConvertEconAttributeValueToByteStream(const attribute_data_union_t &, string *);
	virtual bool BConvertStringToEconAttributeValue(const CEconItemAttributeDefinition *, const char *, attribute_data_union_t *, bool);
	virtual void ConvertEconAttributeValueToString(const CEconItemAttributeDefinition *, const attribute_data_union_t &, string *);
	virtual void LoadByteStreamToEconAttributeValue(CEconItem *, const CEconItemAttributeDefinition *, const string &);
	virtual void InitializeNewEconAttributeValue(attribute_data_union_t *);
	virtual void UnloadEconAttributeValue(attribute_data_union_t *);
	virtual bool OnIterateAttributeValue(IEconItemAttributeIterator *, const CEconItemAttributeDefinition *, const attribute_data_union_t &);
	virtual bool BSupportsGameplayModificationAndNetworking();

	// vtable[2] GetTypeUniqueIdentifier
	// vtable[3] LoadEconAttributeValue
	// vtable[4] ConvertEconAttributeValueToByteStream
	// vtable[5] BConvertStringToEconAttributeValue
	// vtable[6] ConvertEconAttributeValueToString
	// vtable[7] LoadByteStreamToEconAttributeValue
	// vtable[8] InitializeNewEconAttributeValue
	// vtable[9] UnloadEconAttributeValue
	// vtable[10] OnIterateAttributeValue
	// vtable[11] BSupportsGameplayModificationAndNetworking
	// sizeof = 8
};

// src/game/shared/econ/econ_item_schema.h:1993
struct attr_type_t {
	const ISchemaAttributeType * m_pAttrType;  // +0x8
	attr_type_t(const char *, const ISchemaAttributeType *);

	// sizeof = 16
};

// src/game/shared/econ/econ_item_schema.h:2006
class IDelayedSchemaData {
	int ()() * * _vptr.IDelayedSchemaData;  // +0x0
	IDelayedSchemaData();
	virtual ~IDelayedSchemaData();
	virtual bool InitializeSchema(CEconItemSchema *);

protected:

	bool InitializeSchemaInternal(CEconItemSchema *, CUtlBuffer &, bool, uint32);

	// vtable[2] InitializeSchema
	// sizeof = 8
};

// src/game/shared/econ/econ_item_schema.h:2021
class CEconItemSchema : public IEconItemSchema {
	struct EquipRegion {
		unsigned int m_unBitIndex;  // +0x8
		equip_region_mask_t m_unMask;  // +0xc
		EquipRegion();
		EquipRegion(const EquipRegion &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	typedef CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> > ItemDefinitionMap_t;

	ItemDefinitionMap_t m_mapItems;  // +0x20
	uint8 m_unDefaultQuality;  // +0x78

private:

	uint32 m_unResetCount;  // +0x7c
	bool m_bIsCachedRawDefinition;  // +0x88

	uint32 m_unVersion;  // +0x8c
	equipped_class_t m_unFirstValidClass;  // +0x90
	equipped_class_t m_unLastValidClass;  // +0x92
	equipped_slot_t m_unFirstValidItemSlot;  // +0x94
	equipped_slot_t m_unLastValidItemSlot;  // +0x96
	uint32 m_unMinLevel;  // +0x98
	uint32 m_unMaxLevel;  // +0x9c
	uint32 m_unSumQualityWeights;  // +0xa0

	CUtlMap<int, CEconItemRarityDefinition, int, bool (*)(int const&, int const&)> m_mapRarities;  // +0xa8
	CUtlMap<int, CEconItemQualityDefinition, int, bool (*)(int const&, int const&)> m_mapQualities;  // +0xd8
	typedef CUtlMap<int, autograph_t, int, bool (*)(int const&, int const&)> AutographMap_t;

	AutographMap_t m_mapAutographs;  // +0x108

	CUtlMap<int, CEconItemAttributeDefinition, int, bool (*)(int const&, int const&)> m_mapAttributes;  // +0x198
	CUtlMap<int, AssetModifier_t, short unsigned int, bool (*)(int const&, int const&)> m_mapAssetModifiers;  // +0x1c8
	CUtlMap<unsigned int, ItemPartner_t, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_mapPartnerCorporations;  // +0x1f0
	CUtlMap<unsigned int, ItemPartner_t, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_mapPartnerTeams;  // +0x218
	typedef CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int, bool (*)(const CEconSchemaSymbol&, const CEconSchemaSymbol&)> ItemSetMap_t;

	ItemSetMap_t m_mapItemSets;  // +0x240
	typedef CUtlDict<CEconLootListDefinition, int> LootListDefinitionDict_t;

	LootListDefinitionDict_t m_dictLootLists;  // +0x270
	CUtlMap<unsigned int, AchievementAward_t*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_mapAchievementRewardsByData;  // +0x2e8
	CUtlMap<int, attachedparticlesystem_t, short unsigned int, bool (*)(int const&, int const&)> m_mapAttributeControlledParticleSystems;  // +0x310
	typedef CUtlVector<CEconItemSchema::EquipRegion, CUtlMemory<CEconItemSchema::EquipRegion, int> > EquipRegionsList_t;

	EquipRegionsList_t m_vecEquipRegionsList;  // +0x338
	CUtlMap<int, const random_attrib_t*, short unsigned int, bool (*)(int const&, int const&)> m_mapRandomGems;  // +0x350
	CUtlMap<int, const random_attrib_t*, short unsigned int, bool (*)(int const&, int const&)> m_mapRandomGems_ItemSlot;  // +0x378
	CUtlMap<CEconSchemaSymbol, KeyValues*, int, bool (*)(const CEconSchemaSymbol&, const CEconSchemaSymbol&)> m_mapDefinitionPrefabs;  // +0x3a8
	typedef CUtlVector<CEconColorDefinition*, CUtlMemory<CEconColorDefinition*, int> > ColorDefinitionsList_t;

	ColorDefinitionsList_t m_vecColorDefs;  // +0x3d8
	CUtlMap<int, CEconSoundMaterialDefinition, int, bool (*)(int const&, int const&)> m_mapSoundMaterials;  // +0x3f0
	typedef CUtlDict<int, int> EconTagDict_t;

	EconTagDict_t m_dictTags;  // +0x420
	KillEaterScoreMap_t m_mapKillEaterScoreTypes;  // +0x450
	typedef CUtlMap<item_definition_index_t, item_definition_index_t, short unsigned int, bool (*)(const item_definition_index_t&, const item_definition_index_t&)> CommunityMarketDefinitionRemapMap_t;

	CommunityMarketDefinitionRemapMap_t m_mapCommunityMarketDefinitionIndexRemap;  // +0x478
	LevelBlockDict_t m_vecItemLevelingData;  // +0x4a0
	ArmoryStringDict_t m_dictArmoryItemTypesDataStrings;  // +0x4d0
	ArmoryStringDict_t m_dictArmoryItemClassesDataStrings;  // +0x500
	ArmoryStringDict_t m_dictArmoryAttributeDataStrings;  // +0x530
	ArmoryStringDict_t m_dictArmoryItemDataStrings;  // +0x560

	static CUniformRandomStream m_RandomStream;
	bool m_bSchemaParsingItems;  // +0x5b0

	CUtlMap<item_definition_index_t, KeyValues*, short unsigned int, bool (*)(const item_definition_index_t&, const item_definition_index_t&)> m_TestItemsCreated;  // +0x5b8
	typedef CUtlMap<int, attachedparticlesystem_t, short unsigned int, bool (*)(int const&, int const&)> ParticleDefinitionMap_t;
	CEconItemSchema();
	CEconItemSchema(const CEconItemSchema &);
	CEconItemSchema & operator=(CEconItemSchema &);
	virtual ~CEconItemSchema();
	virtual bool BInit(const char *, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitBinaryBuffer(CUtlBuffer &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitTextBuffer(CUtlBuffer &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	uint32 GetVersion();
	uint32 GetResetCount();
	CUniformRandomStream & GetRandomStream();
	uint32 CalculateKeyValuesVersion(KeyValues *);
	void MaybeInitFromBuffer(IDelayedSchemaData *);
	bool BInitFromDelayedBuffer();
	equipped_class_t GetFirstValidClass();
	equipped_class_t GetLastValidClass();
	bool IsValidClass(equipped_class_t);
	equipped_slot_t GetFirstValidItemSlot();
	equipped_slot_t GetLastValidItemSlot();
	bool IsValidItemSlot(equipped_slot_t);
	uint32 GetMinLevel();
	uint32 GetMaxLevel();
	const ItemDefinitionMap_t & GetItemDefinitionMap();
	/* tag__fprintf: const_type tag not supported! */;
	const LootListDefinitionDict_t & GetLootLists();
	/* tag__fprintf: const_type tag not supported! */;
	const CEconItemDefinition * GetDefaultItemDefinition();
	virtual IEconItemDefinition * GetDefaultItemDefinitionInterface();
	const CUtlMap<int, CEconItemQualityDefinition, int, bool (*)(int const&, int const&)> & GetQualityDefinitionMap();
	CUtlMap<int, CEconItemAttributeDefinition, int, bool (*)(int const&, int const&)> & GetAttributeDefinitionMap();
	const CUtlMap<int, CEconItemAttributeDefinition, int, bool (*)(int const&, int const&)> & GetAttributeDefinitionMap();
	const ItemSetMap_t & GetItemSets();
	/* tag__fprintf: const_type tag not supported! */;
	const AutographMap_t & GetAutographMap();
	/* tag__fprintf: const_type tag not supported! */;
	const autograph_t * FindAutograph(uint32);
	const ArmoryStringDict_t & GetArmoryDataItemClasses();
	const ArmoryStringDict_t & GetArmoryDataItemTypes();
	const ArmoryStringDict_t & GetArmoryDataItems();
	const ArmoryStringDict_t & GetArmoryDataAttributes();
	const CTimedItemRewardDefinition * GetTimedReward(ETimedRewardType);
	const CEconLootListDefinition * GetLootListByName(const char *, int *);
	const CEconLootListDefinition * GetLootListByIndex(int);
	virtual void PurgeLootLists();
	virtual const IEconLootListDefinition * GetLootListInterfaceByName(const char *, int *);
	virtual const IEconLootListDefinition * GetLootListInterfaceByIndex(int);
	virtual const int GetLootListIndex(const char *);
	virtual const int GetLootListInterfaceCount();
	virtual int GetItemSetCount();
	virtual const IEconItemSetDefinition * GetItemSet(int);
	virtual const IEconItemSetDefinition * FindItemSetByName(const char *);
	uint8 GetDefaultQuality();
	equip_region_mask_t GetEquipRegionMaskByName(const char *);
	const EquipRegionsList_t & GetEquipRegionsList();
	/* tag__fprintf: const_type tag not supported! */;
	virtual KeyValues * FindDefinitionPrefabByName(const char *);
	equip_region_mask_t GetEquipRegionBitMaskByName(const char *);
	CUtlVector<CEconItemDefinition*, CUtlMemory<CEconItemDefinition*, int> > & GetBundles();
	void SetEquipRegionConflict(int, unsigned int);
	int GetEquipRegionIndexByName(const char *);
	bool BGetItemQualityFromName(const char *, uint8 *);
	const CEconItemQualityDefinition * GetQualityDefinition(int);
	const CEconItemQualityDefinition * GetQualityDefinitionByName(const char *);
	virtual int GetQualityDefinitionCount();
	virtual const char * GetQualityName(uint8);
	virtual int GetQualityIndex(const char *);
	bool BGetItemRarityFromName(const char *, uint8 *);
	const CEconItemRarityDefinition * GetRarityDefinition(int);
	const CEconItemRarityDefinition * GetRarityDefinitionByName(const char *);
	virtual int GetRarityDefinitionCount();
	virtual const char * GetRarityName(uint8);
	virtual const char * GetRarityLocKey(uint8);
	virtual const char * GetRarityColor(uint8);
	virtual const char * GetRarityLootList(uint8);
	virtual int GetRarityIndex(const char *);
	CEconItemDefinition * GetItemDefinitionMutable(item_definition_index_t, bool);
	const CEconItemDefinition * GetItemDefinition(item_definition_index_t, bool);
	const CEconItemDefinition * GetItemDefinitionByMapIndex(int);
	const CEconItemAttributeDefinition * GetAttributeDefinition(int);
	virtual const IEconItemAttributeDefinition * GetAttributeDefinitionInterface(int);
	const CEconItemAttributeDefinition * GetAttributeDefinitionByName(const char *);
	const CEconColorDefinition * GetColorDefinitionByName(const char *);
	const CEconColorDefinition * GetColorDefinitionByColor(Color &);
	virtual int GetToolType(const char *);
	virtual int GetNumPrefabs();
	virtual const char * GetPrefabName(int);
	const CEconSoundMaterialDefinition * GetSoundMaterialDefinitionByID(int);
	const CEconSoundMaterialDefinition * GetSoundMaterialDefinitionByName(const char *);
	virtual const char * GetSoundMaterialNameByID(int);
	virtual int GetSoundMaterialID(const char *);
	virtual int GetSoundMaterialCount();
	virtual int GetSoundMaterialIDByIndex(int);
	const AssetModifier_t * GetAssetModifier(int);
	int GetAssetModifierCount();
	CUtlMap<unsigned int, ItemPartner_t, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> * GetItemPartnerMap(EItemPartnerType);
	ItemPartner_t * GetItemPartner(EItemPartnerType, uint32);
	ItemPartner_t * GetItemPartnerByIndex(EItemPartnerType, int);
	int GetItemPartnerCount(EItemPartnerType);
	virtual uint32 GetHeroID(const char *);
	virtual int GetLoadoutSlotCount();
	virtual const char * GetLoadoutSlotName(int);
	virtual int GetLoadoutSlot(const char *);
	bool BCanGSCreateItems(uint32);
	virtual CEconItemDefinition * GetItemDefinitionByName(const char *);
	virtual const CEconItemDefinition * GetItemDefinitionByName(const char *);
	CEconItemDefinition * GetItemDefinitionBySymbol(CEconSchemaSymbol);
	const CEconItemDefinition * GetItemDefinitionBySymbol(CEconSchemaSymbol);
	item_definition_index_t FindItemDefinitionIndex(const char *);
	const CEconItemDefinition * FindItemDefinition(const char *);
	virtual const attachedparticlesystem_t * GetAttributeControlledParticleSystem(int);
	virtual const attachedparticlesystem_t * GetAttributeControlledParticleSystemByIndex(AttachedParticleSystemIndex_t);
	virtual const attachedparticlesystem_t * FindAttributeControlledParticleSystem(const char *, AttachedParticleSystemIndex_t *);
	const ParticleDefinitionMap_t & GetAttributeControlledParticleSystems();
	/* tag__fprintf: const_type tag not supported! */;
	virtual int GetNumAttributeControlledParticleSystems();
	void GetItemDefsUsingTool(const char *, CUtlVector<CEconItemDefinition*, CUtlMemory<CEconItemDefinition*, int> > &);
	const kill_eater_score_type_t * FindKillEaterScoreType(uint32);
	const CUtlVector<attr_type_t, CUtlMemory<attr_type_t, int> > & GetAttributeTypes();
	const ISchemaAttributeType * GetAttributeType(const char *);
	item_definition_index_t GetCommunityMarketRemappedDefinitionIndex(item_definition_index_t);
	const LevelBlockDict_t & GetItemLevelingDataDict();
	const CUtlVector<CItemLevelingDefinition, CUtlMemory<CItemLevelingDefinition, int> > * GetItemLevelingData(const char *);
	const CItemLevelingDefinition * GetItemLevelForScore(const char *, uint32);
	const char * GetKillEaterScoreTypeLocString(uint32);
	bool GetKillEaterScoreTypeUseLevelData(uint32);
	const char * GetKillEaterScoreTypeLevelingDataName(uint32);
	virtual void ItemTesting_CreateTestItemDefinitionNoClone(item_definition_index_t, KeyValues *);
	virtual void ItemTesting_DiscardTestItemDefinition(item_definition_index_t);
	virtual void ItemTesting_DiscardAllTestItemDefinitions();
	virtual bool ItemTesting_IsTestItemDefinition(item_definition_index_t);
	virtual CEconItemSetDefinition * ItemTest_CreateTestItemSet(KeyValues *);
	virtual void ItemTesting_DiscardTestItemSet(const char *);
	virtual void ItemTesting_DiscardAllTestItemSets();
	virtual void ItemTesting_GetTestItemSetNames(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual void ItemTesting_GetAllItemDefinitionIndices(CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > &);
	virtual void ItemTesting_GetTestItemDefinitionIndices(CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > &);
	virtual IEconItemDefinition * CreateTempItemDefinition(KeyValues *);
	virtual void DeleteTempItemDefinition(IEconItemDefinition *);
	virtual void GetAssetModifiersUIInfo(const char *, CUtlVector<AssetModifierUIInfo_t, CUtlMemory<AssetModifierUIInfo_t, int> > &);
	econ_tag_handle_t GetHandleForTag(const char *);
	virtual CEconItemDefinition * CreateEconItemDefinition();
	virtual void DeleteEconItemDefinition(CEconItemDefinition *);
	virtual CEconStyleInfo * CreateEconStyleInfo();
	virtual void DeleteEconStyleInfo(CEconStyleInfo *);
	virtual IEconTool * CreateEconToolImpl(const char *, const char *, const char *, item_capabilities_t, KeyValues *);
	virtual int GetItemDefinitionCount();
	virtual void OnTestItemDefinitionAdded(item_definition_index_t);
	virtual void OnTestItemDefinitionRemoved(item_definition_index_t);
	virtual void OnTestItemSetAdded(const char *);
	virtual void OnTestItemSetRemoved(const char *);
	CPlayerInventory * ItemTesting_GetLocalInventory();

protected:

	virtual void Reset();
	virtual IEconItemDefinition * GetItemDefinitionInterface(item_definition_index_t);
	virtual const IEconItemDefinition * GetItemDefinitionInterfaceByMapIndex(int);
	virtual int GetCharacterSlotType(int, int);
	virtual int GetCharacterID(const char *);
	virtual int GetCharacterCount();
	virtual const char * GetCharacterName(int);
	virtual const char * GetCharacterModel(int);
	virtual int CalculateNumberOfConcreteItems(const CEconItemDefinition *);
	virtual bool BInitItems(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BInitBundles(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BInitItemSets(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BAddAttributeTypes(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);

private:

	bool BInitGameInfo(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitAttributeTypes(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitAutographs(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitDefinitionPrefabs(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitRarities(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitQualities(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitColors(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitAttributes(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitEquipRegions(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitEquipRegionConflicts(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitTimedRewards(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitAchievementRewards(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitAssetModifiers(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitPartners(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BInitLootLists(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, bool);
	bool BInitItemLevels(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitKillEaterScoreTypes(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitSoundMaterials(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitCommunityMarketRemaps(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BGCPostSchemaInitStartupChecks(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual attachedparticlesystem_t GetAttachedParticleSystemInfo(KeyValues *, int32);
	virtual bool BInitAttributeControlledParticleSystems(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitArmoryData(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);

protected:

	virtual bool BInitSchema(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	void DeleteDefaultItemDefinition();
	void DeleteItemsMap();

	// vtable[0] BInit
	// vtable[5] GetDefaultItemDefinitionInterface
	// vtable[31] PurgeLootLists
	// vtable[32] GetLootListInterfaceByName
	// vtable[33] GetLootListInterfaceByIndex
	// vtable[34] GetLootListIndex
	// vtable[35] GetLootListInterfaceCount
	// vtable[28] GetItemSetCount
	// vtable[29] GetItemSet
	// vtable[30] FindItemSetByName
	// vtable[36] FindDefinitionPrefabByName
	// vtable[18] GetQualityDefinitionCount
	// vtable[19] GetQualityName
	// vtable[20] GetQualityIndex
	// vtable[21] GetRarityDefinitionCount
	// vtable[22] GetRarityName
	// vtable[23] GetRarityLocKey
	// vtable[24] GetRarityColor
	// vtable[25] GetRarityLootList
	// vtable[26] GetRarityIndex
	// vtable[27] GetAttributeDefinitionInterface
	// vtable[62] GetToolType
	// vtable[63] GetNumPrefabs
	// vtable[64] GetPrefabName
	// vtable[53] GetSoundMaterialNameByID
	// vtable[54] GetSoundMaterialID
	// vtable[55] GetSoundMaterialCount
	// vtable[56] GetSoundMaterialIDByIndex
	// vtable[65] GetHeroID
	// vtable[6] GetLoadoutSlotCount
	// vtable[7] GetLoadoutSlotName
	// vtable[8] GetLoadoutSlot
	// vtable[41] GetItemDefinitionByName
	// vtable[42] GetItemDefinitionByName
	// vtable[14] GetAttributeControlledParticleSystem
	// vtable[15] GetAttributeControlledParticleSystemByIndex
	// vtable[16] FindAttributeControlledParticleSystem
	// vtable[17] GetNumAttributeControlledParticleSystems
	// vtable[43] ItemTesting_CreateTestItemDefinitionNoClone
	// vtable[44] ItemTesting_DiscardTestItemDefinition
	// vtable[45] ItemTesting_DiscardAllTestItemDefinitions
	// vtable[46] ItemTesting_IsTestItemDefinition
	// vtable[47] ItemTest_CreateTestItemSet
	// vtable[48] ItemTesting_DiscardTestItemSet
	// vtable[50] ItemTesting_DiscardAllTestItemSets
	// vtable[49] ItemTesting_GetTestItemSetNames
	// vtable[52] ItemTesting_GetAllItemDefinitionIndices
	// vtable[51] ItemTesting_GetTestItemDefinitionIndices
	// vtable[57] CreateTempItemDefinition
	// vtable[58] DeleteTempItemDefinition
	// vtable[59] GetAssetModifiersUIInfo
	// vtable[66] CreateEconItemDefinition
	// vtable[67] DeleteEconItemDefinition
	// vtable[68] CreateEconStyleInfo
	// vtable[69] DeleteEconStyleInfo
	// vtable[70] CreateEconToolImpl
	// vtable[2] GetItemDefinitionCount
	// vtable[71] OnTestItemDefinitionAdded
	// vtable[72] OnTestItemDefinitionRemoved
	// vtable[73] OnTestItemSetAdded
	// vtable[74] OnTestItemSetRemoved
	// vtable[75] Reset
	// vtable[4] GetItemDefinitionInterface
	// vtable[3] GetItemDefinitionInterfaceByMapIndex
	// vtable[9] GetCharacterSlotType
	// vtable[10] GetCharacterID
	// vtable[11] GetCharacterCount
	// vtable[12] GetCharacterName
	// vtable[13] GetCharacterModel
	// vtable[76] CalculateNumberOfConcreteItems
	// vtable[39] BInitItems
	// vtable[77] BInitBundles
	// vtable[40] BInitItemSets
	// vtable[78] BAddAttributeTypes
	// vtable[1] BInitLootLists
	// vtable[37] GetAttachedParticleSystemInfo
	// vtable[38] BInitAttributeControlledParticleSystems
	// vtable[79] BInitSchema
	// sizeof = 1552
};
