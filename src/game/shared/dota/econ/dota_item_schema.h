// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_schema.h:32
struct courier_wearable_t {
	int m_nSlot;  // +0x10
	int m_nIndex;  // +0x14
	bool m_bFlyingOnly;  // +0x18
	courier_wearable_t();

	// sizeof = 32
};

// src/game/shared/dota/econ/dota_item_schema.h:44
struct customizable_courier_t {
	customizable_courier_t();

	// sizeof = 136
};

// src/game/shared/dota/econ/dota_item_schema.h:73
struct PurchaseRequirementInfo_t {
	uint32 m_nPurchaseRequiredLeagueID;  // +0x0

	PurchaseRequirementInfo_t();

	// sizeof = 32
};

// src/game/shared/dota/econ/dota_item_schema.h:81
struct AutographInfo_t {
	AutographInfo_t();

	// sizeof = 8
};

// src/game/shared/dota/econ/dota_item_schema.h:87
class CDOTAItemDefinition : public CEconItemDefinition {
	struct AdditionalInfo_t {
		AdditionalInfo_t();
		void CopyFrom(const AdditionalInfo_t *);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct PortraitNode_t {
		PortraitNode_t();
		~PortraitNode_t();

		// sizeof = 16
	};

	struct AdditionalHeroes_t {
		int m_nHeroID;  // +0x8
		AdditionalHeroes_t();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int m_nSlotType;  // +0x198
	int m_nHeroID;  // +0x19c
	uint32 m_nLeagueID;  // +0x1a0

	static customizable_courier_t sm_defaultCustomizableCourier;
	uint16 m_unPremiumPointCost;  // +0x20c
	bool m_bFreeCafeEquipDisabled:1;  // +0x210:0
	bool m_bIsWearable:1;  // +0x210:1
	bool m_bIsTaunt:1;  // +0x210:2
	bool m_bIsAnnouncer:1;  // +0x210:3
	bool m_bIsCourier:1;  // +0x210:4
	bool m_bIsSupplyCrate:1;  // +0x210:5
	bool m_bIsHUDSkin:1;  // +0x210:6
	bool m_bIsLoadingScreen:1;  // +0x210:7
	bool m_bIsLeague:1;  // +0x211:0
	bool m_bIsWeather:1;  // +0x211:1
	bool m_bIsFlyingCourierWearable:1;  // +0x211:2
	bool m_bIsTerrain:1;  // +0x211:3
	bool m_bPerfectWorldWhitelist:1;  // +0x211:4
	bool m_bMatchCycleToParent:1;  // +0x211:5
	CDOTAItemDefinition(const CDOTAItemDefinition &);
	CDOTAItemDefinition();
	virtual ~CDOTAItemDefinition();
	virtual bool BInitFromKVOverride(KeyValues *, CEconItemSchema &, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BInitFromTestItemKVs(item_definition_index_t, KeyValues *, CEconItemSchema &);
	virtual void Precache(const CEntityPrecacheContext *);
	bool IsValidForNexonPCBang(bool);
	virtual const char * GetSlotTypeName();
	int GetSlotType();
	virtual int GetHeroID();
	uint32 GetLeagueID();
	int GetAnimSlot();
	virtual int GetLoadoutSlot();
	const char * GetBannerName();
	const char * GetTournamentURL();
	bool IsCustomizableCourier();
	const customizable_courier_t & GetCustomizableCourier();
	bool IsFlyingOnly();
	bool IsWearable();
	bool IsSupplyCrate();
	bool IsTaunt();
	bool IsAnnouncer();
	bool IsCourier();
	bool IsHUDSkin();
	bool IsLoadingScreen();
	virtual bool IsRecent();
	bool IsLeague();
	bool IsWeather();
	bool IsTerrain();
	bool ShouldMatchCycleToParent();
	bool IsOlderThan(int);
	EEvent GetAssociatedEvent();
	uint32 GetEventPremiumPointCost();
	uint32 GetLeagueIDRequiredForPurchase();
	const PurchaseRequirementInfo_t * GetPurchaseRequirementInfo();
	const AutographInfo_t * GetAutographInfo();
	virtual uint32 GetNumItemHeroes();
	virtual int GetItemHeroID(uint32);
	const char * GetItemHeroName(uint32);
	const char * GetItemHeroForHeroID(int);
	bool HasOrContainsItemForHeroID(int);
	bool IsTreasureChest();
	const char * GetTreasureExtraLayoutFile();
	virtual bool IsPreviewableInStore();
	bool BuildListOfAllAssociatedLoadoutItems(int, bool, CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > *);
	const char * GetStoreItemTypeName();
	uint32 GetStoreItemTypeNameID();
	item_definition_index_t GetPreviewOverrideDefIndex();
	bool HasAdditionalInfo();
	const AdditionalInfo_t * GetAdditionalInfo();
	bool BIsPerfectWorldExplicitlyWhitelisted();
	int BuildCourierWearableList(int, item_definition_index_t *, const IEconItemInterface *, CourierWearableFilterType_t);
	const CDOTAPortraitInfo * GetPortraitInfoForModel(const char *);
	const CDOTAPortraitInfo * GetPortraitInfoForEnvironment(DOTAPortraitEnvironmentType_t);
	void ExtractHeroUsageFromKVs(KeyValues *, CEconItemSchema &);
	void InitCustomizableCourierData(KeyValues *, CEconItemSchema &);

	// vtable[23] BInitFromKVOverride
	// vtable[24] BInitFromTestItemKVs
	// vtable[25] Precache
	// vtable[11] GetSlotTypeName
	// vtable[9] GetHeroID
	// vtable[8] GetLoadoutSlot
	// vtable[30] IsRecent
	// vtable[26] GetNumItemHeroes
	// vtable[27] GetItemHeroID
	// vtable[28] IsPreviewableInStore
	// sizeof = 536
};

// src/game/shared/dota/econ/dota_item_schema.h:273
class CDOTAItemSchema : public CEconItemSchema {
	enum {
		k_LeagueFlag_FreeToSpectate = 0x1,
		k_LeagueFlag_HasFantasy = 0x2,
		k_LeagueFlag_DropItems = 0x4,
	};

	struct AssociatedLeagueInfo_t {
		uint32 m_nLeagueID;  // +0x0
		float m_flRevenuePercent;  // +0x4

		// sizeof = 8
	};

	struct LeagueInfo_t {
		uint16 m_nFlags;  // +0x2
		uint16 m_nTier;  // +0x4
		LeagueInfo_t();

		// sizeof = 6
	};

public:

	typedef CUtlVector<const CDOTAItemDefinition*, CUtlMemory<const CDOTAItemDefinition*, int> > TContextRecipesVec;

private:

	TContextRecipesVec m_vecItemContextRecipes;  // +0x610
	CUtlMap<unsigned int, CEconSchemaSymbol, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_mapHeroNames;  // +0x640

	typedef CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> > CustomGameToTicketList_t;

	CustomGameToTicketList_t m_mapCustomGameTickets;  // +0x7c0
	typedef CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > TicketList_t;
	CDOTAItemSchema(CDOTAItemSchema &);
	CDOTAItemSchema(CDOTAItemSchema &);
	CDOTAItemSchema();
	virtual CEconItemDefinition * CreateEconItemDefinition();
	virtual void DeleteEconItemDefinition(CEconItemDefinition *);
	const CDOTAItemDefinition * GetDOTAItemDefinition(item_definition_index_t);
	virtual bool BInitSchema(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BInitItems(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	bool BInitCustomGameTickets();
	virtual void OnTestItemDefinitionAdded(item_definition_index_t);
	virtual void OnTestItemDefinitionRemoved(item_definition_index_t);
	virtual void OnTestItemSetAdded(const char *);
	virtual void OnTestItemSetRemoved(const char *);
	virtual uint32 GetHeroID(const char *);
	virtual const char * GetHeroName(uint32);
	bool GetAssociatedLeagueForItemDef(item_definition_index_t, uint32 *, float *);
	void AddInfoToLeagueCache(uint32, item_definition_index_t, uint32, uint32);
	item_definition_index_t GetDefIndexForLeagueID(uint32);
	uint32 GetFlagsForLeagueID(uint32);
	uint32 GetTierForLeagueID(uint32);
	void GetProfessionalLeagueIDs(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *);
	void GetAllLeagueIDs(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *);
	bool BIsHeroItemized(int);
	const TContextRecipesVec & GetItemContextRecipes();
	/* tag__fprintf: const_type tag not supported! */;
	bool BInitPlayerLoadout(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int GetPlayerLoadoutSlotType(int);
	int GetNumPlayerLoadoutSlots();
	virtual int GetLoadoutSlotCount();
	virtual const char * GetLoadoutSlotName(int);
	virtual int GetLoadoutSlot(const char *);
	virtual IEconTool * CreateEconToolImpl(const char *, const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BAddAttributeTypes(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual int GetToolType(const char *);
	virtual int GetCharacterSlotType(int, int);
	virtual int GetCharacterID(const char *);
	virtual int GetCharacterCount();
	virtual const char * GetCharacterName(int);
	virtual const char * GetCharacterModel(int);
	void AddRecipe(const CDOTAItemDefinition *);
	void AddCustomizableCourier(customizable_courier_t &);
	const char * GetCustomizableCourierSlot(const CUtlString &, int);
	void AddCourierWearable(courier_wearable_t &, item_definition_index_t);
	item_definition_index_t GetCourierWearableItemDef(const char *, const char *, int);
	item_definition_index_t GetCourierWearableItemDef(const char *, const char *, const IEconItemInterface *, int);
	int GetCourierItemInSlot(const IEconItemInterface *, int);
	const CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > * GetCustomGameTicketList(uint64);

protected:

	virtual void Reset();

private:

	void CalculateHeroItemization();
	void BuildAssociatedLeagueInfo();
	virtual ~CDOTAItemSchema();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[66] CreateEconItemDefinition
	// vtable[67] DeleteEconItemDefinition
	// vtable[79] BInitSchema
	// vtable[39] BInitItems
	// vtable[71] OnTestItemDefinitionAdded
	// vtable[72] OnTestItemDefinitionRemoved
	// vtable[73] OnTestItemSetAdded
	// vtable[74] OnTestItemSetRemoved
	// vtable[65] GetHeroID
	// vtable[80] GetHeroName
	// vtable[6] GetLoadoutSlotCount
	// vtable[7] GetLoadoutSlotName
	// vtable[8] GetLoadoutSlot
	// vtable[70] CreateEconToolImpl
	// vtable[78] BAddAttributeTypes
	// vtable[62] GetToolType
	// vtable[9] GetCharacterSlotType
	// vtable[10] GetCharacterID
	// vtable[11] GetCharacterCount
	// vtable[12] GetCharacterName
	// vtable[13] GetCharacterModel
	// vtable[75] Reset
	// sizeof = 2072
};
