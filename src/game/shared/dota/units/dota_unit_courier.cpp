// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_courier.cpp:52
class CInfoCourierSpawnRadiant : public CPointEntity {
public:

private:

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
	CInfoCourierSpawnRadiant(CInfoCourierSpawnRadiant &);
	CInfoCourierSpawnRadiant(CInfoCourierSpawnRadiant &);
	CInfoCourierSpawnRadiant();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CInfoCourierSpawnRadiant();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// src/game/shared/dota/units/dota_unit_courier.cpp:53
class CInfoCourierSpawnDire : public CPointEntity {
public:

private:

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
	CInfoCourierSpawnDire(CInfoCourierSpawnDire &);
	CInfoCourierSpawnDire(CInfoCourierSpawnDire &);
	CInfoCourierSpawnDire();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CInfoCourierSpawnDire();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// src/game/shared/dota/units/dota_unit_courier.cpp:54
class CInfoCourierSpawn : public CPointEntity {
public:

private:

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
	CInfoCourierSpawn(CInfoCourierSpawn &);
	CInfoCourierSpawn(CInfoCourierSpawn &);
	CInfoCourierSpawn();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CInfoCourierSpawn();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// src/game/shared/dota/units/dota_unit_courier.cpp:117
class CDOTA_Modifier_Track_Order_Issuer : public CDOTA_Buff {
public:

private:

	int m_nIssuerPlayerIndex;  // +0xba8
	float m_nPlayerCommandTime[24];  // +0xbac
	CDOTA_Modifier_Track_Order_Issuer();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	int GetLastOrderIssuerPlayerIndex();
	virtual bool ShouldSendToClients();
	virtual ~CDOTA_Modifier_Track_Order_Issuer();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[8] ShouldSendToClients
	// sizeof = 3088
};

// src/game/shared/dota/units/dota_unit_courier.cpp:203
class C_CDOTA_Unit_Courier_MapInstall {
	C_CDOTA_Unit_Courier_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_courier.cpp:849
class CDOTA_Modifier_Courier_Morph_Effect : public CDOTA_Buff {
public:

	CDOTA_Modifier_Courier_Morph_Effect(CDOTA_Modifier_Courier_Morph_Effect &);
	CDOTA_Modifier_Courier_Morph_Effect(const CDOTA_Modifier_Courier_Morph_Effect &);
	CDOTA_Modifier_Courier_Morph_Effect();
	virtual bool IsHidden();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual ~CDOTA_Modifier_Courier_Morph_Effect();

	// vtable[11] IsHidden
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1009
class CDOTA_Modifier_Courier_Flying : public CDOTA_Buff {
public:

private:

	int base_movespeed;  // +0xba8
	int bonus_armor;  // +0xbac
	CDOTA_Modifier_Courier_Flying();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPermanent();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedOverride(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Courier_Flying();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[23] IsPermanent
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierIncomingDamage_Percentage
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1113
class CDOTA_Ability_Courier_ReturnToBase : public CDOTABaseAbility {
public:

private:

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
	CDOTA_Ability_Courier_ReturnToBase(CDOTA_Ability_Courier_ReturnToBase &);
	CDOTA_Ability_Courier_ReturnToBase(CDOTA_Ability_Courier_ReturnToBase &);
	CDOTA_Ability_Courier_ReturnToBase();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Courier_ReturnToBase();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1146
class CDOTA_Ability_Courier_GoToSecretShop : public CDOTABaseAbility {
public:

private:

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
	CDOTA_Ability_Courier_GoToSecretShop(CDOTA_Ability_Courier_GoToSecretShop &);
	CDOTA_Ability_Courier_GoToSecretShop(CDOTA_Ability_Courier_GoToSecretShop &);
	CDOTA_Ability_Courier_GoToSecretShop();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Courier_GoToSecretShop();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1182
class CDOTA_Ability_Courier_TransferItems : public CDOTABaseAbility {
public:

private:

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
	CDOTA_Ability_Courier_TransferItems(CDOTA_Ability_Courier_TransferItems &);
	CDOTA_Ability_Courier_TransferItems(CDOTA_Ability_Courier_TransferItems &);
	CDOTA_Ability_Courier_TransferItems();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Courier_TransferItems();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1196
class C_CDOTA_Ability_Courier_TransferItems_MapInstall {
	C_CDOTA_Ability_Courier_TransferItems_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1241
class CDOTA_Ability_Courier_TransferItems_ToOtherPlayer : public CDOTABaseAbility {
public:

private:

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
	CDOTA_Ability_Courier_TransferItems_ToOtherPlayer(CDOTA_Ability_Courier_TransferItems_ToOtherPlayer &);
	CDOTA_Ability_Courier_TransferItems_ToOtherPlayer(CDOTA_Ability_Courier_TransferItems_ToOtherPlayer &);
	CDOTA_Ability_Courier_TransferItems_ToOtherPlayer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsHiddenAbilityCastable();
	virtual ~CDOTA_Ability_Courier_TransferItems_ToOtherPlayer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[218] IsHiddenAbilityCastable
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1256
class C_CDOTA_Ability_Courier_TransferItems_ToOtherPlayer_MapInstall {
	C_CDOTA_Ability_Courier_TransferItems_ToOtherPlayer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1303
class CDOTA_Modifier_Courier_TransferItems : public CDOTA_Buff {
public:

	EHANDLE m_hTarget;  // +0xba8
	CDOTA_Modifier_Courier_TransferItems();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Courier_TransferItems();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1457
class CDOTA_Ability_Courier_TakeStashAndTransferItems : public CDOTABaseAbility {
public:

private:

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
	CDOTA_Ability_Courier_TakeStashAndTransferItems(CDOTA_Ability_Courier_TakeStashAndTransferItems &);
	CDOTA_Ability_Courier_TakeStashAndTransferItems(CDOTA_Ability_Courier_TakeStashAndTransferItems &);
	CDOTA_Ability_Courier_TakeStashAndTransferItems();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsHiddenAbilityCastable();
	virtual ~CDOTA_Ability_Courier_TakeStashAndTransferItems();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[218] IsHiddenAbilityCastable
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1468
class C_CDOTA_Ability_Courier_TakeStashAndTransferItems_MapInstall {
	C_CDOTA_Ability_Courier_TakeStashAndTransferItems_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1552
class CDOTA_Ability_Courier_TakeStashItems : public CDOTABaseAbility {
public:

private:

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
	CDOTA_Ability_Courier_TakeStashItems(CDOTA_Ability_Courier_TakeStashItems &);
	CDOTA_Ability_Courier_TakeStashItems(CDOTA_Ability_Courier_TakeStashItems &);
	CDOTA_Ability_Courier_TakeStashItems();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Courier_TakeStashItems();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1567
class C_CDOTA_Ability_Courier_TakeStashItems_MapInstall {
	C_CDOTA_Ability_Courier_TakeStashItems_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1675
class CDOTA_Modifier_Courier_TakeStashItems : public CDOTA_Buff {
public:

	EHANDLE m_hStashOwner;  // +0xba8
	EHANDLE m_hLocation;  // +0xbac
	bool m_bTransferAfterTake;  // +0xbb0

	int stash_pickup_distance;  // +0xbb4
	CDOTA_Modifier_Courier_TakeStashItems();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	void GrabStashItems();
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Courier_TakeStashItems();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1807
class CDOTA_Ability_Courier_ReturnStashItems : public CDOTABaseAbility {
public:

private:

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
	CDOTA_Ability_Courier_ReturnStashItems(CDOTA_Ability_Courier_ReturnStashItems &);
	CDOTA_Ability_Courier_ReturnStashItems(CDOTA_Ability_Courier_ReturnStashItems &);
	CDOTA_Ability_Courier_ReturnStashItems();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Courier_ReturnStashItems();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1855
class CDOTA_Modifier_Courier_ReturnStashItems : public CDOTA_Buff {
public:

	EHANDLE m_hLocation;  // +0xba8
	CDOTA_Modifier_Courier_ReturnStashItems();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Courier_ReturnStashItems();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_courier.cpp:1979
class CDOTA_Ability_Courier_Burst : public CDOTABaseAbility {
public:

private:

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
	CDOTA_Ability_Courier_Burst(CDOTA_Ability_Courier_Burst &);
	CDOTA_Ability_Courier_Burst(CDOTA_Ability_Courier_Burst &);
	CDOTA_Ability_Courier_Burst();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Courier_Burst();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_courier.cpp:2005
class CDOTA_Modifier_Courier_Burst : public CDOTA_Buff {
public:

private:

	int movement_speed;  // +0xba8
	int m_flDamageAbsorbed;  // +0xbac
	float damage_absorb;  // +0xbb0
	CDOTA_Modifier_Courier_Burst();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeed_Max(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Courier_Burst();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeed_Max
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_courier.cpp:2094
class CDOTA_Ability_Courier_Morph : public CDOTABaseAbility {
public:

private:

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
	CDOTA_Ability_Courier_Morph(CDOTA_Ability_Courier_Morph &);
	CDOTA_Ability_Courier_Morph(CDOTA_Ability_Courier_Morph &);
	CDOTA_Ability_Courier_Morph();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsHiddenAbilityCastable();
	virtual ~CDOTA_Ability_Courier_Morph();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[218] IsHiddenAbilityCastable
	// sizeof = 912
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoCourierSpawnRadiant::Schema_DynamicBinding  (line 52, @0x0000000002ab7300, libserver.so)
// globals: CInfoCourierSpawnRadiant::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoCourierSpawnRadiant::Schema_DynamicBinding(
        const CInfoCourierSpawnRadiant *const this)
{
  return CInfoCourierSpawnRadiant::s_pSchemaBinding;
}


// CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 52, @0x0000000002ab7310, libserver.so)
// globals: CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoCourierSpawnRadiant::CEntityInstanceEntityClass *const this)
{
  return CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::DestructInstance  (line 52, @0x0000000002ab7320, libserver.so)  // inlines: Destruct<CInfoCourierSpawnRadiant>
void __fastcall CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::DestructInstance(
        CInfoCourierSpawnRadiant::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::FreeInstance  (line 52, @0x0000000002ab7340, libserver.so)
void __fastcall CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::FreeInstance(
        CInfoCourierSpawnRadiant::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::CanAllocate  (line 52, @0x0000000002ab7360, libserver.so)
bool __fastcall CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::CanAllocate(
        const CInfoCourierSpawnRadiant::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 52, @0x0000000002ab7370, libserver.so)
// globals: CInfoCourierSpawnRadiant::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoCourierSpawnRadiant::CEntityInstanceEntityClass *const this)
{
  return CInfoCourierSpawnRadiant::s_pSchemaBinding;
}


// CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::AllocateInstance  (line 52, @0x0000000002abe400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::AllocateInstance(
        CInfoCourierSpawnRadiant::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::ConstructInstance  (line 52, @0x0000000002abfdc0, libserver.so)  // inlines: CInfoCourierSpawnRadiant, CPointEntity, Construct<CInfoCourierSpawnRadiant>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::ConstructInstance(
        CInfoCourierSpawnRadiant::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_43CE4B0;
  }
  return p;
}


// CInfoCourierSpawnRadiant::~CInfoCourierSpawnRadiant  (line 52, @0x0000000002abfea0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoCourierSpawnRadiant::~CInfoCourierSpawnRadiant(CInfoCourierSpawnRadiant *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoCourierSpawnRadiant::~CInfoCourierSpawnRadiant  (line 52, @0x0000000002abfec0, libserver.so)  // inlines: ~CInfoCourierSpawnRadiant, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoCourierSpawnRadiant::~CInfoCourierSpawnRadiant(CInfoCourierSpawnRadiant *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 52, @0x0000000002acb530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoCourierSpawnRadiant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 52, @0x0000000002acb550, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoCourierSpawnRadiant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoCourierSpawnRadiant::GetEntityClassInternal  (line 52, @0x0000000002ad6030, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "info_courier_spawn_radiant", "CInfoCourierSpawnRadiant"
// globals: `guard variable for'CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass, CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass, __dso_handle, CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoCourierSpawnRadiant::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnRadiantClassInfo, CInfoCourierSpawnRadiant::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnRadiantClassInfo
CEntityClass *__cdecl CInfoCourierSpawnRadiant::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass) != 0 )
  {
    CEntityClass::CEntityClass(&CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass);
    CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass._vptr_CEntityClass = off_43CE430;
    __cxa_guard_release(&`guard variable for'CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass);
    __cxa_atexit(
      CInfoCourierSpawnRadiant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoCourierSpawnRadiantClass != 0 )
    return &CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass;
  if ( `guard variable for'CInfoCourierSpawnRadiant::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnRadiantClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoCourierSpawnRadiant::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnRadiantClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoCourierSpawnRadiant::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnRadiantClassInfo,
      "CInfoCourierSpawnRadiant",
      "info_courier_spawn_radiant",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoCourierSpawnRadiant::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnRadiantClassInfo);
  }
  CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass.m_pClassInfo = &CInfoCourierSpawnRadiant::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnRadiantClassInfo;
  CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass.m_pBaseClassInfo = CInfoCourierSpawnRadiant::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnRadiantClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoCourierSpawnRadiantClass = &CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass;
  CInfoCourierSpawnRadiant::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnRadiantClassInfo.m_pClass = &CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass;
  CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoCourierSpawnRadiantClass->m_pComponentOverrides = 0;
  return &CInfoCourierSpawnRadiant::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnRadiantClass;
}


// CInfoCourierSpawnDire::Schema_DynamicBinding  (line 53, @0x0000000002ab7380, libserver.so)
// globals: CInfoCourierSpawnDire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoCourierSpawnDire::Schema_DynamicBinding(
        const CInfoCourierSpawnDire *const this)
{
  return CInfoCourierSpawnDire::s_pSchemaBinding;
}


// CInfoCourierSpawnDire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 53, @0x0000000002ab7390, libserver.so)
// globals: CInfoCourierSpawnDire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoCourierSpawnDire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoCourierSpawnDire::CEntityInstanceEntityClass *const this)
{
  return CInfoCourierSpawnDire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoCourierSpawnDire::CEntityInstanceEntityClass::DestructInstance  (line 53, @0x0000000002ab73a0, libserver.so)  // inlines: Destruct<CInfoCourierSpawnDire>
void __fastcall CInfoCourierSpawnDire::CEntityInstanceEntityClass::DestructInstance(
        CInfoCourierSpawnDire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoCourierSpawnDire::CEntityInstanceEntityClass::FreeInstance  (line 53, @0x0000000002ab73c0, libserver.so)
void __fastcall CInfoCourierSpawnDire::CEntityInstanceEntityClass::FreeInstance(
        CInfoCourierSpawnDire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoCourierSpawnDire::CEntityInstanceEntityClass::CanAllocate  (line 53, @0x0000000002ab73e0, libserver.so)
bool __fastcall CInfoCourierSpawnDire::CEntityInstanceEntityClass::CanAllocate(
        const CInfoCourierSpawnDire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoCourierSpawnDire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 53, @0x0000000002ab73f0, libserver.so)
// globals: CInfoCourierSpawnDire::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoCourierSpawnDire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoCourierSpawnDire::CEntityInstanceEntityClass *const this)
{
  return CInfoCourierSpawnDire::s_pSchemaBinding;
}


// CInfoCourierSpawnDire::CEntityInstanceEntityClass::AllocateInstance  (line 53, @0x0000000002abe440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoCourierSpawnDire::CEntityInstanceEntityClass::AllocateInstance(
        CInfoCourierSpawnDire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoCourierSpawnDire::CEntityInstanceEntityClass::ConstructInstance  (line 53, @0x0000000002abfdf0, libserver.so)  // inlines: CInfoCourierSpawnDire, CPointEntity, Construct<CInfoCourierSpawnDire>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoCourierSpawnDire::CEntityInstanceEntityClass::ConstructInstance(
        CInfoCourierSpawnDire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_43CEBD0;
  }
  return p;
}


// CInfoCourierSpawnDire::~CInfoCourierSpawnDire  (line 53, @0x0000000002abfef0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoCourierSpawnDire::~CInfoCourierSpawnDire(CInfoCourierSpawnDire *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoCourierSpawnDire::~CInfoCourierSpawnDire  (line 53, @0x0000000002abff10, libserver.so)  // inlines: ~CInfoCourierSpawnDire, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoCourierSpawnDire::~CInfoCourierSpawnDire(CInfoCourierSpawnDire *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoCourierSpawnDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 53, @0x0000000002acb580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoCourierSpawnDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoCourierSpawnDire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoCourierSpawnDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 53, @0x0000000002acb5a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoCourierSpawnDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoCourierSpawnDire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoCourierSpawnDire::GetEntityClassInternal  (line 53, @0x0000000002ad6180, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "info_courier_spawn_dire", "CInfoCourierSpawnDire"
// globals: `guard variable for'CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass, CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass, __dso_handle, CInfoCourierSpawnDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoCourierSpawnDire::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnDireClassInfo, CInfoCourierSpawnDire::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnDireClassInfo
CEntityClass *__cdecl CInfoCourierSpawnDire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass) != 0 )
  {
    CEntityClass::CEntityClass(&CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass);
    CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass._vptr_CEntityClass = off_43CEB50;
    __cxa_guard_release(&`guard variable for'CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass);
    __cxa_atexit(
      CInfoCourierSpawnDire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoCourierSpawnDireClass != 0 )
    return &CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass;
  if ( `guard variable for'CInfoCourierSpawnDire::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnDireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoCourierSpawnDire::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnDireClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoCourierSpawnDire::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnDireClassInfo,
      "CInfoCourierSpawnDire",
      "info_courier_spawn_dire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoCourierSpawnDire::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnDireClassInfo);
  }
  CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass.m_pClassInfo = &CInfoCourierSpawnDire::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnDireClassInfo;
  CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass.m_pBaseClassInfo = CInfoCourierSpawnDire::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnDireClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoCourierSpawnDireClass = &CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass;
  CInfoCourierSpawnDire::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnDireClassInfo.m_pClass = &CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass;
  CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoCourierSpawnDireClass->m_pComponentOverrides = 0;
  return &CInfoCourierSpawnDire::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnDireClass;
}


// CInfoCourierSpawn::Schema_DynamicBinding  (line 54, @0x0000000002ab7400, libserver.so)
// globals: CInfoCourierSpawn::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoCourierSpawn::Schema_DynamicBinding(const CInfoCourierSpawn *const this)
{
  return CInfoCourierSpawn::s_pSchemaBinding;
}


// CInfoCourierSpawn::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 54, @0x0000000002ab7410, libserver.so)
// globals: CInfoCourierSpawn::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoCourierSpawn::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoCourierSpawn::CEntityInstanceEntityClass *const this)
{
  return CInfoCourierSpawn::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoCourierSpawn::CEntityInstanceEntityClass::DestructInstance  (line 54, @0x0000000002ab7420, libserver.so)  // inlines: Destruct<CInfoCourierSpawn>
void __fastcall CInfoCourierSpawn::CEntityInstanceEntityClass::DestructInstance(
        CInfoCourierSpawn::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoCourierSpawn::CEntityInstanceEntityClass::FreeInstance  (line 54, @0x0000000002ab7440, libserver.so)
void __fastcall CInfoCourierSpawn::CEntityInstanceEntityClass::FreeInstance(
        CInfoCourierSpawn::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoCourierSpawn::CEntityInstanceEntityClass::CanAllocate  (line 54, @0x0000000002ab7460, libserver.so)
bool __fastcall CInfoCourierSpawn::CEntityInstanceEntityClass::CanAllocate(
        const CInfoCourierSpawn::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoCourierSpawn::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 54, @0x0000000002ab7470, libserver.so)
// globals: CInfoCourierSpawn::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoCourierSpawn::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoCourierSpawn::CEntityInstanceEntityClass *const this)
{
  return CInfoCourierSpawn::s_pSchemaBinding;
}


// CInfoCourierSpawn::CEntityInstanceEntityClass::AllocateInstance  (line 54, @0x0000000002abe480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoCourierSpawn::CEntityInstanceEntityClass::AllocateInstance(
        CInfoCourierSpawn::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoCourierSpawn::CEntityInstanceEntityClass::ConstructInstance  (line 54, @0x0000000002abfe20, libserver.so)  // inlines: CInfoCourierSpawn, CPointEntity, Construct<CInfoCourierSpawn>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoCourierSpawn::CEntityInstanceEntityClass::ConstructInstance(
        CInfoCourierSpawn::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_43CF2F0;
  }
  return p;
}


// CInfoCourierSpawn::~CInfoCourierSpawn  (line 54, @0x0000000002abff40, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoCourierSpawn::~CInfoCourierSpawn(CInfoCourierSpawn *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoCourierSpawn::~CInfoCourierSpawn  (line 54, @0x0000000002abff60, libserver.so)  // inlines: ~CInfoCourierSpawn, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoCourierSpawn::~CInfoCourierSpawn(CInfoCourierSpawn *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoCourierSpawn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 54, @0x0000000002acb5d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoCourierSpawn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoCourierSpawn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoCourierSpawn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 54, @0x0000000002acb5f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoCourierSpawn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoCourierSpawn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoCourierSpawn::GetEntityClassInternal  (line 54, @0x0000000002ad62d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "info_courier_spawn", "CInfoCourierSpawn"
// globals: `guard variable for'CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass, CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass, __dso_handle, CInfoCourierSpawn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoCourierSpawn::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnClassInfo, CInfoCourierSpawn::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnClassInfo
CEntityClass *__cdecl CInfoCourierSpawn::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass) != 0 )
  {
    CEntityClass::CEntityClass(&CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass);
    CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass._vptr_CEntityClass = off_43CF270;
    __cxa_guard_release(&`guard variable for'CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass);
    __cxa_atexit(
      CInfoCourierSpawn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoCourierSpawnClass != 0 )
    return &CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass;
  if ( `guard variable for'CInfoCourierSpawn::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoCourierSpawn::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoCourierSpawn::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnClassInfo,
      "CInfoCourierSpawn",
      "info_courier_spawn",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoCourierSpawn::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnClassInfo);
  }
  CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass.m_pClassInfo = &CInfoCourierSpawn::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnClassInfo;
  CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass.m_pBaseClassInfo = CInfoCourierSpawn::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoCourierSpawnClass = &CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass;
  CInfoCourierSpawn::GetEntityClassInfo(void)::g_EntityCInfoCourierSpawnClassInfo.m_pClass = &CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass;
  CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoCourierSpawnClass->m_pComponentOverrides = 0;
  return &CInfoCourierSpawn::GetEntityClassInternal(void)::g_EntityCInfoCourierSpawnClass;
}


// GetCourierSpawnLocationForTeam  (line 56, @0x0000000002a8b930, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set
// calls: CGameEntitySystem::FindEntityByClassname
// callers: CDOTAGamerules::State_Enter_PRE_GAME, CDOTAPlayer::CheckForSpawningFreeCourier, CDOTA_Ability_Courier_ReturnToBase::OnSpellStart, CDOTA_Modifier_Courier_TransferItems::OnDestroy, CDOTA_Ability_Courier_ReturnStashItems::OnSpellStart, CDOTA_Ability_Courier_TakeStashAndTransferItems::OnSpellStart, CDOTA_Ability_Courier_TakeStashItems::OnSpellStart
// strings: "info_courier_spawn", "info_courier_spawn_dire", "info_courier_spawn_radiant"
int *__fastcall GetCourierSpawnLocationForTeam(int *a1, int iTeam)
{
  CBaseEntity *EntityByClassname; // rax
  const char *v5; // rdx
  CBaseEntity *v6; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  CEntityIdentity *v11; // rax
  int v12; // edx
  __int16 v13; // cx

  EntityByClassname = 0;
  do
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(
                          g_pGameEntitySystem,
                          EntityByClassname,
                          "info_courier_spawn");
    if ( EntityByClassname == 0 )
    {
      v5 = "info_courier_spawn_radiant";
      if ( iTeam == 3 )
        v5 = "info_courier_spawn_dire";
      v6 = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, v5);
      *a1 = -1;
      if ( v6 != 0 )
      {
        m_pEntity = v6->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v9 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          *a1 = v9 | *a1 & 0x8000;
          *a1 = (v8 << 15) | *a1 & 0x7FFF;
        }
      }
      return a1;
    }
  }
  while ( iTeam != EntityByClassname->m_iTeamNum.m_Value );
  *a1 = -1;
  v11 = EntityByClassname->m_pEntity;
  if ( v11 == 0 )
    return a1;
  v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
  if ( v11->m_EHandle.m_Index == -1 )
    v13 = 0x7FFF;
  else
    v13 = v11->m_EHandle.m_Index & 0x7FFF;
  *a1 = v13 | *a1 & 0x8000;
  *a1 = (v12 << 15) | *a1 & 0x7FFF;
  return a1;
}


// CheckCourierFountainRangeGoodEnough  (line 77, @0x0000000002a7d6e0, libserver.so)  // inlines: FastSqrt, GetAbilityName, Length2D, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, strcmp, __dynamic_cast, CDOTA_BaseNPC::IsInRangeOfShop, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Modifier_Courier_TakeStashItems::GrabStashItems, CDOTA_Modifier_Courier_ReturnStashItems::OnIntervalThink
// strings: "item_bottle"
bool __fastcall CheckCourierFountainRangeGoodEnough(CDOTA_BaseNPC *pCourier, int nDistanceHint)
{
  __m128i v2; // xmm0
  float v3; // xmm1_4
  float v4; // r15d
  int v7; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v10; // r14
  const char **p_m_pszAbilityName; // rax
  const Vector *AbsOrigin; // rax
  float v14; // [rsp+0h] [rbp-34h]

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v7 = 0;
  v14 = v3;
  while ( 1 )
  {
    Inventory = CDOTA_BaseNPC::GetInventory(pCourier);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v7);
    v10 = ItemInSlot;
    if ( ItemInSlot != 0 )
    {
      p_m_pszAbilityName = &ItemInSlot->m_pAbilityData->m_pszAbilityName;
      if ( p_m_pszAbilityName != 0
        && *p_m_pszAbilityName != 0
        && strcmp(*p_m_pszAbilityName, "item_bottle") == 0
        && *(__dynamic_cast(v10, &`typeinfo for'CDOTA_Item, &`typeinfo for'CDOTA_Item_EmptyBottle, 0) + 243) <= 2 )
      {
        break;
      }
    }
    if ( ++v7 == 9 )
      return CDOTA_BaseNPC::IsInRangeOfShop(pCourier, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0);
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(pCourier);
  return nDistanceHint > fsqrt(((v4 - AbsOrigin->x) * (v4 - AbsOrigin->x)) + ((v14 - AbsOrigin->y) * (v14 - AbsOrigin->y)));
}


// CDOTA_Modifier_Track_Order_Issuer::~CDOTA_Modifier_Track_Order_Issuer  (line 117, @0x0000000002ac2210, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Track_Order_Issuer::~CDOTA_Modifier_Track_Order_Issuer(
        CDOTA_Modifier_Track_Order_Issuer *const this)
{
  this->_vptr_CDOTA_Buff = &off_43CF990;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Track_Order_Issuer::~CDOTA_Modifier_Track_Order_Issuer  (line 117, @0x0000000002ac2230, libserver.so)  // inlines: ~CDOTA_Modifier_Track_Order_Issuer
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Track_Order_Issuer::~CDOTA_Modifier_Track_Order_Issuer(
        CDOTA_Modifier_Track_Order_Issuer *const this)
{
  this->_vptr_CDOTA_Buff = &off_43CF990;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Track_Order_Issuer::IsHidden  (line 122, @0x0000000002ab7480, libserver.so)
bool __fastcall CDOTA_Modifier_Track_Order_Issuer::IsHidden(CDOTA_Modifier_Track_Order_Issuer *const this)
{
  return 1;
}


// CDOTA_Modifier_Track_Order_Issuer::IsPurgable  (line 123, @0x0000000002ab7490, libserver.so)
bool __fastcall CDOTA_Modifier_Track_Order_Issuer::IsPurgable(CDOTA_Modifier_Track_Order_Issuer *const this)
{
  return 0;
}


// CDOTA_Modifier_Track_Order_Issuer::ShouldSendToClients  (line 132, @0x0000000002ab74a0, libserver.so)
bool __fastcall CDOTA_Modifier_Track_Order_Issuer::ShouldSendToClients(CDOTA_Modifier_Track_Order_Issuer *const this)
{
  return 0;
}


// CDOTA_Modifier_Track_Order_Issuer::DeclareFunctions  (line 139, @0x0000000002a77220, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Track_Order_Issuer::OnOrder(CModifierParams const&), CDOTA_Modifier_Track_Order_Issuer::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Track_Order_Issuer::DeclareFunctions(CDOTA_Modifier_Track_Order_Issuer *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_Track_Order_Issuer::OnOrder;
  this->m_Functions[125].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Track_Order_Issuer::OnDeath;
}


// CDOTA_Modifier_Track_Order_Issuer::OnCreated  (line 145, @0x0000000002a77260, libserver.so)
void __fastcall CDOTA_Modifier_Track_Order_Issuer::OnCreated(
        CDOTA_Modifier_Track_Order_Issuer *const this,
        KeyValues *pKV)
{
  __int64 v2; // rax

  v2 = 0;
  this->m_nIssuerPlayerIndex = -1;
  do
    this->m_nPlayerCommandTime[v2++] = 0.0;
  while ( v2 != 24 );
}


// CDOTA_Modifier_Track_Order_Issuer::OnOrder  (line 154, @0x0000000002a83080, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Track_Order_Issuer::OnOrder(
        CDOTA_Modifier_Track_Order_Issuer *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned int m_nIssuerPlayerIndex; // ecx
  float v10; // xmm0_4

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          m_nIssuerPlayerIndex = params->m_nIssuerPlayerIndex;
          this->m_nIssuerPlayerIndex = m_nIssuerPlayerIndex;
          if ( m_nIssuerPlayerIndex <= 0x17 )
          {
            v10 = 0.0;
            if ( g_pGameRules != 0 )
              v10 = *&g_pGameRules[18].m_szQuestName[20];
            this->m_nPlayerCommandTime[m_nIssuerPlayerIndex] = v10;
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Track_Order_Issuer::OnDeath  (line 168, @0x0000000002a87600, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_PlayerResource::IncrementCouriersPotentiallyKilled
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Track_Order_Issuer::OnDeath(
        CDOTA_Modifier_Track_Order_Issuer *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  __int64 v8; // rbx
  char v9; // dl
  float v10; // xmm2_4
  int v11; // esi
  float v12; // xmm0_4
  int m_nIssuerPlayerIndex; // esi
  float v14; // [rsp+Ch] [rbp-24h]

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v8 = 0;
          v9 = 0;
          v10 = 4.0;
          do
          {
            while ( 1 )
            {
              v11 = v8;
              v12 = 0.0;
              if ( g_pGameRules != 0 )
                v12 = *&g_pGameRules[18].m_szQuestName[20];
              if ( (this->m_nPlayerCommandTime[v8] + v10) > v12 )
                break;
              if ( ++v8 == 24 )
                goto LABEL_15;
            }
            ++v8;
            v14 = v10;
            CDOTA_PlayerResource::IncrementCouriersPotentiallyKilled(g_pDOTAPlayerResource, v11);
            v9 = 1;
            v10 = v14;
          }
          while ( v8 != 24 );
LABEL_15:
          if ( v9 == 0 )
          {
            m_nIssuerPlayerIndex = this->m_nIssuerPlayerIndex;
            if ( m_nIssuerPlayerIndex != -1 )
              CDOTA_PlayerResource::IncrementCouriersPotentiallyKilled(g_pDOTAPlayerResource, m_nIssuerPlayerIndex);
          }
          this->m_nIssuerPlayerIndex = -1;
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Unit_Courier::YouForgotToImplementOrDeclareServerClass  (line 203, @0x0000000002a77290, libserver.so)
int __fastcall CDOTA_Unit_Courier::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Courier *const this)
{
  return 0;
}


// CDOTA_Unit_Courier::GetServerClass  (line 203, @0x0000000002a8a1f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Courier::GetServerClass(CDOTA_Unit_Courier *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Unit_Courier::CDOTA_Unit_Courier  (line 223, @0x0000000002a8bd90, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CEntityHandle, CHandle, CNetworkVarBase, CUtlString, EnsureValidValue<CourierState_t>, EnsureValidValue<bool>, EnsureValidValue<float>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
// callers: CDOTA_Unit_Courier::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_Unit_Courier::CDOTA_Unit_Courier(CDOTA_Unit_Courier *const this)
{
  CDOTA_BaseNPC::CDOTA_BaseNPC(this);
  this->m_bFlyingCourier.m_Value = 0;
  this->_vptr_IHandleEntity = &off_43CFCB0;
  this->_vptr_INextBotEventResponder = &off_43D0C28;
  this->_vptr_CObstructionObject = &off_43D0F58;
  this->m_flRespawnTime.m_Value = 0.0;
  this->m_nCourierState.m_Value = CourierState_t::COURIER_STATE_IDLE;
  this->m_hCourierStateEntity.m_Value.m_Index = -1;
  this->m_strCourierModel.m_pString = 0;
  this->m_strFlyingCourierModel.m_pString = 0;
  this->m_bUnitRespawned = 0;
}


// CDOTA_Unit_Courier::~CDOTA_Unit_Courier  (line 229, @0x0000000002a795b0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTA_BaseNPC::~CDOTA_BaseNPC
// callers: CDOTA_Unit_Courier::~CDOTA_Unit_Courier
void __fastcall CDOTA_Unit_Courier::~CDOTA_Unit_Courier(CDOTA_Unit_Courier *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_43CFCB0;
  v2 = this->m_strFlyingCourierModel.m_pString == 0;
  this->_vptr_INextBotEventResponder = &off_43D0C28;
  this->_vptr_CObstructionObject = &off_43D0F58;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_strFlyingCourierModel);
  if ( this->m_strCourierModel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_strCourierModel);
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Courier::~CDOTA_Unit_Courier  (line 229, @0x0000000002a79660, libserver.so)
// calls: CDOTA_Unit_Courier::~CDOTA_Unit_Courier, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Courier::~CDOTA_Unit_Courier(CDOTA_Unit_Courier *const this)
{
  CDOTA_Unit_Courier::~CDOTA_Unit_Courier(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Courier::ShouldTransmit  (line 233, @0x0000000002a796c0, libserver.so)
// calls: CBaseEntity::ShouldTransmit
int __fastcall CDOTA_Unit_Courier::ShouldTransmit(CDOTA_Unit_Courier *const this, const CGameCheckTransmitInfo *pInfo)
{
  return CBaseEntity::ShouldTransmit(this, pInfo);
}


// CDOTA_Unit_Courier::Spawn  (line 242, @0x0000000002aae120, libserver.so)  // inlines: CEntityHandle, CHandle, NetworkStateChanged, Set, curtime, operator=, operator=<CEntityHandle>, operator=<CourierState_t>
// calls: CBaseEntity::SetLifeState, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::SetMana, CDOTA_BaseNPC::Spawn, CDOTA_Unit_Courier::AddCourierWearables, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, operator!=<CBaseEntity>, DOTACommander, CDOTA_Commander::OnCourierCreated, CBaseEntity::ThinkSet, CDOTA_PlayerResource::OnCourierSpawned (17 total)
// strings: "modifier_magic_immune", "modifier_phased", "modifier_track_order_issuer"
// globals: CDOTA_Unit_Courier::UpdateCourierMode(void)
void __fastcall CDOTA_Unit_Courier::Spawn(CDOTA_Unit_Courier *const this, const CEntityKeyValues *pKeyValues)
{
  int v4; // eax
  float v5; // xmm1_4
  CDOTA_Commander *v6; // rax
  CGlobalVars *v7; // r13
  float v8; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // rax
  CDOTABaseAbility *v13; // rax
  CDOTABaseAbility *v14; // rax
  CDOTABaseAbility *v15; // rax
  CDOTABaseAbility *v16; // rax
  CDOTABaseAbility *v17; // rax
  CDOTABaseAbility *v18; // rax
  CHandle<CBaseEntity> b; // [rsp+0h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kvTrack; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_ALIVE);
  v4 = (*(this->_vptr_IHandleEntity + 156))(this);
  CDOTA_BaseNPC::ModifyHealth(this, v4, 0, 0, 0);
  CDOTA_BaseNPC::SetMana(this, this->m_flMaxMana.m_Value, v5);
  this->m_iUnitType |= 0x100u;
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  CDOTA_Unit_Courier::AddCourierWearables(this);
  if ( !this->m_bUnitRespawned )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, 0);
    CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
    v11 = CDOTA_BaseNPC::GetAbilityByIndex(this, 1);
    CDOTABaseAbility::UpgradeAbility(v11, 0);
    v12 = CDOTA_BaseNPC::GetAbilityByIndex(this, 1);
    (*(v12->_vptr_IHandleEntity + 241))(v12, -1.0);
    v13 = CDOTA_BaseNPC::GetAbilityByIndex(this, 2);
    CDOTABaseAbility::UpgradeAbility(v13, 0);
    v14 = CDOTA_BaseNPC::GetAbilityByIndex(this, 3);
    CDOTABaseAbility::UpgradeAbility(v14, 0);
    v15 = CDOTA_BaseNPC::GetAbilityByIndex(this, 4);
    CDOTABaseAbility::UpgradeAbility(v15, 0);
    v16 = CDOTA_BaseNPC::GetAbilityByIndex(this, 6);
    CDOTABaseAbility::UpgradeAbility(v16, 0);
    v17 = CDOTA_BaseNPC::GetAbilityByIndex(this, 7);
    CDOTABaseAbility::UpgradeAbility(v17, 0);
    v18 = CDOTA_BaseNPC::GetAbilityByIndex(this, 8);
    CDOTABaseAbility::UpgradeAbility(v18, 0);
  }
  KeyValues::KeyValues(&kv, "modifier_magic_immune");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_magic_immune", &kv, 0);
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_phased", &kv, 0);
  if ( this->m_nCourierState.m_Value != CourierState_t::COURIER_STATE_IDLE )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nCourierState.m_Value = CourierState_t::COURIER_STATE_IDLE;
  }
  b.m_Index = -1;
  if ( operator!=<CBaseEntity>(&this->m_hCourierStateEntity.m_Value, &b) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4516, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hCourierStateEntity.m_Value = b;
  }
  v6 = DOTACommander();
  CDOTA_Commander::OnCourierCreated(v6, this);
  KeyValues::KeyValues(&kvTrack, "modifier_track_order_issuer");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_track_order_issuer", &kvTrack, 0);
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v8 = v7->m_flCurrentTime + 1.0;
  }
  else
  {
    v8 = 1.0;
  }
  CBaseEntity::ThinkSet(this, CDOTA_Unit_Courier::UpdateCourierMode, v8, 1707458671, 0);
  if ( g_pDOTAPlayerResource != 0 )
    CDOTA_PlayerResource::OnCourierSpawned(g_pDOTAPlayerResource, this);
  KeyValues::~KeyValues(&kvTrack);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Unit_Courier::GetBaseMoveSpeed  (line 300, @0x0000000002a79770, libserver.so)  // inlines: FStrEq, GetAbilityName, _V_strcmp
// calls: CDOTA_BaseNPC::GetBaseMoveSpeed, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot
// strings: "item_bottle"
float __fastcall CDOTA_Unit_Courier::GetBaseMoveSpeed(CDOTA_Unit_Courier *const this)
{
  __m128i v2; // xmm0
  float v3; // r14d
  CDOTA_UnitInventory *Inventory; // r13
  int v5; // ebx
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v7; // rdx
  const char **p_m_pszAbilityName; // rax
  const char *v9; // rsi

  *v2.m128i_i32 = CDOTA_BaseNPC::GetBaseMoveSpeed(this);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Inventory = CDOTA_BaseNPC::GetInventory(this);
  if ( Inventory == 0 )
    return v3;
  v5 = 0;
  while ( 1 )
  {
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v5);
    v7 = ItemInSlot;
    if ( ItemInSlot != 0 )
    {
      p_m_pszAbilityName = &ItemInSlot->m_pAbilityData->m_pszAbilityName;
      if ( p_m_pszAbilityName != 0 )
      {
        v9 = *p_m_pszAbilityName;
        if ( *p_m_pszAbilityName != 0
          && (v9 == "item_bottle" || strcmp(v9, "item_bottle") == 0)
          && v7->m_iCurrentCharges.m_Value <= 2 )
        {
          break;
        }
      }
    }
    if ( ++v5 == 17 )
      return v3;
  }
  return v3 * 0.69999999;
}


// CDOTA_Unit_Courier::EnterShop  (line 323, @0x0000000002a8c310, libserver.so)  // inlines: CSingleUserRecipientFilter, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=, ~CSingleUserRecipientFilter
// calls: CDOTA_BaseNPC::EnterShop, CDOTA_Unit_Courier::GetLastOrderIssuerPlayer, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// strings: "Shop.Available"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Courier::EnterShop(CDOTA_Unit_Courier *const this, int iShopType, CBaseEntity *pShop)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTAPlayer *LastOrderIssuerPlayer; // r15
  CSingleUserRecipientFilter filter; // [rsp+0h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+138h] [rbp-38h]

  m_pInstance = 0;
  v12 = __readfsqword(0x28u);
  m_Index = this->m_hLastNearShop.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLastNearShop.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hLastNearShop.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( pShop != m_pInstance && (iShopType == 5 || iShopType == 2) )
  {
    LastOrderIssuerPlayer = CDOTA_Unit_Courier::GetLastOrderIssuerPlayer(this);
    if ( LastOrderIssuerPlayer != 0 )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::AddRecipient(&filter, LastOrderIssuerPlayer);
      CBaseEntity::EmitSound(LastOrderIssuerPlayer, &filter, "Shop.Available", 0.0, 0);
      filter._vptr_IRecipientFilter = &off_3FCB0D0;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
  CDOTA_BaseNPC::EnterShop(this, iShopType, pShop);
}


// CDOTA_Unit_Courier::Precache  (line 343, @0x0000000002ab2f80, libserver.so)
// calls: CDOTA_BaseNPC::Precache, CDOTA_Unit_Courier::CacheCourierModelNames, CDOTA_Unit_Courier::PrecacheCourierWearables
void __fastcall CDOTA_Unit_Courier::Precache(CDOTA_Unit_Courier *const this, const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC::Precache(this, pContext);
  CDOTA_Unit_Courier::CacheCourierModelNames(this, pContext);
  CDOTA_Unit_Courier::PrecacheCourierWearables(this, pContext);
}


// CDOTA_Unit_Courier::UnitCanRespawn  (line 356, @0x0000000002a772a0, libserver.so)
bool __fastcall CDOTA_Unit_Courier::UnitCanRespawn(CDOTA_Unit_Courier *const this)
{
  return !this->m_bIsIllusion.m_Value;
}


// CDOTA_Unit_Courier::GetCourierModelNames  (line 366, @0x0000000002ab2d90, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CCourierModifier>, FindAssetModifier<CDOTA_Unit_Courier, CCourierModifier>, GetAssetModifiers<CCourierModifier>, GetModelName, GetModifier, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CCourierModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlString::operator=, FindAssetModifier<CDOTA_Unit_Courier, CCourierFlyingModifier>, CUtlString::Get
// callers: CDOTA_Unit_Courier::CacheCourierModelNames, CDOTA_Unit_Courier::OnAssetModifiersUpdated
// strings: "models/props_gameplay/donkey.vmdl", "models/props_gameplay/donkey_dire_wings.vmdl", "models/props_gameplay/donkey_wings.vmdl", "models/props_gameplay/donkey_dire.vmdl"
void __fastcall CDOTA_Unit_Courier::GetCourierModelNames(
        CDOTA_Unit_Courier *const this,
        CUtlString *const strCourierModel,
        CUtlString *const strFlyingCourierModel)
{
  const char *v3; // r13
  unsigned __int16 v5; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r14
  __int64 v8; // rbx
  const CUtlString *v9; // r15
  const CCourierFlyingModifier *Asset; // rax
  const char *v11; // rsi
  const char *v12; // rax
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+10h] [rbp-40h] BYREF

  v3 = "radiant";
  if ( this->m_iTeamNum.m_Value == 3 )
    v3 = "dire";
  search.key.m_nType = CCourierModifier::StaticType();
  v5 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v5 >= this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    || v5 > this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    || v5 == 0xFFFF
    || (v6 = &this->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v5], v5 == v6->m_Left)
    || (elem = v6->m_Data.elem) == 0
    || elem->m_Size <= 0 )
  {
LABEL_13:
    if ( this->m_iTeamNum.m_Value == 3 )
      CUtlString::operator=(strCourierModel, "models/props_gameplay/donkey_dire.vmdl");
    else
      CUtlString::operator=(strCourierModel, "models/props_gameplay/donkey.vmdl");
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = elem->m_Memory.m_pMemory[v8];
      if ( v9 != 0 && (*(v9->m_pString + 6))(v9, v3) != 0 )
        break;
      if ( elem->m_Size <= ++v8 )
        goto LABEL_13;
    }
    v12 = CUtlString::Get(v9 + 2);
    CUtlString::operator=(strCourierModel, v12);
  }
  Asset = FindAssetModifier<CDOTA_Unit_Courier,CCourierFlyingModifier>(this, v3);
  if ( Asset != 0 )
  {
    v11 = CUtlString::Get(&Asset->m_strModifier);
  }
  else
  {
    v11 = "models/props_gameplay/donkey_dire_wings.vmdl";
    if ( this->m_iTeamNum.m_Value != 3 )
      v11 = "models/props_gameplay/donkey_wings.vmdl";
  }
  CUtlString::operator=(strFlyingCourierModel, v11);
}


// CDOTA_Unit_Courier::CacheCourierModelNames  (line 404, @0x0000000002ab2f00, libserver.so)  // inlines: operator char const*
// calls: CDOTA_Unit_Courier::GetCourierModelNames, CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CUtlString::Get, CBaseEntity::PrecacheModel
// callers: CDOTA_Unit_Courier::Precache
void __fastcall CDOTA_Unit_Courier::CacheCourierModelNames(
        CDOTA_Unit_Courier *const this,
        const CEntityPrecacheContext *pContext)
{
  CUtlString *p_m_strCourierModel; // r13
  CUtlString *p_m_strFlyingCourierModel; // r12
  bool IsPrecacheAllowed; // r14
  const char *v6; // rax
  const char *v7; // rax

  p_m_strCourierModel = &this->m_strCourierModel;
  p_m_strFlyingCourierModel = &this->m_strFlyingCourierModel;
  if ( !this->m_bUnitRespawned )
    CDOTA_Unit_Courier::GetCourierModelNames(this, &this->m_strCourierModel, &this->m_strFlyingCourierModel);
  IsPrecacheAllowed = CBaseEntity::IsPrecacheAllowed();
  CBaseEntity::SetAllowPrecache(1);
  v6 = CUtlString::Get(p_m_strCourierModel);
  CBaseEntity::PrecacheModel(v6, pContext);
  v7 = CUtlString::Get(p_m_strFlyingCourierModel);
  CBaseEntity::PrecacheModel(v7, pContext);
  CBaseEntity::SetAllowPrecache(IsPrecacheAllowed);
}


// CDOTA_Unit_Courier::AddCourierWearables  (line 421, @0x0000000002a8be10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, item_definition_index_t, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::GetGeneratingEconItem, CEconEntity::GetItem, CBaseCombatCharacter::RemoveWearable, CDOTAItemDefinition::BuildCourierWearableList, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, ItemGeneration, CItemGeneration::GenerateItemFromDefIndex, CDOTA_BaseNPC::UpdateAssetModifiers
// callers: CDOTA_Unit_Courier::UpgradeToFlyingCourier, CDOTA_Unit_Courier::Spawn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Courier::AddCourierWearables(CDOTA_Unit_Courier *const this)
{
  __int64 v2; // rcx
  CEconItemView *GeneratingEconItem; // r15
  int v4; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  CHandle<CEconWearable> *v7; // rsi
  __int64 m_Index; // rdx
  CEntityIdentity *v9; // rax
  __int64 v10; // rsi
  CEntityIdentity *v11; // rax
  __int64 v12; // r14
  CEconItemView *Item; // rax
  item_definition_index_t *v14; // r8
  int v15; // ebx
  const CDOTAItemDefinition *v16; // rax
  int v17; // eax
  int v18; // r14d
  int v19; // ebx
  const QAngle *AbsAngles; // r15
  const Vector *AbsOrigin; // r13
  CItemGeneration *v22; // rax
  CBaseEntity *ItemFromDefIndex; // rax
  CEconWearable *m_pInstance; // [rsp+8h] [rbp-58h]
  item_definition_index_t pItemDefs[16]; // [rsp+10h] [rbp-50h] BYREF
  char v26; // [rsp+30h] [rbp-30h] BYREF

  GeneratingEconItem = CDOTA_BaseNPC::GetGeneratingEconItem(this);
  v4 = this->m_hMyWearables.m_Vector.m_Size - 1;
  if ( v4 >= 0 )
  {
    v5 = 4LL * v4;
    v6 = 4 * (v4 - v4) - 4;
    do
    {
      while ( 1 )
      {
        v7 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v5 / 4];
        m_Index = v7->m_Index;
        if ( (m_Index + 2) > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = v7->m_Index & 0x1FF;
            v11 = &v9[v10];
            if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
            {
              m_pInstance = v11->m_pInstance;
              if ( v11->m_pInstance != 0 )
              {
                v12 = (*(GeneratingEconItem->_vptr_IEconItemInterface + 14))(
                        GeneratingEconItem,
                        v10 * 120,
                        m_Index,
                        v2,
                        CEntityHandle::gm_pEntityList);
                Item = CEconEntity::GetItem(m_pInstance);
                if ( v12 != (*(Item->_vptr_IEconItemInterface + 14))(Item) )
                  break;
              }
            }
          }
        }
        v5 -= 4LL;
        if ( v5 == v6 )
          goto LABEL_11;
      }
      v5 -= 4LL;
      CBaseCombatCharacter::RemoveWearable(this, m_pInstance);
    }
    while ( v5 != v6 );
  }
LABEL_11:
  if ( GeneratingEconItem != 0 )
  {
    v14 = pItemDefs;
    do
    {
      ++v14;
      v14[-1].m_Data = 0;
    }
    while ( v14 != &v26 );
    v15 = -!this->m_bFlyingCourier.m_Value;
    v16 = (*(GeneratingEconItem->_vptr_IEconItemInterface + 12))(GeneratingEconItem);
    v17 = CDOTAItemDefinition::BuildCourierWearableList(v16, 16, pItemDefs, GeneratingEconItem, (v15 + 2));
    v18 = v17;
    if ( v17 != 0 )
    {
      v19 = 0;
      if ( v17 > 0 )
      {
        do
        {
          AbsAngles = CBaseEntity::GetAbsAngles(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(this);
          v22 = ItemGeneration();
          ItemFromDefIndex = CItemGeneration::GenerateItemFromDefIndex(v22, pItemDefs[v19], AbsOrigin, AbsAngles, 0);
          if ( ItemFromDefIndex != 0 )
            (*(ItemFromDefIndex->_vptr_IHandleEntity + 262))(ItemFromDefIndex, this);
          ++v19;
        }
        while ( v19 != v18 );
      }
      CDOTA_BaseNPC::UpdateAssetModifiers(this);
    }
  }
}


// CDOTA_Unit_Courier::GetCourierModelName  (line 474, @0x0000000002a794a0, libserver.so)  // inlines: operator char const*
// calls: CUtlString::Get
const char *__fastcall CDOTA_Unit_Courier::GetCourierModelName(CDOTA_Unit_Courier *const this)
{
  if ( (*(this->_vptr_IHandleEntity + 492))(this) != 0 )
    return CUtlString::Get(&this->m_strFlyingCourierModel);
  else
    return CUtlString::Get(&this->m_strCourierModel);
}


// CDOTA_Unit_Courier::GetLastOrderIssuerPlayer  (line 486, @0x0000000002a8c2d0, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_PlayerResource::GetPlayer
// callers: CDOTA_Unit_Courier::EnterShop, CDOTA_Unit_Courier::OnCommandMoveTo
// strings: "modifier_track_order_issuer"
CDOTAPlayer *__fastcall CDOTA_Unit_Courier::GetLastOrderIssuerPlayer(CDOTA_Unit_Courier *const this)
{
  CDOTA_Buff *ModifierByName; // rax
  int vptr_CDOTA_Buff; // esi

  ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, "modifier_track_order_issuer", 0);
  if ( ModifierByName != 0 && (vptr_CDOTA_Buff = ModifierByName[1]._vptr_CDOTA_Buff) >= 0 )
    return CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, vptr_CDOTA_Buff);
  else
    return 0;
}


// CDOTA_Unit_Courier::Event_Killed  (line 499, @0x0000000002ab65a0, libserver.so)  // inlines: CDOTAUserMsg_CourierKilledAlert_t, CEntityHandle, CHandle, CNetMessagePB, CUserMessagePB, DOTAGameRules, FindGameEvent<CDOTAUserMsg_CourierKilledAlert_t>, FindOrCreateGameEvent<CDOTAUserMsg_CourierKilledAlert_t>, Get, GetAttacker, GetBool, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetInt, GetSerialNumber, GetTeamNumber, NetworkStateChanged, PostEvent<CDOTAUserMsg_CourierKilledAlert_t>, SendUserMessage<CDOTAUserMsg_CourierKilledAlert_t>, Server_EHandleToInt, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToNetworkableInt, curtime, entindex, operator CBaseEntity*, operator=<float>, set_entity_handle, set_event_team, set_event_type, set_gold_value, set_has_event_team, set_has_event_type, set_has_killer_account_id, set_has_team, set_has_timestamp, set_has_victim_account_id, set_killer_account_id, set_team, set_timestamp, set_victim_account_id, ~CDOTAUserMsg_CourierKilledAlert_t, ~CNetMessagePB, ~CTeamRecipientFilter, ~CUserMessagePB
// calls: CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CEntityHandle::operator CEntityInstance*, CMsgTournamentItemEvent::CMsgTournamentItemEvent, CDOTA_PlayerResource::GetSteamID, TournamentItemEvent, CDOTA_PlayerResource::IsValidTeamPlayerID, CMsgTournamentItemEvent::~CMsgTournamentItemEvent, SendChatEventMessage, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTAGamerules::QueueConceptForAllAnnouncers (25 total)
// strings: "tournament_drops", "courier_lost_good", "courier_lost_bad", "announce_event", "courier_worth"
// globals: CDOTA_Unit_Courier::RespawnCourier(void), IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CourierKilledAlert_t>(bool)::s_hEvent
void __fastcall CDOTA_Unit_Courier::Event_Killed(CDOTA_Unit_Courier *const this, const CTakeDamageInfo *const info)
{
  int v2; // r13d
  int i; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC_Hero *v7; // rbx
  int v8; // eax
  _BOOL4 v9; // edx
  int v10; // eax
  int SteamID; // eax
  int v12; // eax
  int v13; // ebx
  CDOTA_UnitInventory *v14; // rax
  CDOTA_Item *ItemInSlot; // rax
  float v16; // xmm1_4
  CDOTA_Item *v17; // r15
  const char *v18; // rdx
  float v19; // xmm2_4
  CEntityIndex v20; // eax
  float v21; // ebx
  __m128i v22; // xmm2
  bool v23; // zf
  CGlobalVars *v24; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v26; // xmm0_4
  __m128i v27; // xmm3
  int v28; // ebx
  CEntityIdentity *m_pEntity; // rax
  __int16 v30; // cx
  CEntityInstance *v31; // rax
  uint32 v32; // edx
  int tickcount; // eax
  IGameEventSystem *v34; // rbx
  __int64 v35; // r15
  void (__fastcall *v36)(IGameEventSystem *, _QWORD, _QWORD, CTeamRecipientFilter *, __int64, __int64 (__fastcall ***)(), __int64); // [rsp+8h] [rbp-208h]
  CDOTA_BaseNPC_Hero *v38; // [rsp+20h] [rbp-1F0h]
  int nPlayerID; // [rsp+2Ch] [rbp-1E4h]
  int nPlayerIDa; // [rsp+2Ch] [rbp-1E4h]
  CEntityHandle v41; // [rsp+30h] [rbp-1E0h] BYREF
  __int64 (__fastcall **nDeathTime)(); // [rsp+40h] [rbp-1D0h] BYREF
  int v43; // [rsp+50h] [rbp-1C0h]
  int m_Value; // [rsp+58h] [rbp-1B8h]
  int v45; // [rsp+5Ch] [rbp-1B4h]
  int v46; // [rsp+60h] [rbp-1B0h]
  int v47; // [rsp+64h] [rbp-1ACh]
  _BOOL4 v48; // [rsp+78h] [rbp-198h]
  CTeamRecipientFilter filterbroadcast; // [rsp+A0h] [rbp-170h] BYREF
  unsigned __int64 v50; // [rsp+1D8h] [rbp-38h]

  v2 = 0;
  v50 = __readfsqword(0x28u);
  if ( !this->m_bIsIllusion.m_Value )
  {
    for ( i = 0; i != 9; ++i )
    {
      Inventory = CDOTA_BaseNPC::GetInventory(this);
      v2 -= (CDOTA_UnitInventory::GetItemInSlot(Inventory, i) == 0) - 1;
    }
  }
  v6 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  v7 = v6;
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
  {
    CMsgTournamentItemEvent::CMsgTournamentItemEvent(&nDeathTime);
    v8 = v43;
    v46 = 7;
    v9 = v7->m_iTeamNum.m_Value == 3;
    LOBYTE(v8) = v43 | 0x84;
    v43 = v8;
    v48 = v9;
    v10 = (*(v7->_vptr_IHandleEntity + 414))(v7);
    SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v10);
    v43 |= 1u;
    m_Value = SteamID;
    v12 = (*(this->_vptr_IHandleEntity + 414))(this);
    v45 = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v12);
    v43 |= 2u;
    TournamentItemEvent(&nDeathTime, "tournament_drops");
    nPlayerID = (*(v7->_vptr_IHandleEntity + 414))(v7);
    if ( CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, nPlayerID) )
      ++*(g_pDOTAPlayerResource + nPlayerID + 8526);
    CMsgTournamentItemEvent::~CMsgTournamentItemEvent(&nDeathTime);
    v38 = v7;
  }
  else
  {
    v38 = 0;
  }
  v13 = 0;
  SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_COURIER_LOST, 0, this->m_iTeamNum.m_Value, 0);
  nPlayerIDa = 0;
  do
  {
    v14 = CDOTA_BaseNPC::GetInventory(this);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(v14, v13);
    v17 = ItemInSlot;
    if ( ItemInSlot != 0 && (*(ItemInSlot->_vptr_IHandleEntity + 345))(ItemInSlot) != 0 )
      nPlayerIDa += (*(v17->_vptr_IHandleEntity + 359))(v17);
    ++v13;
  }
  while ( v13 != 9 );
  if ( dota_send_courier_killed.m_pParent->m_Value.m_nValue != 0 )
  {
    CTeamRecipientFilter::CTeamRecipientFilter(&filterbroadcast, 1, 0);
    CDOTAUserMsg_CourierKilledAlert::CDOTAUserMsg_CourierKilledAlert(&nDeathTime);
    v28 = v43;
    v41.m_Index = -1;
    nDeathTime = off_43CB6F0;
    m_Value = this->m_iTeamNum.m_Value;
    m_pEntity = this->m_pEntity;
    v43 |= 1u;
    if ( m_pEntity != 0 )
    {
      v30 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v30 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v41.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v30 & 0x7FFF;
    }
    v31 = CEntityHandle::operator CEntityInstance *(&v41);
    v32 = 0xFFFFFF;
    if ( v31 != 0 && v41.m_Index != -1 )
      v32 = v41.m_Index & 0x7FFF | (v41.m_Index >> 1) & 0xFFC000;
    v46 = v32;
    v45 = nPlayerIDa;
    tickcount = gpGlobals->tickcount;
    v43 = v28 | 0xF;
    v47 = tickcount;
    v34 = g_pGameEventSystem;
    v36 = *(*g_pGameEventSystem + 128LL);
    v35 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CourierKilledAlert_t>(bool)::s_hEvent;
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_CourierKilledAlert_t>(bool)::s_hEvent);
    v36(v34, 0, 0, &filterbroadcast, v35, &nDeathTime, 40);
    nDeathTime = &off_43CB570;
    CDOTAUserMsg_CourierKilledAlert::~CDOTAUserMsg_CourierKilledAlert(&nDeathTime);
    filterbroadcast._vptr_IRecipientFilter = &off_3FF4590;
    CRecipientFilter::~CRecipientFilter(&filterbroadcast);
  }
  if ( v38 != 0
    && (v38->m_iUnitType & 1) != 0
    && !this->m_bIsIllusion.m_Value
    && this->m_iTeamNum.m_Value != v38->m_iTeamNum.m_Value )
  {
    CDOTA_BaseNPC_Hero::PerformAutoTaunt(v38, COERCE_DOUBLE(1065353216), v16, 0);
  }
  CResponseCriteriaSet::CResponseCriteriaSet(&nDeathTime);
  v18 = "courier_lost_good";
  if ( this->m_iTeamNum.m_Value != 2 )
    v18 = "courier_lost_bad";
  CResponseCriteriaSet::AppendCriteria(&nDeathTime, "announce_event", v18, 1.0);
  CResponseCriteriaSet::AppendCriteria(&nDeathTime, "courier_worth", 1.0, v19);
  CDOTAGamerules::QueueConceptForAllAnnouncers(g_pGameRules, 18, -1.0, &nDeathTime, 5, 1);
  CDOTA_BaseNPC::Event_Killed(this, info);
  v20.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CreateUnitEvent(v20, 0, v2 + 13, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_COURIER_KILLED);
  if ( !this->m_bIsIllusion.m_Value )
  {
    if ( this->m_bFlyingCourier.m_Value )
    {
      v21 = 180.0;
      if ( g_pGameRules != 0 )
      {
        v22 = _mm_cvtsi32_si128(0x43340000u);
        *v22.m128i_i32 = *v22.m128i_i32 + *&g_pGameRules[18].m_szQuestName[20];
        v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
      }
      v23 = v21 == this->m_flRespawnTime.m_Value;
    }
    else
    {
      v21 = 120.0;
      if ( g_pGameRules != 0 )
      {
        v27 = _mm_cvtsi32_si128(0x42F00000u);
        *v27.m128i_i32 = *v27.m128i_i32 + *&g_pGameRules[18].m_szQuestName[20];
        v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v27));
      }
      v23 = v21 == this->m_flRespawnTime.m_Value;
    }
    if ( !v23 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 4508, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flRespawnTime.m_Value = v21;
    }
    v24 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v26 = v24->m_flCurrentTime + 0.1;
    }
    else
    {
      v26 = 0.1;
    }
    CBaseEntity::ThinkSet(this, CDOTA_Unit_Courier::RespawnCourier, v26, -966790691, 0);
  }
  CDOTA_Unit_Courier::SetCourierState(this, CourierState_t::COURIER_STATE_DEAD, 0);
  CResponseCriteriaSet::~CResponseCriteriaSet(&nDeathTime);
}


// CDOTA_Unit_Courier::RespawnCourier  (line 594, @0x0000000002aadcb0, libserver.so)  // inlines: AddKeyValue<bool>, AddToTail, Base, CEntityKeyValuesModifyScope, DOTAGameRules, Element, FindKeyHash, Free, Get, GetGameTime, GetInstance, GetTeamNumber, QueueConcept, SetValue<bool>, curtime, operator CBaseEntity*, operator=, operator[], ~CEntityKeyValuesModifyScope
// calls: CBaseEntity::ThinkSet, CBaseEntity::ClearFlags, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CDOTA_BaseNPC::DirectRespawn, FindSpawnEntityForTeam, CEntityHandle::operator CEntityInstance*, FindClearSpaceForUnitAroundEntity, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, GetParticleManager, CDOTA_ParticleManager::CreateParticle (25 total)
// strings: "particles/generic_hero_status/respawn.vpcf", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CDOTA_Unit_Courier::RespawnCourier(void)
void __fastcall CDOTA_Unit_Courier::RespawnCourier(CDOTA_Unit_Courier *const this)
{
  CGlobalVars *v2; // rbx
  float v3; // xmm0_4
  float v4; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseEntity *v6; // rax
  const CBaseEntity *v7; // rbx
  const QAngle *AbsAngles; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v11; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  int j; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_UnitInventory *v17; // rax
  CDOTA_Item *ItemInSlot; // rax
  __int64 v19; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v20; // rdx
  __int64 v21; // rbx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx
  __int64 v28; // rax
  __int16 v29; // dx
  CEntityHandle v30; // [rsp+10h] [rbp-C0h] BYREF
  CEntityKeyValuesModifyScope sg; // [rsp+20h] [rbp-B0h] BYREF
  CEntityKeyValues kv; // [rsp+30h] [rbp-A0h] BYREF
  unsigned __int64 v33; // [rsp+A8h] [rbp-28h]

  v33 = __readfsqword(0x28u);
  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v3 = v2->m_flCurrentTime + 0.1;
  }
  else
  {
    v3 = 0.1;
  }
  CBaseEntity::ThinkSet(this, CDOTA_Unit_Courier::RespawnCourier, v3, -966790691, 0);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  if ( this->m_flRespawnTime.m_Value <= v4 )
  {
    CBaseEntity::ThinkSet(this, CDOTA_Unit_Courier::RespawnCourier, -1.0, -966790691, 0);
    CBaseEntity::ClearFlags(this);
    this->m_bUnitRespawned = 1;
    CEntityKeyValues::CEntityKeyValues(&kv);
    sg.m_pKeyValues = 0;
    sg.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&sg, &kv);
    if ( kv.m_nQueuedForSpawnCount > 0 )
    {
LABEL_12:
      CDOTA_BaseNPC::DirectRespawn(this, &kv);
      FindSpawnEntityForTeam(&v30, this->m_iTeamNum.m_Value);
      v6 = CEntityHandle::operator CEntityInstance *(&v30);
      v7 = v6;
      if ( v6 != 0 )
      {
        FindClearSpaceForUnitAroundEntity(v6, this);
        AbsAngles = CBaseEntity::GetAbsAngles(v7);
        CBaseEntity::SetAbsAngles(this, AbsAngles);
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/generic_hero_status/respawn.vpcf",
                     1,
                     this,
                     0,
                     0);
        v11 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v11, Particle);
      }
      m_pSpeech = this->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 7, 1.0, 0, 1, 1, 0, 0, 0);
      for ( i = 0; i != 24; ++i )
      {
        if ( CDOTA_BaseNPC::GetAbilityByIndex(this, i) != 0 )
        {
          AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, i);
          (*(AbilityByIndex->_vptr_IHandleEntity + 207))(AbilityByIndex);
        }
      }
      for ( j = 0; j != 9; ++j )
      {
        Inventory = CDOTA_BaseNPC::GetInventory(this);
        if ( CDOTA_UnitInventory::GetItemInSlot(Inventory, j) != 0 )
        {
          v17 = CDOTA_BaseNPC::GetInventory(this);
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(v17, j);
          (*(ItemInSlot->_vptr_IHandleEntity + 207))(ItemInSlot);
        }
      }
      SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_COURIER_RESPAWNED, 0, this->m_iTeamNum.m_Value, 0);
      CEntityKeyValuesModifyScope::Release(&sg);
      CEntityKeyValues::~CEntityKeyValues(&kv);
      return;
    }
    if ( kv.m_keyHashes.m_nCount <= 0 )
    {
LABEL_34:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&kv.m_keyHashes);
      LOWORD(v21) = kv.m_keyHashes.m_nCount - 1;
      if ( kv.m_keyHashes.m_nAllocated != 0 )
      {
        m_pElements = (&kv.m_keyHashes.m_nAllocAllocated + 1);
        if ( kv.m_keyHashes.m_nAllocated >= 0xA )
          m_pElements = kv.m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      v21 = v21;
      m_pElements[v21] = 1526165316;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&kv.m_keyValues);
      if ( kv.m_keyValues.m_nAllocated != 0 )
        v23 = kv.m_keyValues.m_pElements;
      else
        v23 = 0;
      v24 = &v23[v21];
      m_flags = v24->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v24->m_value.m_flags = m_flags & 0xFFFE;
      v24->m_value.m_uint64 = 0;
      v24->m_value.m_type = 6;
      v24->m_value.m_char = 1;
      if ( kv.m_keyValues.m_nAllocated != 0 )
        v26 = kv.m_keyValues.m_pElements;
      else
        v26 = 0;
      v26[v21].m_pAttributeName = 0;
      goto LABEL_12;
    }
    v19 = 0;
    while ( 1 )
    {
      if ( kv.m_keyHashes.m_nAllocated != 0 )
      {
        v20 = (&kv.m_keyHashes.m_nAllocAllocated + 1);
        if ( kv.m_keyHashes.m_nAllocated > 9 )
          v20 = kv.m_keyHashes.m_pElements;
      }
      else
      {
        v20 = 0;
      }
      if ( v20[v19] == 1526165316 )
        break;
      if ( kv.m_keyHashes.m_nCount <= ++v19 )
        goto LABEL_34;
    }
    if ( kv.m_keyValues.m_nAllocated != 0 )
    {
      v27 = kv.m_keyValues.m_pElements;
      v28 = 24 * v19;
      if ( *(&kv.m_keyValues.m_pElements->m_pAttributeName + v28) != 0 )
      {
LABEL_46:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(&v27->m_pAttributeName + v28));
        goto LABEL_12;
      }
      v28 += kv.m_keyValues.m_pElements;
    }
    else
    {
      v28 = 24 * v19;
      v27 = 0;
      if ( *(v28 + 16) != 0 )
        goto LABEL_46;
    }
    v29 = *(v28 + 10);
    if ( (v29 & 1) != 0 )
      *(v28 + 10) = v29 & 0xFFFE;
    *v28 = 0;
    *(v28 + 8) = 6;
    *v28 = 1;
    goto LABEL_12;
  }
}


// CDOTA_Unit_Courier::OnSaveState  (line 647, @0x0000000002a828a0, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, Get, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, SetBool, ToDOTAPlayer
// calls: KeyValues::SetFloat, CDOTA_BaseNPC::OnSaveState, KeyValues::SetInt
// strings: "ownerPlayerID"
bool __fastcall CDOTA_Unit_Courier::OnSaveState(CDOTA_Unit_Courier *const this, KeyValues *pKV)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  float v9; // xmm1_4
  CEntityInstance *m_pInstance; // r13
  int v12; // eax
  unsigned __int8 v13; // al

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( v6 + 2 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v8->m_pInstance) != 0 )
        {
          v12 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
          KeyValues::SetInt(pKV, "ownerPlayerID", v12);
          v13 = (*(this->_vptr_IHandleEntity + 492))(this);
          KeyValues::SetInt(pKV, "flying", v13);
        }
      }
    }
  }
  v9 = 0.0;
  if ( g_pGameRules != 0 )
    v9 = *&g_pGameRules[18].m_szQuestName[20];
  KeyValues::SetFloat(pKV, "respawntime", v9);
  return CDOTA_BaseNPC::OnSaveState(this, pKV);
}


// CDOTA_Unit_Courier::OnLoadState  (line 664, @0x0000000002aaefb0, libserver.so)  // inlines: DOTAGameRules, GetBool, GetGameTime, NetworkStateChanged, Set, curtime, operator=<float>
// calls: KeyValues::GetInt, KeyValues::GetFloat, CBaseEntity::ThinkSet, CDOTA_Unit_Courier::SetCourierState, CDOTA_BaseNPC::OnLoadState, CDOTA_Unit_Courier::UpgradeToFlyingCourier
// globals: CDOTA_Unit_Courier::RespawnCourier(void)
bool __fastcall CDOTA_Unit_Courier::OnLoadState(CDOTA_Unit_Courier *const this, KeyValues *pKV)
{
  float v4; // xmm1_4
  float Float; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  CGlobalVars *v8; // r13
  float v9; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v12; // [rsp+Ch] [rbp-24h]

  if ( KeyValues::GetInt(pKV, "flying", 0) != 0 )
    CDOTA_Unit_Courier::UpgradeToFlyingCourier(this);
  Float = KeyValues::GetFloat(pKV, "respawntime", v4);
  if ( Float > -1.0 )
  {
    v6 = 0.0;
    if ( g_pGameRules != 0 )
      v6 = *&g_pGameRules[18].m_szQuestName[20];
    v7 = Float + v6;
    if ( v7 != this->m_flRespawnTime.m_Value )
    {
      v12 = v7;
      (*(this->_vptr_IHandleEntity + 22))(this, 4508, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flRespawnTime.m_Value = v12;
    }
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v9 = v8->m_flCurrentTime + 0.1;
    }
    else
    {
      v9 = 0.1;
    }
    CBaseEntity::ThinkSet(this, CDOTA_Unit_Courier::RespawnCourier, v9, -966790691, 0);
    CDOTA_Unit_Courier::SetCourierState(this, CourierState_t::COURIER_STATE_DEAD, 0);
  }
  return CDOTA_BaseNPC::OnLoadState(this, pKV);
}


// CDOTA_Unit_Courier::SetCourierState  (line 684, @0x0000000002aae460, libserver.so)  // inlines: NetworkStateChanged, Set, operator=, operator=<CBaseEntity*>, operator=<CourierState_t>
// calls: CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>
// callers: CDOTA_Unit_Courier::OnCommandMoveTo, CDOTA_Unit_Courier::OnIdleChanged, CDOTA_Modifier_Courier_TransferItems::OnCreated, CDOTA_Ability_Courier_TakeStashAndTransferItems::OnSpellStart, CDOTA_Ability_Courier_TakeStashItems::OnSpellStart, CDOTA_Unit_Courier::OnLoadState, CDOTA_Unit_Courier::Event_Killed
void __fastcall CDOTA_Unit_Courier::SetCourierState(
        CDOTA_Unit_Courier *const this,
        CourierState_t nState,
        CBaseEntity *pStateEntity)
{
  CHandle<CBaseEntity> b; // [rsp+0h] [rbp-30h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 408))(this) != 0 || nState == CourierState_t::COURIER_STATE_DEAD )
  {
    if ( nState != this->m_nCourierState.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 4512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nCourierState.m_Value = nState;
    }
    CHandle<CBaseEntity>::CHandle(&b, pStateEntity);
    if ( operator!=<CBaseEntity>(&this->m_hCourierStateEntity.m_Value, &b) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 4516, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_hCourierStateEntity.m_Value = b;
    }
  }
}


// CDOTA_Unit_Courier::OnCommandMoveTo  (line 697, @0x0000000002aae520, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, LookupEntity, OnCommandMoveTo, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTAGamerules::IsInRangeOfFountain, CBaseEntity::GetAbsOrigin, CDOTA_Unit_Courier::GetLastOrderIssuerPlayer, CDOTA_Unit_Courier::SetCourierState
void __fastcall CDOTA_Unit_Courier::OnCommandMoveTo(CDOTA_Unit_Courier *const this, const Vector *const pos)
{
  const Vector *AbsOrigin; // rax
  __int64 i; // rbx
  CDOTAPlayer *LastOrderIssuerPlayer; // rax
  unsigned __int16 v7; // dx
  int v8; // esi
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // rdx

  if ( CDOTAGamerules::IsInRangeOfFountain(g_pGameRules, this->m_iTeamNum.m_Value, pos) )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    if ( !CDOTAGamerules::IsInRangeOfFountain(g_pGameRules, this->m_iTeamNum.m_Value, AbsOrigin) )
      CDOTA_Unit_Courier::SetCourierState(this, CourierState_t::COURIER_STATE_RETURNING_TO_BASE, 0);
  }
  else
  {
    LastOrderIssuerPlayer = CDOTA_Unit_Courier::GetLastOrderIssuerPlayer(this);
    if ( LastOrderIssuerPlayer != 0
      && (LastOrderIssuerPlayer->m_hAssignedHero.m_Value.m_Index == -1
        ? (v7 = 0x7FFF, v8 = 0x7FFF)
        : (v7 = LastOrderIssuerPlayer->m_hAssignedHero.m_Value.m_Index & 0x7FFF, v8 = v7),
          ((v9 = (LastOrderIssuerPlayer->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF) + 2) > 1
       && (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9]) != 0
       && (v11 = &v10[v8 & 0x1FF]) != 0
       && v9 == v11->m_EHandle.m_Index
       && (m_pInstance = v11->m_pInstance) != 0
       && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0) )
    {
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        m_pInstance = 0;
    }
    else
    {
      m_pInstance = 0;
    }
    CDOTA_Unit_Courier::SetCourierState(this, CourierState_t::COURIER_STATE_MOVING, m_pInstance);
  }
  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(&this->INextBot);
        i != 0;
        i = (*(this->_vptr_INextBotEventResponder + 4))(&this->INextBot, i) )
  {
    (*(*i + 352LL))(i, pos);
  }
}


// CDOTA_Unit_Courier::OnIdleChanged  (line 729, @0x0000000002aae6e0, libserver.so)
// calls: CDOTA_BaseNPC::HasQueuedOrders, CDOTA_Unit_Courier::SetCourierState
void __fastcall CDOTA_Unit_Courier::OnIdleChanged(CDOTA_Unit_Courier *const this)
{
  if ( this->m_bIsIdle && (*(this->_vptr_IHandleEntity + 408))(this) != 0 && !CDOTA_BaseNPC::HasQueuedOrders(this) )
    CDOTA_Unit_Courier::SetCourierState(this, CourierState_t::COURIER_STATE_IDLE, 0);
}


// CDOTA_Unit_Courier::UpgradeToFlyingCourier  (line 740, @0x0000000002a8bfe0, libserver.so)  // inlines: AddObstructionProperty, NetworkStateChanged, Set, SetBaseMaxHealth, SetDayTimeVisionRange, SetMaximumGoldBounty, SetMinimumGoldBounty, SetMoveCapability, SetNightTimeVisionRange, operator=<bool>, operator=<int>
// calls: CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::UpgradeAbility, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, CDOTA_Unit_Courier::AddCourierWearables, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Unit_Courier::UpdateCourierMode, CDOTA_Unit_Courier::OnLoadState, CDOTA_Item_Flying_Courier::Think
// strings: "modifier_courier_flying", "base_movespeed"
bool __fastcall CDOTA_Unit_Courier::UpgradeToFlyingCourier(CDOTA_Unit_Courier *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  int (**v3)(...); // rax
  int v4; // eax
  bool v5; // zf
  int m_nObstructionProperties; // eax
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v8; // eax
  CDOTABaseAbility *AbilityByIndex; // rax
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]

  v12 = __readfsqword(0x28u);
  if ( this->m_bFlyingCourier.m_Value )
    return 0;
  (*(this->_vptr_IHandleEntity + 22))(this, 4506, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_bFlyingCourier.m_Value = 1;
  vptr_IHandleEntity[388](this, 10);
  v3 = this->_vptr_IHandleEntity;
  this->m_flBaseMaxHealth = 150.0;
  v4 = v3[156](this);
  CDOTA_BaseNPC::ModifyHealth(this, v4, 0, 0, 0);
  v5 = this->m_iDayTimeVisionRange.m_Value == 300;
  this->m_iXPBounty = 349;
  if ( !v5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2396, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iDayTimeVisionRange.m_Value = 300;
  }
  if ( this->m_iNightTimeVisionRange.m_Value != 300 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iNightTimeVisionRange.m_Value = 300;
  }
  this->m_iGoldBountyMin = 175;
  m_nObstructionProperties = this->m_nObstructionProperties;
  m_pObstructionRecord = this->m_pObstructionRecord;
  this->m_iGoldBountyMax = 175;
  this->m_iMoveCapabilities = 2;
  v8 = m_nObstructionProperties | 4;
  this->m_nObstructionProperties = v8;
  if ( m_pObstructionRecord != 0 )
    m_pObstructionRecord->m_ObjectProperties = v8;
  AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, 5);
  CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
  KeyValues::KeyValues(&kv, "modifier_courier_flying");
  KeyValues::SetInt(&kv, "base_movespeed", 430);
  KeyValues::SetInt(&kv, "bonus_armor", 10);
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_courier_flying", &kv, 0);
  CDOTA_Unit_Courier::AddCourierWearables(this);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Unit_Courier::PrecacheCourierWearables  (line 776, @0x0000000002a8c490, libserver.so)  // inlines: item_definition_index_t
// calls: CDOTA_BaseNPC::GetGeneratingEconItem, CDOTAItemDefinition::BuildCourierWearableList, GetItemSchema, CEconItemSchema::GetItemDefinition
// callers: CDOTA_Unit_Courier::Precache
void __fastcall CDOTA_Unit_Courier::PrecacheCourierWearables(
        CDOTA_Unit_Courier *const this,
        const CEntityPrecacheContext *pContext)
{
  CEconItemView *GeneratingEconItem; // rbx
  item_definition_index_t *v4; // r8
  const CDOTAItemDefinition *v5; // rax
  int v6; // eax
  int v7; // ebx
  int v8; // r13d
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  item_definition_index_t pItemDefs[16]; // [rsp+0h] [rbp-40h] BYREF
  _BYTE v12[32]; // [rsp+20h] [rbp-20h] BYREF

  GeneratingEconItem = CDOTA_BaseNPC::GetGeneratingEconItem(this);
  if ( GeneratingEconItem != 0 )
  {
    v4 = pItemDefs;
    do
    {
      ++v4;
      v4[-1].m_Data = 0;
    }
    while ( v4 != v12 );
    v5 = (*(GeneratingEconItem->_vptr_IEconItemInterface + 12))(GeneratingEconItem, v12);
    v6 = CDOTAItemDefinition::BuildCourierWearableList(
           v5,
           16,
           pItemDefs,
           GeneratingEconItem,
           CourierWearableFilterType_t::COURIER_WEARABLE_ALL);
    v7 = 0;
    v8 = v6;
    if ( v6 > 0 )
    {
      do
      {
        ItemSchema = GetItemSchema();
        ItemDefinition = CEconItemSchema::GetItemDefinition(ItemSchema, pItemDefs[v7], 1);
        if ( ItemDefinition != 0 )
          (*(ItemDefinition->_vptr_IEconItemDefinition + 25))(ItemDefinition, pContext);
        ++v7;
      }
      while ( v7 != v8 );
    }
  }
}


// CDOTA_Unit_Courier::OnAssetModifiersUpdated  (line 800, @0x0000000002ab2fb0, libserver.so)  // inlines: GetStyle, IsValidIndex, SetOriginalModel, operator=
// calls: GetAssetModifier<CDOTA_Unit_Courier, CEntityScaleModifier>, CDOTA_BaseNPC::GetGeneratingEconItem, CEconItemView::GetAssetInfo, CDOTA_Unit_Courier::GetCourierModelNames, MakeEntitySystemString, CBaseModelEntity::SetModel, CDOTA_BaseNPC::OnAssetModifiersUpdated, CDOTA_BaseNPC::StartGesture, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (14 total)
// strings: "modifier_courier_morph_effect"
void __fastcall CDOTA_Unit_Courier::OnAssetModifiersUpdated(CDOTA_Unit_Courier *const this)
{
  const CEntityScaleModifier *Asset; // rax
  unsigned int v3; // r14d
  CEconItemView *GeneratingEconItem; // rax
  const CEconItemView *v5; // r12
  __int64 v6; // r13
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *m_pStyles; // rdx
  CEconStyleInfo *v8; // rax
  __m128i m_flFlyingScale_low; // xmm0
  const char *v10; // rax
  const char *v11; // rax
  float v12; // xmm1_4
  UtlSymLargeId_t v13; // [rsp+0h] [rbp-50h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  Asset = GetAssetModifier<CDOTA_Unit_Courier,CEntityScaleModifier>(this);
  if ( Asset != 0 )
    v3 = _mm_cvtsi128_si32(LODWORD(Asset->m_flScaleSize));
  else
    v3 = _mm_cvtsi128_si32(0x3F800000u);
  GeneratingEconItem = CDOTA_BaseNPC::GetGeneratingEconItem(this);
  v5 = GeneratingEconItem;
  if ( GeneratingEconItem != 0 )
  {
    v6 = (*(GeneratingEconItem->_vptr_IEconItemInterface + 16))(GeneratingEconItem);
    m_pStyles = CEconItemView::GetAssetInfo(v5)->m_pStyles;
    if ( m_pStyles != 0 && v6 < m_pStyles->m_Size )
    {
      v8 = m_pStyles->m_Memory.m_pMemory[v6];
      if ( v8 != 0 && this->m_bFlyingCourier.m_Value )
      {
        m_flFlyingScale_low = LODWORD(v8->m_flFlyingScale);
        if ( *m_flFlyingScale_low.m128i_i32 != 0.0 )
          v3 = _mm_cvtsi128_si32(m_flFlyingScale_low);
      }
    }
  }
  CDOTA_Unit_Courier::GetCourierModelNames(this, &this->m_strCourierModel, &this->m_strFlyingCourierModel);
  v10 = (*(this->_vptr_IHandleEntity + 490))(this);
  MakeEntitySystemString(v10);
  this->m_iszOriginalModel.u.m_Id = v13;
  v11 = (*(this->_vptr_IHandleEntity + 490))(this);
  CBaseModelEntity::SetModel(this, v11);
  CDOTA_BaseNPC::OnAssetModifiersUpdated(this);
  (*(this->_vptr_IHandleEntity + 222))(this, *_mm_cvtsi32_si128(v3).m128i_i64);
  CDOTA_BaseNPC::StartGesture(this, 1534, 0.1, 0.1, 9, 0, 1.0);
  KeyValues::KeyValues(&kv, "modifier_courier_morph_effect");
  KeyValues::SetFloat(&kv, "duration", v12);
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_courier_morph_effect", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Courier_Morph_Effect::~CDOTA_Modifier_Courier_Morph_Effect  (line 849, @0x0000000002ac2300, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Courier_Morph_Effect::~CDOTA_Modifier_Courier_Morph_Effect(
        CDOTA_Modifier_Courier_Morph_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D0FB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Courier_Morph_Effect::~CDOTA_Modifier_Courier_Morph_Effect  (line 849, @0x0000000002ac2320, libserver.so)  // inlines: ~CDOTA_Modifier_Courier_Morph_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Courier_Morph_Effect::~CDOTA_Modifier_Courier_Morph_Effect(
        CDOTA_Modifier_Courier_Morph_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D0FB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Courier_Morph_Effect::IsHidden  (line 854, @0x0000000002ab74b0, libserver.so)
bool __fastcall CDOTA_Modifier_Courier_Morph_Effect::IsHidden(CDOTA_Modifier_Courier_Morph_Effect *const this)
{
  return 1;
}


// CDOTA_Modifier_Courier_Morph_Effect::GetEffectName  (line 855, @0x0000000002ab74c0, libserver.so)
// strings: "particles/items_fx/item_sheepstick.vpcf"
const char *__fastcall CDOTA_Modifier_Courier_Morph_Effect::GetEffectName(
        CDOTA_Modifier_Courier_Morph_Effect *const this)
{
  return "particles/items_fx/item_sheepstick.vpcf";
}


// CDOTA_Modifier_Courier_Morph_Effect::GetEffectAttachType  (line 856, @0x0000000002ab74d0, libserver.so)
int __fastcall CDOTA_Modifier_Courier_Morph_Effect::GetEffectAttachType(
        CDOTA_Modifier_Courier_Morph_Effect *const this)
{
  return 1;
}


// CDOTA_Modifier_Courier_Morph_Effect::ShouldUseOverheadOffset  (line 857, @0x0000000002ab74e0, libserver.so)
bool __fastcall CDOTA_Modifier_Courier_Morph_Effect::ShouldUseOverheadOffset(
        CDOTA_Modifier_Courier_Morph_Effect *const this)
{
  return 0;
}


// CDOTA_Unit_Courier::OnAlive  (line 862, @0x0000000002a772b0, libserver.so)
void __fastcall CDOTA_Unit_Courier::OnAlive(CDOTA_Unit_Courier *const this)
{
  ;
}


// CDOTA_Unit_Courier::OnDying  (line 870, @0x0000000002a772c0, libserver.so)
void __fastcall CDOTA_Unit_Courier::OnDying(CDOTA_Unit_Courier *const this)
{
  ;
}


// CDOTA_Unit_Courier::BuildAttachedParticleFilter  (line 878, @0x0000000002a79690, libserver.so)
// calls: CDOTA_BaseNPC::BuildAttachedParticleFilter
void __fastcall CDOTA_Unit_Courier::BuildAttachedParticleFilter(
        CDOTA_Unit_Courier *const this,
        AttachedParticleFilter_t *pFilter)
{
  CDOTA_BaseNPC::BuildAttachedParticleFilter(this, pFilter);
  pFilter->m_nCourierType = 2 - !this->m_bFlyingCourier.m_Value;
}


// CDOTA_Unit_Courier::ComputeOverriddenGeneratingItem  (line 955, @0x0000000002a7d5f0, libserver.so)  // inlines: DOTAGameRules, GetItemInLoadoutForHeroBySlotTypeAndPlayerID
// calls: CDOTA_BaseNPC::GetEconSpecifyingPlayerID, DOTAInventoryManager, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType
// globals: CDOTA_Unit_Courier::sm_pForceEconItemHack
CEconItemView *__fastcall CDOTA_Unit_Courier::ComputeOverriddenGeneratingItem(
        CDOTA_Unit_Courier *const this,
        const CEntityKeyValues *pKeyValues)
{
  int EconSpecifyingPlayerID; // ebx
  CDOTAInventoryManager *v3; // rax
  CEconItemView *result; // rax
  int pPlayerID[5]; // [rsp+Ch] [rbp-14h] BYREF

  if ( g_pGameRules == 0
    || *&g_pGameRules[6].m_szQuestName[28] != 8
    || (result = CDOTA_Unit_Courier::sm_pForceEconItemHack, CDOTA_Unit_Courier::sm_pForceEconItemHack == 0)
    || !CDOTA_Unit_Courier::sm_pForceEconItemHack->m_bInitialized.m_Value )
  {
    EconSpecifyingPlayerID = CDOTA_BaseNPC::GetEconSpecifyingPlayerID(this);
    v3 = DOTAInventoryManager();
    pPlayerID[0] = EconSpecifyingPlayerID;
    return CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(v3, 1000, 29, pPlayerID);
  }
  return result;
}


// CDOTA_Unit_Courier::IsFlyingCourier  (line 971, @0x0000000002a772d0, libserver.so)
bool __fastcall CDOTA_Unit_Courier::IsFlyingCourier(CDOTA_Unit_Courier *const this)
{
  return this->m_bFlyingCourier.m_Value;
}


// CDOTA_Unit_Courier::GetCourierStateEntity  (line 976, @0x0000000002a8c550, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_Bot::GetIncomingCourier
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CDOTA_Unit_Courier::GetCourierStateEntity(CDOTA_Unit_Courier *const this)
{
  CBaseEntity *result; // rax
  uint32 m_Index; // esi
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  result = 0;
  if ( (this->m_nCourierState.m_Value - 2) <= 1 )
  {
    m_Index = this->m_hCourierStateEntity.m_Value.m_Index;
    result = 0;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCourierStateEntity.m_Value.m_Index) >> 9)
                                                          & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hCourierStateEntity.m_Value.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
          return v4->m_pInstance;
      }
    }
  }
  return result;
}


// CDOTA_Unit_Courier::UpdateCourierMode  (line 988, @0x0000000002a8c1d0, libserver.so)  // inlines: DOTAGameRules, GetGameMode, IsAddOnGame, IsFreeCourierMode, curtime
// calls: CBaseEntity::ThinkSet, CDOTAGamerules::GetDOTATime, CDOTA_Unit_Courier::UpgradeToFlyingCourier
// globals: CDOTA_Unit_Courier::UpdateCourierMode(void)
void __fastcall CDOTA_Unit_Courier::UpdateCourierMode(CDOTA_Unit_Courier *const this)
{
  int v2; // edx
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v5; // xmm0_4

  if ( g_pGameRules != 0 && g_pGameRules[5].m_szQuestName[114] != 0 )
  {
    v2 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v2 != 15
      && v2 != 19
      && *&g_pGameRules[6].m_szQuestName[28] == 5
      && (*(this->_vptr_IHandleEntity + 408))(this) != 0
      && (*(this->_vptr_IHandleEntity + 492))(this) == 0
      && CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) > 180.0 )
    {
      CDOTA_Unit_Courier::UpgradeToFlyingCourier(this);
    }
  }
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v5 = v3->m_flCurrentTime + 1.0;
  }
  else
  {
    v5 = 1.0;
  }
  CBaseEntity::ThinkSet(this, CDOTA_Unit_Courier::UpdateCourierMode, v5, 1707458671, 0);
}


// CDOTA_Modifier_Courier_Flying::~CDOTA_Modifier_Courier_Flying  (line 1009, @0x0000000002ac21c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Courier_Flying::~CDOTA_Modifier_Courier_Flying(
        CDOTA_Modifier_Courier_Flying *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D1310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Courier_Flying::~CDOTA_Modifier_Courier_Flying  (line 1009, @0x0000000002ac21e0, libserver.so)  // inlines: ~CDOTA_Modifier_Courier_Flying
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Courier_Flying::~CDOTA_Modifier_Courier_Flying(
        CDOTA_Modifier_Courier_Flying *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D1310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Courier_Flying::IsHidden  (line 1016, @0x0000000002ab74f0, libserver.so)
bool __fastcall CDOTA_Modifier_Courier_Flying::IsHidden(CDOTA_Modifier_Courier_Flying *const this)
{
  return 1;
}


// CDOTA_Modifier_Courier_Flying::IsPermanent  (line 1017, @0x0000000002ab7500, libserver.so)
bool __fastcall CDOTA_Modifier_Courier_Flying::IsPermanent(CDOTA_Modifier_Courier_Flying *const this)
{
  return 1;
}


// CDOTA_Modifier_Courier_Flying::OnCreated  (line 1036, @0x0000000002a772e0, libserver.so)
void __fastcall CDOTA_Modifier_Courier_Flying::OnCreated(CDOTA_Modifier_Courier_Flying *const this, KeyValues *pKV)
{
  this->base_movespeed = 430;
  this->bonus_armor = 10;
}


// CDOTA_Modifier_Courier_Flying::OnRefresh  (line 1044, @0x0000000002a77300, libserver.so)
void __fastcall CDOTA_Modifier_Courier_Flying::OnRefresh(CDOTA_Modifier_Courier_Flying *const this, KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Courier_Flying::DeclareFunctions  (line 1050, @0x0000000002a77310, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Courier_Flying::GetModifierModelChange(CModifierParams const&), CDOTA_Modifier_Courier_Flying::GetModifierMoveSpeedOverride(CModifierParams const&), CDOTA_Modifier_Courier_Flying::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Courier_Flying::DeclareFunctions(CDOTA_Modifier_Courier_Flying *const this)
{
  this->m_Functions[152].__pfn = CDOTA_Modifier_Courier_Flying::GetModifierModelChange;
  this->m_Functions[152].__delta = 0;
  this->m_Functions[12].__delta = 0;
  this->m_Functions[12].__pfn = CDOTA_Modifier_Courier_Flying::GetModifierMoveSpeedOverride;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Courier_Flying::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[36].__pfn = (&stru_10 + 697);
  this->m_Functions[36].__delta = 0;
}


// CDOTA_Modifier_Courier_Flying::GetModifierMoveSpeedOverride  (line 1059, @0x0000000002a77380, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Courier_Flying::GetModifierMoveSpeedOverride(
        CDOTA_Modifier_Courier_Flying *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->base_movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Courier_Flying::GetModifierIncomingDamage_Percentage  (line 1066, @0x0000000002a82a00, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Courier_Flying::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Courier_Flying *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hattacker.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  result.m_szVal = v4->m_pInstance;
  if ( result.m_szVal == 0 )
    return 1uLL;
  if ( *(result.m_szVal + 339) == 0 )
    return 1uLL;
  if ( (result.m_szVal[2088] & 1) == 0 )
    return 1uLL;
  *&result.m_eType = 0x4248000000000001LL;
  if ( (result.m_szVal[2436] & 2) != 0 )
    return 1uLL;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Courier_Flying::GetModifierModelChange  (line 1078, @0x0000000002a7cc00, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Courier_Flying::GetModifierModelChange(
        CDOTA_Modifier_Courier_Flying *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 )
    result.m_szVal = (*(Parent->_vptr_IHandleEntity + 490))(Parent);
  else
    result.m_szVal = "";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Courier_Flying::GetModifierPhysicalArmorBonus  (line 1093, @0x0000000002a773a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Courier_Flying::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Courier_Flying *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Courier_Flying::CheckState  (line 1100, @0x0000000002a773c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Courier_Flying::CheckState(
        CDOTA_Modifier_Courier_Flying *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x1000000uLL;
  buffState->m_nDisabledStateMask &= ~0x1000000uLL;
}


// CDOTA_Ability_Courier_ReturnToBase::~CDOTA_Ability_Courier_ReturnToBase  (line 1113, @0x0000000002ac4d30, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Courier_ReturnToBase::~CDOTA_Ability_Courier_ReturnToBase(
        CDOTA_Ability_Courier_ReturnToBase *const this)
{
  this->_vptr_IHandleEntity = &off_43D1670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Courier_ReturnToBase::~CDOTA_Ability_Courier_ReturnToBase  (line 1113, @0x0000000002ac4d50, libserver.so)  // inlines: ~CDOTA_Ability_Courier_ReturnToBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Courier_ReturnToBase::~CDOTA_Ability_Courier_ReturnToBase(
        CDOTA_Ability_Courier_ReturnToBase *const this)
{
  this->_vptr_IHandleEntity = &off_43D1670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Courier_ReturnToBase::Schema_DynamicBinding  (line 1115, @0x0000000002ab7510, libserver.so)
// globals: CDOTA_Ability_Courier_ReturnToBase::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_ReturnToBase::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_ReturnToBase *const this)
{
  return CDOTA_Ability_Courier_ReturnToBase::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1115, @0x0000000002ab7520, libserver.so)
// globals: CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::DestructInstance  (line 1115, @0x0000000002ab7530, libserver.so)  // inlines: Destruct<CDOTA_Ability_Courier_ReturnToBase>
void __fastcall CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::FreeInstance  (line 1115, @0x0000000002ab7550, libserver.so)
void __fastcall CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::CanAllocate  (line 1115, @0x0000000002ab7570, libserver.so)
bool __fastcall CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1115, @0x0000000002ab7580, libserver.so)
// globals: CDOTA_Ability_Courier_ReturnToBase::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_ReturnToBase::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::AllocateInstance  (line 1115, @0x0000000002abe4c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::ConstructInstance  (line 1115, @0x0000000002ac2570, libserver.so)  // inlines: CDOTA_Ability_Courier_ReturnToBase, Construct<CDOTA_Ability_Courier_ReturnToBase>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43D1670;
  }
  return p;
}


// CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1115, @0x0000000002acb700, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1115, @0x0000000002acb720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal  (line 1115, @0x0000000002ad6450, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "courier_return_to_base", "CDOTA_Ability_Courier_ReturnToBase"
// globals: `guard variable for'CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass, CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass, __dso_handle, CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClassInfo, CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass);
    CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass._vptr_CEntityClass = off_43D15F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass);
    __cxa_atexit(
      CDOTA_Ability_Courier_ReturnToBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Courier_ReturnToBaseClass != 0 )
    return &CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass;
  if ( `guard variable for'CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClassInfo,
      "CDOTA_Ability_Courier_ReturnToBase",
      "courier_return_to_base",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClassInfo);
  }
  CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass.m_pClassInfo = &CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClassInfo;
  CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass.m_pBaseClassInfo = CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Courier_ReturnToBaseClass = &CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass;
  CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClassInfo.m_pClass = &CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass;
  CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Courier_ReturnToBaseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Courier_ReturnToBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnToBaseClass;
}


// CDOTA_Ability_Courier_ReturnToBase::ProcsMagicStick  (line 1119, @0x0000000002ab7590, libserver.so)
bool __fastcall CDOTA_Ability_Courier_ReturnToBase::ProcsMagicStick(CDOTA_Ability_Courier_ReturnToBase *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_ReturnToBase::OnSpellStart  (line 1127, @0x0000000002a8ba70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, GetCourierSpawnLocationForTeam, CDOTA_BaseNPC::RemoveModifierByName, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::MoveToPosition
// strings: "modifier_courier_transfer_items"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Courier_ReturnToBase::OnSpellStart(CDOTA_Ability_Courier_ReturnToBase *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v7; // rax
  int v8[8]; // [rsp+0h] [rbp-20h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  GetCourierSpawnLocationForTeam(v8, Caster->m_iTeamNum.m_Value);
  if ( (v8[0] + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8[0]) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[v8[0] & 0x1FF];
      if ( v4 != 0 && v8[0] == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v4->m_pInstance);
        v7 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::MoveToPosition(v7, *&AbsOrigin->x, AbsOrigin->z);
      }
    }
  }
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v5, "modifier_courier_transfer_items");
}


// CDOTA_Ability_Courier_GoToSecretShop::~CDOTA_Ability_Courier_GoToSecretShop  (line 1146, @0x0000000002ac4d80, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Courier_GoToSecretShop::~CDOTA_Ability_Courier_GoToSecretShop(
        CDOTA_Ability_Courier_GoToSecretShop *const this)
{
  this->_vptr_IHandleEntity = &off_43D2170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Courier_GoToSecretShop::~CDOTA_Ability_Courier_GoToSecretShop  (line 1146, @0x0000000002ac4da0, libserver.so)  // inlines: ~CDOTA_Ability_Courier_GoToSecretShop
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Courier_GoToSecretShop::~CDOTA_Ability_Courier_GoToSecretShop(
        CDOTA_Ability_Courier_GoToSecretShop *const this)
{
  this->_vptr_IHandleEntity = &off_43D2170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Courier_GoToSecretShop::Schema_DynamicBinding  (line 1148, @0x0000000002ab75a0, libserver.so)
// globals: CDOTA_Ability_Courier_GoToSecretShop::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_GoToSecretShop::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_GoToSecretShop *const this)
{
  return CDOTA_Ability_Courier_GoToSecretShop::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1148, @0x0000000002ab75b0, libserver.so)
// globals: CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::DestructInstance  (line 1148, @0x0000000002ab75c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Courier_GoToSecretShop>
void __fastcall CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::FreeInstance  (line 1148, @0x0000000002ab75e0, libserver.so)
void __fastcall CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::CanAllocate  (line 1148, @0x0000000002ab7600, libserver.so)
bool __fastcall CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1148, @0x0000000002ab7610, libserver.so)
// globals: CDOTA_Ability_Courier_GoToSecretShop::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_GoToSecretShop::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::AllocateInstance  (line 1148, @0x0000000002abe500, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::ConstructInstance  (line 1148, @0x0000000002ac25a0, libserver.so)  // inlines: CDOTA_Ability_Courier_GoToSecretShop, Construct<CDOTA_Ability_Courier_GoToSecretShop>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43D2170;
  }
  return p;
}


// CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1148, @0x0000000002acb750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1148, @0x0000000002acb770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal  (line 1148, @0x0000000002ad65a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "courier_go_to_secretshop", "CDOTA_Ability_Courier_GoToSecretShop"
// globals: `guard variable for'CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass, CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass, __dso_handle, CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClassInfo, CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClassInfo
CEntityClass *__cdecl CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass);
    CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass._vptr_CEntityClass = off_43D20F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass);
    __cxa_atexit(
      CDOTA_Ability_Courier_GoToSecretShop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Courier_GoToSecretShopClass != 0 )
    return &CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass;
  if ( `guard variable for'CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClassInfo,
      "CDOTA_Ability_Courier_GoToSecretShop",
      "courier_go_to_secretshop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClassInfo);
  }
  CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass.m_pClassInfo = &CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClassInfo;
  CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass.m_pBaseClassInfo = CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Courier_GoToSecretShopClass = &CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass;
  CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClassInfo.m_pClass = &CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass;
  CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Courier_GoToSecretShopClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Courier_GoToSecretShop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_GoToSecretShopClass;
}


// CDOTA_Ability_Courier_GoToSecretShop::ProcsMagicStick  (line 1152, @0x0000000002ab7620, libserver.so)
bool __fastcall CDOTA_Ability_Courier_GoToSecretShop::ProcsMagicStick(CDOTA_Ability_Courier_GoToSecretShop *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_GoToSecretShop::OnSpellStart  (line 1157, @0x0000000002a798b0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, CDOTAGamerules::GetShop, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::MoveToPosition, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_courier_transfer_items"
void __fastcall CDOTA_Ability_Courier_GoToSecretShop::OnSpellStart(CDOTA_Ability_Courier_GoToSecretShop *const this)
{
  _BOOL4 v2; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *Shop; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  Vector vLocation; // 0:^0.12

  v2 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == 3;
  Caster = CDOTABaseAbility::GetCaster(this);
  Shop = CDOTAGamerules::GetShop(g_pGameRules, Caster->m_iTeamNum.m_Value, (3 * v2 + 2));
  if ( Shop != 0 )
  {
    vLocation = *CBaseEntity::GetAbsOrigin(Shop);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::MoveToPosition(v5, *&vLocation.x, vLocation.z);
  }
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_courier_transfer_items");
}


// CDOTA_Ability_Courier_TransferItems::~CDOTA_Ability_Courier_TransferItems  (line 1182, @0x0000000002ac4dd0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Courier_TransferItems::~CDOTA_Ability_Courier_TransferItems(
        CDOTA_Ability_Courier_TransferItems *const this)
{
  this->_vptr_IHandleEntity = &off_43D2C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Courier_TransferItems::~CDOTA_Ability_Courier_TransferItems  (line 1182, @0x0000000002ac4df0, libserver.so)  // inlines: ~CDOTA_Ability_Courier_TransferItems
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Courier_TransferItems::~CDOTA_Ability_Courier_TransferItems(
        CDOTA_Ability_Courier_TransferItems *const this)
{
  this->_vptr_IHandleEntity = &off_43D2C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Courier_TransferItems::Schema_DynamicBinding  (line 1184, @0x0000000002ab7630, libserver.so)
// globals: CDOTA_Ability_Courier_TransferItems::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_TransferItems::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_TransferItems *const this)
{
  return CDOTA_Ability_Courier_TransferItems::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1184, @0x0000000002ab7640, libserver.so)
// globals: CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::DestructInstance  (line 1184, @0x0000000002ab7650, libserver.so)  // inlines: Destruct<CDOTA_Ability_Courier_TransferItems>
void __fastcall CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::FreeInstance  (line 1184, @0x0000000002ab7670, libserver.so)
void __fastcall CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::CanAllocate  (line 1184, @0x0000000002ab7690, libserver.so)
bool __fastcall CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1184, @0x0000000002ab76a0, libserver.so)
// globals: CDOTA_Ability_Courier_TransferItems::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_TransferItems::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::AllocateInstance  (line 1184, @0x0000000002abe540, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::ConstructInstance  (line 1184, @0x0000000002ac25d0, libserver.so)  // inlines: CDOTA_Ability_Courier_TransferItems, Construct<CDOTA_Ability_Courier_TransferItems>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43D2C70;
  }
  return p;
}


// CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1184, @0x0000000002acb7a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1184, @0x0000000002acb7c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal  (line 1184, @0x0000000002ad66f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "courier_transfer_items", "CDOTA_Ability_Courier_TransferItems"
// globals: `guard variable for'CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass, CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass, __dso_handle, CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Courier_TransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClassInfo, CDOTA_Ability_Courier_TransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass);
    CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass._vptr_CEntityClass = off_43D2BF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass);
    __cxa_atexit(
      CDOTA_Ability_Courier_TransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Courier_TransferItemsClass != 0 )
    return &CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass;
  if ( `guard variable for'CDOTA_Ability_Courier_TransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_TransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Courier_TransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClassInfo,
      "CDOTA_Ability_Courier_TransferItems",
      "courier_transfer_items",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_TransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClassInfo);
  }
  CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass.m_pClassInfo = &CDOTA_Ability_Courier_TransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClassInfo;
  CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass.m_pBaseClassInfo = CDOTA_Ability_Courier_TransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Courier_TransferItemsClass = &CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass;
  CDOTA_Ability_Courier_TransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClassInfo.m_pClass = &CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass;
  CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Courier_TransferItemsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Courier_TransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItemsClass;
}


// CDOTA_Ability_Courier_TransferItems::ProcsMagicStick  (line 1189, @0x0000000002ab76b0, libserver.so)
bool __fastcall CDOTA_Ability_Courier_TransferItems::ProcsMagicStick(CDOTA_Ability_Courier_TransferItems *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_TransferItems::YouForgotToImplementOrDeclareServerClass  (line 1196, @0x0000000002a773e0, libserver.so)
int __fastcall CDOTA_Ability_Courier_TransferItems::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Courier_TransferItems *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_TransferItems::GetServerClass  (line 1196, @0x0000000002a8a0f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Courier_TransferItems::GetServerClass(
        CDOTA_Ability_Courier_TransferItems *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Ability_Courier_TransferItems::OnSpellStart  (line 1205, @0x0000000002a82c60, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetPlayerOwnerID, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::GetPlayer, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, SendHudErrorToPlayer, KeyValues::KeyValues, KeyValues::SetPtr, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "#dota_hud_error_no_items_to_deliver", "modifier_courier_transfer_items"
void __fastcall CDOTA_Ability_Courier_TransferItems::OnSpellStart(CDOTA_Ability_Courier_TransferItems *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *Player; // rax
  CDOTAPlayer *v4; // r12
  unsigned __int16 v5; // dx
  int v6; // esi
  int v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // rax
  int v11; // ebx
  CDOTA_BaseNPC *v12; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  int m_Value; // r15d
  unsigned __int16 v16; // dx
  int v17; // esi
  int v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *v21; // rdx
  CDOTA_BaseNPC *v22; // r12
  CDOTA_BaseNPC *v23; // rax
  CEntityInstance *v24; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, Caster->m_iLastAbilityPlayer);
  v4 = Player;
  if ( Player != 0 )
  {
    if ( Player->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = Player->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v6 = v5;
    }
    v7 = (Player->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
    if ( (v7 + 2) > 1 )
    {
      v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
      if ( v8 != 0 )
      {
        v9 = &v8[v6 & 0x1FF];
        if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v11 = 0;
            if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              while ( 1 )
              {
                v12 = CDOTABaseAbility::GetCaster(this);
                Inventory = CDOTA_BaseNPC::GetInventory(v12);
                ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v11);
                if ( ItemInSlot != 0 )
                {
                  m_Value = ItemInSlot->m_iPlayerOwnerID.m_Value;
                  if ( (*(v4->_vptr_IHandleEntity + 393))(v4) == m_Value )
                    break;
                }
                if ( ++v11 == 9 )
                {
                  SendHudErrorToPlayer("#dota_hud_error_no_items_to_deliver", v4);
                  return;
                }
              }
              KeyValues::KeyValues(&kv, "modifier_courier_transfer_items");
              if ( v4->m_hAssignedHero.m_Value.m_Index == -1 )
              {
                v16 = 0x7FFF;
                v17 = 0x7FFF;
              }
              else
              {
                v16 = v4->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
                v17 = v16;
              }
              v18 = (v4->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v16 & 0x7FFF;
              if ( (v18 + 2) > 1
                && (v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9]) != 0
                && (v20 = &v19[v17 & 0x1FF]) != 0
                && v18 == v20->m_EHandle.m_Index
                && (v24 = v20->m_pInstance, v20->m_pInstance != 0)
                && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
              {
                v21 = 0;
                if ( (v24[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  v21 = v24;
              }
              else
              {
                v21 = 0;
              }
              KeyValues::SetPtr(&kv, "target", v21);
              v22 = CDOTABaseAbility::GetCaster(this);
              v23 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v23, v22, this, "modifier_courier_transfer_items", &kv, 0);
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::~CDOTA_Ability_Courier_TransferItems_ToOtherPlayer  (line 1241, @0x0000000002ac4e20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::~CDOTA_Ability_Courier_TransferItems_ToOtherPlayer(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer *const this)
{
  this->_vptr_IHandleEntity = &off_43D3770;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::~CDOTA_Ability_Courier_TransferItems_ToOtherPlayer  (line 1241, @0x0000000002ac4e40, libserver.so)  // inlines: ~CDOTA_Ability_Courier_TransferItems_ToOtherPlayer
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::~CDOTA_Ability_Courier_TransferItems_ToOtherPlayer(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer *const this)
{
  this->_vptr_IHandleEntity = &off_43D3770;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::Schema_DynamicBinding  (line 1243, @0x0000000002ab76c0, libserver.so)
// globals: CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_TransferItems_ToOtherPlayer *const this)
{
  return CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1243, @0x0000000002ab76d0, libserver.so)
// globals: CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::DestructInstance  (line 1243, @0x0000000002ab76e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Courier_TransferItems_ToOtherPlayer>
void __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::FreeInstance  (line 1243, @0x0000000002ab7700, libserver.so)
void __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::CanAllocate  (line 1243, @0x0000000002ab7720, libserver.so)
bool __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1243, @0x0000000002ab7730, libserver.so)
// globals: CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::AllocateInstance  (line 1243, @0x0000000002abe580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::ConstructInstance  (line 1243, @0x0000000002ac2600, libserver.so)  // inlines: CDOTA_Ability_Courier_TransferItems_ToOtherPlayer, Construct<CDOTA_Ability_Courier_TransferItems_ToOtherPlayer>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43D3770;
  }
  return p;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1243, @0x0000000002acb7f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1243, @0x0000000002acb810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal  (line 1243, @0x0000000002ad6840, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "courier_transfer_items_to_other_player", "CDOTA_Ability_Courier_TransferItems_ToOtherPlayer"
// globals: `guard variable for'CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerCl, CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass, __dso_handle, CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClassI, CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClassInfo
CEntityClass *__cdecl CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass);
    CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass._vptr_CEntityClass = off_43D36F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass);
    __cxa_atexit(
      CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass != 0 )
    return &CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass;
  if ( `guard variable for'CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClassInfo,
      "CDOTA_Ability_Courier_TransferItems_ToOtherPlayer",
      "courier_transfer_items_to_other_player",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClassInfo);
  }
  CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass.m_pClassInfo = &CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClassInfo;
  CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass.m_pBaseClassInfo = CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass = &CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass;
  CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClassInfo.m_pClass = &CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass;
  CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TransferItems_ToOtherPlayerClass;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::ProcsMagicStick  (line 1248, @0x0000000002ab7740, libserver.so)
bool __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::ProcsMagicStick(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::IsHiddenAbilityCastable  (line 1249, @0x0000000002ab7750, libserver.so)
bool __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::IsHiddenAbilityCastable(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::YouForgotToImplementOrDeclareServerClass  (line 1256, @0x0000000002a773f0, libserver.so)
int __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetServerClass  (line 1256, @0x0000000002a8a2f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::GetServerClass(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::OnSpellStart  (line 1265, @0x0000000002a799a0, libserver.so)  // inlines: GetPlayerOwnerID, ToDOTABaseNPC, ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_PlayerResource::GetPlayer, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, SendHudErrorToPlayer, KeyValues::KeyValues, KeyValues::SetPtr, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "#dota_hud_error_no_items_to_deliver", "modifier_courier_transfer_items"
void __fastcall CDOTA_Ability_Courier_TransferItems_ToOtherPlayer::OnSpellStart(
        CDOTA_Ability_Courier_TransferItems_ToOtherPlayer *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r15
  int v4; // ebx
  CDOTAPlayer *Player; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  int m_Value; // r14d
  CDOTA_BaseNPC *v10; // rax
  CDOTAPlayer *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *v13; // rax
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && (CursorTarget[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
  {
    v4 = 0;
    Player = CDOTA_PlayerResource::GetPlayer(
               g_pDOTAPlayerResource,
               *&CursorTarget[6].m_NetworkTransmitComponent.m_Accessor);
    if ( Player != 0 )
    {
      while ( 1 )
      {
        Caster = CDOTABaseAbility::GetCaster(this);
        Inventory = CDOTA_BaseNPC::GetInventory(Caster);
        ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v4);
        if ( ItemInSlot != 0 )
        {
          m_Value = ItemInSlot->m_iPlayerOwnerID.m_Value;
          if ( (*(Player->_vptr_IHandleEntity + 393))(Player) == m_Value )
            break;
        }
        if ( ++v4 == 9 )
        {
          v10 = CDOTABaseAbility::GetCaster(this);
          v11 = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v10->m_iLastAbilityPlayer);
          SendHudErrorToPlayer("#dota_hud_error_no_items_to_deliver", v11);
          return;
        }
      }
      KeyValues::KeyValues(&kv, "modifier_courier_transfer_items");
      KeyValues::SetPtr(&kv, "target", v3);
      v12 = CDOTABaseAbility::GetCaster(this);
      v13 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v13, v12, this, "modifier_courier_transfer_items", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Courier_TransferItems::~CDOTA_Modifier_Courier_TransferItems  (line 1303, @0x0000000002ac2170, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Courier_TransferItems::~CDOTA_Modifier_Courier_TransferItems(
        CDOTA_Modifier_Courier_TransferItems *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D4230;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Courier_TransferItems::~CDOTA_Modifier_Courier_TransferItems  (line 1303, @0x0000000002ac2190, libserver.so)  // inlines: ~CDOTA_Modifier_Courier_TransferItems
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Courier_TransferItems::~CDOTA_Modifier_Courier_TransferItems(
        CDOTA_Modifier_Courier_TransferItems *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D4230;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Courier_TransferItems::IsPurgable  (line 1314, @0x0000000002ab7760, libserver.so)
bool __fastcall CDOTA_Modifier_Courier_TransferItems::IsPurgable(CDOTA_Modifier_Courier_TransferItems *const this)
{
  return 0;
}


// CDOTA_Modifier_Courier_TransferItems::OnCreated  (line 1325, @0x0000000002aae730, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, ToDOTABaseNPC, operator=
// calls: KeyValues::GetPtr, CDOTA_Buff::GetParent, CDOTA_BaseNPC::MoveToNPC, CDOTA_Buff::StartIntervalThink, __dynamic_cast, CDOTA_Unit_Courier::SetCourierState
// globals: `typeinfo for'CDOTA_Unit_Courier
void __fastcall CDOTA_Modifier_Courier_TransferItems::OnCreated(
        CDOTA_Modifier_Courier_TransferItems *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Ptr; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v5; // ecx
  __int16 v6; // si
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *Parent; // rax
  float v9; // xmm1_4
  CDOTA_BaseNPC *v10; // rax
  CDOTA_Unit_Courier *v11; // rax

  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr == 0 || !Ptr->m_bIsDOTANPC )
  {
    v7 = 0;
LABEL_11:
    this->m_hTarget.m_Index = -1;
    goto LABEL_7;
  }
  m_pEntity = Ptr->m_pEntity;
  if ( m_pEntity == 0 )
  {
    v7 = Ptr;
    goto LABEL_11;
  }
  v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v6 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v7 = Ptr;
  LOWORD(this->m_hTarget.m_Index) = v6 | this->m_hTarget.m_Index & 0x8000;
  this->m_hTarget.m_Index = (v5 << 15) | this->m_hTarget.m_Index & 0x7FFF;
LABEL_7:
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::MoveToNPC(Parent, v7);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v9);
  v10 = CDOTA_Buff::GetParent(this);
  if ( v10 != 0 )
  {
    v11 = __dynamic_cast(v10, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Courier, 0);
    if ( v11 != 0 )
      CDOTA_Unit_Courier::SetCourierState(v11, CourierState_t::COURIER_STATE_DELIVERING_ITEMS, v7);
  }
}


// CDOTA_Modifier_Courier_TransferItems::OnDestroy  (line 1345, @0x0000000002a8bb30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasQueuedOrders, GetCourierSpawnLocationForTeam, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::MoveToPosition
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Courier_TransferItems::OnDestroy(CDOTA_Modifier_Courier_TransferItems *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v7; // rax
  int v8[8]; // [rsp+0h] [rbp-20h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasQueuedOrders(Caster) )
  {
    v3 = CDOTA_Buff::GetCaster(this);
    GetCourierSpawnLocationForTeam(v8, v3->m_iTeamNum.m_Value);
    if ( (v8[0] + 2) > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8[0]) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[v8[0] & 0x1FF];
        if ( v5 != 0 && v8[0] == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(v5->m_pInstance);
          v7 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::MoveToPosition(v7, *&AbsOrigin->x, AbsOrigin->z);
        }
      }
    }
  }
}


// CDOTA_Modifier_Courier_TransferItems::DeclareFunctions  (line 1363, @0x0000000002a77400, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Courier_TransferItems::OnOrder(CModifierParams const&)
void __fastcall CDOTA_Modifier_Courier_TransferItems::DeclareFunctions(
        CDOTA_Modifier_Courier_TransferItems *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_Courier_TransferItems::OnOrder;
  this->m_Functions[125].__delta = 0;
}


// CDOTA_Modifier_Courier_TransferItems::OnOrder  (line 1370, @0x0000000002a84cd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Courier_TransferItems::OnOrder(
        CDOTA_Modifier_Courier_TransferItems *const this,
        const CModifierParams *const params)
{
  CConcreteEntityList *v2; // rcx
  CEntityInstance *m_pInstance; // r13
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  uint32 v10; // edx
  unsigned int v11; // eax
  CEntityIdentity *v12; // rsi
  CEntityIdentity *v13; // rsi
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  CDOTA_BaseNPC *v17; // r13
  unsigned int v18; // ecx
  CDOTA_BaseNPC *v19; // r14

  v2 = CEntityHandle::gm_pEntityList;
  m_pInstance = 0;
  m_Index = params->ability.m_Index;
  if ( params->ability.m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(params->ability.m_Index);
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[m_Index_low & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  v10 = params->hunit.m_Index;
  v11 = v10 + 2;
  if ( v10 + 2 > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[params->hunit.m_Index & 0x1FF];
      if ( v13 != 0 && v10 == v13->m_EHandle.m_Index )
      {
        v19 = v13->m_pInstance;
        if ( v13->m_pInstance != 0 && v19->m_bIsDOTANPC )
        {
          if ( CDOTA_Buff::GetParent(this) != v19
            || m_pInstance == 0
            || ((*(m_pInstance->_vptr_IHandleEntity + 251))(m_pInstance) & 0x800) != 0
            || params->nOrdertype == 27 )
          {
            v10 = params->hunit.m_Index;
            v2 = CEntityHandle::gm_pEntityList;
            v11 = v10 + 2;
          }
          else
          {
            CDOTA_Buff::Destroy(this, 0, 0, 0);
            v10 = params->hunit.m_Index;
            v2 = CEntityHandle::gm_pEntityList;
            v11 = v10 + 2;
          }
        }
      }
    }
  }
  if ( v11 <= 1 )
    return 1uLL;
  v14 = v2->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v14 == 0 )
    return 1uLL;
  v15 = &v14[params->hunit.m_Index & 0x1FF];
  if ( v15 == 0 )
    return 1uLL;
  if ( v15->m_EHandle.m_Index != v10 )
    return 1uLL;
  v17 = v15->m_pInstance;
  if ( v15->m_pInstance == 0 )
    return 1uLL;
  if ( !v17->m_bIsDOTANPC )
    return 1uLL;
  if ( CDOTA_Buff::GetParent(this) != v17 )
    return 1uLL;
  v18 = params->nOrdertype - 1;
  if ( v18 > 0x1B || ((1LL << v18) & 0x8000203) == 0 )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Courier_TransferItems::OnIntervalThink  (line 1405, @0x0000000002ab12b0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CSingleUserRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CDOTA_Item> >, Element, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetPlayerOwnerID, GetSerialNumber, GrowMemory, IndexToIdentity, Init, IsValid, Length2D, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, ToDOTAPlayer, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CSingleUserRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::Destroy, __stack_chk_fail, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_BaseNPC::GiveItems, CUtlMemory<CHandle<CDOTA_Item>, int>::Purge, CUtlMemory<CHandle<CDOTA_Item>, int>::Grow (19 total)
// strings: "handoff_distance", "General.CourierGivesItem"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Courier_TransferItems::OnIntervalThink(CDOTA_Modifier_Courier_TransferItems *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *v5; // r13
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  const Vector *v9; // rax
  int v10; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v14; // r14
  int m_Value; // r15d
  CEntityIdentity *m_pEntity; // rdx
  __int16 v17; // cx
  __int64 m_Size; // r14
  int v19; // eax
  CHandle<CDOTA_Item> *v20; // rax
  int v21; // r14d
  CDOTA_BaseNPC *v22; // rax
  unsigned __int16 v23; // dx
  int v24; // esi
  int v25; // eax
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  const CEntityInstance *m_pInstance; // r15
  CEntityIndex v29; // eax
  int v30; // [rsp+10h] [rbp-1A0h]
  int handoff_distance; // [rsp+1Ch] [rbp-194h] BYREF
  CUtlVector<CHandle<CDOTA_Item>,CUtlMemory<CHandle<CDOTA_Item>,int> > giveItems; // [rsp+20h] [rbp-190h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v34; // [rsp+178h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (v5 = v4->m_pInstance, v4->m_pInstance != 0)
    && BYTE3(v5[7]._vptr_IHandleEntity) != 0
    && (*(v5->_vptr_IHandleEntity + 408))(v4->m_pInstance) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, &handoff_distance, "handoff_distance");
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    v9 = CBaseEntity::GetAbsOrigin(v5);
    if ( handoff_distance > fsqrt(
                              ((v9->x - AbsOrigin->x) * (v9->x - AbsOrigin->x))
                            + ((v9->y - AbsOrigin->y) * (v9->y - AbsOrigin->y))) )
    {
      v10 = 0;
      giveItems.m_Size = 0;
      giveItems.m_Memory.m_pMemory = 0;
      giveItems.m_Memory.m_nAllocationCount = 0;
      giveItems.m_Memory.m_nGrowSize = 0;
      do
      {
        while ( 1 )
        {
          Caster = CDOTA_Buff::GetCaster(this);
          Inventory = CDOTA_BaseNPC::GetInventory(Caster);
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v10);
          v14 = ItemInSlot;
          if ( ItemInSlot != 0 )
          {
            m_Value = ItemInSlot->m_iPlayerOwnerID.m_Value;
            if ( (*(v5->_vptr_IHandleEntity + 414))(v5) == m_Value )
            {
              v30 = -1;
              m_pEntity = v14->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v17 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                v30 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
              }
              m_Size = giveItems.m_Size;
              v19 = giveItems.m_Size;
              if ( giveItems.m_Size == giveItems.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CDOTA_Item>,int>::Grow(&giveItems.m_Memory, 1);
                v19 = giveItems.m_Size;
              }
              giveItems.m_Size = v19 + 1;
              v20 = &giveItems.m_Memory.m_pMemory[m_Size];
              if ( v20 != 0 )
                break;
            }
          }
          if ( ++v10 == 9 )
            goto LABEL_23;
        }
        ++v10;
        v20->m_Index = v30;
      }
      while ( v10 != 9 );
LABEL_23:
      if ( (v5[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && CDOTA_BaseNPC::IsInRangeOfShop(v5, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0) )
      {
        v21 = 3;
      }
      else
      {
        v21 = 1;
      }
      v22 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::GiveItems(v22, &giveItems, v5, v21);
      if ( HIDWORD(v5[11].m_pEntity) == -1 )
      {
        v23 = 0x7FFF;
        v24 = 0x7FFF;
      }
      else
      {
        v23 = WORD2(v5[11].m_pEntity) & 0x7FFF;
        v24 = v23;
      }
      v25 = (HIDWORD(v5[11].m_pEntity) >> 15 << 15) | v23 & 0x7FFF;
      if ( (v25 + 2) > 1 )
      {
        v26 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v24 >> 9];
        if ( v26 != 0 )
        {
          v27 = &v26[v24 & 0x1FF];
          if ( v27 != 0 && v25 == v27->m_EHandle.m_Index )
          {
            m_pInstance = v27->m_pInstance;
            if ( v27->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v27->m_pInstance) != 0 )
            {
              CRecipientFilter::CRecipientFilter(&filter);
              filter._vptr_IRecipientFilter = &off_3FCB0D0;
              CRecipientFilter::AddRecipient(&filter, m_pInstance);
              v29.m_Data = CEntityInstance::GetEntityIndex(v5).m_Data;
              CBaseEntity::EmitSound(&filter, v29, "General.CourierGivesItem", 0, 0.0, 0);
              filter._vptr_IRecipientFilter = &off_3FCB0D0;
              CRecipientFilter::~CRecipientFilter(&filter);
            }
          }
        }
      }
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      giveItems.m_Size = 0;
      if ( (giveItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CDOTA_Item>,int>::Purge(&giveItems.m_Memory);
        if ( (giveItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CDOTA_Item>,int>::Purge(&giveItems.m_Memory);
      }
    }
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::~CDOTA_Ability_Courier_TakeStashAndTransferItems  (line 1457, @0x0000000002ac4e70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::~CDOTA_Ability_Courier_TakeStashAndTransferItems(
        CDOTA_Ability_Courier_TakeStashAndTransferItems *const this)
{
  this->_vptr_IHandleEntity = &off_43D4590;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::~CDOTA_Ability_Courier_TakeStashAndTransferItems  (line 1457, @0x0000000002ac4e90, libserver.so)  // inlines: ~CDOTA_Ability_Courier_TakeStashAndTransferItems
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::~CDOTA_Ability_Courier_TakeStashAndTransferItems(
        CDOTA_Ability_Courier_TakeStashAndTransferItems *const this)
{
  this->_vptr_IHandleEntity = &off_43D4590;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::Schema_DynamicBinding  (line 1459, @0x0000000002ab7770, libserver.so)
// globals: CDOTA_Ability_Courier_TakeStashAndTransferItems::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_TakeStashAndTransferItems *const this)
{
  return CDOTA_Ability_Courier_TakeStashAndTransferItems::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1459, @0x0000000002ab7780, libserver.so)
// globals: CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::DestructInstance  (line 1459, @0x0000000002ab7790, libserver.so)  // inlines: Destruct<CDOTA_Ability_Courier_TakeStashAndTransferItems>
void __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::FreeInstance  (line 1459, @0x0000000002ab77b0, libserver.so)
void __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::CanAllocate  (line 1459, @0x0000000002ab77d0, libserver.so)
bool __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1459, @0x0000000002ab77e0, libserver.so)
// globals: CDOTA_Ability_Courier_TakeStashAndTransferItems::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_TakeStashAndTransferItems::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::AllocateInstance  (line 1459, @0x0000000002abe5c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::ConstructInstance  (line 1459, @0x0000000002ac2630, libserver.so)  // inlines: CDOTA_Ability_Courier_TakeStashAndTransferItems, Construct<CDOTA_Ability_Courier_TakeStashAndTransferItems>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43D4590;
  }
  return p;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1459, @0x0000000002acb840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1459, @0x0000000002acb860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal  (line 1459, @0x0000000002ad6990, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "courier_take_stash_and_transfer_items", "CDOTA_Ability_Courier_TakeStashAndTransferItems"
// globals: `guard variable for'CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass, CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass, __dso_handle, CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClassInfo, CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass);
    CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass._vptr_CEntityClass = off_43D4510;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass);
    __cxa_atexit(
      CDOTA_Ability_Courier_TakeStashAndTransferItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass != 0 )
    return &CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass;
  if ( `guard variable for'CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClassInfo,
      "CDOTA_Ability_Courier_TakeStashAndTransferItems",
      "courier_take_stash_and_transfer_items",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClassInfo);
  }
  CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass.m_pClassInfo = &CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClassInfo;
  CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass.m_pBaseClassInfo = CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass = &CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass;
  CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClassInfo.m_pClass = &CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass;
  CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Courier_TakeStashAndTransferItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashAndTransferItemsClass;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::ProcsMagicStick  (line 1464, @0x0000000002ab77f0, libserver.so)
bool __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::ProcsMagicStick(
        CDOTA_Ability_Courier_TakeStashAndTransferItems *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::IsHiddenAbilityCastable  (line 1465, @0x0000000002ab7800, libserver.so)
bool __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::IsHiddenAbilityCastable(
        CDOTA_Ability_Courier_TakeStashAndTransferItems *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::YouForgotToImplementOrDeclareServerClass  (line 1468, @0x0000000002a77420, libserver.so)
int __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Courier_TakeStashAndTransferItems *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::GetServerClass  (line 1468, @0x0000000002a89fb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::GetServerClass(
        CDOTA_Ability_Courier_TakeStashAndTransferItems *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Ability_Courier_TakeStashAndTransferItems::OnSpellStart  (line 1475, @0x0000000002aae840, libserver.so)  // inlines: CEntityHandle, Get, GetAssignedHero, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetPlayerOwnerID, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, SetBool, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, GetCourierSpawnLocationForTeam, __stack_chk_fail, CDOTA_PlayerResource::GetPlayer, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, SendHudErrorToPlayer, KeyValues::KeyValues, KeyValues::SetPtr, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CBaseEntity::GetAbsOrigin (17 total)
// strings: "#dota_hud_error_no_items_to_deliver", "modifier_courier_transfer_items", "modifier_courier_take_stash_items", "stashowner", "transfer_after"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Unit_Courier
void __fastcall CDOTA_Ability_Courier_TakeStashAndTransferItems::OnSpellStart(
        CDOTA_Ability_Courier_TakeStashAndTransferItems *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *v5; // rax
  CDOTAPlayer *Player; // rax
  CDOTAPlayer *v7; // r12
  unsigned __int16 v8; // dx
  int v9; // esi
  int v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // r15
  int v14; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  int v16; // ebx
  CDOTA_BaseNPC *v17; // rax
  CDOTA_UnitInventory *v18; // rax
  CDOTA_Item *ItemInSlot; // rax
  int m_Value; // r14d
  unsigned __int16 v21; // dx
  int v22; // esi
  int v23; // eax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CEntityInstance *v26; // rdx
  CDOTA_BaseNPC *v27; // r12
  CDOTA_BaseNPC *v28; // rax
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // r12
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_Unit_Courier *v36; // rdi
  CEntityInstance *value; // [rsp+0h] [rbp-70h]
  bool bStashHasItemsForMe; // [rsp+Fh] [rbp-61h]
  int v39[4]; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  GetCourierSpawnLocationForTeam(v39, Caster->m_iTeamNum.m_Value);
  if ( (v39[0] + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v39[0]) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[v39[0] & 0x1FF];
      if ( v4 != 0 && v39[0] == v4->m_EHandle.m_Index )
      {
        value = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          v5 = CDOTABaseAbility::GetCaster(this);
          Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v5->m_iLastAbilityPlayer);
          v7 = Player;
          if ( Player != 0 )
          {
            if ( Player->m_hAssignedHero.m_Value.m_Index == -1 )
            {
              v8 = 0x7FFF;
              v9 = 0x7FFF;
            }
            else
            {
              v8 = Player->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v9 = v8;
            }
            v10 = (Player->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v8 & 0x7FFF;
            v39[0] = v10;
            if ( (v10 + 2) > 1 )
            {
              v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
              if ( v11 != 0 )
              {
                v12 = &v11[v9 & 0x1FF];
                if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
                {
                  m_pInstance = v12->m_pInstance;
                  if ( v12->m_pInstance != 0
                    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v14 = 9;
                    while ( 1 )
                    {
                      Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
                      if ( CDOTA_UnitInventory::GetItemInSlot(Inventory, v14) != 0 )
                        break;
                      if ( ++v14 == 15 )
                      {
                        bStashHasItemsForMe = 0;
                        goto LABEL_21;
                      }
                    }
                    bStashHasItemsForMe = 1;
LABEL_21:
                    v16 = 0;
                    while ( 1 )
                    {
                      v17 = CDOTABaseAbility::GetCaster(this);
                      v18 = CDOTA_BaseNPC::GetInventory(v17);
                      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(v18, v16);
                      if ( ItemInSlot != 0 )
                      {
                        m_Value = ItemInSlot->m_iPlayerOwnerID.m_Value;
                        if ( (*(v7->_vptr_IHandleEntity + 393))(v7) == m_Value )
                          break;
                      }
                      if ( ++v16 == 9 )
                      {
                        if ( !bStashHasItemsForMe )
                        {
                          SendHudErrorToPlayer("#dota_hud_error_no_items_to_deliver", v7);
                          return;
                        }
                        goto LABEL_45;
                      }
                    }
                    if ( bStashHasItemsForMe )
                    {
LABEL_45:
                      v30 = CDOTABaseAbility::GetCaster(this);
                      AbsOrigin = CBaseEntity::GetAbsOrigin(v30);
                      v32 = CDOTABaseAbility::GetCaster(this);
                      CDOTA_BaseNPC::MoveToPosition(v32, *&AbsOrigin->x, AbsOrigin->z);
                      KeyValues::KeyValues(&kv, "modifier_courier_take_stash_items");
                      KeyValues::SetPtr(&kv, "location", value);
                      KeyValues::SetPtr(&kv, "stashowner", m_pInstance);
                      KeyValues::SetInt(&kv, "transfer_after", 1);
                      v33 = CDOTABaseAbility::GetCaster(this);
                      v34 = CDOTABaseAbility::GetCaster(this);
                      CDOTA_BaseNPC::AddNewModifier(v34, v33, this, "modifier_courier_take_stash_items", &kv, 0);
                      v35 = CDOTABaseAbility::GetCaster(this);
                      if ( v35 != 0 )
                      {
                        v36 = __dynamic_cast(v35, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Courier, 0);
                        if ( v36 != 0 )
                          CDOTA_Unit_Courier::SetCourierState(
                            v36,
                            CourierState_t::COURIER_STATE_DELIVERING_ITEMS,
                            m_pInstance);
                      }
                      goto LABEL_38;
                    }
                    KeyValues::KeyValues(&kv, "modifier_courier_transfer_items");
                    if ( v7->m_hAssignedHero.m_Value.m_Index == -1 )
                    {
                      v21 = 0x7FFF;
                      v22 = 0x7FFF;
                    }
                    else
                    {
                      v21 = v7->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
                      v22 = v21;
                    }
                    v23 = (v7->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v21 & 0x7FFF;
                    v39[0] = v23;
                    if ( (v23 + 2) > 1
                      && (v24 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v22 >> 9]) != 0
                      && (v25 = &v24[v22 & 0x1FF]) != 0
                      && v23 == v25->m_EHandle.m_Index
                      && (v29 = v25->m_pInstance, v25->m_pInstance != 0)
                      && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
                    {
                      v26 = 0;
                      if ( (v29[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                        v26 = v29;
                    }
                    else
                    {
                      v26 = 0;
                    }
                    KeyValues::SetPtr(&kv, "target", v26);
                    v27 = CDOTABaseAbility::GetCaster(this);
                    v28 = CDOTABaseAbility::GetCaster(this);
                    CDOTA_BaseNPC::AddNewModifier(v28, v27, this, "modifier_courier_transfer_items", &kv, 0);
LABEL_38:
                    KeyValues::~KeyValues(&kv);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Courier_TakeStashItems::~CDOTA_Ability_Courier_TakeStashItems  (line 1552, @0x0000000002ac4ec0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Courier_TakeStashItems::~CDOTA_Ability_Courier_TakeStashItems(
        CDOTA_Ability_Courier_TakeStashItems *const this)
{
  this->_vptr_IHandleEntity = &off_43D5090;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Courier_TakeStashItems::~CDOTA_Ability_Courier_TakeStashItems  (line 1552, @0x0000000002ac4ee0, libserver.so)  // inlines: ~CDOTA_Ability_Courier_TakeStashItems
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Courier_TakeStashItems::~CDOTA_Ability_Courier_TakeStashItems(
        CDOTA_Ability_Courier_TakeStashItems *const this)
{
  this->_vptr_IHandleEntity = &off_43D5090;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Courier_TakeStashItems::Schema_DynamicBinding  (line 1554, @0x0000000002ab7810, libserver.so)
// globals: CDOTA_Ability_Courier_TakeStashItems::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_TakeStashItems::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_TakeStashItems *const this)
{
  return CDOTA_Ability_Courier_TakeStashItems::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1554, @0x0000000002ab7820, libserver.so)
// globals: CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::DestructInstance  (line 1554, @0x0000000002ab7830, libserver.so)  // inlines: Destruct<CDOTA_Ability_Courier_TakeStashItems>
void __fastcall CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::FreeInstance  (line 1554, @0x0000000002ab7850, libserver.so)
void __fastcall CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::CanAllocate  (line 1554, @0x0000000002ab7870, libserver.so)
bool __fastcall CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1554, @0x0000000002ab7880, libserver.so)
// globals: CDOTA_Ability_Courier_TakeStashItems::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_TakeStashItems::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::AllocateInstance  (line 1554, @0x0000000002abe600, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::ConstructInstance  (line 1554, @0x0000000002ac2660, libserver.so)  // inlines: CDOTA_Ability_Courier_TakeStashItems, Construct<CDOTA_Ability_Courier_TakeStashItems>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43D5090;
  }
  return p;
}


// CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1554, @0x0000000002acb890, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1554, @0x0000000002acb8b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal  (line 1554, @0x0000000002ad6ae0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "courier_take_stash_items", "CDOTA_Ability_Courier_TakeStashItems"
// globals: `guard variable for'CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass, CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass, __dso_handle, CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClassInfo, CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass);
    CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass._vptr_CEntityClass = off_43D5010;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass);
    __cxa_atexit(
      CDOTA_Ability_Courier_TakeStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Courier_TakeStashItemsClass != 0 )
    return &CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass;
  if ( `guard variable for'CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClassInfo,
      "CDOTA_Ability_Courier_TakeStashItems",
      "courier_take_stash_items",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClassInfo);
  }
  CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass.m_pClassInfo = &CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClassInfo;
  CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass.m_pBaseClassInfo = CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Courier_TakeStashItemsClass = &CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass;
  CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClassInfo.m_pClass = &CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass;
  CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Courier_TakeStashItemsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Courier_TakeStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_TakeStashItemsClass;
}


// CDOTA_Ability_Courier_TakeStashItems::ProcsMagicStick  (line 1559, @0x0000000002ab7890, libserver.so)
bool __fastcall CDOTA_Ability_Courier_TakeStashItems::ProcsMagicStick(CDOTA_Ability_Courier_TakeStashItems *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_TakeStashItems::YouForgotToImplementOrDeclareServerClass  (line 1567, @0x0000000002a77430, libserver.so)
int __fastcall CDOTA_Ability_Courier_TakeStashItems::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Courier_TakeStashItems *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_TakeStashItems::GetServerClass  (line 1567, @0x0000000002a8a230, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Courier_TakeStashItems::GetServerClass(
        CDOTA_Ability_Courier_TakeStashItems *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Ability_Courier_TakeStashItems::OnSpellStart  (line 1576, @0x0000000002aaecc0, libserver.so)  // inlines: CEntityHandle, Get, GetAssignedHero, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, SetBool, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, GetCourierSpawnLocationForTeam, __stack_chk_fail, CDOTA_PlayerResource::GetPlayer, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, SendHudErrorToPlayer, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::MoveToPosition, KeyValues::KeyValues, KeyValues::SetPtr, KeyValues::SetInt (17 total)
// strings: "#dota_hud_error_no_items_to_deliver", "modifier_courier_take_stash_items", "stashowner", "transfer_after"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Unit_Courier
void __fastcall CDOTA_Ability_Courier_TakeStashItems::OnSpellStart(CDOTA_Ability_Courier_TakeStashItems *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r15
  CDOTA_BaseNPC *v6; // rax
  CDOTAPlayer *Player; // rax
  CDOTAPlayer *v8; // r14
  unsigned __int16 v9; // dx
  int v10; // esi
  int v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // r12
  int v15; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_BaseNPC *v17; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // r14
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_Unit_Courier *v23; // rdi
  int v24[4]; // [rsp+0h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  GetCourierSpawnLocationForTeam(v24, Caster->m_iTeamNum.m_Value);
  if ( (v24[0] + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v24[0]) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[v24[0] & 0x1FF];
      if ( v4 != 0 && v24[0] == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          v6 = CDOTABaseAbility::GetCaster(this);
          Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v6->m_iLastAbilityPlayer);
          v8 = Player;
          if ( Player != 0 )
          {
            if ( Player->m_hAssignedHero.m_Value.m_Index == -1 )
            {
              v9 = 0x7FFF;
              v10 = 0x7FFF;
            }
            else
            {
              v9 = Player->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
              v10 = v9;
            }
            v11 = (Player->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v9 & 0x7FFF;
            v24[0] = v11;
            if ( (v11 + 2) > 1 )
            {
              v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
              if ( v12 != 0 )
              {
                v13 = &v12[v10 & 0x1FF];
                if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
                {
                  v14 = v13->m_pInstance;
                  if ( v13->m_pInstance != 0
                    && BYTE3(v14[7]._vptr_IHandleEntity) != 0
                    && (v14[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v15 = 9;
                    while ( 1 )
                    {
                      Inventory = CDOTA_BaseNPC::GetInventory(v14);
                      if ( CDOTA_UnitInventory::GetItemInSlot(Inventory, v15) != 0 )
                        break;
                      if ( ++v15 == 15 )
                      {
                        SendHudErrorToPlayer("#dota_hud_error_no_items_to_deliver", v8);
                        return;
                      }
                    }
                    v17 = CDOTABaseAbility::GetCaster(this);
                    AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
                    v19 = CDOTABaseAbility::GetCaster(this);
                    CDOTA_BaseNPC::MoveToPosition(v19, *&AbsOrigin->x, AbsOrigin->z);
                    KeyValues::KeyValues(&kv, "modifier_courier_take_stash_items");
                    KeyValues::SetPtr(&kv, "location", m_pInstance);
                    KeyValues::SetPtr(&kv, "stashowner", v14);
                    KeyValues::SetInt(&kv, "transfer_after", 0);
                    v20 = CDOTABaseAbility::GetCaster(this);
                    v21 = CDOTABaseAbility::GetCaster(this);
                    CDOTA_BaseNPC::AddNewModifier(v21, v20, this, "modifier_courier_take_stash_items", &kv, 0);
                    v22 = CDOTABaseAbility::GetCaster(this);
                    if ( v22 != 0 )
                    {
                      v23 = __dynamic_cast(v22, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Courier, 0);
                      if ( v23 != 0 )
                        CDOTA_Unit_Courier::SetCourierState(v23, CourierState_t::COURIER_STATE_DELIVERING_ITEMS, v14);
                    }
                    KeyValues::~KeyValues(&kv);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Courier_TakeStashItems::~CDOTA_Modifier_Courier_TakeStashItems  (line 1675, @0x0000000002ac2120, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Courier_TakeStashItems::~CDOTA_Modifier_Courier_TakeStashItems(
        CDOTA_Modifier_Courier_TakeStashItems *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D5B50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Courier_TakeStashItems::~CDOTA_Modifier_Courier_TakeStashItems  (line 1675, @0x0000000002ac2140, libserver.so)  // inlines: ~CDOTA_Modifier_Courier_TakeStashItems
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Courier_TakeStashItems::~CDOTA_Modifier_Courier_TakeStashItems(
        CDOTA_Modifier_Courier_TakeStashItems *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D5B50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Courier_TakeStashItems::IsPurgable  (line 1686, @0x0000000002ab78a0, libserver.so)
bool __fastcall CDOTA_Modifier_Courier_TakeStashItems::IsPurgable(CDOTA_Modifier_Courier_TakeStashItems *const this)
{
  return 0;
}


// CDOTA_Modifier_Courier_TakeStashItems::GrabStashItems  (line 1701, @0x0000000002a8c5d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy, __stack_chk_fail, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CheckCourierFountainRangeGoodEnough, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_Buff::GetCaster, CDOTA_UnitInventory::FindEmptySpaceInInventory, CDOTA_BaseNPC::GiveItem, CDOTA_BaseNPC::MoveToPosition (18 total)
// callers: CDOTA_Modifier_Courier_TakeStashItems::OnIntervalThink, CDOTA_Modifier_Courier_TakeStashItems::OnCreated
// strings: "modifier_courier_transfer_items"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Courier_TakeStashItems::GrabStashItems(
        CDOTA_Modifier_Courier_TakeStashItems *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  int stash_pickup_distance; // r13d
  CDOTA_BaseNPC *Parent; // rax
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // r14
  int i; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_UnitInventory *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v17; // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v19; // r13
  CDOTA_BaseNPC *v20; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  m_Index = this->m_hLocation.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLocation.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hLocation.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || v4->m_pInstance == 0 )
  {
LABEL_5:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return;
  }
  stash_pickup_distance = this->stash_pickup_distance;
  CBaseEntity::GetAbsOrigin(v4->m_pInstance);
  Parent = CDOTA_Buff::GetParent(this);
  if ( CheckCourierFountainRangeGoodEnough(Parent, stash_pickup_distance) )
  {
    v7 = CEntityHandle::operator CEntityInstance *(&this->m_hStashOwner);
    v8 = v7;
    if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    {
      for ( i = 9; i != 15; ++i )
      {
        Inventory = CDOTA_BaseNPC::GetInventory(v8);
        ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
        if ( ItemInSlot != 0 )
        {
          Caster = CDOTA_Buff::GetCaster(this);
          v13 = CDOTA_BaseNPC::GetInventory(Caster);
          if ( CDOTA_UnitInventory::FindEmptySpaceInInventory(v13, 1, 0) != -1 )
          {
            v14 = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::GiveItem(v8, ItemInSlot, v14, 1, -1);
          }
        }
      }
      v15 = CDOTA_Buff::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
      v17 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::MoveToPosition(v17, *&AbsOrigin->x, AbsOrigin->z);
      if ( this->m_bTransferAfterTake )
      {
        KeyValues::KeyValues(&kv, "modifier_courier_transfer_items");
        KeyValues::SetPtr(&kv, "target", v8);
        Ability = CDOTA_Buff::GetAbility(this);
        v19 = CDOTA_Buff::GetCaster(this);
        v20 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v20, v19, Ability, "modifier_courier_transfer_items", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
    }
    goto LABEL_5;
  }
}


// CDOTA_Modifier_Courier_TakeStashItems::OnCreated  (line 1752, @0x0000000002aacf00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator bool, operator=
// calls: KeyValues::GetPtr, KeyValues::GetInt, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_Courier_TakeStashItems::GrabStashItems, CDOTA_Buff::StartIntervalThink, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CDOTA_BaseNPC::MoveToPosition
// strings: "stashowner", "transfer_after", "stash_pickup_distance"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Courier_TakeStashItems::OnCreated(
        CDOTA_Modifier_Courier_TakeStashItems *const this,
        KeyValues *pKV)
{
  _BYTE *Ptr; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int16 v7; // cx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int16 v11; // cx
  CDOTABaseAbility *Ability; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  float v16; // xmm1_4
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Parent; // rax

  Ptr = KeyValues::GetPtr(pKV, "stashowner", 0);
  if ( Ptr != 0 && Ptr[339] != 0 && (v5 = *(Ptr + 1)) != 0 )
  {
    v6 = (*(v5 + 16) >> 15) - (*(v5 + 48) & 1);
    v7 = 0x7FFF;
    if ( *(v5 + 16) != -1 )
      v7 = *(v5 + 16) & 0x7FFF;
    LOWORD(this->m_hStashOwner.m_Index) = v7 | this->m_hStashOwner.m_Index & 0x8000;
    this->m_hStashOwner.m_Index = (v6 << 15) | this->m_hStashOwner.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hStashOwner.m_Index = -1;
  }
  v8 = KeyValues::GetPtr(pKV, "location", 0);
  if ( v8 != 0 && (v9 = v8[1]) != 0 )
  {
    v10 = (*(v9 + 16) >> 15) - (*(v9 + 48) & 1);
    v11 = 0x7FFF;
    if ( *(v9 + 16) != -1 )
      v11 = *(v9 + 16) & 0x7FFF;
    LOWORD(this->m_hLocation.m_Index) = v11 | this->m_hLocation.m_Index & 0x8000;
    this->m_hLocation.m_Index = (v10 << 15) | this->m_hLocation.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hLocation.m_Index = -1;
  }
  this->m_bTransferAfterTake = KeyValues::GetInt(pKV, "transfer_after", 0) != 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->stash_pickup_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "stash_pickup_distance",
                                    -1,
                                    0);
  else
    this->stash_pickup_distance = 0;
  m_Index = this->m_hLocation.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLocation.m_Index) >> 9) & 0x3F];
    if ( v14 != 0 )
    {
      v15 = &v14[this->m_hLocation.m_Index & 0x1FF];
      if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v15->m_pInstance);
        Parent = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::MoveToPosition(Parent, *&AbsOrigin->x, AbsOrigin->z);
      }
    }
  }
  CDOTA_Modifier_Courier_TakeStashItems::GrabStashItems(this);
  CDOTA_Buff::StartIntervalThink(this, 0.1, v16);
}


// CDOTA_Modifier_Courier_TakeStashItems::DeclareFunctions  (line 1773, @0x0000000002a77440, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Courier_TakeStashItems::OnOrder(CModifierParams const&)
void __fastcall CDOTA_Modifier_Courier_TakeStashItems::DeclareFunctions(
        CDOTA_Modifier_Courier_TakeStashItems *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_Courier_TakeStashItems::OnOrder;
  this->m_Functions[125].__delta = 0;
}


// CDOTA_Modifier_Courier_TakeStashItems::OnOrder  (line 1780, @0x0000000002a83e40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Courier_TakeStashItems::OnOrder(
        CDOTA_Modifier_Courier_TakeStashItems *const this,
        const CModifierParams *const params)
{
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *v11; // r13

  m_pInstance = 0;
  if ( params->ability.m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->ability.m_Index & 0x1FF];
      if ( v5 != 0 && params->ability.m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(params->hunit.m_Index);
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[m_Index_low & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
      {
        v11 = v9->m_pInstance;
        if ( v9->m_pInstance != 0
          && v11->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == v11
          && m_pInstance != 0
          && ((*(m_pInstance->_vptr_IHandleEntity + 251))(m_pInstance) & 0x800) == 0 )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Courier_TakeStashItems::OnIntervalThink  (line 1796, @0x0000000002a8c7f0, libserver.so)
// calls: CDOTA_Modifier_Courier_TakeStashItems::GrabStashItems
void __fastcall CDOTA_Modifier_Courier_TakeStashItems::OnIntervalThink(
        CDOTA_Modifier_Courier_TakeStashItems *const this)
{
  CDOTA_Modifier_Courier_TakeStashItems::GrabStashItems(this);
}


// CDOTA_Ability_Courier_ReturnStashItems::~CDOTA_Ability_Courier_ReturnStashItems  (line 1807, @0x0000000002ac4f10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Courier_ReturnStashItems::~CDOTA_Ability_Courier_ReturnStashItems(
        CDOTA_Ability_Courier_ReturnStashItems *const this)
{
  this->_vptr_IHandleEntity = &off_43D5EB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Courier_ReturnStashItems::~CDOTA_Ability_Courier_ReturnStashItems  (line 1807, @0x0000000002ac4f30, libserver.so)  // inlines: ~CDOTA_Ability_Courier_ReturnStashItems
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Courier_ReturnStashItems::~CDOTA_Ability_Courier_ReturnStashItems(
        CDOTA_Ability_Courier_ReturnStashItems *const this)
{
  this->_vptr_IHandleEntity = &off_43D5EB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Courier_ReturnStashItems::Schema_DynamicBinding  (line 1809, @0x0000000002ab78b0, libserver.so)
// globals: CDOTA_Ability_Courier_ReturnStashItems::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_ReturnStashItems::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_ReturnStashItems *const this)
{
  return CDOTA_Ability_Courier_ReturnStashItems::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1809, @0x0000000002ab78c0, libserver.so)
// globals: CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::DestructInstance  (line 1809, @0x0000000002ab78d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Courier_ReturnStashItems>
void __fastcall CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::FreeInstance  (line 1809, @0x0000000002ab78f0, libserver.so)
void __fastcall CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::CanAllocate  (line 1809, @0x0000000002ab7910, libserver.so)
bool __fastcall CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1809, @0x0000000002ab7920, libserver.so)
// globals: CDOTA_Ability_Courier_ReturnStashItems::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_ReturnStashItems::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::AllocateInstance  (line 1809, @0x0000000002abe640, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::ConstructInstance  (line 1809, @0x0000000002ac2690, libserver.so)  // inlines: CDOTA_Ability_Courier_ReturnStashItems, Construct<CDOTA_Ability_Courier_ReturnStashItems>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43D5EB0;
  }
  return p;
}


// CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1809, @0x0000000002acb8e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1809, @0x0000000002acb900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal  (line 1809, @0x0000000002ad6c30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "courier_return_stash_items", "CDOTA_Ability_Courier_ReturnStashItems"
// globals: `guard variable for'CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass, CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass, __dso_handle, CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClassInfo, CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass);
    CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass._vptr_CEntityClass = off_43D5E30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass);
    __cxa_atexit(
      CDOTA_Ability_Courier_ReturnStashItems::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Courier_ReturnStashItemsClass != 0 )
    return &CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass;
  if ( `guard variable for'CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClassInfo,
      "CDOTA_Ability_Courier_ReturnStashItems",
      "courier_return_stash_items",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClassInfo);
  }
  CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass.m_pClassInfo = &CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClassInfo;
  CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass.m_pBaseClassInfo = CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Courier_ReturnStashItemsClass = &CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass;
  CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClassInfo.m_pClass = &CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass;
  CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Courier_ReturnStashItemsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Courier_ReturnStashItems::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_ReturnStashItemsClass;
}


// CDOTA_Ability_Courier_ReturnStashItems::ProcsMagicStick  (line 1813, @0x0000000002ab7930, libserver.so)
bool __fastcall CDOTA_Ability_Courier_ReturnStashItems::ProcsMagicStick(
        CDOTA_Ability_Courier_ReturnStashItems *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_ReturnStashItems::OnSpellStart  (line 1820, @0x0000000002a8bc00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPlayerOwnerID, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, GetCourierSpawnLocationForTeam, __stack_chk_fail, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, KeyValues::SetPtr, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_courier_transfer_items", "modifier_courier_return_stash_items"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Courier_ReturnStashItems::OnSpellStart(
        CDOTA_Ability_Courier_ReturnStashItems *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r14
  int v6; // ebx
  CDOTA_BaseNPC *v7; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  int m_Value; // r12d
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // r12
  CDOTA_BaseNPC *v14; // rax
  int v15[4]; // [rsp+0h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  GetCourierSpawnLocationForTeam(v15, Caster->m_iTeamNum.m_Value);
  if ( (v15[0] + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15[0]) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[v15[0] & 0x1FF];
      if ( v4 != 0 && v15[0] == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        v6 = 0;
        if ( v4->m_pInstance != 0 )
        {
          while ( 1 )
          {
            v7 = CDOTABaseAbility::GetCaster(this);
            Inventory = CDOTA_BaseNPC::GetInventory(v7);
            ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v6);
            if ( ItemInSlot != 0 )
            {
              m_Value = ItemInSlot->m_iPlayerOwnerID.m_Value;
              if ( m_Value != -1 )
              {
                v11 = CDOTABaseAbility::GetCaster(this);
                if ( (*(v11->_vptr_IHandleEntity + 414))(v11) != m_Value )
                  break;
              }
            }
            if ( ++v6 == 9 )
              return;
          }
          v12 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::RemoveModifierByName(v12, "modifier_courier_transfer_items");
          KeyValues::KeyValues(&kv, "modifier_courier_return_stash_items");
          KeyValues::SetPtr(&kv, "location", m_pInstance);
          v13 = CDOTABaseAbility::GetCaster(this);
          v14 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v14, v13, this, "modifier_courier_return_stash_items", &kv, 0);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
}


// CDOTA_Modifier_Courier_ReturnStashItems::~CDOTA_Modifier_Courier_ReturnStashItems  (line 1855, @0x0000000002ac20d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Courier_ReturnStashItems::~CDOTA_Modifier_Courier_ReturnStashItems(
        CDOTA_Modifier_Courier_ReturnStashItems *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D6970;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Courier_ReturnStashItems::~CDOTA_Modifier_Courier_ReturnStashItems  (line 1855, @0x0000000002ac20f0, libserver.so)  // inlines: ~CDOTA_Modifier_Courier_ReturnStashItems
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Courier_ReturnStashItems::~CDOTA_Modifier_Courier_ReturnStashItems(
        CDOTA_Modifier_Courier_ReturnStashItems *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D6970;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Courier_ReturnStashItems::IsPurgable  (line 1865, @0x0000000002ab7940, libserver.so)
bool __fastcall CDOTA_Modifier_Courier_ReturnStashItems::IsPurgable(
        CDOTA_Modifier_Courier_ReturnStashItems *const this)
{
  return 0;
}


// CDOTA_Modifier_Courier_ReturnStashItems::OnCreated  (line 1876, @0x0000000002a85020, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator bool, operator=
// calls: KeyValues::GetPtr, CDOTA_Buff::StartIntervalThink, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CDOTA_BaseNPC::MoveToPosition
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Courier_ReturnStashItems::OnCreated(
        CDOTA_Modifier_Courier_ReturnStashItems *const this,
        KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  CConcreteEntityList *v4; // rsi
  __int64 v5; // rdx
  int v6; // eax
  __int16 v7; // cx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rdx
  float v12; // xmm1_4
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Parent; // rax

  Ptr = KeyValues::GetPtr(pKV, "location", 0);
  if ( Ptr != 0 && (v5 = Ptr[1]) != 0 )
  {
    v6 = (*(v5 + 16) >> 15) - (*(v5 + 48) & 1);
    v7 = 0x7FFF;
    if ( *(v5 + 16) != -1 )
      v7 = *(v5 + 16) & 0x7FFF;
    v4 = CEntityHandle::gm_pEntityList;
    LOWORD(this->m_hLocation.m_Index) = v7 | this->m_hLocation.m_Index & 0x8000;
    v8 = (v6 << 15) | this->m_hLocation.m_Index & 0x7FFF;
    this->m_hLocation.m_Index = v8;
    if ( v8 + 2 > 1 )
    {
      v9 = v4->m_pIdentityChunks[(LOWORD(this->m_hLocation.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = this->m_hLocation.m_Index & 0x1FF;
        v4 = (8 * v10);
        v11 = &v9[v10];
        if ( v11 != 0 && v11->m_EHandle.m_Index == v8 )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(v11->m_pInstance);
          Parent = CDOTA_Buff::GetParent(this);
          CDOTA_BaseNPC::MoveToPosition(Parent, *&AbsOrigin->x, AbsOrigin->z);
        }
      }
    }
  }
  else
  {
    this->m_hLocation.m_Index = -1;
  }
  (*(this->_vptr_CDOTA_Buff + 56))(this, v4);
  CDOTA_Buff::StartIntervalThink(this, 0.5, v12);
}


// CDOTA_Modifier_Courier_ReturnStashItems::DeclareFunctions  (line 1893, @0x0000000002a77460, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Courier_ReturnStashItems::OnOrder(CModifierParams const&)
void __fastcall CDOTA_Modifier_Courier_ReturnStashItems::DeclareFunctions(
        CDOTA_Modifier_Courier_ReturnStashItems *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_Courier_ReturnStashItems::OnOrder;
  this->m_Functions[125].__delta = 0;
}


// CDOTA_Modifier_Courier_ReturnStashItems::OnOrder  (line 1900, @0x0000000002a83f50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Courier_ReturnStashItems::OnOrder(
        CDOTA_Modifier_Courier_ReturnStashItems *const this,
        const CModifierParams *const params)
{
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *v11; // r13

  m_pInstance = 0;
  if ( params->ability.m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->ability.m_Index & 0x1FF];
      if ( v5 != 0 && params->ability.m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(params->hunit.m_Index);
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[m_Index_low & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
      {
        v11 = v9->m_pInstance;
        if ( v9->m_pInstance != 0
          && v11->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == v11
          && m_pInstance != 0
          && ((*(m_pInstance->_vptr_IHandleEntity + 251))(m_pInstance) & 0x800) == 0 )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Courier_ReturnStashItems::OnIntervalThink  (line 1916, @0x0000000002a9c950, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPlayerOwnerID, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+
// calls: CDOTA_Buff::Destroy, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CheckCourierFountainRangeGoodEnough, RandomFloat, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::DropItemOnLocation, CDOTA_UnitInventory::GetItemInSlot, CDOTA_PlayerResource::GetTeam (18 total)
// strings: "handoff_distance"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Courier_ReturnStashItems::OnIntervalThink(
        CDOTA_Modifier_Courier_ReturnStashItems *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rbx
  CDOTABaseAbility *Ability; // rax
  int v7; // r13d
  CDOTA_BaseNPC *Parent; // rax
  int i; // ebx
  __m128i v10; // xmm0
  float v11; // r13d
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // rax
  vec_t v14; // xmm1_4
  float v15; // xmm0_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_UnitInventory *v17; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v21; // r15
  int m_Value; // r13d
  int Team; // r14d
  CEntityInstance *v24; // rax
  CDOTA_BaseNPC *v25; // r13
  CDOTA_UnitInventory *v26; // rax
  int EmptySpaceInInventory; // r14d
  CDOTA_BaseNPC *v28; // rax
  CDOTA_UnitInventory *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_UnitInventory *v31; // rax
  float v32; // [rsp+Ch] [rbp-54h]
  CEntityHandle v33[3]; // [rsp+10h] [rbp-50h] BYREF
  int handoff_distance; // [rsp+1Ch] [rbp-44h] BYREF
  double v35; // [rsp+20h] [rbp-40h]
  vec_t v36; // [rsp+28h] [rbp-38h]

  m_Index = this->m_hLocation.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLocation.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hLocation.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0) )
  {
LABEL_5:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &handoff_distance, "handoff_distance");
  v7 = handoff_distance;
  CBaseEntity::GetAbsOrigin(m_pInstance);
  Parent = CDOTA_Buff::GetParent(this);
  if ( CheckCourierFountainRangeGoodEnough(Parent, v7) )
  {
    for ( i = 0; i != 9; ++i )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      Inventory = CDOTA_BaseNPC::GetInventory(Caster);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
      v21 = ItemInSlot;
      if ( ItemInSlot != 0 )
      {
        m_Value = ItemInSlot->m_iPlayerOwnerID.m_Value;
        if ( m_Value != -1 )
        {
          Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, m_Value);
          if ( Team == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
          {
            CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v33, g_pDOTAPlayerResource, m_Value);
            v24 = CEntityHandle::operator CEntityInstance *(v33);
            v25 = v24;
            if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 && (v24[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              v26 = CDOTA_BaseNPC::GetInventory(v24);
              EmptySpaceInInventory = CDOTA_UnitInventory::FindEmptySpaceInInventory(v26, 2, 0);
              v28 = CDOTA_Buff::GetCaster(this);
              if ( EmptySpaceInInventory == -1 )
              {
                v29 = CDOTA_BaseNPC::GetInventory(v28);
                CDOTA_UnitInventory::RemoveItem(v29, v21, 0, 0);
                v30 = CDOTA_Buff::GetCaster(this);
                v31 = CDOTA_BaseNPC::GetInventory(v30);
                CDOTA_UnitInventory::DropItemAtFountain(v31, v21);
              }
              else
              {
                CDOTA_BaseNPC::GiveItem(v28, v21, v25, 2, EmptySpaceInInventory);
              }
            }
          }
          else
          {
            *v10.m128i_i32 = RandomFloat(-50.0, 50.0);
            v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
            v32 = RandomFloat(-50.0, 50.0);
            v12 = CDOTA_Buff::GetCaster(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
            v14 = AbsOrigin->z + 0.0;
            v15 = v32 + AbsOrigin->x;
            *(&v35 + 1) = v11 + AbsOrigin->y;
            v36 = v14;
            *&v35 = v15;
            v16 = CDOTA_Buff::GetCaster(this);
            v17 = CDOTA_BaseNPC::GetInventory(v16);
            CDOTA_UnitInventory::DropItemOnLocation(v17, v21, v35, v36);
          }
        }
      }
    }
    goto LABEL_5;
  }
}


// CDOTA_Ability_Courier_Burst::~CDOTA_Ability_Courier_Burst  (line 1979, @0x0000000002ac4f60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Courier_Burst::~CDOTA_Ability_Courier_Burst(CDOTA_Ability_Courier_Burst *const this)
{
  this->_vptr_IHandleEntity = &off_43D6CD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Courier_Burst::~CDOTA_Ability_Courier_Burst  (line 1979, @0x0000000002ac4f80, libserver.so)  // inlines: ~CDOTA_Ability_Courier_Burst
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Courier_Burst::~CDOTA_Ability_Courier_Burst(CDOTA_Ability_Courier_Burst *const this)
{
  this->_vptr_IHandleEntity = &off_43D6CD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Courier_Burst::Schema_DynamicBinding  (line 1981, @0x0000000002ab7950, libserver.so)
// globals: CDOTA_Ability_Courier_Burst::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_Burst::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_Burst *const this)
{
  return CDOTA_Ability_Courier_Burst::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1981, @0x0000000002ab7960, libserver.so)
// globals: CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::DestructInstance  (line 1981, @0x0000000002ab7970, libserver.so)  // inlines: Destruct<CDOTA_Ability_Courier_Burst>
void __fastcall CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::FreeInstance  (line 1981, @0x0000000002ab7990, libserver.so)
void __fastcall CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::CanAllocate  (line 1981, @0x0000000002ab79b0, libserver.so)
bool __fastcall CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1981, @0x0000000002ab79c0, libserver.so)
// globals: CDOTA_Ability_Courier_Burst::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_Burst::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::AllocateInstance  (line 1981, @0x0000000002abe680, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::ConstructInstance  (line 1981, @0x0000000002ac26c0, libserver.so)  // inlines: CDOTA_Ability_Courier_Burst, Construct<CDOTA_Ability_Courier_Burst>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43D6CD0;
  }
  return p;
}


// CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1981, @0x0000000002acb930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1981, @0x0000000002acb950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Courier_Burst::GetEntityClassInternal  (line 1981, @0x0000000002ad6d80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Courier_Burst"
// globals: `guard variable for'CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass, CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass, __dso_handle, CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Courier_Burst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_BurstClassInfo, CDOTA_Ability_Courier_Burst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_BurstClassInfo
CEntityClass *__cdecl CDOTA_Ability_Courier_Burst::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass);
    CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass._vptr_CEntityClass = off_43D6C50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass);
    __cxa_atexit(
      CDOTA_Ability_Courier_Burst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Courier_BurstClass != 0 )
    return &CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass;
  if ( `guard variable for'CDOTA_Ability_Courier_Burst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_BurstClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_Burst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_BurstClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Courier_Burst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_BurstClassInfo,
      "CDOTA_Ability_Courier_Burst",
      "courier_burst",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_Burst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_BurstClassInfo);
  }
  CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass.m_pClassInfo = &CDOTA_Ability_Courier_Burst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_BurstClassInfo;
  CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass.m_pBaseClassInfo = CDOTA_Ability_Courier_Burst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_BurstClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Courier_BurstClass = &CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass;
  CDOTA_Ability_Courier_Burst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_BurstClassInfo.m_pClass = &CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass;
  CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Courier_BurstClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Courier_Burst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_BurstClass;
}


// CDOTA_Ability_Courier_Burst::ProcsMagicStick  (line 1985, @0x0000000002ab79d0, libserver.so)
bool __fastcall CDOTA_Ability_Courier_Burst::ProcsMagicStick(CDOTA_Ability_Courier_Burst *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_Burst::OnSpellStart  (line 1990, @0x0000000002a99fb0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "courier_sheild::modifier_courier_burst", "modifier_courier_burst"
void __fastcall CDOTA_Ability_Courier_Burst::OnSpellStart(CDOTA_Ability_Courier_Burst *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "courier_sheild::modifier_courier_burst");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_courier_burst", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Courier_Burst::~CDOTA_Modifier_Courier_Burst  (line 2005, @0x0000000002ac2080, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Courier_Burst::~CDOTA_Modifier_Courier_Burst(CDOTA_Modifier_Courier_Burst *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D7790;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Courier_Burst::~CDOTA_Modifier_Courier_Burst  (line 2005, @0x0000000002ac20a0, libserver.so)  // inlines: ~CDOTA_Modifier_Courier_Burst
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Courier_Burst::~CDOTA_Modifier_Courier_Burst(CDOTA_Modifier_Courier_Burst *const this)
{
  this->_vptr_CDOTA_Buff = &off_43D7790;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Courier_Burst::OnCreated  (line 2029, @0x0000000002aaaaf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "damage_absorb"
void __fastcall CDOTA_Modifier_Courier_Burst::OnCreated(CDOTA_Modifier_Courier_Burst *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_absorb = 0.0;
    goto LABEL_4;
  }
  this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_absorb = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "damage_absorb", -1, 0);
LABEL_4:
  this->m_flDamageAbsorbed = 0;
}


// CDOTA_Modifier_Courier_Burst::DeclareFunctions  (line 2043, @0x0000000002a77480, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Courier_Burst::GetModifierMoveSpeed_Absolute(CModifierParams const&), CDOTA_Modifier_Courier_Burst::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Courier_Burst::DeclareFunctions(CDOTA_Modifier_Courier_Burst *const this)
{
  this->m_Functions[18].__pfn = CDOTA_Modifier_Courier_Burst::GetModifierMoveSpeed_Absolute;
  this->m_Functions[18].__delta = 0;
  this->m_Functions[21].__pfn = (&stru_10 + 697);
  this->m_Functions[21].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Courier_Burst::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Courier_Burst::GetModifierMoveSpeed_Absolute  (line 2053, @0x0000000002a774d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Courier_Burst::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_Courier_Burst *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Courier_Burst::GetModifierMoveSpeed_Max  (line 2060, @0x0000000002a774f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Courier_Burst::GetModifierMoveSpeed_Max(
        CDOTA_Modifier_Courier_Burst *const this,
        const CModifierParams *const params)
{
  return 0x461C400000000001uLL;
}


// CDOTA_Modifier_Courier_Burst::GetActivityTranslationModifiers  (line 2065, @0x0000000002a77510, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Courier_Burst::GetActivityTranslationModifiers(
        CDOTA_Modifier_Courier_Burst *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "haste";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Ability_Courier_Morph::~CDOTA_Ability_Courier_Morph  (line 2094, @0x0000000002ac4fb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Courier_Morph::~CDOTA_Ability_Courier_Morph(CDOTA_Ability_Courier_Morph *const this)
{
  this->_vptr_IHandleEntity = &off_43D7AF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Courier_Morph::~CDOTA_Ability_Courier_Morph  (line 2094, @0x0000000002ac4fd0, libserver.so)  // inlines: ~CDOTA_Ability_Courier_Morph
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Courier_Morph::~CDOTA_Ability_Courier_Morph(CDOTA_Ability_Courier_Morph *const this)
{
  this->_vptr_IHandleEntity = &off_43D7AF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Courier_Morph::Schema_DynamicBinding  (line 2096, @0x0000000002ab79e0, libserver.so)
// globals: CDOTA_Ability_Courier_Morph::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_Morph::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_Morph *const this)
{
  return CDOTA_Ability_Courier_Morph::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2096, @0x0000000002ab79f0, libserver.so)
// globals: CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::DestructInstance  (line 2096, @0x0000000002ab7a00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Courier_Morph>
void __fastcall CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::FreeInstance  (line 2096, @0x0000000002ab7a20, libserver.so)
void __fastcall CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::CanAllocate  (line 2096, @0x0000000002ab7a40, libserver.so)
bool __fastcall CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2096, @0x0000000002ab7a50, libserver.so)
// globals: CDOTA_Ability_Courier_Morph::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Courier_Morph::s_pSchemaBinding;
}


// CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::AllocateInstance  (line 2096, @0x0000000002abe6c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::ConstructInstance  (line 2096, @0x0000000002ac26f0, libserver.so)  // inlines: CDOTA_Ability_Courier_Morph, Construct<CDOTA_Ability_Courier_Morph>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43D7AF0;
  }
  return p;
}


// CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2096, @0x0000000002acb980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2096, @0x0000000002acb9a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Courier_Morph::GetEntityClassInternal  (line 2096, @0x0000000002ad6ed0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "courier_morph", "CDOTA_Ability_Courier_Morph"
// globals: `guard variable for'CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass, CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass, __dso_handle, CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Courier_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_MorphClassInfo, CDOTA_Ability_Courier_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_MorphClassInfo
CEntityClass *__cdecl CDOTA_Ability_Courier_Morph::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass);
    CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass._vptr_CEntityClass = off_43D7A70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass);
    __cxa_atexit(
      CDOTA_Ability_Courier_Morph::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Courier_MorphClass != 0 )
    return &CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass;
  if ( `guard variable for'CDOTA_Ability_Courier_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_MorphClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Courier_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_MorphClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Courier_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_MorphClassInfo,
      "CDOTA_Ability_Courier_Morph",
      "courier_morph",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Courier_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_MorphClassInfo);
  }
  CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass.m_pClassInfo = &CDOTA_Ability_Courier_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_MorphClassInfo;
  CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass.m_pBaseClassInfo = CDOTA_Ability_Courier_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_MorphClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Courier_MorphClass = &CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass;
  CDOTA_Ability_Courier_Morph::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Courier_MorphClassInfo.m_pClass = &CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass;
  CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Courier_MorphClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Courier_Morph::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Courier_MorphClass;
}


// CDOTA_Ability_Courier_Morph::ProcsMagicStick  (line 2100, @0x0000000002ab7a60, libserver.so)
bool __fastcall CDOTA_Ability_Courier_Morph::ProcsMagicStick(CDOTA_Ability_Courier_Morph *const this)
{
  return 0;
}


// CDOTA_Ability_Courier_Morph::IsHiddenAbilityCastable  (line 2104, @0x0000000002ab7a70, libserver.so)
bool __fastcall CDOTA_Ability_Courier_Morph::IsHiddenAbilityCastable(CDOTA_Ability_Courier_Morph *const this)
{
  return 1;
}


// CDOTA_Ability_Courier_Morph::OnSpellStart  (line 2111, @0x0000000002a77530, libserver.so)
void __fastcall CDOTA_Ability_Courier_Morph::OnSpellStart(CDOTA_Ability_Courier_Morph *const this)
{
  ;
}


