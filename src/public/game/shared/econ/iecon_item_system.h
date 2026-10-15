// Reconstructed from DWARF by pahole; not original source.

// src/public/game/shared/econ/iecon_item_system.h:25
struct attachedparticlecontrolpoint_t {
	short int nControlPoint;  // +0x0
	uint8 nAttachType;  // +0x2

	attachedparticlecontrolpoint_t();

	// sizeof = 32
};

// src/public/game/shared/econ/iecon_item_system.h:47
struct attachedparticlesystem_t {
	bool bFollowRootBone;  // +0x18
	bool bFlyingCourier;  // +0x19
	bool bGroundCourier;  // +0x1a
	bool bDireOnly;  // +0x1b
	bool bRadiantOnly;  // +0x1c

	int iCustomType;  // +0x20
	int iCount;  // +0x24
	int nSystemID;  // +0x28
	uint32 defaultR;  // +0x30
	uint32 defaultG;  // +0x34
	uint32 defaultB;  // +0x38
	uint8 nRootAttachType;  // +0x3c

	attachedparticlesystem_t();
	~attachedparticlesystem_t();

	// sizeof = 96
};

// src/public/game/shared/econ/iecon_item_system.h:85
struct AssetModifierUIInfo_t {
	const char * m_pModifierType;  // +0x0
	const char * m_pKeyName;  // +0x8
	const char * m_pUILabel;  // +0x10

	const char * m_pDefaultValue;  // +0x20
	bool m_bSetValueOnlyIfNotEqualToDefault;  // +0x28

	// sizeof = 48
};

// src/public/game/shared/econ/iecon_item_system.h:96
struct AssetModifierEntry_t {
	const char * m_pModifierType;  // +0x0
	const char * m_pAsset;  // +0x8
	const char * m_pModifier;  // +0x10

	// sizeof = 32
};

// src/public/game/shared/econ/iecon_item_system.h:105
struct EconItemStyleInfo_t {
	const char * m_pStyleName;  // +0x0
	const char * m_pIconName;  // +0x8
	const char * m_pModelName;  // +0x10
	int m_nSkin;  // +0x18

	// sizeof = 32
};

// src/public/game/shared/econ/iecon_item_system.h:118
class IEconItemAttributeDefinition {
	int ()() * * _vptr.IEconItemAttributeDefinition;  // +0x0
	~IEconItemAttributeDefinition();
	IEconItemAttributeDefinition(IEconItemAttributeDefinition &);
	IEconItemAttributeDefinition(const IEconItemAttributeDefinition &);
	IEconItemAttributeDefinition & operator=(IEconItemAttributeDefinition &);
	IEconItemAttributeDefinition & operator=(const IEconItemAttributeDefinition &);
	IEconItemAttributeDefinition();
	virtual uint16 GetDefinitionIndex();
	virtual const char * GetDefinitionName();
	virtual const char * GetDescriptionString();
	virtual const char * GetAttributeClass();

	// vtable[0] GetDefinitionIndex
	// vtable[1] GetDefinitionName
	// vtable[2] GetDescriptionString
	// vtable[3] GetAttributeClass
	// sizeof = 8
};

// src/public/game/shared/econ/iecon_item_system.h:132
class IEconLootListDefinition {
	int ()() * * _vptr.IEconLootListDefinition;  // +0x0
	~IEconLootListDefinition();
	IEconLootListDefinition(IEconLootListDefinition &);
	IEconLootListDefinition(const IEconLootListDefinition &);
	IEconLootListDefinition & operator=(IEconLootListDefinition &);
	IEconLootListDefinition & operator=(const IEconLootListDefinition &);
	IEconLootListDefinition();
	virtual const char * GetName();
	virtual const CUtlVector<int, CUtlMemory<int, int> > & GetLootListContents();
	virtual float GetWeight(int);
	virtual KeyValues * GenerateKeyValues();
	virtual bool IsServerList();
	virtual int GetAdditionalDropCount();
	virtual bool GetAdditionalDrop(int, CUtlString &, CUtlString &, float &);
	virtual int GetEscalatingChanceSlotCount();
	virtual const char * GetEscalatingChanceDropItemName(int);
	virtual const char * GetEscalatingChanceDropTreasureRarityOverride(int);
	virtual int GetRandomAttributeGroupCount();
	virtual bool GetRandomAttributeGroup(int, float &, float &);
	virtual int GetRandomAttributeCount(int);
	virtual bool GetRandomAttribute(int, int, float &, int &, int &);
	virtual bool AddItem(int, float);
	virtual void PurgeItems();

	// vtable[0] GetName
	// vtable[1] GetLootListContents
	// vtable[2] GetWeight
	// vtable[3] GenerateKeyValues
	// vtable[4] IsServerList
	// vtable[5] GetAdditionalDropCount
	// vtable[6] GetAdditionalDrop
	// vtable[7] GetEscalatingChanceSlotCount
	// vtable[8] GetEscalatingChanceDropItemName
	// vtable[9] GetEscalatingChanceDropTreasureRarityOverride
	// vtable[10] GetRandomAttributeGroupCount
	// vtable[11] GetRandomAttributeGroup
	// vtable[12] GetRandomAttributeCount
	// vtable[13] GetRandomAttribute
	// vtable[14] AddItem
	// vtable[15] PurgeItems
	// sizeof = 8
};

// src/public/game/shared/econ/iecon_item_system.h:164
class IEconItemSetDefinition {
	int ()() * * _vptr.IEconItemSetDefinition;  // +0x0
	IEconItemSetDefinition(IEconItemSetDefinition &);
	IEconItemSetDefinition(const IEconItemSetDefinition &);
	IEconItemSetDefinition & operator=(IEconItemSetDefinition &);
	IEconItemSetDefinition & operator=(const IEconItemSetDefinition &);
	IEconItemSetDefinition();
	virtual const char * GetName();
	virtual const char * GetLocKey();
	virtual const char * GetUnlocalizedName();
	virtual item_definition_index_t GetBundle();
	virtual int GetItemCount();
	virtual item_definition_index_t GetItemDef(int);
	virtual uint8 GetMaxItemRarity();
	virtual bool IsTestItemSet();

	// vtable[0] GetName
	// vtable[1] GetLocKey
	// vtable[2] GetUnlocalizedName
	// vtable[3] GetBundle
	// vtable[4] GetItemCount
	// vtable[5] GetItemDef
	// vtable[6] GetMaxItemRarity
	// vtable[7] IsTestItemSet
	// sizeof = 8
};

// src/public/game/shared/econ/iecon_item_system.h:182
class IEconItemDefinition {
	int ()() * * _vptr.IEconItemDefinition;  // +0x0
	IEconItemDefinition(IEconItemDefinition &);
	IEconItemDefinition(const IEconItemDefinition &);
	IEconItemDefinition();
	virtual item_definition_index_t GetDefinitionIndex();
	virtual const char * GetPrefabName();
	virtual const char * GetItemBaseName();
	virtual const char * GetItemTypeName();
	virtual const char * GetItemDesc();
	virtual const char * GetInventoryImage();
	virtual int GetBasePlayerDisplayModelCount();
	virtual const char * GetBasePlayerDisplayModel(int);
	virtual int GetLoadoutSlot();
	virtual int GetHeroID();
	virtual uint8 GetRarity();
	virtual const char * GetSlotTypeName();
	virtual int GetBundleItemCount();
	virtual item_definition_index_t GetBundleItem(int);
	virtual bool IsBaseItem();
	virtual bool IsPublicItem();
	virtual bool IsBundle();
	virtual int GetSkin();
	virtual void GetStyleInformation(CUtlVector<EconItemStyleInfo_t, CUtlMemory<EconItemStyleInfo_t, int> > *);
	virtual void GetAssetModifiersActiveForStyle(int, CUtlVector<AssetModifierEntry_t, CUtlMemory<AssetModifierEntry_t, int> > *);
	virtual const char * FindEntityModelModifier(const char *);

	// vtable[0] GetDefinitionIndex
	// vtable[1] GetPrefabName
	// vtable[2] GetItemBaseName
	// vtable[3] GetItemTypeName
	// vtable[4] GetItemDesc
	// vtable[5] GetInventoryImage
	// vtable[6] GetBasePlayerDisplayModelCount
	// vtable[7] GetBasePlayerDisplayModel
	// vtable[8] GetLoadoutSlot
	// vtable[9] GetHeroID
	// vtable[10] GetRarity
	// vtable[11] GetSlotTypeName
	// vtable[12] GetBundleItemCount
	// vtable[13] GetBundleItem
	// vtable[14] IsBaseItem
	// vtable[15] IsPublicItem
	// vtable[16] IsBundle
	// vtable[17] GetSkin
	// vtable[18] GetStyleInformation
	// vtable[19] GetAssetModifiersActiveForStyle
	// vtable[20] FindEntityModelModifier
	// sizeof = 8
};

// src/public/game/shared/econ/iecon_item_system.h:215
class IEconItemSchema {
	int ()() * * _vptr.IEconItemSchema;  // +0x0
	IEconItemSchema & operator=(IEconItemSchema &);
	IEconItemSchema & operator=(const IEconItemSchema &);
	IEconItemSchema();
	virtual bool BInit(const char *, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BInitLootLists(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, bool);
	virtual int GetItemDefinitionCount();
	virtual const IEconItemDefinition * GetItemDefinitionInterfaceByMapIndex(int);
	virtual IEconItemDefinition * GetItemDefinitionInterface(item_definition_index_t);
	virtual IEconItemDefinition * GetDefaultItemDefinitionInterface();
	virtual int GetLoadoutSlotCount();
	virtual const char * GetLoadoutSlotName(int);
	virtual int GetLoadoutSlot(const char *);
	virtual int GetCharacterSlotType(int, int);
	virtual int GetCharacterID(const char *);
	virtual int GetCharacterCount();
	virtual const char * GetCharacterName(int);
	virtual const char * GetCharacterModel(int);
	virtual const attachedparticlesystem_t * GetAttributeControlledParticleSystem(int);
	virtual const attachedparticlesystem_t * GetAttributeControlledParticleSystemByIndex(AttachedParticleSystemIndex_t);
	virtual const attachedparticlesystem_t * FindAttributeControlledParticleSystem(const char *, AttachedParticleSystemIndex_t *);
	virtual int GetNumAttributeControlledParticleSystems();
	virtual int GetQualityDefinitionCount();
	virtual const char * GetQualityName(uint8);
	virtual int GetQualityIndex(const char *);
	virtual int GetRarityDefinitionCount();
	virtual const char * GetRarityName(uint8);
	virtual const char * GetRarityLocKey(uint8);
	virtual const char * GetRarityColor(uint8);
	virtual const char * GetRarityLootList(uint8);
	virtual int GetRarityIndex(const char *);
	virtual const IEconItemAttributeDefinition * GetAttributeDefinitionInterface(int);
	virtual int GetItemSetCount();
	virtual const IEconItemSetDefinition * GetItemSet(int);
	virtual const IEconItemSetDefinition * FindItemSetByName(const char *);
	virtual void PurgeLootLists();
	virtual const IEconLootListDefinition * GetLootListInterfaceByName(const char *, int *);
	virtual const IEconLootListDefinition * GetLootListInterfaceByIndex(int);
	virtual const int GetLootListIndex(const char *);
	virtual const int GetLootListInterfaceCount();
	virtual KeyValues * FindDefinitionPrefabByName(const char *);
	virtual attachedparticlesystem_t GetAttachedParticleSystemInfo(KeyValues *, int32);
	virtual bool BInitAttributeControlledParticleSystems(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BInitItems(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BInitItemSets(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual CEconItemDefinition * GetItemDefinitionByName(const char *);
	virtual const CEconItemDefinition * GetItemDefinitionByName(const char *);
	virtual void ItemTesting_CreateTestItemDefinitionNoClone(item_definition_index_t, KeyValues *);
	virtual void ItemTesting_DiscardTestItemDefinition(item_definition_index_t);
	virtual void ItemTesting_DiscardAllTestItemDefinitions();
	virtual bool ItemTesting_IsTestItemDefinition(item_definition_index_t);
	virtual CEconItemSetDefinition * ItemTest_CreateTestItemSet(KeyValues *);
	virtual void ItemTesting_DiscardTestItemSet(const char *);
	virtual void ItemTesting_GetTestItemSetNames(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual void ItemTesting_DiscardAllTestItemSets();
	virtual void ItemTesting_GetTestItemDefinitionIndices(CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > &);
	virtual void ItemTesting_GetAllItemDefinitionIndices(CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > &);
	virtual const char * GetSoundMaterialNameByID(int);
	virtual int GetSoundMaterialID(const char *);
	virtual int GetSoundMaterialCount();
	virtual int GetSoundMaterialIDByIndex(int);
	virtual IEconItemDefinition * CreateTempItemDefinition(KeyValues *);
	virtual void DeleteTempItemDefinition(IEconItemDefinition *);
	virtual void GetAssetModifiersUIInfo(const char *, CUtlVector<AssetModifierUIInfo_t, CUtlMemory<AssetModifierUIInfo_t, int> > &);

	// vtable[0] BInit
	// vtable[1] BInitLootLists
	// vtable[2] GetItemDefinitionCount
	// vtable[3] GetItemDefinitionInterfaceByMapIndex
	// vtable[4] GetItemDefinitionInterface
	// vtable[5] GetDefaultItemDefinitionInterface
	// vtable[6] GetLoadoutSlotCount
	// vtable[7] GetLoadoutSlotName
	// vtable[8] GetLoadoutSlot
	// vtable[9] GetCharacterSlotType
	// vtable[10] GetCharacterID
	// vtable[11] GetCharacterCount
	// vtable[12] GetCharacterName
	// vtable[13] GetCharacterModel
	// vtable[14] GetAttributeControlledParticleSystem
	// vtable[15] GetAttributeControlledParticleSystemByIndex
	// vtable[16] FindAttributeControlledParticleSystem
	// vtable[17] GetNumAttributeControlledParticleSystems
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
	// vtable[28] GetItemSetCount
	// vtable[29] GetItemSet
	// vtable[30] FindItemSetByName
	// vtable[31] PurgeLootLists
	// vtable[32] GetLootListInterfaceByName
	// vtable[33] GetLootListInterfaceByIndex
	// vtable[34] GetLootListIndex
	// vtable[35] GetLootListInterfaceCount
	// vtable[36] FindDefinitionPrefabByName
	// vtable[37] GetAttachedParticleSystemInfo
	// vtable[38] BInitAttributeControlledParticleSystems
	// vtable[39] BInitItems
	// vtable[40] BInitItemSets
	// vtable[41] GetItemDefinitionByName
	// vtable[42] GetItemDefinitionByName
	// vtable[43] ItemTesting_CreateTestItemDefinitionNoClone
	// vtable[44] ItemTesting_DiscardTestItemDefinition
	// vtable[45] ItemTesting_DiscardAllTestItemDefinitions
	// vtable[46] ItemTesting_IsTestItemDefinition
	// vtable[47] ItemTest_CreateTestItemSet
	// vtable[48] ItemTesting_DiscardTestItemSet
	// vtable[49] ItemTesting_GetTestItemSetNames
	// vtable[50] ItemTesting_DiscardAllTestItemSets
	// vtable[51] ItemTesting_GetTestItemDefinitionIndices
	// vtable[52] ItemTesting_GetAllItemDefinitionIndices
	// vtable[53] GetSoundMaterialNameByID
	// vtable[54] GetSoundMaterialID
	// vtable[55] GetSoundMaterialCount
	// vtable[56] GetSoundMaterialIDByIndex
	// vtable[57] CreateTempItemDefinition
	// vtable[58] DeleteTempItemDefinition
	// vtable[59] GetAssetModifiersUIInfo
	// sizeof = 8
};

// src/public/game/shared/econ/iecon_item_system.h:345
class IEconItemSystem {
	int ()() * * _vptr.IEconItemSystem;  // +0x0
	IEconItemSystem(IEconItemSystem &);
	IEconItemSystem(const IEconItemSystem &);
	IEconItemSystem();
	virtual void AddEconItemTool(IEconItemTool *);
	virtual void RemoveEconItemTool(IEconItemTool *);
	virtual IEconItemSchema * GetItemSchemaInterface();
	virtual void RequestReservedItemDefinitionList();
	virtual void ReserveItemDefinition(item_definition_index_t, const char *);
	virtual void ReleaseItemDefReservation(item_definition_index_t, const char *);
	virtual void RequestLeagueInfo(uint32);
	virtual void ItemTesting_TestItems(KeyValues *, bool);
	virtual void ItemTesting_TestItemSet(const char *, bool);
	virtual void GetInGameEventIds(CUtlVector<IEconItemSystem::InGameEventDesc_t, CUtlMemory<IEconItemSystem::InGameEventDesc_t, int> > &);
	virtual void GetTestStoreItemDetailsURL(item_definition_index_t, bool, CUtlString *);
	virtual void SetTestStoreItemDetailsItemDef(item_definition_index_t, item_definition_index_t);

	// vtable[0] AddEconItemTool
	// vtable[1] RemoveEconItemTool
	// vtable[2] GetItemSchemaInterface
	// vtable[3] RequestReservedItemDefinitionList
	// vtable[4] ReserveItemDefinition
	// vtable[5] ReleaseItemDefReservation
	// vtable[6] RequestLeagueInfo
	// vtable[7] ItemTesting_TestItems
	// vtable[8] ItemTesting_TestItemSet
	// vtable[9] GetInGameEventIds
	// vtable[10] GetTestStoreItemDetailsURL
	// vtable[11] SetTestStoreItemDetailsItemDef
	// sizeof = 8
};
