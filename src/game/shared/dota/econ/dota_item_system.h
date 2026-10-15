// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_system.h:21
struct DOTAItemCriteria_t {
	int m_nHeroID;  // +0x0
	int m_nSlotType;  // +0x4
	const char * m_pName;  // +0x8
	bool m_bIsBaseItem;  // +0x10
	bool m_bRecentOnly;  // +0x11
	DOTAItemCriteria_t();

	// sizeof = 24
};

// src/game/shared/dota/econ/dota_item_system.h:41
class CDOTAItemSystem : public CEconItemSystem, public IDotaItemSystem, public CGameEventListener {
public:

protected:

	CDOTAItemSystem();
	item_definition_index_t SelectItemDefFromCriteria(const DOTAItemCriteria_t &);
	virtual void RequestReservedItemDefinitionList();
	virtual void ReserveItemDefinition(item_definition_index_t, const char *);
	virtual void ReleaseItemDefReservation(item_definition_index_t, const char *);
	virtual void RequestLeagueInfo(uint32);
	virtual void ItemTesting_TestItems(KeyValues *, bool);
	virtual void ItemTesting_TestItemSet(const char *, bool);
	virtual void GetInGameEventIds(CUtlVector<IEconItemSystem::InGameEventDesc_t, CUtlMemory<IEconItemSystem::InGameEventDesc_t, int> > &);
	virtual void FireGameEvent(IGameEvent *);
	void AddLeagueImageName(const char *);
	virtual item_definition_index_t GetDefaultItemForSlot(int, int);
	virtual const CDOTAPortraitInfo * GetItemPortraitDataForModel(item_definition_index_t, const char *);
	virtual const CDOTAPortraitInfo * GetGlobalPortraitDataForModel(const char *);
	virtual ~CDOTAItemSystem();

	// vtable[3] RequestReservedItemDefinitionList
	// vtable[4] ReserveItemDefinition
	// vtable[5] ReleaseItemDefReservation
	// vtable[6] RequestLeagueInfo
	// vtable[7] ItemTesting_TestItems
	// vtable[8] ItemTesting_TestItemSet
	// vtable[9] GetInGameEventIds
	// vtable[14] FireGameEvent
	// vtable[15] GetDefaultItemForSlot
	// vtable[16] GetItemPortraitDataForModel
	// vtable[17] GetGlobalPortraitDataForModel
	// sizeof = 2136
};
