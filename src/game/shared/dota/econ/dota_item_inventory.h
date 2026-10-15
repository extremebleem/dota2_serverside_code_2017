// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_inventory.h:42
struct slot_modelbudget_t {
	int nMaxTextureWidth;  // +0x0
	int nMaxTextureHeight;  // +0x4
	int nMaxPolygonsLOD0;  // +0x8
	int nMaxPolygonsLOD1;  // +0xc
	bool bPreventImport;  // +0x10

	// sizeof = 20
};

// src/game/shared/dota/econ/dota_item_inventory.h:72
class CDOTAHeroSlots {
private:

	int m_nSlotTypes[16];  // +0x80
	bool m_bSlotVisible[16];  // +0x280
	bool m_bIsVisibleOnGeneratedUnits[16];  // +0x290
	CDOTAHeroSlots();
	~CDOTAHeroSlots();
	void SetSlotType(int, int);
	int GetSlotType(int);
	int GetSlotIndexBySlotType(int);
	void SetSlotBudget(int, int, int, int, int, bool);
	bool GetSlotBudget(int, int *, int *, int *, int *, bool *);
	void SetSlotText(int, const char *);
	const char * GetSlotText(int);
	void SetSlotShouldDisplayInLoadout(int, bool);
	bool ShouldDisplayInLoadout(int);
	void SetSlotLoadoutPreviewMode(int, HeroSlotLoadoutPreviewMode_t);
	HeroSlotLoadoutPreviewMode_t GetSlotLoadoutPreviewMode(int);
	bool DoesSlotHaveSpecialLoadoutPreview(int);
	bool CanDemo(int);
	bool IsItemVisibleOnGeneratedUnits(int);
	void SetItemVisibleOnGeneratedUnits(int, bool);
	int FindGeneratingSlotTypeForUnit(const char *);
	void ClearSlotUnits(int);
	void AddSlotUnit(int, const char *);
	int GetGeneratedUnitCount(int);
	const char * GetGeneratedUnitName(int, int);

	// sizeof = 688
};

// src/game/shared/dota/econ/dota_item_inventory.h:354
class CHeroLoadout {
	bool m_bLoadoutChanged;  // +0x100

	int m_nPredictedItemRefCount;  // +0x104
	CHeroLoadout();
	void ResetPredictedItems();
	void BeginPredictedItems();
	void FinishPredictedItems();
	bool HasPredictedItems();
	itemid_t & operator[](int);

	// sizeof = 264
};

// src/game/shared/dota/econ/dota_item_inventory.h:402
class CFreeHeroLoadout {
	CFreeHeroLoadout();
	item_definition_index_t GetItemDefInLoadoutSlot(int);
	void SetItemDefInLoadoutSlot(int, item_definition_index_t);
	CEconItemView * GetItemViewInLoadoutSlot(int);
	void SetItemViewInLoadoutSlot(int, CEconItemView *);

	// sizeof = 160
};

// src/game/shared/dota/econ/dota_item_inventory.h:437
class CLoadoutSlotShuffle {
	CLoadoutSlotShuffle();
	void Clear();
	~CLoadoutSlotShuffle();

	// sizeof = 384
};

// src/game/shared/dota/econ/dota_item_inventory.h:451
class CHeroBaseItems {
	typedef CEconItemView * PCEconItemView_t;
	CHeroBaseItems();
	PCEconItemView_t & operator[](int);

	// sizeof = 128
};

// src/game/shared/dota/econ/dota_item_inventory.h:515
struct DOTAEconItemInfo_t {
	ISchemaItemSetDefHandle m_pSet;  // +0x20
	int16 m_nHeroID;  // +0x38
	int8 m_nSlotIndex:5;  // +0x3a:0

	uint8 m_nSetItemCountWithNoSpecialPreview:4;  // +0x3b:0

	uint8 m_nStyleCount:5;  // +0x3c:0
	uint8 m_nFlags:2;  // +0x3c:5

	uint8 m_nStyleIndex:5;  // +0x3d:0
	uint8 m_nSocketType:2;  // +0x3d:5
	uint8 m_bIsBaseItem:1;  // +0x3d:7
	uint8 m_bHasSpecialLoadoutPreview:1;  // +0x3e:0
	uint8 m_bHasTeamSpecificViews:1;  // +0x3e:1
	uint8 m_bInPurgatory:1;  // +0x3e:2
	uint8 m_nPackagingNestingLevel:3;  // +0x3e:3

	int m_nPrice;  // +0x44
	int m_nRegularPrice;  // +0x48
	uint32 m_nAge;  // +0x4c
	DOTAEconItemInfo_t();
	~DOTAEconItemInfo_t();
	DOTAEconItemInfo_t(const DOTAEconItemInfo_t &);

	// sizeof = 80
};

// src/game/shared/dota/econ/dota_item_inventory.h:539
struct LoadoutInfo_t {
	const IEconItemSetDefinition * m_pSet;  // +0x0
	const CEconItemView * m_pSingleItem;  // +0x8
	bool m_bIsBaseSet;  // +0x10
	bool m_bIsPartialSet;  // +0x11

	// sizeof = 24
};

// src/game/shared/dota/econ/dota_item_inventory.h:555
struct ContainedItemInfo_t {
	const GameItemDefinition_t * m_pItemDef;  // +0x0
	int m_nContainmentDepth;  // +0x8

	// sizeof = 16
};

// src/game/shared/dota/econ/dota_item_inventory.h:584
class CEconItemLoadout {
private:

	int m_nHeroID;  // +0x0
	int m_nPrimarySlotIndex;  // +0x4
	bool m_bHasItemViews;  // +0x118

	CEconItemLoadout();
	CEconItemLoadout(const CEconItemLoadout &);
	bool operator==(const CEconItemLoadout &);
	bool operator!=(const CEconItemLoadout &);
	void InitHeroLoadout(int, int);
	bool InitGlobalItemLoadout(int);
	void InitGlobalItemLoadoutBySlotIndex(int);
	bool HasBeenInitialized();
	void SetItems(EconItemLoadoutBehavior_t, int, const EconItemIDs_t *, const style_index_t *);
	void SetItems(EconItemLoadoutBehavior_t, int, CEconItem * *, const style_index_t *);
	void SetItemsFromBaseSet();
	void ClearItems();
	int GetPrimarySlotIndex();
	int GetPrimarySlotType();
	int GetHeroID();
	bool IsGlobalItem();
	int GetSlotIndexCount();
	bool HasEconItemInSlotIndex(int);
	const EconItemIDs_t & GetEconItemInSlotIndex(int);
	style_index_t GetStyleInSlotIndex(int);
	const CEconItemView * GetEconItemViewInSlotIndex(int);
	const EconItemIDs_t * GetEconItemsIndexedBySlotIndex();
	const style_index_t * GetStyleIndicesIndexedBySlotIndex();
	const CEconItemView * GetEconItemViewsIndexedBySlotIndex();
	bool HasItemViews();
	~CEconItemLoadout();

	// sizeof = 3744
};

// src/game/shared/dota/econ/dota_item_inventory.h:686
class CDOTAPlayerInventory : public CPlayerInventory {
public:

private:

	int m_nHeroCount;  // +0x50

	CUtlMap<int, CHeroLoadout, short unsigned int, bool (*)(int const&, int const&)> m_LoadoutItems;  // +0x58
	CUtlMap<int, CFreeHeroLoadout, short unsigned int, bool (*)(int const&, int const&)> m_FreeLoadoutItems;  // +0x80
	CDOTAPlayerInventory(CDOTAPlayerInventory &);
	CDOTAPlayerInventory(const CDOTAPlayerInventory &);
	CDOTAPlayerInventory();
	bool IsLoadoutValid();
	virtual CEconItemView * GetItemInLoadout(int, int);
	CEconItemView * GetItemInLoadout(int, int, bool);
	CEconItemView * GetOverriddenItemInLoadout(int, int, bool);
	bool HasItemsForHero(int);
	bool HasHero(int);
	void GetItemSetForLoadoutItems(int, int, bool, LoadoutInfo_t *);
	bool HasPredictedItems(int);
	CEconItemView * GetPredictedItem(int, int);
	void AckPredictedItems(int);
	virtual int GetMaxItemCount();
	void AddItemToFreeLoadout(int, int, item_definition_index_t);
	void ClearFreeLoadout();
	CEconItemView * GetEconItemViewInFreeLoadout(int, int);
	item_definition_index_t GetEconItemDefInFreeLoadout(int, int);
	void BuildOwnedLoadoutItemList(int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> > *);
	style_index_t GetStyleIndexForItems(int, const EconItemIDs_t *);
	virtual void ItemHasBeenUpdated(CEconItemView *, bool, bool);
	virtual void ItemIsBeingRemoved(CEconItemView *);
	virtual void DumpInventoryToConsole(bool);
	void OnTestItemDefinitionAdded(item_definition_index_t);
	void OnTestItemDefinitionRemoved(item_definition_index_t);
	bool IsItemOrBaseItemEquipped(int, CEconItemView *);

protected:

	virtual void OnHasNewItems(int, itemid_t *);
	virtual void ValidateInventoryPositions();
	virtual void SendInventoryUpdateEvent(InventoryChangeReason_t, item_definition_index_t, itemid_t);
	virtual void SOCacheSubscribed(SOID_t, ESOCacheEvent);
	virtual void SOUpdated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SODestroyed(SOID_t, const CSharedObject *, ESOCacheEvent);

private:

	void UpdateFreeItemListForHero(item_definition_index_t, int, int);
	void RemoveItemFromLoadout(CEconItemView *);
	virtual ~CDOTAPlayerInventory();

	// vtable[9] GetItemInLoadout
	// vtable[8] GetMaxItemCount
	// vtable[20] ItemHasBeenUpdated
	// vtable[21] ItemIsBeingRemoved
	// vtable[11] DumpInventoryToConsole
	// vtable[17] OnHasNewItems
	// vtable[19] ValidateInventoryPositions
	// vtable[16] SendInventoryUpdateEvent
	// vtable[3] SOCacheSubscribed
	// vtable[1] SOUpdated
	// vtable[2] SODestroyed
	// sizeof = 552
};

// src/game/shared/dota/econ/dota_item_inventory.h:847
class CDOTAInventoryManager : public CInventoryManager {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_nDemoHeroID;  // +0x70
	int m_nDemoHeroPlayerID;  // +0x74

	bool m_bHasValidDemoHeroItem[16];  // +0xe18
	typedef CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> > AvailableItemInfoHash_t;

	AvailableItemInfoHash_t m_itemsForHeroes;  // +0xe28
	typedef CInventoryManager BaseClass;
	CDOTAInventoryManager(CDOTAInventoryManager &);
	CDOTAInventoryManager(const CDOTAInventoryManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAInventoryManager *);
	CDOTAInventoryManager();
	int GetPriority();
	virtual void GameInit(const EventGameInit_t &);
	virtual void PostInit();
	virtual void Shutdown();
	CEconItemView * GetBaseItemForHero(int, int);
	CEconItemView * GetBaseItemByDefIndex(int, item_definition_index_t);
	void GenerateBaseItems();
	bool IsDemoingHero(int);
	CEconItemView * GetHeroDemoModeItemForHero(int, int);
	void SetHeroDemoModeItems(int, int, style_index_t, int, const item_definition_index_t *, int, const itemid_t *);
	CEconItemView * FindDemoItemForNetworkedItem(CEconItemView *);
	CDOTAPlayerInventory * GetInventoryForPlayerID(int, bool);
	CEconItemView * GetItemInLoadoutForHero(int, int, int *);
	CEconItemView * GetItemInLoadoutForHeroBySlotType(int, int, int *);
	CEconItemView * GetItemInLoadoutForHeroBySlotName(const char *, const char *, int *);
	CEconItemView * GetItemInLoadoutForHeroBySlotTypeAndPlayerID(int, int, int);
	CEconItemView * GetItemInLoadoutForHeroBySlotNameAndPlayerID(const char *, const char *, int);
	CDOTAHeroSlots * GetItemSlotsForHero(int);
	item_definition_index_t SelectRandomEconItemForHeroAndSlot(int, int, bool);
	void InitPlayerLoadoutSlots();
	void BuildAvailableLoadoutItemList(int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> > *);
	void BuildDeveloperLoadoutItemList(int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> > *);
	void BuildLoadoutItemListForItem(int, CEconItemView *, const GameItemDefinition_t *, EconItemIDs_t *, style_index_t *, int);
	void BuildAvailableItemListContainingItem(const GameItemDefinition_t *, CUtlVector<ContainedItemInfo_t, CUtlMemory<ContainedItemInfo_t, int> > *);
	bool IsItemContainedWithinItem(item_definition_index_t, item_definition_index_t);
	bool IsItemContainedWithinItem(const GameItemDefinition_t *, const GameItemDefinition_t *);
	int ComputeItemContainmentDepth(const GameItemDefinition_t *, const GameItemDefinition_t *);
	void BuildItemListForItem(item_definition_index_t, bool, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> > *);
	ItemSocketType_t DetermineSocketTypeForItem(CEconItemView *);
	bool HasTeamSpecificViews(const GameItemDefinition_t *);
	void PurgeItemsForHeroesCache();
	void OnTestItemDefinitionAdded(item_definition_index_t);
	void OnTestItemDefinitionRemoved(item_definition_index_t);
	void OnTestItemSetAdded(const char *);
	void OnTestItemSetRemoved(const char *);

private:

	virtual CPlayerInventory * GeneratePlayerInventoryObject();
	void InitItemSlots();
	void SetUpDemoHeroItems();
	virtual ~CDOTAInventoryManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[1] PostInit
	// vtable[2] Shutdown
	// vtable[42] GeneratePlayerInventoryObject
	// sizeof = 3656
};
