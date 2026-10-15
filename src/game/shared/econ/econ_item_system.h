// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_system.h:28
class CEconItemSystem : public IEconItemSystem {
public:

private:

	GameItemSchema_t m_itemSchema;  // +0x8

	static CUtlVector<IEconItemTool*, CUtlMemory<IEconItemTool*, int> > sm_EconItemTools;
	bool m_bItemSchemaUpdated;  // +0x820

	CEconItemSystem(CEconItemSystem &);
	CEconItemSystem();
	virtual ~CEconItemSystem();
	void Init();
	void Shutdown();
	const GameItemDefinition_t * GetStaticDataForItemByDefIndex(item_definition_index_t);
	const CEconItemDefinition * GetStaticDataForItemByName(const char *);
	const CEconItemAttributeDefinition * GetStaticDataForAttributeByDefIndex(attrib_definition_index_t);
	const CEconItemAttributeDefinition * GetStaticDataForAttributeByName(const char *);
	bool DecryptItemFiles(KeyValues *, const char *);
	GameItemSchema_t * GetItemSchema();
	void ReloadWhitelist();
	void ResetAttribStringCache();
	virtual IEconItemSchema * GetItemSchemaInterface();
	virtual void RequestReservedItemDefinitionList();
	virtual void ReserveItemDefinition(item_definition_index_t, const char *);
	virtual void ReleaseItemDefReservation(item_definition_index_t, const char *);
	virtual void RequestLeagueInfo(uint32);
	virtual void ItemTesting_TestItems(KeyValues *, bool);
	virtual void AddEconItemTool(IEconItemTool *);
	virtual void RemoveEconItemTool(IEconItemTool *);
	virtual void GetInGameEventIds(CUtlVector<IEconItemSystem::InGameEventDesc_t, CUtlMemory<IEconItemSystem::InGameEventDesc_t, int> > &);
	virtual void GetTestStoreItemDetailsURL(item_definition_index_t, bool, CUtlString *);
	virtual void SetTestStoreItemDetailsItemDef(item_definition_index_t, item_definition_index_t);
	item_definition_index_t GetTestStoreItemDetailsItemDef(item_definition_index_t);
	const CUtlVector<IEconItemTool*, CUtlMemory<IEconItemTool*, int> > & GetEconItemTools();

protected:

	void ParseItemSchemaFile(const char *);
	const unsigned char * GetEncryptionKey();

	// vtable[2] GetItemSchemaInterface
	// vtable[3] RequestReservedItemDefinitionList
	// vtable[4] ReserveItemDefinition
	// vtable[5] ReleaseItemDefReservation
	// vtable[6] RequestLeagueInfo
	// vtable[7] ItemTesting_TestItems
	// vtable[0] AddEconItemTool
	// vtable[1] RemoveEconItemTool
	// vtable[9] GetInGameEventIds
	// vtable[10] GetTestStoreItemDetailsURL
	// vtable[11] SetTestStoreItemDetailsItemDef
	// sizeof = 2088
};
