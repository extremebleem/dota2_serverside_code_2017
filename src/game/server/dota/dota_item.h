// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_item.h:20
class CDOTA_Item : public CDOTABaseAbility {
	class NetworkVar_m_bCombinable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bPermanent {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bStackable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bRecipe {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iSharability {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bDroppable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bPurchasable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bSellable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bRequiresCharges {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bKillable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bDisassemblable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bAlertable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iInitialCharges {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCastOnPickup {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCanBeUsedOutOfInventory {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bItemEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flEnableTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flPurchaseTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAssembledTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iCurrentCharges {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iSecondaryCharges {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCombineLocked {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iPlayerOwnerID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bPurchasedWhileDead {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	int m_iState;  // +0x390
	Activity m_CastAnimation;  // +0x394
	bool m_bNeverDisassemble;  // +0x3a6
	bool m_bIsTempestDoubleClonable;  // +0x3a7

	bool m_bStackWithOtherOwners;  // +0x3b8
	bool m_bTemporarilyUncombinable;  // +0x3b9
	bool m_bHasCommentedOnEquip;  // +0x3ba

	int m_iDeclarationFlags;  // +0x3bc
	bool m_bCreatedByDisassemble;  // +0x3c0
	bool m_bHasMixedOwnership;  // +0x3c1
	bool m_bIsClonedItemProxy;  // +0x3c2

	int m_nCombineVersion;  // +0x3e4
	typedef CDOTABaseAbility BaseClass;
	typedef CDOTA_Item ThisClass;
	CDOTA_Item(CDOTA_Item &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CDOTA_Item();
	virtual ~CDOTA_Item();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Think();
	virtual Activity GetCastAnimation();
	virtual float GetBackswingTime();
	virtual void OnEquip();
	virtual void OnUnequip();
	virtual void OnPurchase(int, const char *);
	virtual void OnDisassemble();
	virtual bool IsCooldownReady();
	virtual bool ProcsMagicStick();
	virtual void TryToComment();
	virtual bool OnRune(int);
	virtual bool ProRatesChargesWhenSelling();
	virtual void ParentGainedModifier(CDOTA_Buff *);
	void SetPurchaseTime(float);
	float GetPurchaseTime();
	void SetAssembledTime(float);
	void SetPurchasedWhileDead(bool);
	bool WasPurchasedWhileDead();
	void SetCreatedByDisassemble(bool);
	bool WasCreatedByDisassemble();
	bool InSellback();
	void ExpireSellback();
	bool IsInFreeDisassembleTime();
	void SetHasMixedOwnership(bool);
	bool HasMixedOwnership();
	EItemDisassembleRule GetDisassembleRule();
	int GetInitialCharges();
	int GetCurrentCharges();
	int GetSecondaryCharges();
	void AddCharges(int);
	void SetCurrentCharges(int);
	void SetSecondaryCharges(int);
	void SpendCharge();
	void CombineStacks(CDOTA_Item *);
	virtual void OnChargeCountChanged();
	virtual void StartCooldown(float);
	void RemoveItem();
	virtual void UpdateOnRemove();
	virtual void OnDestroyed(CBaseEntity *);
	virtual void DuplicateState(CDOTA_Item *);
	virtual CDOTA_Buff * RefreshIntrinsicModifier();
	virtual bool IsItem();
	virtual bool IsCombinable();
	virtual bool IsPermanent();
	virtual bool IsStackable();
	virtual bool IsRecipe();
	virtual bool IsMuted();
	virtual bool IsDroppable();
	virtual bool IsPurchasable();
	virtual bool IsSellable();
	virtual bool IsKillable();
	virtual bool IsDisassemblable();
	virtual bool IsAlertableItem();
	virtual bool RequiresCharges();
	virtual int GetShareability();
	virtual bool IsTempestDoubleClonable();
	void SetShareability(int);
	virtual bool IsCastOnPickup();
	bool IsRecipeGenerated();
	virtual void SetKillable(bool);
	bool StacksWithOtherOwners();
	void SetStacksWithOtherOwners(bool);
	virtual int GetCost();
	virtual int GetSellPrice();
	void SetTemporarilyUncombinable(bool);
	int GetNumberOfComponentLists(const char *);
	const char * GetComponentList(const char *, int);
	virtual void IncomingCombineFrom(CDOTA_Item *);
	const char * GetResult();
	int GetItemState();
	void SetItemState(int);
	CDOTA_Buff_Item * CreateModifier(CBaseEntity *, CDOTABaseAbility *, const char *, KeyValues *);
	bool PurchasableAtMainShop();
	bool OnlyPurchasableAtSecretShop();
	bool PurchasableAtSecretShop();
	bool PurchasableAtSideShop();
	int GetMaxLevel();
	int GetItemID();
	void ClearContainer(CDOTA_Item_Physical *);
	void SetContainer(CDOTA_Item_Physical *);
	CDOTA_Item_Physical * GetContainer();
	HSCRIPT Script_GetContainer();
	const char * GetWorldDropSound();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	void SetPlayerOwnerID(int);
	int GetPlayerOwnerID();
	void Script_SetPurchaser(HSCRIPT);
	HSCRIPT Script_GetPurchaser();
	bool IsClonedItemProxy();
	void SetIsClonedItemProxy(bool);
	virtual void OnOwnerDied();
	void SetDroppable(bool);
	void SetSellable(bool);
	bool IsCombineLocked();
	void SetCombineLocked(bool);
	virtual bool CanUnitPickUp(CDOTA_BaseNPC *);
	void LaunchLoot(bool, float, float, Vector);
	void LaunchLootInitialHeight(bool, float, float, float, Vector);
	virtual void OnAbilityPinged(int);
	virtual void OwnerRespawned();
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	int GetCombineVersion();
	bool CanBeUsedOutOfInventory();
	virtual bool IsAllowedInBackpack();
	void SetItemPendingEnable(bool);
	bool IsItemPendingEnable();
	void SetItemEnableTime(float);
	float GetItemEnableTime();
	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[117] Think
	// vtable[234] GetCastAnimation
	// vtable[272] GetBackswingTime
	// vtable[333] OnEquip
	// vtable[334] OnUnequip
	// vtable[335] OnPurchase
	// vtable[336] OnDisassemble
	// vtable[245] IsCooldownReady
	// vtable[239] ProcsMagicStick
	// vtable[337] TryToComment
	// vtable[338] OnRune
	// vtable[339] ProRatesChargesWhenSelling
	// vtable[340] ParentGainedModifier
	// vtable[341] OnChargeCountChanged
	// vtable[241] StartCooldown
	// vtable[11] UpdateOnRemove
	// vtable[342] OnDestroyed
	// vtable[343] DuplicateState
	// vtable[262] RefreshIntrinsicModifier
	// vtable[223] IsItem
	// vtable[344] IsCombinable
	// vtable[345] IsPermanent
	// vtable[346] IsStackable
	// vtable[347] IsRecipe
	// vtable[348] IsMuted
	// vtable[349] IsDroppable
	// vtable[350] IsPurchasable
	// vtable[351] IsSellable
	// vtable[352] IsKillable
	// vtable[353] IsDisassemblable
	// vtable[224] IsAlertableItem
	// vtable[354] RequiresCharges
	// vtable[355] GetShareability
	// vtable[356] IsTempestDoubleClonable
	// vtable[357] IsCastOnPickup
	// vtable[358] SetKillable
	// vtable[359] GetCost
	// vtable[360] GetSellPrice
	// vtable[361] IncomingCombineFrom
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// vtable[271] OnOwnerDied
	// vtable[362] CanUnitPickUp
	// vtable[215] OnAbilityPinged
	// vtable[207] OwnerRespawned
	// vtable[66] SetTransmit
	// vtable[363] IsAllowedInBackpack
	// vtable[4] GetScriptDesc
	// sizeof = 1000
};

// src/game/server/dota/dota_item.h:316
class CDOTA_Item_Physical : public CBaseAnimating, public IPositionWatcher {
	class NetworkVar_m_hItem {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

protected:

	int m_nFlags;  // +0x4c8
private:

	float m_fCreationTime;  // +0x4cc
	typedef CDOTA_Item_Physical ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_Physical(CDOTA_Item_Physical &);
	CDOTA_Item_Physical(CDOTA_Item_Physical &);
	CDOTA_Item_Physical();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	void PrecacheContainedItem(CDOTA_Item *, const CEntityPrecacheContext *);
	bool ShouldntRemoveOnPickup();
	virtual void OnPickup();
	void SetContainedItem(CDOTA_Item *);
	void Script_SetContainedItem(HSCRIPT);
	CDOTA_Item * GetContainedItem();
	HSCRIPT Script_GetContainedItem();
	float GetCreationTime();
	virtual bool IsPartOfFOWSystem();
	virtual void NotifyPositionChanged(CBaseEntity *);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_Item_Physical();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// vtable[251] OnPickup
	// vtable[212] IsPartOfFOWSystem
	// vtable[252] NotifyPositionChanged
	// vtable[4] GetScriptDesc
	// sizeof = 1240
};

// src/game/server/dota/dota_item.h:376
class CDOTA_Item_Rune : public CBaseAnimating {
	class NetworkVar_m_iRuneType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	EHANDLE m_hRuneSpawner;  // +0x4c0
	typedef CDOTA_Item_Rune ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_Rune(CDOTA_Item_Rune &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Item_Rune();
	virtual ~CDOTA_Item_Rune();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	void SetRuneType(int);
	int GetRuneType();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void SetSpawner(EHANDLE);
	EHANDLE GetSpawner();
	virtual bool IsPartOfFOWSystem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[65] ShouldTransmit
	// vtable[212] IsPartOfFOWSystem
	// sizeof = 1224
};

// src/game/server/dota/dota_item.h:410
class CDOTA_Item_RuneSpawner_Powerup : public CBaseAnimating {
	class NetworkVar_m_flLastSpawnTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CDOTA_Item_RuneSpawner_Powerup ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_RuneSpawner_Powerup(CDOTA_Item_RuneSpawner_Powerup &);
	CDOTA_Item_RuneSpawner_Powerup(CDOTA_Item_RuneSpawner_Powerup &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Item_RuneSpawner_Powerup();
	void RecordSpawnTime(float);
	virtual ~CDOTA_Item_RuneSpawner_Powerup();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1224
};

// src/game/server/dota/dota_item.h:425
class CDOTA_Item_RuneSpawner_Bounty : public CBaseAnimating {
	class NetworkVar_m_flLastSpawnTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CDOTA_Item_RuneSpawner_Bounty ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Item_RuneSpawner_Bounty(CDOTA_Item_RuneSpawner_Bounty &);
	CDOTA_Item_RuneSpawner_Bounty(CDOTA_Item_RuneSpawner_Bounty &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Item_RuneSpawner_Bounty();
	void RecordSpawnTime(float);
	virtual ~CDOTA_Item_RuneSpawner_Bounty();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1224
};

// src/game/server/dota/dota_item.h:443
class CDOTA_ItemSpawner : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_szItemName;  // +0x308
	typedef CPointEntity BaseClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_ItemSpawner(CDOTA_ItemSpawner &);
	CDOTA_ItemSpawner(CDOTA_ItemSpawner &);
	CDOTA_ItemSpawner();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void InputSpawnItem(inputdata_t &);
	virtual void InputSetItemName(inputdata_t &);
	const char * GetItemName();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_ItemSpawner();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[207] InputSpawnItem
	// vtable[208] InputSetItemName
	// vtable[4] GetScriptDesc
	// sizeof = 784
};
