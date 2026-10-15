// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_unit_inventory.h:137
struct sSharedCooldownInfo {
private:

	float cooldownLength;  // +0x8
	float cooldownTime;  // +0xc
	sSharedCooldownInfo();

	~sSharedCooldownInfo();

	// sizeof = 16
};

// src/game/shared/dota/dota_unit_inventory.h:146
class CDOTA_UnitInventory {
	class NetworkVar_m_hItems {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iParity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hInventoryParent {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bStashEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hTransientCastItem {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CDOTA_UnitInventory;  // +0x0
private:

	bool m_bItemQueried[17];  // +0x64

	bool m_bIsActive;  // +0x80

	float m_flRecentlyDroppedItemsTime;  // +0xa0

	int m_nPreGamePlayerID;  // +0xc0
	~CDOTA_UnitInventory();
	CDOTA_UnitInventory(CDOTA_UnitInventory &);
	CDOTA_UnitInventory(const CDOTA_UnitInventory &);
	CDOTA_UnitInventory & operator=(CDOTA_UnitInventory &);
	CDOTA_UnitInventory & operator=(const CDOTA_UnitInventory &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CDOTA_UnitInventory();
	void Think();
	int FindEmptySpaceInInventory(int, CDOTA_Item *);
	CDOTA_Item * FindItemInInventory(const char *, int, bool, int);
	int FindItemSlotInInventory(CDOTA_Item *, int);
	int CountItemInInventory(const char *, int);
	void StartUniqueItemQuery();
	bool IsAllowedLocation(int, int);
	CDOTA_Item * GetItemInSlot(int);
	void SetParent(CBaseEntity *);
	CDOTA_BaseNPC * GetParent();
	int GetPlayerOwnerID();
	void SetPreGamePlayerID(int);
	int GetPreGamePlayerID();
	int FindOrAddSharedCooldown(const char *, float);
	float GetSharedCooldownTime(const char *);
	float GetSharedCooldownLength(const char *);
	void SetActive(bool);
	bool IsActive();
	int NumItemsInStash();
	int NumItemsInInventory();
	void DumpInventorySlots();
	bool IsStashEnabled();
	void SetStashEnabled(bool);
	DOTA_INVALID_ORDERS AddItem(CDOTA_Item *, int, int, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *, bool);
	void AddItems(CUtlVector<CHandle<CDOTA_Item>, CUtlMemory<CHandle<CDOTA_Item>, int> > *, int);
	void RemoveItem(CDOTA_Item *, bool, bool);
	void MoveItem(CDOTA_Item *, int);
	void OnShopChange(DOTA_SHOP_TYPE, DOTA_SHOP_TYPE);
	CDOTA_Item * TryItemCombine(CDOTA_Item *, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *, int *);
	void CollectPotentialCombineItems(int, int, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *);
	bool CheckPendingCombines(int, int, CUtlVector<CHandle<CDOTA_Item>, CUtlMemory<CHandle<CDOTA_Item>, int> > *, CDOTA_Item * *);
	void ReadyItemForUse(CDOTA_Item *);
	void SellItem(CDOTA_Item *);
	void DisassembleItem(CDOTA_Item *);
	void EjectItemFromStash(CDOTA_Item *);
	void DropItemAtFountain(CDOTA_Item *);
	void DropItemOnLocation(CDOTA_Item *, Vector);
	bool PickupItem(CDOTA_Item_Physical *);
	bool IsBluePrintComplete(const char *, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *);
	void RemoveComponentsInBluePrint(CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *);
	void StartCooldown(CDOTABaseAbility *, float);
	void SetNextAutobuyItem(const char *);
	void IllusionInventoryCopySlot(int, CDOTA_Item *);
	bool SetItemInSlot(int, CDOTA_Item *);
	void SwapItems(int, int);
	void AddDeletionPendingCombinedItem(EHANDLE);
	bool HasDeletionPendingCombinedItem(EHANDLE);
	void MarkAsChanged();
	void UserMsg_SharedCooldown(const CDOTAUserMsg_SharedCooldown_t &);
	void UserMsg_SetNextAutobuyItem(const CDOTAUserMsg_SetNextAutobuyItem_t &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 200
};

// src/game/shared/dota/dota_unit_inventory.h:146
class CDOTA_UnitInventory {
	class NetworkVar_m_hItems {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iParity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hInventoryParent {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bStashEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hTransientCastItem {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CDOTA_UnitInventory;  // +0x0
private:

	bool m_bItemQueried[17];  // +0x64

	bool m_bIsActive;  // +0x80

	float m_flRecentlyDroppedItemsTime;  // +0xa0

	int m_nPreGamePlayerID;  // +0xc0
	typedef CDOTA_UnitInventory ThisClass;
	~CDOTA_UnitInventory();
	CDOTA_UnitInventory(CDOTA_UnitInventory &);
	CDOTA_UnitInventory(const CDOTA_UnitInventory &);
	CDOTA_UnitInventory & operator=(CDOTA_UnitInventory &);
	CDOTA_UnitInventory & operator=(const CDOTA_UnitInventory &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CDOTA_UnitInventory();
	void Think();
	int FindEmptySpaceInInventory(int, CDOTA_Item *);
	CDOTA_Item * FindItemInInventory(const char *, int, bool, int);
	int FindItemSlotInInventory(CDOTA_Item *, int);
	int CountItemInInventory(const char *, int);
	void StartUniqueItemQuery();
	bool IsAllowedLocation(int, int);
	CDOTA_Item * GetItemInSlot(int);
	void SetParent(CBaseEntity *);
	CDOTA_BaseNPC * GetParent();
	int GetPlayerOwnerID();
	void SetPreGamePlayerID(int);
	int GetPreGamePlayerID();
	int FindOrAddSharedCooldown(const char *, float);
	float GetSharedCooldownTime(const char *);
	float GetSharedCooldownLength(const char *);
	void SetActive(bool);
	bool IsActive();
	int NumItemsInStash();
	int NumItemsInInventory();
	void DumpInventorySlots();
	bool IsStashEnabled();
	void SetStashEnabled(bool);
	DOTA_INVALID_ORDERS AddItem(CDOTA_Item *, int, int, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *, bool);
	void AddItems(CUtlVector<CHandle<CDOTA_Item>, CUtlMemory<CHandle<CDOTA_Item>, int> > *, int);
	void RemoveItem(CDOTA_Item *, bool, bool);
	void MoveItem(CDOTA_Item *, int);
	void OnShopChange(DOTA_SHOP_TYPE, DOTA_SHOP_TYPE);
	CDOTA_Item * TryItemCombine(CDOTA_Item *, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *, int *);
	void CollectPotentialCombineItems(int, int, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *);
	bool CheckPendingCombines(int, int, CUtlVector<CHandle<CDOTA_Item>, CUtlMemory<CHandle<CDOTA_Item>, int> > *, CDOTA_Item * *);
	void ReadyItemForUse(CDOTA_Item *);
	void SellItem(CDOTA_Item *);
	void DisassembleItem(CDOTA_Item *);
	void EjectItemFromStash(CDOTA_Item *);
	void DropItemAtFountain(CDOTA_Item *);
	void DropItemOnLocation(CDOTA_Item *, Vector);
	bool PickupItem(CDOTA_Item_Physical *);
	bool IsBluePrintComplete(const char *, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *, CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *);
	void RemoveComponentsInBluePrint(CUtlVector<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> > *);
	void StartCooldown(CDOTABaseAbility *, float);
	void SetNextAutobuyItem(const char *);
	void IllusionInventoryCopySlot(int, CDOTA_Item *);
	bool SetItemInSlot(int, CDOTA_Item *);
	void SwapItems(int, int);
	void AddDeletionPendingCombinedItem(EHANDLE);
	bool HasDeletionPendingCombinedItem(EHANDLE);
	void MarkAsChanged();
	void UserMsg_SharedCooldown(const CDOTAUserMsg_SharedCooldown_t &);
	void UserMsg_SetNextAutobuyItem(const CDOTAUserMsg_SetNextAutobuyItem_t &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 200
};
