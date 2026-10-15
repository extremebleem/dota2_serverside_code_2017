// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_inventory.h:32
class CInventoryListLess {
	bool Less(const CEconItemView *, const CEconItemView *, void *);

	// sizeof = 1
};

// src/game/shared/econ/econ_item_inventory.h:39
class IInventoryUpdateListener : public ISharedObjectListener {
public:

	IInventoryUpdateListener(IInventoryUpdateListener &);
	IInventoryUpdateListener(const IInventoryUpdateListener &);
	~IInventoryUpdateListener();
	IInventoryUpdateListener();
	virtual void InventoryUpdated(CPlayerInventory *);
	virtual void SOCreated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SOUpdated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SODestroyed(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SOCacheSubscribed(SOID_t, ESOCacheEvent);
	virtual void SOCacheUnsubscribed(SOID_t, ESOCacheEvent);

	// vtable[5] InventoryUpdated
	// vtable[0] SOCreated
	// vtable[1] SOUpdated
	// vtable[2] SODestroyed
	// vtable[3] SOCacheSubscribed
	// vtable[4] SOCacheUnsubscribed
	// sizeof = 8
};

// src/game/shared/econ/econ_item_inventory.h:72
class CPlayerInventory : public ISharedObjectListener {
public:

protected:

	bool m_bGotItemsFromSteam;  // +0x40
	bool m_bHasTestItems;  // +0x41
	bool m_bIsListeningToSOCache;  // +0x42

	CPlayerInventory(const CPlayerInventory &);
	CPlayerInventory();
	virtual ~CPlayerInventory();
	bool RetrievedInventoryFromSteam();
	SOID_t GetOwner();
	int GetItemCount();
	virtual bool CanPurchaseItems(int);
	virtual int GetMaxItemCount();
	CEconItemView * GetItem(int);
	virtual CEconItemView * GetItemInLoadout(int, int);
	CEconItem * GetSOCDataForItem(itemid_t);
	CGCClientSharedObjectCache * GetSOC();
	CEconItemView * GetInventoryItemByItemID(itemid_t, int *);
	itemid_t GetHighestInventoryItemID();
	bool HasInventoryItemByDefinition(item_definition_index_t, bool);
	void GetInventoryItemsByItemDef(item_definition_index_t, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > &);
	CEconItemView * GetItemByPosition(int, int *);
	virtual bool ItemShouldBeIncluded(int);
	virtual void DumpInventoryToConsole(bool);
	int GetItemCount(item_definition_index_t);
	int GetItemStyleCount(item_definition_index_t, uint32);
	virtual int GetPreviewItemDef();
	virtual void SOClear();
	virtual void NotifyHasNewItems();
	bool AddEconItem(CEconItem *, bool, bool, bool);
	void AddTestItem(CEconItemDefinition *);
	void RemoveTestItemByItemDefIndex(item_definition_index_t);
	void RemoveTestItems();
	int FindFirstItemByDefIndex(item_definition_index_t);
	int InvalidIndex();
	void GetItemsUsingTool(const char *, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > &);
	void GetGemsUsableWithItem(CEconItemView *, attrib_definition_index_t, GemUsabilityQuery_t, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > &);
	void RequestInventory();
	virtual void RemoveItem(itemid_t);
	bool FilloutItemFromEconItem(CEconItemView *, CEconItem *);
	virtual void SendInventoryUpdateEvent(InventoryChangeReason_t, item_definition_index_t, itemid_t);
	virtual void OnHasNewItems(int, itemid_t *);
	virtual void OnItemChangedPosition(CEconItemView *, uint32);
	virtual void SOCreated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SOUpdated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SODestroyed(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SOCacheSubscribed(SOID_t, ESOCacheEvent);
	virtual void SOCacheUnsubscribed(SOID_t, ESOCacheEvent);
	void ResortInventory();
	virtual void ValidateInventoryPositions();
	virtual void ItemHasBeenUpdated(CEconItemView *, bool, bool);
	virtual void ItemIsBeingRemoved(CEconItemView *);
	int GetIndexForItem(CEconItemView *);
	void UpdateInventoryEquippedState(itemid_t, equipped_class_t, equipped_slot_t);
	void UpdateItemSetDescriptions(CEconItemView *);

private:

	void SetOwner(SOID_t &, bool);
	void ClearInventoryItems();

	// vtable[7] CanPurchaseItems
	// vtable[8] GetMaxItemCount
	// vtable[9] GetItemInLoadout
	// vtable[10] ItemShouldBeIncluded
	// vtable[11] DumpInventoryToConsole
	// vtable[12] GetPreviewItemDef
	// vtable[13] SOClear
	// vtable[14] NotifyHasNewItems
	// vtable[15] RemoveItem
	// vtable[16] SendInventoryUpdateEvent
	// vtable[17] OnHasNewItems
	// vtable[18] OnItemChangedPosition
	// vtable[0] SOCreated
	// vtable[1] SOUpdated
	// vtable[2] SODestroyed
	// vtable[3] SOCacheSubscribed
	// vtable[4] SOCacheUnsubscribed
	// vtable[19] ValidateInventoryPositions
	// vtable[20] ItemHasBeenUpdated
	// vtable[21] ItemIsBeingRemoved
	// sizeof = 80
};

// src/game/shared/econ/econ_item_inventory.h:193
class CInventoryManager : public CAutoGameSystem {
	struct inventories_t {
		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	CInventoryManager(const CInventoryManager &);
	CInventoryManager();
	virtual ~CInventoryManager();
	CPlayerInventory * RegisterNonLocalPlayerInventory(const CSteamID &, bool);
	void PreInitGC();
	void PostInitGC();
	virtual bool Init();
	virtual void PostInit();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	void GameServerSteamAPIActivated();
	virtual CPlayerInventory * GetInventoryForAccount(uint32, bool);
	CEconItem * FindItemInSOCache(CSharedObjectCache *, itemid_t);
	const CEconItem * FindItemInSOCache(const CSharedObjectCache *, itemid_t);
	virtual int GetBackpackPositionFromBackend(uint32);

private:

	virtual CPlayerInventory * GeneratePlayerInventoryObject();
	void UnregisterAllNonLocalInventories();

protected:

	bool IsValidPlayerClass(equipped_class_t);
	bool IsValidSlot(equipped_slot_t);

	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[40] GetInventoryForAccount
	// vtable[41] GetBackpackPositionFromBackend
	// vtable[42] GeneratePlayerInventoryObject
	// sizeof = 40
};
