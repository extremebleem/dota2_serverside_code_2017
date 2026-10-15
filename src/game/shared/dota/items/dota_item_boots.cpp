// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_boots.cpp:43
class CDOTA_Item_BootsOfSpeed : public CDOTA_Item {
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
	CDOTA_Item_BootsOfSpeed(CDOTA_Item_BootsOfSpeed &);
	CDOTA_Item_BootsOfSpeed(CDOTA_Item_BootsOfSpeed &);
	CDOTA_Item_BootsOfSpeed();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_BootsOfSpeed();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boots.cpp:55
class CDOTA_Modifier_Item_BootsOfSpeed : public CDOTA_Buff_Item {
public:

private:

	int bonus_movement_speed;  // +0xba8
	CDOTA_Modifier_Item_BootsOfSpeed();
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_BootsOfSpeed();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_boots.cpp:91
class CDOTA_Item_Recipe_BootsOfTravel : public CDOTA_Item {
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

	CDOTA_Item_Recipe_BootsOfTravel(CDOTA_Item_Recipe_BootsOfTravel &);
	CDOTA_Item_Recipe_BootsOfTravel(CDOTA_Item_Recipe_BootsOfTravel &);
	CDOTA_Item_Recipe_BootsOfTravel();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_BootsOfTravel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boots.cpp:98
class CDOTA_Item_Recipe_BootsOfTravel_2 : public CDOTA_Item_Recipe_BootsOfTravel {
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
	CDOTA_Item_Recipe_BootsOfTravel_2(CDOTA_Item_Recipe_BootsOfTravel_2 &);
	CDOTA_Item_Recipe_BootsOfTravel_2(CDOTA_Item_Recipe_BootsOfTravel_2 &);
	CDOTA_Item_Recipe_BootsOfTravel_2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_BootsOfTravel_2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boots.cpp:103
class CDOTA_Item_BootsOfTravel : public CDOTA_Item {
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

	int m_nFXOrigin;  // +0x3e8
	int m_nFXDestination;  // +0x3ec
	EHANDLE m_hTeleportTarget;  // +0x3f0
	CDOTA_Item_BootsOfTravel(CDOTA_Item_BootsOfTravel &);
	CDOTA_Item_BootsOfTravel(CDOTA_Item_BootsOfTravel &);
	CDOTA_Item_BootsOfTravel();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual bool ContinueCasting();
	virtual bool OnAbilityPhaseStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual void UpdateOnRemove();
	virtual ~CDOTA_Item_BootsOfTravel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[233] ContinueCasting
	// vtable[264] OnAbilityPhaseStart
	// vtable[256] CastFilterResult
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[11] UpdateOnRemove
	// sizeof = 1024
};

// src/game/shared/dota/items/dota_item_boots.cpp:137
class C_CDOTA_Item_BootsOfTravel_MapInstall {
	C_CDOTA_Item_BootsOfTravel_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_boots.cpp:463
class CDOTA_Modifier_Item_BootsOfTravel : public CDOTA_Buff_Item {
public:

private:

	int bonus_movement_speed;  // +0xba8
	CDOTA_Modifier_Item_BootsOfTravel();
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_BootsOfTravel();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_boots.cpp:496
class CDOTA_Modifier_BootsOfTravel_Incoming : public CDOTA_Buff {
public:

	CDOTA_Modifier_BootsOfTravel_Incoming();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_BootsOfTravel_Incoming();

	// vtable[5] CheckState
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/items/dota_item_boots.cpp:550
class CDOTA_Item_BootsOfTravel_2 : public CDOTA_Item_BootsOfTravel {
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
	CDOTA_Item_BootsOfTravel_2(CDOTA_Item_BootsOfTravel_2 &);
	CDOTA_Item_BootsOfTravel_2(CDOTA_Item_BootsOfTravel_2 &);
	CDOTA_Item_BootsOfTravel_2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Item_BootsOfTravel_2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1024
};

// src/game/shared/dota/items/dota_item_boots.cpp:557
class C_CDOTA_Item_BootsOfTravel_2_MapInstall {
	C_CDOTA_Item_BootsOfTravel_2_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_boots.cpp:569
class CDOTA_Item_Recipe_PowerTreads : public CDOTA_Item {
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
	CDOTA_Item_Recipe_PowerTreads(CDOTA_Item_Recipe_PowerTreads &);
	CDOTA_Item_Recipe_PowerTreads(CDOTA_Item_Recipe_PowerTreads &);
	CDOTA_Item_Recipe_PowerTreads();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_PowerTreads();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boots.cpp:588
class CDOTA_Modifier_Item_PowerTreads : public CDOTA_Buff_Item {
public:

private:

	int bonus_movement_speed;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int bonus_stat;  // +0xbb0
	int bonus_damage;  // +0xbb4
	CDOTA_Modifier_Item_PowerTreads();
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_All(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	void SwitchStat(int);
	virtual ~CDOTA_Modifier_Item_PowerTreads();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// src/game/shared/dota/items/dota_item_boots.cpp:687
class CDOTA_Item_PowerTreads : public CDOTA_Item {
	class NetworkVar_m_iStat {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CDOTA_Item_PowerTreads ThisClass;

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
	CDOTA_Item_PowerTreads(CDOTA_Item_PowerTreads &);
	CDOTA_Item_PowerTreads(CDOTA_Item_PowerTreads &);
	CDOTA_Item_PowerTreads();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnPurchase(int, const char *);
	virtual void OnSpellStart();
	void SetStat(int);
	int GetStat();
	virtual void OnEquip();
	virtual void DuplicateState(CDOTA_Item *);
	void OnPowerTreadsStatChanged();
	virtual ~CDOTA_Item_PowerTreads();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[335] OnPurchase
	// vtable[266] OnSpellStart
	// vtable[333] OnEquip
	// vtable[343] DuplicateState
	// sizeof = 1008
};

// src/game/shared/dota/items/dota_item_boots.cpp:714
class C_CDOTA_Item_PowerTreads_MapInstall {
	C_CDOTA_Item_PowerTreads_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_boots.cpp:849
class CDOTA_Item_Recipe_PhaseBoots : public CDOTA_Item {
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
	CDOTA_Item_Recipe_PhaseBoots(CDOTA_Item_Recipe_PhaseBoots &);
	CDOTA_Item_Recipe_PhaseBoots(CDOTA_Item_Recipe_PhaseBoots &);
	CDOTA_Item_Recipe_PhaseBoots();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_PhaseBoots();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boots.cpp:861
class CDOTA_Item_PhaseBoots : public CDOTA_Item {
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
	CDOTA_Item_PhaseBoots(CDOTA_Item_PhaseBoots &);
	CDOTA_Item_PhaseBoots(CDOTA_Item_PhaseBoots &);
	CDOTA_Item_PhaseBoots();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_PhaseBoots();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boots.cpp:891
class CDOTA_Modifier_Item_PhaseBoots : public CDOTA_Buff_Item {
public:

private:

	int bonus_movement_speed;  // +0xba8
	int bonus_damage;  // +0xbac
	int damage_block_melee;  // +0xbb0
	int damage_block_ranged;  // +0xbb4
	int block_chance;  // +0xbb8
	int bonus_attack_speed;  // +0xbbc
	int bonus_armor;  // +0xbc0
	CDOTA_Modifier_Item_PhaseBoots();
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_PhaseBoots();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3016
};

// src/game/shared/dota/items/dota_item_boots.cpp:978
class CDOTA_Modifier_Item_PhaseBoots_Active : public CDOTA_Buff {
public:

private:

	int phase_movement_speed;  // +0xba8
	int phase_movement_speed_range;  // +0xbac
	CDOTA_Modifier_Item_PhaseBoots_Active();
	virtual void CheckState(CDOTABuffState &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Item_PhaseBoots_Active();

	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_boots.cpp:1033
class CDOTA_Item_Recipe_TranquilBoots : public CDOTA_Item {
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
	CDOTA_Item_Recipe_TranquilBoots(CDOTA_Item_Recipe_TranquilBoots &);
	CDOTA_Item_Recipe_TranquilBoots(CDOTA_Item_Recipe_TranquilBoots &);
	CDOTA_Item_Recipe_TranquilBoots();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_TranquilBoots();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boots.cpp:1045
class CDOTA_Item_TranquilBoots : public CDOTA_Item {
public:

private:

	int break_count;  // +0x3e8

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
	CDOTA_Item_TranquilBoots(CDOTA_Item_TranquilBoots &);
	CDOTA_Item_TranquilBoots(CDOTA_Item_TranquilBoots &);
	CDOTA_Item_TranquilBoots();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	void AddDamageRecord(float);
	float GetDamageRecord(int);
	int DamageRecordCount();
	void RemoveDamageRecord(int);
	virtual void OnDisassemble();
	virtual ~CDOTA_Item_TranquilBoots();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[336] OnDisassemble
	// sizeof = 1032
};

// src/game/shared/dota/items/dota_item_boots.cpp:1073
class C_CDOTA_Item_TranquilBoots_MapInstall {
	C_CDOTA_Item_TranquilBoots_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_boots.cpp:1135
class CDOTA_Modifier_Item_TranquilBoots : public CDOTA_Buff_Item {
public:

private:

	int bonus_movement_speed;  // +0xba8
	int broken_movement_speed;  // +0xbac
	int bonus_armor;  // +0xbb0
	int bonus_health_regen;  // +0xbb4
	int break_threshold;  // +0xbb8
	int break_time;  // +0xbbc
	int break_count;  // +0xbc0
	float m_flResetTime;  // +0xbc4
	CDOTA_Modifier_Item_TranquilBoots();
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	float GetMostRecentDamageTime();
	void UpdateResetTime();
	virtual ~CDOTA_Modifier_Item_TranquilBoots();

	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3016
};

// src/game/shared/dota/items/dota_item_boots.cpp:1412
class CDOTA_Item_Recipe_TranquilBoots2 : public CDOTA_Item {
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
	CDOTA_Item_Recipe_TranquilBoots2(CDOTA_Item_Recipe_TranquilBoots2 &);
	CDOTA_Item_Recipe_TranquilBoots2(CDOTA_Item_Recipe_TranquilBoots2 &);
	CDOTA_Item_Recipe_TranquilBoots2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_TranquilBoots2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_boots.cpp:1424
class CDOTA_Item_TranquilBoots2 : public CDOTA_Item {
public:

private:

	int break_count;  // +0x3e8

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
	CDOTA_Item_TranquilBoots2(CDOTA_Item_TranquilBoots2 &);
	CDOTA_Item_TranquilBoots2(CDOTA_Item_TranquilBoots2 &);
	CDOTA_Item_TranquilBoots2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	void AddDamageRecord(float);
	float GetDamageRecord(int);
	int DamageRecordCount();
	void RemoveDamageRecord(int);
	virtual void OnDisassemble();
	virtual ~CDOTA_Item_TranquilBoots2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[336] OnDisassemble
	// sizeof = 1032
};

// src/game/shared/dota/items/dota_item_boots.cpp:1452
class C_CDOTA_Item_TranquilBoots2_MapInstall {
	C_CDOTA_Item_TranquilBoots2_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_boots.cpp:1514
class CDOTA_Modifier_Item_TranquilBoots2 : public CDOTA_Buff_Item {
public:

private:

	int bonus_movement_speed;  // +0xba8
	int broken_movement_speed;  // +0xbac
	int bonus_armor;  // +0xbb0
	int bonus_health_regen;  // +0xbb4
	int break_threshold;  // +0xbb8
	int break_time;  // +0xbbc
	int break_count;  // +0xbc0
	CDOTA_Modifier_Item_TranquilBoots2();
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	float GetMostRecentDamageTime();
	virtual ~CDOTA_Modifier_Item_TranquilBoots2();

	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3016
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_BootsOfSpeed::~CDOTA_Item_BootsOfSpeed  (line 43, @0x0000000002d858c0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_BootsOfSpeed::~CDOTA_Item_BootsOfSpeed(CDOTA_Item_BootsOfSpeed *const this)
{
  this->_vptr_IHandleEntity = &off_46A4450;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_BootsOfSpeed::~CDOTA_Item_BootsOfSpeed  (line 43, @0x0000000002d858e0, libserver.so)  // inlines: ~CDOTA_Item_BootsOfSpeed
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BootsOfSpeed::~CDOTA_Item_BootsOfSpeed(CDOTA_Item_BootsOfSpeed *const this)
{
  this->_vptr_IHandleEntity = &off_46A4450;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BootsOfSpeed::Schema_DynamicBinding  (line 45, @0x0000000002d80270, libserver.so)
// globals: CDOTA_Item_BootsOfSpeed::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BootsOfSpeed::Schema_DynamicBinding(
        const CDOTA_Item_BootsOfSpeed *const this)
{
  return CDOTA_Item_BootsOfSpeed::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 45, @0x0000000002d80280, libserver.so)
// globals: CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::DestructInstance  (line 45, @0x0000000002d80290, libserver.so)  // inlines: Destruct<CDOTA_Item_BootsOfSpeed>
void __fastcall CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::FreeInstance  (line 45, @0x0000000002d802b0, libserver.so)
void __fastcall CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::CanAllocate  (line 45, @0x0000000002d802d0, libserver.so)
bool __fastcall CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 45, @0x0000000002d802e0, libserver.so)
// globals: CDOTA_Item_BootsOfSpeed::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BootsOfSpeed::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::AllocateInstance  (line 45, @0x0000000002d830f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::ConstructInstance  (line 45, @0x0000000002d84870, libserver.so)  // inlines: CDOTA_Item_BootsOfSpeed, Construct<CDOTA_Item_BootsOfSpeed>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46A4450;
  }
  return p;
}


// CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002d87e90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002d87eb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BootsOfSpeed::GetEntityClassInternal  (line 45, @0x0000000002d8d4a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_boots", "CDOTA_Item_BootsOfSpeed"
// globals: `guard variable for'CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass, CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass, __dso_handle, CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BootsOfSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfSpeedClassInfo, CDOTA_Item_BootsOfSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfSpeedClassInfo
CEntityClass *__cdecl CDOTA_Item_BootsOfSpeed::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass);
    CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass._vptr_CEntityClass = off_46A43D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass);
    __cxa_atexit(
      CDOTA_Item_BootsOfSpeed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BootsOfSpeedClass != 0 )
    return &CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass;
  if ( `guard variable for'CDOTA_Item_BootsOfSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfSpeedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BootsOfSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfSpeedClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BootsOfSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfSpeedClassInfo,
      "CDOTA_Item_BootsOfSpeed",
      "item_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BootsOfSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfSpeedClassInfo);
  }
  CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass.m_pClassInfo = &CDOTA_Item_BootsOfSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfSpeedClassInfo;
  CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass.m_pBaseClassInfo = CDOTA_Item_BootsOfSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfSpeedClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BootsOfSpeedClass = &CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass;
  CDOTA_Item_BootsOfSpeed::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfSpeedClassInfo.m_pClass = &CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass;
  CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BootsOfSpeedClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_BootsOfSpeed::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfSpeedClass;
}


// CDOTA_Item_BootsOfSpeed::GetIntrinsicModifierName  (line 47, @0x0000000002d802f0, libserver.so)
// strings: "modifier_item_boots_of_speed"
const char *__fastcall CDOTA_Item_BootsOfSpeed::GetIntrinsicModifierName(CDOTA_Item_BootsOfSpeed *const this)
{
  return "modifier_item_boots_of_speed";
}


// CDOTA_Modifier_Item_BootsOfSpeed::~CDOTA_Modifier_Item_BootsOfSpeed  (line 55, @0x0000000002d84500, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_BootsOfSpeed::~CDOTA_Modifier_Item_BootsOfSpeed(
        CDOTA_Modifier_Item_BootsOfSpeed *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_BootsOfSpeed::~CDOTA_Modifier_Item_BootsOfSpeed  (line 55, @0x0000000002d84520, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_BootsOfSpeed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_BootsOfSpeed::~CDOTA_Modifier_Item_BootsOfSpeed(
        CDOTA_Modifier_Item_BootsOfSpeed *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_BootsOfSpeed::DeclareFunctions  (line 72, @0x0000000002d6e710, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_BootsOfSpeed::GetModifierMoveSpeedBonus_Special_Boots(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_BootsOfSpeed::DeclareFunctions(CDOTA_Modifier_Item_BootsOfSpeed *const this)
{
  this->m_Functions[16].__pfn = CDOTA_Modifier_Item_BootsOfSpeed::GetModifierMoveSpeedBonus_Special_Boots;
  this->m_Functions[16].__delta = 0;
}


// CDOTA_Modifier_Item_BootsOfSpeed::GetModifierMoveSpeedBonus_Special_Boots  (line 77, @0x0000000002d6e730, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_BootsOfSpeed::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_Item_BootsOfSpeed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_BootsOfSpeed::OnCreated  (line 82, @0x0000000002d7b530, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_BootsOfSpeed::OnCreated(
        CDOTA_Modifier_Item_BootsOfSpeed *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
  else
    this->bonus_movement_speed = 0;
}


// CDOTA_Item_Recipe_BootsOfTravel::~CDOTA_Item_Recipe_BootsOfTravel  (line 91, @0x0000000002d85910, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_BootsOfTravel::~CDOTA_Item_Recipe_BootsOfTravel(
        CDOTA_Item_Recipe_BootsOfTravel *const this)
{
  this->_vptr_IHandleEntity = &off_46A5370;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_BootsOfTravel::~CDOTA_Item_Recipe_BootsOfTravel  (line 91, @0x0000000002d85930, libserver.so)  // inlines: ~CDOTA_Item_Recipe_BootsOfTravel
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_BootsOfTravel::~CDOTA_Item_Recipe_BootsOfTravel(
        CDOTA_Item_Recipe_BootsOfTravel *const this)
{
  this->_vptr_IHandleEntity = &off_46A5370;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_BootsOfTravel::Schema_DynamicBinding  (line 93, @0x0000000002d80300, libserver.so)
// globals: CDOTA_Item_Recipe_BootsOfTravel::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_BootsOfTravel::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_BootsOfTravel *const this)
{
  return CDOTA_Item_Recipe_BootsOfTravel::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 93, @0x0000000002d80310, libserver.so)
// globals: CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::DestructInstance  (line 93, @0x0000000002d80320, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_BootsOfTravel>
void __fastcall CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::FreeInstance  (line 93, @0x0000000002d80340, libserver.so)
void __fastcall CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::CanAllocate  (line 93, @0x0000000002d80360, libserver.so)
bool __fastcall CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 93, @0x0000000002d80370, libserver.so)
// globals: CDOTA_Item_Recipe_BootsOfTravel::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_BootsOfTravel::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::AllocateInstance  (line 93, @0x0000000002d83130, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::ConstructInstance  (line 93, @0x0000000002d848a0, libserver.so)  // inlines: CDOTA_Item_Recipe_BootsOfTravel, Construct<CDOTA_Item_Recipe_BootsOfTravel>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46A5370;
  }
  return p;
}


// CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 93, @0x0000000002d87ee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 93, @0x0000000002d87f00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo  (line 93, @0x0000000002d8d5f0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal
// strings: "item_recipe_travel_boots", "CDOTA_Item_Recipe_BootsOfTravel", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility"
// globals: `guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo, CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo
CEntityClassInfo *__cdecl CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo != 0 )
    return &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo) == 0 )
    return &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo;
  if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
        "CDOTABaseAbility",
        "dota_base_ability",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo,
      "CDOTA_Item",
      "dota_item",
      0,
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo,
    "CDOTA_Item_Recipe_BootsOfTravel",
    "item_recipe_travel_boots",
    0,
    &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo);
  return &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo;
}


// CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal  (line 93, @0x0000000002d8d700, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_travel_boots", "CDOTA_Item_Recipe_BootsOfTravel"
// globals: `guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass, CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass, __dso_handle, CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo, CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass);
    CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass._vptr_CEntityClass = off_46A52F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_BootsOfTravelClass != 0 )
    return &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass;
  if ( `guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo,
      "CDOTA_Item_Recipe_BootsOfTravel",
      "item_recipe_travel_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo);
  }
  CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass.m_pClassInfo = &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo;
  CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass.m_pBaseClassInfo = CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_BootsOfTravelClass = &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass;
  CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClassInfo.m_pClass = &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass;
  CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_BootsOfTravelClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravelClass;
}


// CDOTA_Item_Recipe_BootsOfTravel_2::Schema_DynamicBinding  (line 98, @0x0000000002d80380, libserver.so)
// globals: CDOTA_Item_Recipe_BootsOfTravel_2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_BootsOfTravel_2::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_BootsOfTravel_2 *const this)
{
  return CDOTA_Item_Recipe_BootsOfTravel_2::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 98, @0x0000000002d80390, libserver.so)
// globals: CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::DestructInstance  (line 98, @0x0000000002d803a0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_BootsOfTravel_2>
void __fastcall CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::FreeInstance  (line 98, @0x0000000002d803c0, libserver.so)
void __fastcall CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::CanAllocate  (line 98, @0x0000000002d803e0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 98, @0x0000000002d803f0, libserver.so)
// globals: CDOTA_Item_Recipe_BootsOfTravel_2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_BootsOfTravel_2::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::AllocateInstance  (line 98, @0x0000000002d83170, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::ConstructInstance  (line 98, @0x0000000002d848d0, libserver.so)  // inlines: CDOTA_Item_Recipe_BootsOfTravel, CDOTA_Item_Recipe_BootsOfTravel_2, Construct<CDOTA_Item_Recipe_BootsOfTravel_2>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46A5F70;
  }
  return p;
}


// CDOTA_Item_Recipe_BootsOfTravel_2::~CDOTA_Item_Recipe_BootsOfTravel_2  (line 98, @0x0000000002d85960, libserver.so)  // inlines: ~CDOTA_Item_Recipe_BootsOfTravel
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_BootsOfTravel_2::~CDOTA_Item_Recipe_BootsOfTravel_2(
        CDOTA_Item_Recipe_BootsOfTravel_2 *const this)
{
  this->_vptr_IHandleEntity = &off_46A5370;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_BootsOfTravel_2::~CDOTA_Item_Recipe_BootsOfTravel_2  (line 98, @0x0000000002d85980, libserver.so)  // inlines: ~CDOTA_Item_Recipe_BootsOfTravel, ~CDOTA_Item_Recipe_BootsOfTravel_2
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_BootsOfTravel_2::~CDOTA_Item_Recipe_BootsOfTravel_2(
        CDOTA_Item_Recipe_BootsOfTravel_2 *const this)
{
  this->_vptr_IHandleEntity = &off_46A5370;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 98, @0x0000000002d87f30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 98, @0x0000000002d87f50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal  (line 98, @0x0000000002d8d850, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_travel_boots_2", "CDOTA_Item_Recipe_BootsOfTravel_2"
// globals: `guard variable for'CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class, CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class, __dso_handle, CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2ClassInfo, CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2ClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class);
    CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class._vptr_CEntityClass = off_46A5EF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class);
    __cxa_atexit(
      CDOTA_Item_Recipe_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_BootsOfTravel_2Class != 0 )
    return &CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class;
  if ( `guard variable for'CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Recipe_BootsOfTravel::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2ClassInfo,
      "CDOTA_Item_Recipe_BootsOfTravel_2",
      "item_recipe_travel_boots_2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2ClassInfo);
  }
  CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class.m_pClassInfo = &CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2ClassInfo;
  CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class.m_pBaseClassInfo = CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_BootsOfTravel_2Class = &CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class;
  CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2ClassInfo.m_pClass = &CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class;
  CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_BootsOfTravel_2Class->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BootsOfTravel_2Class;
}


// CDOTA_Item_BootsOfTravel::~CDOTA_Item_BootsOfTravel  (line 103, @0x0000000002d859b0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_BootsOfTravel::~CDOTA_Item_BootsOfTravel(CDOTA_Item_BootsOfTravel *const this)
{
  this->_vptr_IHandleEntity = &off_46A6B70;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_BootsOfTravel::~CDOTA_Item_BootsOfTravel  (line 103, @0x0000000002d859d0, libserver.so)  // inlines: ~CDOTA_Item_BootsOfTravel
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BootsOfTravel::~CDOTA_Item_BootsOfTravel(CDOTA_Item_BootsOfTravel *const this)
{
  this->_vptr_IHandleEntity = &off_46A6B70;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BootsOfTravel::Schema_DynamicBinding  (line 105, @0x0000000002d80400, libserver.so)
// globals: CDOTA_Item_BootsOfTravel::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BootsOfTravel::Schema_DynamicBinding(
        const CDOTA_Item_BootsOfTravel *const this)
{
  return CDOTA_Item_BootsOfTravel::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 105, @0x0000000002d80410, libserver.so)
// globals: CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::DestructInstance  (line 105, @0x0000000002d80420, libserver.so)  // inlines: Destruct<CDOTA_Item_BootsOfTravel>
void __fastcall CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::FreeInstance  (line 105, @0x0000000002d80440, libserver.so)
void __fastcall CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::CanAllocate  (line 105, @0x0000000002d80460, libserver.so)
bool __fastcall CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 105, @0x0000000002d80470, libserver.so)
// globals: CDOTA_Item_BootsOfTravel::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BootsOfTravel::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::AllocateInstance  (line 105, @0x0000000002d831b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1024);
  memset(v1, 0, 0x400u);
  return v1;
}


// CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::ConstructInstance  (line 105, @0x0000000002d84900, libserver.so)  // inlines: CDOTA_Item_BootsOfTravel, CEntityHandle, CHandle, Construct<CDOTA_Item_BootsOfTravel>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 252) = -1;
    *p = &off_46A6B70;
  }
  return p;
}


// CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 105, @0x0000000002d87f80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 105, @0x0000000002d87fa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BootsOfTravel::GetEntityClassInfo  (line 105, @0x0000000002d8d9a0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal
// strings: "item_travel_boots", "CDOTA_Item_BootsOfTravel", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility"
// globals: `guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo, CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo
CEntityClassInfo *__cdecl CDOTA_Item_BootsOfTravel::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo != 0 )
    return &CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo) == 0 )
    return &CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo;
  if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
        "CDOTABaseAbility",
        "dota_base_ability",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo,
      "CDOTA_Item",
      "dota_item",
      0,
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo,
    "CDOTA_Item_BootsOfTravel",
    "item_travel_boots",
    0,
    &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo);
  return &CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo;
}


// CDOTA_Item_BootsOfTravel::GetEntityClassInternal  (line 105, @0x0000000002d8dab0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_travel_boots", "CDOTA_Item_BootsOfTravel"
// globals: `guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass, CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass, __dso_handle, CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo, CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo
CEntityClass *__cdecl CDOTA_Item_BootsOfTravel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass);
    CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass._vptr_CEntityClass = off_46A6AF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass);
    __cxa_atexit(
      CDOTA_Item_BootsOfTravel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BootsOfTravelClass != 0 )
    return &CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass;
  if ( `guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo,
      "CDOTA_Item_BootsOfTravel",
      "item_travel_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo);
  }
  CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass.m_pClassInfo = &CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo;
  CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass.m_pBaseClassInfo = CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BootsOfTravelClass = &CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass;
  CDOTA_Item_BootsOfTravel::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravelClassInfo.m_pClass = &CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass;
  CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BootsOfTravelClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_BootsOfTravel::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravelClass;
}


// CDOTA_Item_BootsOfTravel::GetIntrinsicModifierName  (line 109, @0x0000000002d80480, libserver.so)
// strings: "modifier_item_boots_of_travel"
const char *__fastcall CDOTA_Item_BootsOfTravel::GetIntrinsicModifierName(CDOTA_Item_BootsOfTravel *const this)
{
  return "modifier_item_boots_of_travel";
}


// CDOTA_Item_BootsOfTravel::ContinueCasting  (line 115, @0x0000000002d88f70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=<CBaseEntity>
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Item_BootsOfTravel::ContinueCasting(CDOTA_Item_BootsOfTravel *const this)
{
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hTeleportTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTeleportTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTeleportTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance != 0;
    }
  }
  return result;
}


// CDOTA_Item_BootsOfTravel::UpdateOnRemove  (line 121, @0x0000000002d85260, libserver.so)
// calls: CDOTA_Item::UpdateOnRemove
void __fastcall CDOTA_Item_BootsOfTravel::UpdateOnRemove(CDOTA_Item_BootsOfTravel *const this)
{
  (*(this->_vptr_IHandleEntity + 267))(this, 1);
  CDOTA_Item::UpdateOnRemove(this);
}


// CDOTA_Item_BootsOfTravel::YouForgotToImplementOrDeclareServerClass  (line 137, @0x0000000002d6e750, libserver.so)
int __fastcall CDOTA_Item_BootsOfTravel::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_BootsOfTravel *const this)
{
  return 0;
}


// CDOTA_Item_BootsOfTravel::GetServerClass  (line 137, @0x0000000002d73ca0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_BootsOfTravel::GetServerClass(CDOTA_Item_BootsOfTravel *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Item_BootsOfTravel::CastFilterResult  (line 147, @0x0000000002d6f8e0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetTeamNumber, _V_strcmp
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster
// strings: "item_travel_boots_2"
int __fastcall CDOTA_Item_BootsOfTravel::CastFilterResult(CDOTA_Item_BootsOfTravel *const this, CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  unsigned __int8 m_Value; // bl
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 0 )
  {
    if ( (pTarget->m_iUnitType & 1) == 0 )
      return 0;
    m_Value = pTarget->m_iTeamNum.m_Value;
    if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      return 0;
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData != 0
      && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName != 0)
      && (m_pszAbilityName == "item_travel_boots_2" || strcmp(m_pszAbilityName, "item_travel_boots_2") == 0) )
    {
      return 0;
    }
    else
    {
      return 3;
    }
  }
  return result;
}


// CDOTA_Item_BootsOfTravel::CastFilterResult  (line 162, @0x0000000002d6f960, libserver.so)  // inlines: InState, IsUnableToTargetEnemies
// calls: CDOTABaseAbility::GetCaster
int __fastcall CDOTA_Item_BootsOfTravel::CastFilterResult(
        CDOTA_Item_BootsOfTravel *const this,
        const Vector *const vLocation)
{
  return ((LODWORD(CDOTABaseAbility::GetCaster(this)->m_nUnitState64.m_Value) << 16) >> 31) & 0x17;
}


// CDOTA_Item_BootsOfTravel::GetCustomCastError  (line 172, @0x0000000002d6e760, libserver.so)
// strings: "#dota_hud_error_cant_target_units"
const char *__fastcall CDOTA_Item_BootsOfTravel::GetCustomCastError(
        CDOTA_Item_BootsOfTravel *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_cant_target_units";
}


// CDOTA_Item_BootsOfTravel::Spawn  (line 178, @0x0000000002d6f870, libserver.so)
// calls: CDOTA_Item::Spawn
void __fastcall CDOTA_Item_BootsOfTravel::Spawn(
        CDOTA_Item_BootsOfTravel *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_Item::Spawn(this, pKeyValues);
  this->m_nFXOrigin = -1;
  this->m_nFXDestination = -1;
}


// CDOTA_Item_BootsOfTravel::OnAbilityPhaseStart  (line 278, @0x0000000002d7aac0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, FastSqrt, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator->, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, FindUnitsInRadius, SortEHANDLEVectorByLocation, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "item_travel_boots_2"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Item_BootsOfTravel::OnAbilityPhaseStart(CDOTA_Item_BootsOfTravel *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __int64 v3; // r14
  int v4; // ebx
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // rdi
  char m_bIsDOTANPC; // r12
  const Vector *AbsOrigin; // rax
  uint32 v13; // eax
  const CBaseEntity *v14; // rax
  const Vector *v15; // rax
  bool v16; // zf
  vec_t z; // xmm0_4
  __int64 v19; // rbx
  CHandle<CBaseEntity> *v20; // rdx
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CDOTA_BaseNPC *v24; // r15
  uint32 m_iUnitType; // edx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  Vector vRequestedPosition; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  this->m_nFXOrigin = -1;
  this->m_nFXDestination = -1;
  vRequestedPosition = CDOTABaseAbility::GetCursorPosition(this);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &vRequestedPosition, 0, -1.0, &entities, 1, 7, 80, 0, 0);
  SortEHANDLEVectorByLocation(&entities, &vRequestedPosition, 0);
  if ( entities.m_Size <= 0 )
  {
LABEL_16:
    m_bIsDOTANPC = 0;
    entities.m_Size = 0;
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return m_bIsDOTANPC;
    goto LABEL_14;
  }
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = &entities.m_Memory.m_pMemory[v3];
    m_Index = entities.m_Memory.m_pMemory[v3].m_Index;
    if ( m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0 )
          {
            m_bIsDOTANPC = BYTE3(m_pInstance[7]._vptr_IHandleEntity);
            if ( m_bIsDOTANPC != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
              if ( fsqrt(
                     ((AbsOrigin->x - vRequestedPosition.x) * (AbsOrigin->x - vRequestedPosition.x))
                   + ((AbsOrigin->y - vRequestedPosition.y) * (AbsOrigin->y - vRequestedPosition.y))) < 325.0 )
                break;
            }
          }
        }
      }
    }
    ++v4;
    ++v3;
    if ( entities.m_Size <= v4 )
    {
      v19 = 0;
      if ( entities.m_Size <= 0 )
        goto LABEL_16;
      while ( 1 )
      {
        v3 = v19;
        v20 = &entities.m_Memory.m_pMemory[v19];
        v13 = v20->m_Index;
        if ( v20->m_Index + 2 > 1 )
        {
          v21 = v20->m_Index;
          v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F];
          if ( v22 != 0 )
          {
            v23 = &v22[v21 & 0x1FF];
            if ( v23 != 0 && v13 == v23->m_EHandle.m_Index )
            {
              v24 = v23->m_pInstance;
              if ( v23->m_pInstance != 0 )
              {
                m_bIsDOTANPC = v24->m_bIsDOTANPC;
                if ( m_bIsDOTANPC != 0 )
                {
                  m_iUnitType = v24->m_iUnitType;
                  if ( (m_iUnitType & 1) == 0 || (m_iUnitType & 2) != 0 )
                    goto LABEL_13;
                  m_pAbilityData = this->m_pAbilityData;
                  if ( m_pAbilityData != 0 )
                  {
                    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
                    if ( m_pAbilityData->m_pszAbilityName != 0
                      && (m_pszAbilityName == "item_travel_boots_2"
                       || strcmp(m_pszAbilityName, "item_travel_boots_2") == 0)
                      && CDOTABaseAbility::GetCaster(this) != v24 )
                    {
                      goto LABEL_12;
                    }
                  }
                }
              }
            }
          }
        }
        if ( entities.m_Size <= ++v19 )
          goto LABEL_16;
      }
    }
  }
LABEL_12:
  v13 = entities.m_Memory.m_pMemory[v3].m_Index;
LABEL_13:
  this->m_hTeleportTarget.m_Index = v13;
  v14 = CEntityHandle::operator CEntityInstance *(&this->m_hTeleportTarget);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vTeleportLoc.x = v15->x;
  this->m_vTeleportLoc.y = v15->y;
  z = v15->z;
  entities.m_Size = 0;
  this->m_vTeleportLoc.z = z;
  if ( v16 )
  {
LABEL_14:
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  return m_bIsDOTANPC;
}


// CDOTA_Item_BootsOfTravel::OnSpellStart  (line 318, @0x0000000002d740e0, libserver.so)  // inlines: CUtlString, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=, ~CUtlString
// calls: __stack_chk_fail, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::GetPlayerColor, GetParticleManager, CDOTA_ParticleManager::GetParticleReplacement, CUtlString::Set, CUtlString::Get, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_ParticleManager::SetParticleControlEnt (23 total)
// strings: "particles/items2_fx/teleport_start.vpcf", "particles/items2_fx/teleport_end.vpcf", "modifier_boots_of_travel_incoming", "start_x", "start_y", "start_z" (14 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_BootsOfTravel::OnSpellStart(CDOTA_Item_BootsOfTravel *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // r15
  Color PlayerColor; // eax
  CDOTA_BaseNPC *v9; // rax
  const char *ParticleReplacement; // rax
  CDOTA_BaseNPC *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  const Vector *v21; // r15
  CDOTA_ParticleManager *v22; // rax
  const Vector *v23; // r15
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  float v29; // xmm1_4
  CDOTA_BaseNPC *v30; // rax
  float v31; // xmm1_4
  CDOTA_BaseNPC *v32; // rax
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  CDOTA_BaseNPC *v39; // rax
  const CBaseEntity *v40; // rax
  const CBaseEntity *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  const char *v43; // rax
  CIngameEvent_Base *IngameEventByID; // rdi
  int PlayerCompendiumLevel; // eax
  CDOTA_BaseNPC *pEventEntity; // [rsp+10h] [rbp-C0h]
  int iY; // [rsp+1Ch] [rbp-B4h]
  int iIndex; // [rsp+20h] [rbp-B0h]
  int iIndexa; // [rsp+20h] [rbp-B0h]
  int iIndexb; // [rsp+20h] [rbp-B0h]
  CDOTA_BaseNPC *iIndexc; // [rsp+20h] [rbp-B0h]
  EHANDLE *p_m_hTeleportTarget; // [rsp+28h] [rbp-A8h]
  int x; // [rsp+28h] [rbp-A8h]
  CUtlString sTPStartFX; // [rsp+30h] [rbp-A0h] BYREF
  CUtlString sTPEndFX; // [rsp+40h] [rbp-90h] BYREF
  Vector vecTPColor; // [rsp+50h] [rbp-80h]
  KeyValues kv_incoming; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v59; // [rsp+98h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  p_m_hTeleportTarget = &this->m_hTeleportTarget;
  m_Index = this->m_hTeleportTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTeleportTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTeleportTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          vecTPColor.x = 1.0;
          vecTPColor.y = 1.0;
          vecTPColor.z = 1.0;
          Caster = CDOTABaseAbility::GetCaster(this);
          v7 = Caster;
          if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
          {
            PlayerColor = CDOTA_PlayerResource::GetPlayerColor(g_pDOTAPlayerResource, Caster[1].m_pfnBlocked.__delta);
            vecTPColor.z = PlayerColor._color[2] / 255.0;
            vecTPColor.y = PlayerColor._color[1] / 255.0;
            vecTPColor.x = PlayerColor._color[0] / 255.0;
          }
          else
          {
            v7 = 0;
          }
          GetParticleManager();
          v9 = CDOTABaseAbility::GetCaster(this);
          ParticleReplacement = CDOTA_ParticleManager::GetParticleReplacement(
                                  "particles/items2_fx/teleport_start.vpcf",
                                  v9);
          sTPStartFX.m_pString = 0;
          CUtlString::Set(&sTPStartFX, ParticleReplacement);
          GetParticleManager();
          v11 = CDOTABaseAbility::GetCaster(this);
          v12 = CDOTA_ParticleManager::GetParticleReplacement("particles/items2_fx/teleport_end.vpcf", v11);
          sTPEndFX.m_pString = 0;
          CUtlString::Set(&sTPEndFX, v12);
          if ( v7 != 0 )
          {
            v13 = CUtlString::Get(&sTPStartFX);
            if ( v13 == "particles/items2_fx/teleport_start.vpcf"
              || strcmp(v13, "particles/items2_fx/teleport_start.vpcf") == 0 )
            {
              v43 = CUtlString::Get(&sTPEndFX);
              if ( v43 == "particles/items2_fx/teleport_end.vpcf"
                || strcmp(v43, "particles/items2_fx/teleport_end.vpcf") == 0 )
              {
                IngameEventByID = CDOTAGamerules::GetIngameEventByID(g_pGameRules, EEvent::EVENT_ID_FALL_MAJOR_2015);
                if ( IngameEventByID != 0 )
                {
                  PlayerCompendiumLevel = CIngameEvent_Base::GetPlayerCompendiumLevel(
                                            IngameEventByID,
                                            v7[1].m_pfnBlocked.__delta);
                  if ( PlayerCompendiumLevel > 74 )
                  {
                    CUtlString::operator=(
                      &sTPStartFX,
                      "particles/econ/events/fall_major_2015/teleport_start_fallmjr_2015_lvl2.vpcf");
                    CUtlString::operator=(
                      &sTPEndFX,
                      "particles/econ/events/fall_major_2015/teleport_end_fallmjr_2015_lvl2.vpcf");
                  }
                  else if ( PlayerCompendiumLevel > 24 )
                  {
                    CUtlString::operator=(
                      &sTPStartFX,
                      "particles/econ/events/fall_major_2015/teleport_start_fallmjr_2015.vpcf");
                    CUtlString::operator=(
                      &sTPEndFX,
                      "particles/econ/events/fall_major_2015/teleport_end_fallmjr_2015.vpcf");
                  }
                }
              }
            }
          }
          v14 = CUtlString::Get(&sTPStartFX);
          this->m_nFXOrigin = CDOTABaseAbility::CreateAbilityParticleEffect(this, v14, 2, 0, 0);
          v15 = CUtlString::Get(&sTPEndFX);
          this->m_nFXDestination = CDOTABaseAbility::CreateAbilityParticleEffect(this, v15, 2, 0, 0);
          v16 = CDOTABaseAbility::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
          iIndex = this->m_nFXOrigin;
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(ParticleManager, iIndex, 0, *&AbsOrigin->x, AbsOrigin->z);
          LODWORD(AbsOrigin) = this->m_nFXOrigin;
          v19 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v19, AbsOrigin, 2, *&vecTPColor.x, vecTPColor.z);
          LODWORD(AbsOrigin) = this->m_nFXOrigin;
          v20 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleFoWProperties(v20, AbsOrigin, 0, -1, 0.0);
          v21 = CBaseEntity::GetAbsOrigin(m_pInstance);
          iIndexa = this->m_nFXDestination;
          v22 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v22, iIndexa, 0, m_pInstance, 1, 0, *v21, 1);
          v23 = CBaseEntity::GetAbsOrigin(m_pInstance);
          iIndexb = this->m_nFXDestination;
          v24 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v24, iIndexb, 1, m_pInstance, 1, 0, *v23, 1);
          LODWORD(v23) = this->m_nFXDestination;
          v25 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v25, v23, 2, *&vecTPColor.x, vecTPColor.z);
          LODWORD(v23) = this->m_nFXDestination;
          v26 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleFoWProperties(v26, v23, 0, -1, 0.0);
          KeyValues::KeyValues(&kv_incoming, "modifier_boots_of_travel_incoming");
          v27 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v27, this, "modifier_boots_of_travel_incoming", &kv_incoming, 0);
          KeyValues::KeyValues(&kv, "teleporting");
          v28 = CDOTABaseAbility::GetCaster(this);
          CBaseEntity::GetAbsOrigin(v28);
          KeyValues::SetFloat(&kv, "start_x", v29);
          v30 = CDOTABaseAbility::GetCaster(this);
          CBaseEntity::GetAbsOrigin(v30);
          KeyValues::SetFloat(&kv, "start_y", v31);
          v32 = CDOTABaseAbility::GetCaster(this);
          CBaseEntity::GetAbsOrigin(v32);
          KeyValues::SetFloat(&kv, "start_z", v33);
          KeyValues::SetFloat(&kv, "end_x", v34);
          KeyValues::SetFloat(&kv, "end_y", v35);
          KeyValues::SetFloat(&kv, "end_z", v36);
          (*(this->_vptr_IHandleEntity + 225))(this);
          KeyValues::SetFloat(&kv, "channel_time", v37);
          (*(this->_vptr_IHandleEntity + 225))(this);
          KeyValues::SetFloat(&kv, "duration", v38);
          iIndexc = CDOTABaseAbility::GetCaster(this);
          v39 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v39, iIndexc, this, "modifier_teleporting", &kv, 0);
          LODWORD(iIndexc) = (*(this->_vptr_IHandleEntity + 225))(this);
          v40 = CEntityHandle::operator CEntityInstance *(p_m_hTeleportTarget);
          iY = CBaseEntity::GetAbsOrigin(v40)->y;
          v41 = CEntityHandle::operator CEntityInstance *(p_m_hTeleportTarget);
          x = CBaseEntity::GetAbsOrigin(v41)->x;
          pEventEntity = CDOTABaseAbility::GetCaster(this);
          v42 = CDOTABaseAbility::GetCaster(this);
          MinimapEvent(v42->m_iTeamNum.m_Value, pEventEntity, x, iY, 32, iIndexc);
          KeyValues::~KeyValues(&kv);
          KeyValues::~KeyValues(&kv_incoming);
          if ( sTPEndFX.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&sTPEndFX);
          if ( sTPStartFX.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&sTPStartFX);
        }
      }
    }
  }
}


// CDOTA_Item_BootsOfTravel::OnChannelFinish  (line 393, @0x0000000002d72b50, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, ClearAlertTarget, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetUnit, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::ProjectileDodge, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CBaseEntity::GetAbsOrigin, DoEventPostTPEffect, MinimapEvent, CDOTA_ModifierManager::RemoveModifierByName, CDOTA_ParticleManager::SetParticleControlEnt, FireModifierEvent (18 total)
// strings: "modifier_teleporting", "modifier_boots_of_travel_incoming"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Item_BootsOfTravel::OnChannelFinish(CDOTA_Item_BootsOfTravel *const this, bool bInterrupted)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v8; // rax
  CEntityIdentity *v9; // rdx
  int v10; // eax
  __int16 v11; // cx
  CDOTA_BaseNPC *v12; // rax
  CDOTA_Buff *ModifierByName; // rax
  int m_nFXOrigin; // r13d
  CDOTA_ParticleManager *v15; // rax
  int v16; // r13d
  CDOTA_ParticleManager *v17; // rax
  const Vector *v18; // r12
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // r13
  CDOTA_BaseNPC *v21; // rax
  const Vector *AbsOrigin; // rax
  int m_nFXDestination; // r15d
  const Vector *v24; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v26; // rax
  int v27; // r15d
  const Vector *v28; // r14
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v32; // cx
  Vector *v33; // r13
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CEntityIdentity *v36; // rdx
  __int16 v37; // cx
  CDOTAHLTVDirector *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  CDOTABody *v42; // rax
  EHANDLE hEntity; // [rsp+10h] [rbp-D0h] BYREF
  CModifierParams params; // [rsp+20h] [rbp-C0h] BYREF

  m_Index = this->m_hTeleportTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTeleportTarget.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return;
  v6 = &v5[this->m_hTeleportTarget.m_Index & 0x1FF];
  if ( v6 == 0 )
    return;
  if ( m_Index != v6->m_EHandle.m_Index )
    return;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return;
  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v6->m_pInstance) != 0 )
  {
    CDOTA_ModifierManager::RemoveModifierByName(&m_pInstance[64].m_worldGroupId, "modifier_boots_of_travel_incoming");
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    m_nFXDestination = this->m_nFXDestination;
    v24 = AbsOrigin;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXDestination, 0, m_pInstance, 0, 0, *v24, 1);
    v26 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v27 = this->m_nFXDestination;
    v28 = v26;
    v29 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v29, v27, 1, m_pInstance, 0, 0, *v28, 1);
    if ( !bInterrupted )
    {
      params.bCraniumBasherTested = 0;
      params.ability.m_Index = -1;
      params.fDamage = 0.0;
      params.fOriginalDamage = 0.0;
      params.nActivity = -1;
      params.bTooltip = 0;
      params.nTooltipParam = 0;
      params.bIgnoreInvis = 0;
      params.bNoCooldown = 0;
      params.bReincarnate = 0;
      params.bDoNotConsume = 0;
      params.fDistance = 0.0;
      params.inflictor.m_Index = -1;
      params.nDamageflags = 0;
      params.nDamageCategory = 0;
      memset(&params.pOrb, 0, 24);
      params.bHeartRegenApplied = 0;
      params.bDiffusalApplied = 0;
      params.bChainLightningConsidered = 0;
      params.bSuppressDamage = 0;
      params.bRangedAttack = 0;
      params.nPlayerids_stick = 0;
      params.hattacker.m_Index = -1;
      params.htarget.m_Index = -1;
      params.hunit.m_Index = -1;
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
      {
        v32 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v32 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        params.hunit.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v32 & 0x7FFF;
      }
      else
      {
        params.hunit.m_Index = -1;
      }
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_TELEPORTED, &params);
      v33 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v34 = CDOTABaseAbility::GetCaster(this);
      FindClearSpaceForUnit(v34, *v33, 1);
      v35 = CDOTABaseAbility::GetCaster(this);
      hEntity.m_Index = -1;
      if ( v35 != 0 )
      {
        v36 = v35->m_pEntity;
        if ( v36 != 0 )
        {
          v37 = 0x7FFF;
          if ( v36->m_EHandle.m_Index != -1 )
            v37 = v36->m_EHandle.m_Index & 0x7FFF;
          hEntity.m_Index = (((v36->m_EHandle.m_Index >> 15) - (v36->m_flags & 1)) << 15) | v37 & 0x7FFF;
        }
      }
      v38 = DOTAHLTVDirector();
      CDOTAHLTVDirector::TryToGenerateTeleportEvent(v38, &hEntity);
      CDOTABaseAbility::GetCaster(this)->m_hAlertTarget.m_Index = -1;
      v39 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveGesture(v39, 1536);
      v40 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v40, 1596, 0.0, 0.1, 9, 0, 1.0);
      v41 = CDOTABaseAbility::GetCaster(this);
      v42 = (*(v41->_vptr_IHandleEntity + 377))(v41);
      CDOTABody::StartAnimation(v42, 0x5DCu, 1, 1.0);
      goto LABEL_10;
    }
  }
  else if ( !bInterrupted )
  {
LABEL_10:
    v8 = CDOTABaseAbility::GetCaster(this);
    params.ability.m_Index = -1;
    if ( v8 != 0 )
    {
      v9 = v8->m_pEntity;
      if ( v9 != 0 )
      {
        v10 = (v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1);
        v11 = 0x7FFF;
        if ( v9->m_EHandle.m_Index != -1 )
          v11 = v9->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.ability.m_Index) = v11 | params.ability.m_Index & 0x8000;
        params.ability.m_Index = (v10 << 15) | params.ability.m_Index & 0x7FFF;
      }
    }
    CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &params.ability, 0);
    goto LABEL_16;
  }
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = CDOTABaseAbility::GetCaster(this);
  MinimapEvent(v21->m_iTeamNum.m_Value, v20, 0, 0, 2048, 0);
LABEL_16:
  v12 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v12, "modifier_teleporting", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
  m_nFXOrigin = this->m_nFXOrigin;
  if ( m_nFXOrigin != -1 )
  {
    v15 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v15, m_nFXOrigin, 0);
    this->m_nFXOrigin = -1;
  }
  v16 = this->m_nFXDestination;
  if ( v16 != -1 )
  {
    v17 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v17, v16, 0);
    this->m_nFXDestination = -1;
  }
  v18 = CBaseEntity::GetAbsOrigin(m_pInstance);
  v19 = CDOTABaseAbility::GetCaster(this);
  DoEventPostTPEffect(v19, v18);
  this->m_hTeleportTarget.m_Index = -1;
}


// CDOTA_Modifier_Item_BootsOfTravel::~CDOTA_Modifier_Item_BootsOfTravel  (line 463, @0x0000000002d844b0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_BootsOfTravel::~CDOTA_Modifier_Item_BootsOfTravel(
        CDOTA_Modifier_Item_BootsOfTravel *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_BootsOfTravel::~CDOTA_Modifier_Item_BootsOfTravel  (line 463, @0x0000000002d844d0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_BootsOfTravel
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_BootsOfTravel::~CDOTA_Modifier_Item_BootsOfTravel(
        CDOTA_Modifier_Item_BootsOfTravel *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_BootsOfTravel::DeclareFunctions  (line 479, @0x0000000002d6e770, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_BootsOfTravel::GetModifierMoveSpeedBonus_Special_Boots(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_BootsOfTravel::DeclareFunctions(CDOTA_Modifier_Item_BootsOfTravel *const this)
{
  this->m_Functions[16].__pfn = CDOTA_Modifier_Item_BootsOfTravel::GetModifierMoveSpeedBonus_Special_Boots;
  this->m_Functions[16].__delta = 0;
}


// CDOTA_Modifier_Item_BootsOfTravel::GetModifierMoveSpeedBonus_Special_Boots  (line 484, @0x0000000002d6e790, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_BootsOfTravel::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_Item_BootsOfTravel *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_BootsOfTravel::OnCreated  (line 489, @0x0000000002d7ba10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_BootsOfTravel::OnCreated(
        CDOTA_Modifier_Item_BootsOfTravel *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
  else
    this->bonus_movement_speed = 0;
}


// CDOTA_Modifier_BootsOfTravel_Incoming::~CDOTA_Modifier_BootsOfTravel_Incoming  (line 496, @0x0000000002d847d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BootsOfTravel_Incoming::~CDOTA_Modifier_BootsOfTravel_Incoming(
        CDOTA_Modifier_BootsOfTravel_Incoming *const this)
{
  this->_vptr_CDOTA_Buff = &off_46A7A50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BootsOfTravel_Incoming::~CDOTA_Modifier_BootsOfTravel_Incoming  (line 496, @0x0000000002d847f0, libserver.so)  // inlines: ~CDOTA_Modifier_BootsOfTravel_Incoming
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BootsOfTravel_Incoming::~CDOTA_Modifier_BootsOfTravel_Incoming(
        CDOTA_Modifier_BootsOfTravel_Incoming *const this)
{
  this->_vptr_CDOTA_Buff = &off_46A7A50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BootsOfTravel_Incoming::IsPurgable  (line 504, @0x0000000002d80490, libserver.so)
bool __fastcall CDOTA_Modifier_BootsOfTravel_Incoming::IsPurgable(CDOTA_Modifier_BootsOfTravel_Incoming *const this)
{
  return 0;
}


// CDOTA_Modifier_BootsOfTravel_Incoming::GetAttributes  (line 505, @0x0000000002d804a0, libserver.so)
int __fastcall CDOTA_Modifier_BootsOfTravel_Incoming::GetAttributes(CDOTA_Modifier_BootsOfTravel_Incoming *const this)
{
  return 2;
}


// CDOTA_Modifier_BootsOfTravel_Incoming::DeclareFunctions  (line 516, @0x0000000002d6e7b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_BootsOfTravel_Incoming::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_BootsOfTravel_Incoming::DeclareFunctions(
        CDOTA_Modifier_BootsOfTravel_Incoming *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_BootsOfTravel_Incoming::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_BootsOfTravel_Incoming::OnDeath  (line 523, @0x0000000002d725f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::InterruptChannel, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_BootsOfTravel_Incoming::OnDeath(
        CDOTA_Modifier_BootsOfTravel_Incoming *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::InterruptChannel(Caster);
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_BootsOfTravel_Incoming::CheckState  (line 538, @0x0000000002d6e7d0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_BootsOfTravel_Incoming::CheckState(
        CDOTA_Modifier_BootsOfTravel_Incoming *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x400000uLL;
  buffState->m_nDisabledStateMask &= ~0x400000uLL;
}


// CDOTA_Item_BootsOfTravel_2::~CDOTA_Item_BootsOfTravel_2  (line 550, @0x0000000002d85a00, libserver.so)  // inlines: ~CDOTA_Item_BootsOfTravel
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_BootsOfTravel_2::~CDOTA_Item_BootsOfTravel_2(CDOTA_Item_BootsOfTravel_2 *const this)
{
  this->_vptr_IHandleEntity = &off_46A6B70;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_BootsOfTravel_2::~CDOTA_Item_BootsOfTravel_2  (line 550, @0x0000000002d85a20, libserver.so)  // inlines: ~CDOTA_Item_BootsOfTravel, ~CDOTA_Item_BootsOfTravel_2
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_BootsOfTravel_2::~CDOTA_Item_BootsOfTravel_2(CDOTA_Item_BootsOfTravel_2 *const this)
{
  this->_vptr_IHandleEntity = &off_46A6B70;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_BootsOfTravel_2::Schema_DynamicBinding  (line 552, @0x0000000002d804b0, libserver.so)
// globals: CDOTA_Item_BootsOfTravel_2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BootsOfTravel_2::Schema_DynamicBinding(
        const CDOTA_Item_BootsOfTravel_2 *const this)
{
  return CDOTA_Item_BootsOfTravel_2::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 552, @0x0000000002d804c0, libserver.so)
// globals: CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::DestructInstance  (line 552, @0x0000000002d804d0, libserver.so)  // inlines: Destruct<CDOTA_Item_BootsOfTravel_2>
void __fastcall CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::FreeInstance  (line 552, @0x0000000002d804f0, libserver.so)
void __fastcall CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::CanAllocate  (line 552, @0x0000000002d80510, libserver.so)
bool __fastcall CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 552, @0x0000000002d80520, libserver.so)
// globals: CDOTA_Item_BootsOfTravel_2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_BootsOfTravel_2::s_pSchemaBinding;
}


// CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::AllocateInstance  (line 552, @0x0000000002d831f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1024);
  memset(v1, 0, 0x400u);
  return v1;
}


// CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::ConstructInstance  (line 552, @0x0000000002d84940, libserver.so)  // inlines: CDOTA_Item_BootsOfTravel, CDOTA_Item_BootsOfTravel_2, CEntityHandle, CHandle, Construct<CDOTA_Item_BootsOfTravel_2>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 252) = -1;
    *p = &off_46A7DB0;
  }
  return p;
}


// CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 552, @0x0000000002d87fd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 552, @0x0000000002d87ff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal  (line 552, @0x0000000002d8dc00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item_BootsOfTravel::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_travel_boots_2", "CDOTA_Item_BootsOfTravel_2"
// globals: `guard variable for'CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class, CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class, __dso_handle, CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravel_2ClassInfo, CDOTA_Item_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravel_2ClassInfo
CEntityClass *__cdecl CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class);
    CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class._vptr_CEntityClass = off_46A7D30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class);
    __cxa_atexit(
      CDOTA_Item_BootsOfTravel_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BootsOfTravel_2Class != 0 )
    return &CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class;
  if ( `guard variable for'CDOTA_Item_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravel_2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravel_2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_BootsOfTravel::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravel_2ClassInfo,
      "CDOTA_Item_BootsOfTravel_2",
      "item_travel_boots_2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravel_2ClassInfo);
  }
  CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class.m_pClassInfo = &CDOTA_Item_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravel_2ClassInfo;
  CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class.m_pBaseClassInfo = CDOTA_Item_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravel_2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BootsOfTravel_2Class = &CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class;
  CDOTA_Item_BootsOfTravel_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BootsOfTravel_2ClassInfo.m_pClass = &CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class;
  CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BootsOfTravel_2Class->m_pComponentOverrides = 0;
  return &CDOTA_Item_BootsOfTravel_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BootsOfTravel_2Class;
}


// CDOTA_Item_BootsOfTravel_2::YouForgotToImplementOrDeclareServerClass  (line 557, @0x0000000002d6e7f0, libserver.so)
int __fastcall CDOTA_Item_BootsOfTravel_2::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_BootsOfTravel_2 *const this)
{
  return 0;
}


// CDOTA_Item_BootsOfTravel_2::GetServerClass  (line 557, @0x0000000002d73cf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_BootsOfTravel_2::GetServerClass(CDOTA_Item_BootsOfTravel_2 *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Item_Recipe_PowerTreads::~CDOTA_Item_Recipe_PowerTreads  (line 569, @0x0000000002d85a50, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_PowerTreads::~CDOTA_Item_Recipe_PowerTreads(
        CDOTA_Item_Recipe_PowerTreads *const this)
{
  this->_vptr_IHandleEntity = &off_46A89B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_PowerTreads::~CDOTA_Item_Recipe_PowerTreads  (line 569, @0x0000000002d85a70, libserver.so)  // inlines: ~CDOTA_Item_Recipe_PowerTreads
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_PowerTreads::~CDOTA_Item_Recipe_PowerTreads(
        CDOTA_Item_Recipe_PowerTreads *const this)
{
  this->_vptr_IHandleEntity = &off_46A89B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_PowerTreads::Schema_DynamicBinding  (line 571, @0x0000000002d80530, libserver.so)
// globals: CDOTA_Item_Recipe_PowerTreads::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_PowerTreads::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_PowerTreads *const this)
{
  return CDOTA_Item_Recipe_PowerTreads::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 571, @0x0000000002d80540, libserver.so)
// globals: CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::DestructInstance  (line 571, @0x0000000002d80550, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_PowerTreads>
void __fastcall CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::FreeInstance  (line 571, @0x0000000002d80570, libserver.so)
void __fastcall CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::CanAllocate  (line 571, @0x0000000002d80590, libserver.so)
bool __fastcall CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 571, @0x0000000002d805a0, libserver.so)
// globals: CDOTA_Item_Recipe_PowerTreads::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_PowerTreads::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::AllocateInstance  (line 571, @0x0000000002d83230, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::ConstructInstance  (line 571, @0x0000000002d84980, libserver.so)  // inlines: CDOTA_Item_Recipe_PowerTreads, Construct<CDOTA_Item_Recipe_PowerTreads>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46A89B0;
  }
  return p;
}


// CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 571, @0x0000000002d88020, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 571, @0x0000000002d88040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal  (line 571, @0x0000000002d8dd50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_power_treads", "CDOTA_Item_Recipe_PowerTreads"
// globals: `guard variable for'CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass, CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass, __dso_handle, CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClassInfo, CDOTA_Item_Recipe_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass);
    CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass._vptr_CEntityClass = off_46A8930;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_PowerTreadsClass != 0 )
    return &CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass;
  if ( `guard variable for'CDOTA_Item_Recipe_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClassInfo,
      "CDOTA_Item_Recipe_PowerTreads",
      "item_recipe_power_treads",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClassInfo);
  }
  CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass.m_pClassInfo = &CDOTA_Item_Recipe_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClassInfo;
  CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass.m_pBaseClassInfo = CDOTA_Item_Recipe_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_PowerTreadsClass = &CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass;
  CDOTA_Item_Recipe_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClassInfo.m_pClass = &CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass;
  CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_PowerTreadsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PowerTreadsClass;
}


// CDOTA_Modifier_Item_PowerTreads::~CDOTA_Modifier_Item_PowerTreads  (line 588, @0x0000000002d84460, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_PowerTreads::~CDOTA_Modifier_Item_PowerTreads(
        CDOTA_Modifier_Item_PowerTreads *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_PowerTreads::~CDOTA_Modifier_Item_PowerTreads  (line 588, @0x0000000002d84480, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_PowerTreads
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_PowerTreads::~CDOTA_Modifier_Item_PowerTreads(
        CDOTA_Modifier_Item_PowerTreads *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_PowerTreads::DeclareFunctions  (line 612, @0x0000000002d6e800, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_PowerTreads::GetModifierMoveSpeedBonus_Special_Boots(CModifierParams const&), CDOTA_Modifier_Item_PowerTreads::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_PowerTreads::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_PowerTreads::DeclareFunctions(CDOTA_Modifier_Item_PowerTreads *const this)
{
  this->m_Functions[16].__pfn = CDOTA_Modifier_Item_PowerTreads::GetModifierMoveSpeedBonus_Special_Boots;
  this->m_Functions[16].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_PowerTreads::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_PowerTreads::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_PowerTreads::SwitchStat  (line 619, @0x0000000002d747c0, libserver.so)  // inlines: ClearFunction, SetFunction
// calls: CDOTA_Buff::GetManager, CDOTA_ModifierManager::RemoveEventFromBuff, CDOTA_ModifierManager::AddEventFromBuff
// callers: CDOTA_Item_PowerTreads::SetStat
// globals: CDOTA_Modifier_Item_PowerTreads::GetModifierBonusStats_All(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_PowerTreads::SwitchStat(CDOTA_Modifier_Item_PowerTreads *const this, int iStat)
{
  CDOTA_ModifierManager *Manager; // rax
  CDOTA_ModifierManager *v5; // rax
  CDOTA_ModifierManager *v6; // rax
  CDOTA_ModifierManager *v7; // rax
  CDOTA_ModifierManager *v8; // rax
  CDOTA_ModifierManager *v9; // rax

  this->m_Functions[64].__pfn = 0;
  this->m_Functions[64].__delta = 0;
  Manager = CDOTA_Buff::GetManager(this);
  CDOTA_ModifierManager::RemoveEventFromBuff(Manager, modifierfunction::MODIFIER_PROPERTY_STATS_STRENGTH_BONUS, this);
  this->m_Functions[65].__pfn = 0;
  this->m_Functions[65].__delta = 0;
  v5 = CDOTA_Buff::GetManager(this);
  CDOTA_ModifierManager::RemoveEventFromBuff(v5, modifierfunction::MODIFIER_PROPERTY_STATS_AGILITY_BONUS, this);
  this->m_Functions[66].__pfn = 0;
  this->m_Functions[66].__delta = 0;
  v6 = CDOTA_Buff::GetManager(this);
  CDOTA_ModifierManager::RemoveEventFromBuff(v6, modifierfunction::MODIFIER_PROPERTY_STATS_INTELLECT_BONUS, this);
  if ( iStat == 1 )
  {
    this->m_Functions[66].__pfn = CDOTA_Modifier_Item_PowerTreads::GetModifierBonusStats_All;
    this->m_Functions[66].__delta = 0;
    v9 = CDOTA_Buff::GetManager(this);
    CDOTA_ModifierManager::AddEventFromBuff(v9, modifierfunction::MODIFIER_PROPERTY_STATS_INTELLECT_BONUS, this);
  }
  else if ( iStat == 2 )
  {
    this->m_Functions[65].__pfn = CDOTA_Modifier_Item_PowerTreads::GetModifierBonusStats_All;
    this->m_Functions[65].__delta = 0;
    v8 = CDOTA_Buff::GetManager(this);
    CDOTA_ModifierManager::AddEventFromBuff(v8, modifierfunction::MODIFIER_PROPERTY_STATS_AGILITY_BONUS, this);
  }
  else
  {
    this->m_Functions[64].__pfn = CDOTA_Modifier_Item_PowerTreads::GetModifierBonusStats_All;
    this->m_Functions[64].__delta = 0;
    v7 = CDOTA_Buff::GetManager(this);
    CDOTA_ModifierManager::AddEventFromBuff(v7, modifierfunction::MODIFIER_PROPERTY_STATS_STRENGTH_BONUS, this);
  }
}


// CDOTA_Modifier_Item_PowerTreads::GetModifierAttackSpeedBonus_Constant  (line 656, @0x0000000002d6e860, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PowerTreads::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_PowerTreads *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PowerTreads::GetModifierPreAttack_BonusDamage  (line 661, @0x0000000002d6e880, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PowerTreads::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_PowerTreads *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PowerTreads::GetModifierMoveSpeedBonus_Special_Boots  (line 666, @0x0000000002d6e8a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PowerTreads::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_Item_PowerTreads *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PowerTreads::GetModifierBonusStats_All  (line 671, @0x0000000002d6e8c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PowerTreads::GetModifierBonusStats_All(
        CDOTA_Modifier_Item_PowerTreads *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_stat;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PowerTreads::OnCreated  (line 676, @0x0000000002d7bde0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_stat"
void __fastcall CDOTA_Modifier_Item_PowerTreads::OnCreated(CDOTA_Modifier_Item_PowerTreads *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attack_speed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_stat = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_attack_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_stat = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_stat", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_damage", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_damage = 0;
}


// CDOTA_Item_PowerTreads::~CDOTA_Item_PowerTreads  (line 687, @0x0000000002d85aa0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_PowerTreads::~CDOTA_Item_PowerTreads(CDOTA_Item_PowerTreads *const this)
{
  this->_vptr_IHandleEntity = &off_46A98D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_PowerTreads::~CDOTA_Item_PowerTreads  (line 687, @0x0000000002d85ac0, libserver.so)  // inlines: ~CDOTA_Item_PowerTreads
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_PowerTreads::~CDOTA_Item_PowerTreads(CDOTA_Item_PowerTreads *const this)
{
  this->_vptr_IHandleEntity = &off_46A98D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_PowerTreads::Schema_DynamicBinding  (line 689, @0x0000000002d805b0, libserver.so)
// globals: CDOTA_Item_PowerTreads::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PowerTreads::Schema_DynamicBinding(
        const CDOTA_Item_PowerTreads *const this)
{
  return CDOTA_Item_PowerTreads::s_pSchemaBinding;
}


// CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 689, @0x0000000002d805c0, libserver.so)
// globals: CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_PowerTreads::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::DestructInstance  (line 689, @0x0000000002d805d0, libserver.so)  // inlines: Destruct<CDOTA_Item_PowerTreads>
void __fastcall CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_PowerTreads::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::FreeInstance  (line 689, @0x0000000002d805f0, libserver.so)
void __fastcall CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_PowerTreads::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::CanAllocate  (line 689, @0x0000000002d80610, libserver.so)
bool __fastcall CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_PowerTreads::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 689, @0x0000000002d80620, libserver.so)
// globals: CDOTA_Item_PowerTreads::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_PowerTreads::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PowerTreads::s_pSchemaBinding;
}


// CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::AllocateInstance  (line 689, @0x0000000002d83270, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_PowerTreads::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::ConstructInstance  (line 689, @0x0000000002d85220, libserver.so)  // inlines: CDOTA_Item_PowerTreads, CNetworkVarBase, Construct<CDOTA_Item_PowerTreads>, EnsureValidValue<int>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_PowerTreads::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 250) = 0;
    *p = &off_46A98D0;
  }
  return p;
}


// CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 689, @0x0000000002d88070, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PowerTreads::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 689, @0x0000000002d88090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PowerTreads::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_PowerTreads::GetEntityClassInternal  (line 689, @0x0000000002d8dea0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_PowerTreads"
// globals: `guard variable for'CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass, CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass, __dso_handle, CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PowerTreadsClassInfo, CDOTA_Item_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PowerTreadsClassInfo
CEntityClass *__cdecl CDOTA_Item_PowerTreads::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass);
    CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass._vptr_CEntityClass = off_46A9850;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass);
    __cxa_atexit(
      CDOTA_Item_PowerTreads::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_PowerTreadsClass != 0 )
    return &CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass;
  if ( `guard variable for'CDOTA_Item_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PowerTreadsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PowerTreadsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PowerTreadsClassInfo,
      "CDOTA_Item_PowerTreads",
      "item_power_treads",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PowerTreadsClassInfo);
  }
  CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass.m_pClassInfo = &CDOTA_Item_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PowerTreadsClassInfo;
  CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass.m_pBaseClassInfo = CDOTA_Item_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PowerTreadsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_PowerTreadsClass = &CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass;
  CDOTA_Item_PowerTreads::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PowerTreadsClassInfo.m_pClass = &CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass;
  CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_PowerTreadsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_PowerTreads::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PowerTreadsClass;
}


// CDOTA_Item_PowerTreads::GetIntrinsicModifierName  (line 693, @0x0000000002d80630, libserver.so)
// strings: "modifier_item_power_treads"
const char *__fastcall CDOTA_Item_PowerTreads::GetIntrinsicModifierName(CDOTA_Item_PowerTreads *const this)
{
  return "modifier_item_power_treads";
}


// CDOTA_Item_PowerTreads::YouForgotToImplementOrDeclareServerClass  (line 714, @0x0000000002d6e8e0, libserver.so)
int __fastcall CDOTA_Item_PowerTreads::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_PowerTreads *const this)
{
  return 0;
}


// CDOTA_Item_PowerTreads::GetServerClass  (line 714, @0x0000000002d73d40, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_PowerTreads::GetServerClass(CDOTA_Item_PowerTreads *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Item_PowerTreads::OnPowerTreadsStatChanged  (line 726, @0x0000000002d74900, libserver.so)
void __fastcall CDOTA_Item_PowerTreads::OnPowerTreadsStatChanged(CDOTA_Item_PowerTreads *const this)
{
  ;
}


// CDOTA_Item_PowerTreads::OnPurchase  (line 735, @0x0000000002d749d0, libserver.so)
// calls: CDOTA_Item_PowerTreads::SetStat, CDOTA_Item::OnPurchase
void __fastcall CDOTA_Item_PowerTreads::OnPurchase(
        CDOTA_Item_PowerTreads *const this,
        int nCombineType,
        const char *pszRecipeItemName)
{
  CDOTA_Item_PowerTreads::SetStat(this, nCombineType);
  CDOTA_Item::OnPurchase(this, nCombineType, 0);
}


// CDOTA_Item_PowerTreads::OnSpellStart  (line 742, @0x0000000002d74a00, libserver.so)
// calls: CDOTA_Item_PowerTreads::SetStat
void __fastcall CDOTA_Item_PowerTreads::OnSpellStart(CDOTA_Item_PowerTreads *const this)
{
  CDOTA_Item_PowerTreads::SetStat(this, (this->m_iStat.m_Value + 1) % 3);
}


// CDOTA_Item_PowerTreads::OnEquip  (line 750, @0x0000000002d74a30, libserver.so)
// calls: CDOTA_Item::OnEquip, CDOTA_Item_PowerTreads::SetStat
void __fastcall CDOTA_Item_PowerTreads::OnEquip(CDOTA_Item_PowerTreads *const this)
{
  CDOTA_Item::OnEquip(this);
  CDOTA_Item_PowerTreads::SetStat(this, this->m_iStat.m_Value);
}


// CDOTA_Item_PowerTreads::SetStat  (line 759, @0x0000000002d74910, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: CDOTA_Modifier_Item_PowerTreads::SwitchStat, CDOTABaseAbility::GetCaster
// callers: CDOTA_Item_PowerTreads::OnPurchase, CDOTA_Item_PowerTreads::OnSpellStart, CDOTA_Item_PowerTreads::OnEquip, CDOTA_Item_PowerTreads::DuplicateState
void __fastcall CDOTA_Item_PowerTreads::SetStat(CDOTA_Item_PowerTreads *const this, int iStat)
{
  int m_Value; // r12d
  CDOTA_Modifier_Item_PowerTreads *v5; // rax
  CDOTA_BaseNPC *Caster; // rax

  if ( this->m_iStat.m_Value != iStat )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1000, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iStat.m_Value = iStat;
  }
  if ( (*(this->_vptr_IHandleEntity + 263))(this) != 0 )
  {
    m_Value = this->m_iStat.m_Value;
    v5 = (*(this->_vptr_IHandleEntity + 263))(this);
    CDOTA_Modifier_Item_PowerTreads::SwitchStat(v5, m_Value);
    if ( (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 1) != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      (*(Caster->_vptr_IHandleEntity + 490))(Caster);
    }
    (*(this->_vptr_IHandleEntity + 297))(this);
  }
}


// CDOTA_Item_PowerTreads::DuplicateState  (line 778, @0x0000000002d74a60, libserver.so)  // inlines: FStrEq, GetAbilityName, _V_strcmp
// calls: CDOTA_Item::DuplicateState, CDOTA_Item_PowerTreads::SetStat
void __fastcall CDOTA_Item_PowerTreads::DuplicateState(CDOTA_Item_PowerTreads *const this, CDOTA_Item *pSourceItem)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  char *m_pszAbilityName; // rsi

  m_pAbilityData = pSourceItem->m_pAbilityData;
  if ( m_pAbilityData != 0
    && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName != 0)
    && (m_pszAbilityName == "item_power_treads" || strcmp(m_pszAbilityName, "item_power_treads") == 0) )
  {
    CDOTA_Item_PowerTreads::SetStat(this, pSourceItem[1]._vptr_IHandleEntity);
    CDOTA_Item::DuplicateState(this, pSourceItem);
  }
  else
  {
    CDOTA_Item::DuplicateState(this, pSourceItem);
  }
}


// GetPowerTreadsStat  (line 835, @0x0000000002d74ad0, libserver.so)  // inlines: GetStat
// calls: __dynamic_cast
// callers: CDOTABaseAbility_BotScript::GetPowerTreadsStat
// globals: `typeinfo for'CDOTA_Item_PowerTreads
int __fastcall GetPowerTreadsStat(CDOTA_Item *pItem)
{
  int v1; // ebx
  _DWORD *v2; // rax

  v1 = -1;
  if ( pItem != 0 )
  {
    v2 = __dynamic_cast(pItem, &`typeinfo for'CDOTA_Item, &`typeinfo for'CDOTA_Item_PowerTreads, 0);
    if ( v2 != 0 )
      return v2[250];
  }
  return v1;
}


// CDOTA_Item_Recipe_PhaseBoots::~CDOTA_Item_Recipe_PhaseBoots  (line 849, @0x0000000002d85af0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_PhaseBoots::~CDOTA_Item_Recipe_PhaseBoots(CDOTA_Item_Recipe_PhaseBoots *const this)
{
  this->_vptr_IHandleEntity = &off_46AA4D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_PhaseBoots::~CDOTA_Item_Recipe_PhaseBoots  (line 849, @0x0000000002d85b10, libserver.so)  // inlines: ~CDOTA_Item_Recipe_PhaseBoots
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_PhaseBoots::~CDOTA_Item_Recipe_PhaseBoots(CDOTA_Item_Recipe_PhaseBoots *const this)
{
  this->_vptr_IHandleEntity = &off_46AA4D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_PhaseBoots::Schema_DynamicBinding  (line 851, @0x0000000002d80640, libserver.so)
// globals: CDOTA_Item_Recipe_PhaseBoots::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_PhaseBoots::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_PhaseBoots *const this)
{
  return CDOTA_Item_Recipe_PhaseBoots::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 851, @0x0000000002d80650, libserver.so)
// globals: CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::DestructInstance  (line 851, @0x0000000002d80660, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_PhaseBoots>
void __fastcall CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::FreeInstance  (line 851, @0x0000000002d80680, libserver.so)
void __fastcall CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::CanAllocate  (line 851, @0x0000000002d806a0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 851, @0x0000000002d806b0, libserver.so)
// globals: CDOTA_Item_Recipe_PhaseBoots::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_PhaseBoots::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::AllocateInstance  (line 851, @0x0000000002d832b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::ConstructInstance  (line 851, @0x0000000002d849b0, libserver.so)  // inlines: CDOTA_Item_Recipe_PhaseBoots, Construct<CDOTA_Item_Recipe_PhaseBoots>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46AA4D0;
  }
  return p;
}


// CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 851, @0x0000000002d880c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 851, @0x0000000002d880e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal  (line 851, @0x0000000002d8dff0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_phase_boots", "CDOTA_Item_Recipe_PhaseBoots"
// globals: `guard variable for'CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass, CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass, __dso_handle, CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClassInfo, CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass);
    CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass._vptr_CEntityClass = off_46AA450;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_PhaseBootsClass != 0 )
    return &CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass;
  if ( `guard variable for'CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClassInfo,
      "CDOTA_Item_Recipe_PhaseBoots",
      "item_recipe_phase_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClassInfo);
  }
  CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass.m_pClassInfo = &CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClassInfo;
  CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass.m_pBaseClassInfo = CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_PhaseBootsClass = &CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass;
  CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClassInfo.m_pClass = &CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass;
  CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_PhaseBootsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_PhaseBootsClass;
}


// CDOTA_Item_PhaseBoots::~CDOTA_Item_PhaseBoots  (line 861, @0x0000000002d85b40, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_PhaseBoots::~CDOTA_Item_PhaseBoots(CDOTA_Item_PhaseBoots *const this)
{
  this->_vptr_IHandleEntity = &off_46AB0D0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_PhaseBoots::~CDOTA_Item_PhaseBoots  (line 861, @0x0000000002d85b60, libserver.so)  // inlines: ~CDOTA_Item_PhaseBoots
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_PhaseBoots::~CDOTA_Item_PhaseBoots(CDOTA_Item_PhaseBoots *const this)
{
  this->_vptr_IHandleEntity = &off_46AB0D0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_PhaseBoots::Schema_DynamicBinding  (line 863, @0x0000000002d806c0, libserver.so)
// globals: CDOTA_Item_PhaseBoots::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PhaseBoots::Schema_DynamicBinding(
        const CDOTA_Item_PhaseBoots *const this)
{
  return CDOTA_Item_PhaseBoots::s_pSchemaBinding;
}


// CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 863, @0x0000000002d806d0, libserver.so)
// globals: CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::DestructInstance  (line 863, @0x0000000002d806e0, libserver.so)  // inlines: Destruct<CDOTA_Item_PhaseBoots>
void __fastcall CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::FreeInstance  (line 863, @0x0000000002d80700, libserver.so)
void __fastcall CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::CanAllocate  (line 863, @0x0000000002d80720, libserver.so)
bool __fastcall CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 863, @0x0000000002d80730, libserver.so)
// globals: CDOTA_Item_PhaseBoots::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_PhaseBoots::s_pSchemaBinding;
}


// CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::AllocateInstance  (line 863, @0x0000000002d832f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::ConstructInstance  (line 863, @0x0000000002d849e0, libserver.so)  // inlines: CDOTA_Item_PhaseBoots, Construct<CDOTA_Item_PhaseBoots>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46AB0D0;
  }
  return p;
}


// CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 863, @0x0000000002d88110, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 863, @0x0000000002d88130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_PhaseBoots::GetEntityClassInternal  (line 863, @0x0000000002d8e140, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_PhaseBoots"
// globals: `guard variable for'CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass, CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass, __dso_handle, CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhaseBootsClassInfo, CDOTA_Item_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhaseBootsClassInfo
CEntityClass *__cdecl CDOTA_Item_PhaseBoots::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass);
    CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass._vptr_CEntityClass = off_46AB050;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass);
    __cxa_atexit(
      CDOTA_Item_PhaseBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_PhaseBootsClass != 0 )
    return &CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass;
  if ( `guard variable for'CDOTA_Item_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhaseBootsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhaseBootsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhaseBootsClassInfo,
      "CDOTA_Item_PhaseBoots",
      "item_phase_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhaseBootsClassInfo);
  }
  CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass.m_pClassInfo = &CDOTA_Item_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhaseBootsClassInfo;
  CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass.m_pBaseClassInfo = CDOTA_Item_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhaseBootsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_PhaseBootsClass = &CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass;
  CDOTA_Item_PhaseBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_PhaseBootsClassInfo.m_pClass = &CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass;
  CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_PhaseBootsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_PhaseBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_PhaseBootsClass;
}


// CDOTA_Item_PhaseBoots::GetIntrinsicModifierName  (line 865, @0x0000000002d80740, libserver.so)
// strings: "modifier_item_phase_boots"
const char *__fastcall CDOTA_Item_PhaseBoots::GetIntrinsicModifierName(CDOTA_Item_PhaseBoots *const this)
{
  return "modifier_item_phase_boots";
}


// CDOTA_Item_PhaseBoots::OnSpellStart  (line 872, @0x0000000002d7c680, libserver.so)
// calls: KeyValues::operator new, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::deleteThis, KeyValues::operator delete, _Unwind_Resume
// strings: "modifier_item_phase_boots_active", "phase_duration", "DOTA_Item.PhaseBoots.Activate"
void __fastcall CDOTA_Item_PhaseBoots::OnSpellStart(CDOTA_Item_PhaseBoots *const this)
{
  KeyValues *v2; // r12
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax

  v2 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v2, "modifier_item_phase_boots_active");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "phase_duration", -1, 0);
  KeyValues::SetFloat(v2, "duration", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_item_phase_boots_active", v2, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(1, "DOTA_Item.PhaseBoots.Activate", v6);
  KeyValues::deleteThis(v2);
}


// CDOTA_Modifier_Item_PhaseBoots::~CDOTA_Modifier_Item_PhaseBoots  (line 891, @0x0000000002d84410, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_PhaseBoots::~CDOTA_Modifier_Item_PhaseBoots(
        CDOTA_Modifier_Item_PhaseBoots *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_PhaseBoots::~CDOTA_Modifier_Item_PhaseBoots  (line 891, @0x0000000002d84430, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_PhaseBoots
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_PhaseBoots::~CDOTA_Modifier_Item_PhaseBoots(
        CDOTA_Modifier_Item_PhaseBoots *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_PhaseBoots::DeclareFunctions  (line 918, @0x0000000002d6e8f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_PhaseBoots::GetModifierMoveSpeedBonus_Special_Boots(CModifierParams const&), CDOTA_Modifier_Item_PhaseBoots::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_PhaseBoots::GetModifierPhysical_ConstantBlock(CModifierParams const&), CDOTA_Modifier_Item_PhaseBoots::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Item_PhaseBoots::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_PhaseBoots::DeclareFunctions(CDOTA_Modifier_Item_PhaseBoots *const this)
{
  this->m_Functions[16].__pfn = CDOTA_Modifier_Item_PhaseBoots::GetModifierMoveSpeedBonus_Special_Boots;
  this->m_Functions[16].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_PhaseBoots::GetModifierPreAttack_BonusDamage;
  this->m_Functions[86].__pfn = CDOTA_Modifier_Item_PhaseBoots::GetModifierPhysical_ConstantBlock;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_PhaseBoots::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[86].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_PhaseBoots::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Item_PhaseBoots::GetModifierAttackSpeedBonus_Constant  (line 928, @0x0000000002d6e980, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PhaseBoots::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_PhaseBoots *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PhaseBoots::GetModifierPhysical_ConstantBlock  (line 933, @0x0000000002d70030, libserver.so)
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PhaseBoots::GetModifierPhysical_ConstantBlock(
        CDOTA_Modifier_Item_PhaseBoots *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  unsigned int v7; // edx
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  if ( !RollPseudoRandomPercentage(this->block_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_STOUT, Parent) )
    return 1uLL;
  if ( (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
  {
    *v5.m128i_i32 = this->damage_block_ranged;
    v7 = _mm_cvtsi128_si32(v5);
  }
  else
  {
    *v6.m128i_i32 = this->damage_block_melee;
    v7 = _mm_cvtsi128_si32(v6);
  }
  *&result.m_eType = (v7 << 32) | 1;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Item_PhaseBoots::GetModifierMoveSpeedBonus_Special_Boots  (line 952, @0x0000000002d6e9a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PhaseBoots::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_Item_PhaseBoots *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PhaseBoots::GetModifierPreAttack_BonusDamage  (line 957, @0x0000000002d6e9c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PhaseBoots::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_PhaseBoots *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PhaseBoots::GetModifierPhysicalArmorBonus  (line 962, @0x0000000002d6e9e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PhaseBoots::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_PhaseBoots *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_PhaseBoots::OnCreated  (line 967, @0x0000000002d7c260, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_block_melee", "damage_block_ranged"
void __fastcall CDOTA_Modifier_Item_PhaseBoots::OnCreated(CDOTA_Modifier_Item_PhaseBoots *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->bonus_damage = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_block_melee = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_block_melee", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->damage_block_melee = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->damage_block_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_block_ranged", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  this->damage_block_ranged = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->block_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "block_chance", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->bonus_attack_speed = 0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_13:
  this->block_chance = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bonus_attack_speed", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "bonus_armor", -1, 0);
    return;
  }
LABEL_15:
  this->bonus_armor = 0;
}


// CDOTA_Modifier_Item_PhaseBoots_Active::~CDOTA_Modifier_Item_PhaseBoots_Active  (line 978, @0x0000000002d84780, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_PhaseBoots_Active::~CDOTA_Modifier_Item_PhaseBoots_Active(
        CDOTA_Modifier_Item_PhaseBoots_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_46ABFB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_PhaseBoots_Active::~CDOTA_Modifier_Item_PhaseBoots_Active  (line 978, @0x0000000002d847a0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_PhaseBoots_Active
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_PhaseBoots_Active::~CDOTA_Modifier_Item_PhaseBoots_Active(
        CDOTA_Modifier_Item_PhaseBoots_Active *const this)
{
  this->_vptr_CDOTA_Buff = &off_46ABFB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_PhaseBoots_Active::IsPurgable  (line 990, @0x0000000002d80750, libserver.so)
bool __fastcall CDOTA_Modifier_Item_PhaseBoots_Active::IsPurgable(CDOTA_Modifier_Item_PhaseBoots_Active *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_PhaseBoots_Active::CheckState  (line 1000, @0x0000000002d6ea00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Item_PhaseBoots_Active::CheckState(
        CDOTA_Modifier_Item_PhaseBoots_Active *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


// CDOTA_Modifier_Item_PhaseBoots_Active::OnCreated  (line 1007, @0x0000000002d7bb00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "phase_movement_speed", "phase_movement_speed_range"
void __fastcall CDOTA_Modifier_Item_PhaseBoots_Active::OnCreated(
        CDOTA_Modifier_Item_PhaseBoots_Active *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->phase_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "phase_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->phase_movement_speed_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                           v4,
                                           "phase_movement_speed_range",
                                           -1,
                                           0);
      return;
    }
  }
  else
  {
    this->phase_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->phase_movement_speed_range = 0;
}


// CDOTA_Modifier_Item_PhaseBoots_Active::DeclareFunctions  (line 1016, @0x0000000002d6ea20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_PhaseBoots_Active::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_PhaseBoots_Active::DeclareFunctions(
        CDOTA_Modifier_Item_PhaseBoots_Active *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Item_PhaseBoots_Active::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Item_PhaseBoots_Active::GetModifierMoveSpeedBonus_Percentage  (line 1021, @0x0000000002d700d0, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_PhaseBoots_Active::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_PhaseBoots_Active *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
  {
    *v4.m128i_i32 = this->phase_movement_speed_range;
    result.m_szVal = 0;
    result.m_eType = _mm_cvtsi128_si32(v4);
  }
  else
  {
    *v3.m128i_i32 = this->phase_movement_speed;
    result.m_szVal = 0;
    result.m_eType = _mm_cvtsi128_si32(v3);
  }
  *&result.m_eType = (result.m_eType << 32) | 1;
  return result;
}


// CDOTA_Item_Recipe_TranquilBoots::~CDOTA_Item_Recipe_TranquilBoots  (line 1033, @0x0000000002d85b90, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_TranquilBoots::~CDOTA_Item_Recipe_TranquilBoots(
        CDOTA_Item_Recipe_TranquilBoots *const this)
{
  this->_vptr_IHandleEntity = &off_46AC310;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_TranquilBoots::~CDOTA_Item_Recipe_TranquilBoots  (line 1033, @0x0000000002d85bb0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_TranquilBoots
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_TranquilBoots::~CDOTA_Item_Recipe_TranquilBoots(
        CDOTA_Item_Recipe_TranquilBoots *const this)
{
  this->_vptr_IHandleEntity = &off_46AC310;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_TranquilBoots::Schema_DynamicBinding  (line 1035, @0x0000000002d80760, libserver.so)
// globals: CDOTA_Item_Recipe_TranquilBoots::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_TranquilBoots::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_TranquilBoots *const this)
{
  return CDOTA_Item_Recipe_TranquilBoots::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1035, @0x0000000002d80770, libserver.so)
// globals: CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::DestructInstance  (line 1035, @0x0000000002d80780, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_TranquilBoots>
void __fastcall CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::FreeInstance  (line 1035, @0x0000000002d807a0, libserver.so)
void __fastcall CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::CanAllocate  (line 1035, @0x0000000002d807c0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1035, @0x0000000002d807d0, libserver.so)
// globals: CDOTA_Item_Recipe_TranquilBoots::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_TranquilBoots::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::AllocateInstance  (line 1035, @0x0000000002d83330, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::ConstructInstance  (line 1035, @0x0000000002d84a10, libserver.so)  // inlines: CDOTA_Item_Recipe_TranquilBoots, Construct<CDOTA_Item_Recipe_TranquilBoots>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46AC310;
  }
  return p;
}


// CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1035, @0x0000000002d88160, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1035, @0x0000000002d88180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal  (line 1035, @0x0000000002d8e290, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_tranquil_boots", "CDOTA_Item_Recipe_TranquilBoots"
// globals: `guard variable for'CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass, CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass, __dso_handle, CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClassInfo, CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass);
    CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass._vptr_CEntityClass = off_46AC290;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_TranquilBootsClass != 0 )
    return &CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass;
  if ( `guard variable for'CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClassInfo,
      "CDOTA_Item_Recipe_TranquilBoots",
      "item_recipe_tranquil_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClassInfo);
  }
  CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass.m_pClassInfo = &CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClassInfo;
  CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass.m_pBaseClassInfo = CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_TranquilBootsClass = &CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass;
  CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClassInfo.m_pClass = &CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass;
  CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_TranquilBootsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBootsClass;
}


// CDOTA_Item_TranquilBoots::~CDOTA_Item_TranquilBoots  (line 1045, @0x0000000002d87d40, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Item::~CDOTA_Item, CUtlMemory<float, int>::Purge
void __fastcall CDOTA_Item_TranquilBoots::~CDOTA_Item_TranquilBoots(CDOTA_Item_TranquilBoots *const this)
{
  bool v2; // zf
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_DamageList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_46ACF10;
  this->m_DamageList.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_DamageList.m_Memory,
        CUtlMemory<float,int>::Purge(&this->m_DamageList.m_Memory),
        (this->m_DamageList.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Item::~CDOTA_Item(this);
  }
  else
  {
    CUtlMemory<float,int>::Purge(p_m_Memory);
    CDOTA_Item::~CDOTA_Item(this);
  }
}


// CDOTA_Item_TranquilBoots::~CDOTA_Item_TranquilBoots  (line 1045, @0x0000000002d87db0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Item_TranquilBoots, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete, CUtlMemory<float, int>::Purge
void __fastcall CDOTA_Item_TranquilBoots::~CDOTA_Item_TranquilBoots(CDOTA_Item_TranquilBoots *const this)
{
  bool v2; // zf
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_DamageList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_46ACF10;
  this->m_DamageList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_DamageList.m_Memory;
    CUtlMemory<float,int>::Purge(&this->m_DamageList.m_Memory);
    if ( (this->m_DamageList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(p_m_Memory);
  }
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_TranquilBoots::Schema_DynamicBinding  (line 1047, @0x0000000002d807e0, libserver.so)
// globals: CDOTA_Item_TranquilBoots::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_TranquilBoots::Schema_DynamicBinding(
        const CDOTA_Item_TranquilBoots *const this)
{
  return CDOTA_Item_TranquilBoots::s_pSchemaBinding;
}


// CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1047, @0x0000000002d807f0, libserver.so)
// globals: CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::DestructInstance  (line 1047, @0x0000000002d80800, libserver.so)  // inlines: Destruct<CDOTA_Item_TranquilBoots>
void __fastcall CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::FreeInstance  (line 1047, @0x0000000002d80820, libserver.so)
void __fastcall CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::CanAllocate  (line 1047, @0x0000000002d80840, libserver.so)
bool __fastcall CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1047, @0x0000000002d80850, libserver.so)
// globals: CDOTA_Item_TranquilBoots::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_TranquilBoots::s_pSchemaBinding;
}


// CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::AllocateInstance  (line 1047, @0x0000000002d83370, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1032);
  memset(v1, 0, 0x408u);
  return v1;
}


// CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::ConstructInstance  (line 1047, @0x0000000002d87b60, libserver.so)  // inlines: CDOTA_Item_TranquilBoots, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Item_TranquilBoots>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 252) = 0;
    *p = &off_46ACF10;
    *(p + 127) = 0;
    *(p + 256) = 0;
    *(p + 257) = 0;
  }
  return p;
}


// CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1047, @0x0000000002d881b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1047, @0x0000000002d881d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_TranquilBoots::GetEntityClassInternal  (line 1047, @0x0000000002d8e3e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_TranquilBoots"
// globals: `guard variable for'CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass, CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass, __dso_handle, CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBootsClassInfo, CDOTA_Item_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBootsClassInfo
CEntityClass *__cdecl CDOTA_Item_TranquilBoots::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass);
    CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass._vptr_CEntityClass = off_46ACE90;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass);
    __cxa_atexit(
      CDOTA_Item_TranquilBoots::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_TranquilBootsClass != 0 )
    return &CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass;
  if ( `guard variable for'CDOTA_Item_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBootsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBootsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBootsClassInfo,
      "CDOTA_Item_TranquilBoots",
      "item_tranquil_boots",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBootsClassInfo);
  }
  CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass.m_pClassInfo = &CDOTA_Item_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBootsClassInfo;
  CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass.m_pBaseClassInfo = CDOTA_Item_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBootsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_TranquilBootsClass = &CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass;
  CDOTA_Item_TranquilBoots::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBootsClassInfo.m_pClass = &CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass;
  CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_TranquilBootsClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_TranquilBoots::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBootsClass;
}


// CDOTA_Item_TranquilBoots::GetIntrinsicModifierName  (line 1051, @0x0000000002d80860, libserver.so)
// strings: "modifier_item_tranquil_boots"
const char *__fastcall CDOTA_Item_TranquilBoots::GetIntrinsicModifierName(CDOTA_Item_TranquilBoots *const this)
{
  return "modifier_item_tranquil_boots";
}


// CDOTA_Item_TranquilBoots::YouForgotToImplementOrDeclareServerClass  (line 1073, @0x0000000002d6ea40, libserver.so)
int __fastcall CDOTA_Item_TranquilBoots::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_TranquilBoots *const this)
{
  return 0;
}


// CDOTA_Item_TranquilBoots::GetServerClass  (line 1073, @0x0000000002d73ad0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_TranquilBoots::GetServerClass(CDOTA_Item_TranquilBoots *const this)
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


// CDOTA_Item_TranquilBoots::AddDamageRecord  (line 1080, @0x0000000002d7e180, libserver.so)  // inlines: AddToTail, CopyConstruct<float>, Element, GrowMemory, operator[]
// calls: CUtlMemory<float, int>::Grow
void __fastcall CDOTA_Item_TranquilBoots::AddDamageRecord(CDOTA_Item_TranquilBoots *const this, float a2, float fValue)
{
  __int64 m_Size; // r12
  int v5; // eax
  float *v6; // rax
  float fValuea; // [rsp+Ch] [rbp-14h]

  m_Size = this->m_DamageList.m_Size;
  v5 = this->m_DamageList.m_Size;
  if ( m_Size == this->m_DamageList.m_Memory.m_nAllocationCount )
  {
    fValuea = a2;
    CUtlMemory<float,int>::Grow(&this->m_DamageList.m_Memory, 1);
    v5 = this->m_DamageList.m_Size;
    a2 = fValuea;
  }
  this->m_DamageList.m_Size = v5 + 1;
  v6 = &this->m_DamageList.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = a2;
}


// CDOTA_Item_TranquilBoots::GetDamageRecord  (line 1085, @0x0000000002d74b10, libserver.so)  // inlines: operator[]
float __fastcall CDOTA_Item_TranquilBoots::GetDamageRecord(CDOTA_Item_TranquilBoots *const this, int iIndex)
{
  return this->m_DamageList.m_Memory.m_pMemory[iIndex];
}


// CDOTA_Item_TranquilBoots::DamageRecordCount  (line 1090, @0x0000000002d74b30, libserver.so)
int __fastcall CDOTA_Item_TranquilBoots::DamageRecordCount(CDOTA_Item_TranquilBoots *const this)
{
  return this->m_DamageList.m_Size;
}


// CDOTA_Item_TranquilBoots::RemoveDamageRecord  (line 1095, @0x0000000002d7dc00, libserver.so)
// calls: CUtlVectorBase<float, CUtlMemory<float, int> >::Remove
void __fastcall CDOTA_Item_TranquilBoots::RemoveDamageRecord(CDOTA_Item_TranquilBoots *const this, int iIndex)
{
  CUtlVectorBase<float,CUtlMemory<float,int>>::Remove(&this->m_DamageList, iIndex);
}


// CDOTA_Modifier_Item_TranquilBoots::~CDOTA_Modifier_Item_TranquilBoots  (line 1135, @0x0000000002d843c0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_TranquilBoots::~CDOTA_Modifier_Item_TranquilBoots(
        CDOTA_Modifier_Item_TranquilBoots *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_TranquilBoots::~CDOTA_Modifier_Item_TranquilBoots  (line 1135, @0x0000000002d843e0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_TranquilBoots
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_TranquilBoots::~CDOTA_Modifier_Item_TranquilBoots(
        CDOTA_Modifier_Item_TranquilBoots *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_TranquilBoots::UpdateResetTime  (line 1168, @0x0000000002d74b40, libserver.so)
// calls: CDOTA_Buff::GetAbility
// callers: CDOTA_Modifier_Item_TranquilBoots::OnAttacked, CDOTA_Modifier_Item_TranquilBoots::OnCreated
void __fastcall CDOTA_Modifier_Item_TranquilBoots::UpdateResetTime(CDOTA_Modifier_Item_TranquilBoots *const this)
{
  CDOTABaseAbility *Ability; // rax

  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    this->m_flResetTime = (*(Ability->_vptr_IHandleEntity + 244))(Ability, 0xFFFFFFFFLL);
  }
  else
  {
    this->m_flResetTime = this->break_time;
  }
}


// CDOTA_Modifier_Item_TranquilBoots::OnCreated  (line 1182, @0x0000000002d7e570, libserver.so)  // inlines: AddDamageRecord, AddToTail, CopyConstruct<float>, DOTAGameRules, Element, GetGameTime, GrowMemory, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetSharedCooldownTime, CDOTA_Modifier_Item_TranquilBoots::UpdateResetTime, __dynamic_cast, CDOTA_Buff_Item::GetItem, CDOTA_Item::SetCurrentCharges, CUtlMemory<float, int>::Grow
// strings: "broken_movement_speed", "bonus_health_regen", "break_threshold", "break_time", "break_count", "item_tranquil_boots_break"
// globals: `typeinfo for'CDOTA_Item_TranquilBoots
void __fastcall CDOTA_Modifier_Item_TranquilBoots::OnCreated(
        CDOTA_Modifier_Item_TranquilBoots *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_UnitInventory *Inventory; // rax
  float SharedCooldownTime; // xmm0_4
  float v14; // xmm1_4
  __m128i v15; // xmm0
  int v16; // r14d
  CDOTABaseAbility *v17; // rax
  CDOTA_Item_TranquilBoots *v18; // rax
  __int64 m_Size; // r12
  int v20; // r13d
  float *m_pMemory; // rdx
  int v22; // r13d
  int *v23; // rdx
  int v24; // r12d
  float *v25; // rdx
  int v26; // r12d
  int *v27; // rdx
  int v28; // edx
  int *v29; // rax
  CDOTA_Item *Item; // rax
  CDOTA_Item *v31; // rax
  float pAbility; // [rsp+8h] [rbp-28h]
  CDOTA_Item_TranquilBoots *pAbilitya; // [rsp+8h] [rbp-28h]
  CDOTA_Item_TranquilBoots *pAbilityb; // [rsp+8h] [rbp-28h]
  CDOTA_Item_TranquilBoots *pAbilityc; // [rsp+8h] [rbp-28h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_movement_speed, "bonus_movement_speed");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->broken_movement_speed, "broken_movement_speed");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_armor, "bonus_armor");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->bonus_health_regen, "bonus_health_regen");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->break_threshold, "break_threshold");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->break_time, "break_time");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->break_count, "break_count");
  CDOTA_Buff::StartIntervalThink(this, 0.1, v10);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    Inventory = CDOTA_BaseNPC::GetInventory(Parent);
    SharedCooldownTime = CDOTA_UnitInventory::GetSharedCooldownTime(Inventory, "item_tranquil_boots_break");
    v14 = 0.0;
    if ( g_pGameRules != 0 )
      v14 = *&g_pGameRules[18].m_szQuestName[20];
    if ( SharedCooldownTime > v14 )
    {
      pAbility = SharedCooldownTime;
      CDOTA_Modifier_Item_TranquilBoots::UpdateResetTime(this);
      v15 = LODWORD(pAbility);
      *v15.m128i_i32 = pAbility - this->m_flResetTime;
      v16 = _mm_cvtsi128_si32(v15);
      v17 = CDOTA_Buff::GetAbility(this);
      if ( v17 != 0 )
      {
        v18 = __dynamic_cast(v17, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_TranquilBoots, 0);
        if ( v18 != 0 )
        {
          m_Size = v18->m_DamageList.m_Size;
          v20 = v18->m_DamageList.m_Size;
          if ( m_Size == v18->m_DamageList.m_Memory.m_nAllocationCount )
          {
            pAbilitya = v18;
            CUtlMemory<float,int>::Grow(&v18->m_DamageList.m_Memory, 1);
            v18 = pAbilitya;
            v20 = pAbilitya->m_DamageList.m_Size;
          }
          m_pMemory = v18->m_DamageList.m_Memory.m_pMemory;
          v22 = v20 + 1;
          v18->m_DamageList.m_Size = v22;
          v23 = &m_pMemory[m_Size];
          if ( v23 != 0 )
          {
            *v23 = v16;
            v22 = v18->m_DamageList.m_Size;
          }
          v24 = v22;
          if ( v18->m_DamageList.m_Memory.m_nAllocationCount == v22 )
          {
            pAbilityb = v18;
            CUtlMemory<float,int>::Grow(&v18->m_DamageList.m_Memory, 1);
            v18 = pAbilityb;
            v24 = pAbilityb->m_DamageList.m_Size;
          }
          v25 = v18->m_DamageList.m_Memory.m_pMemory;
          v26 = v24 + 1;
          v18->m_DamageList.m_Size = v26;
          v27 = &v25[v22];
          if ( v27 != 0 )
          {
            *v27 = v16;
            v26 = v18->m_DamageList.m_Size;
          }
          v28 = v26;
          if ( v18->m_DamageList.m_Memory.m_nAllocationCount == v26 )
          {
            pAbilityc = v18;
            CUtlMemory<float,int>::Grow(&v18->m_DamageList.m_Memory, 1);
            v18 = pAbilityc;
            v28 = pAbilityc->m_DamageList.m_Size;
          }
          v18->m_DamageList.m_Size = v28 + 1;
          v29 = &v18->m_DamageList.m_Memory.m_pMemory[v26];
          if ( v29 != 0 )
            *v29 = v16;
          Item = CDOTA_Buff_Item::GetItem(this);
          CDOTA_Item::SetCurrentCharges(Item, 3);
          v31 = CDOTA_Buff_Item::GetItem(this);
          (*(v31->_vptr_IHandleEntity + 297))(v31);
        }
      }
    }
  }
}


// CDOTA_Modifier_Item_TranquilBoots::DeclareFunctions  (line 1217, @0x0000000002d6ea50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_TranquilBoots::GetModifierMoveSpeedBonus_Special_Boots(CModifierParams const&), CDOTA_Modifier_Item_TranquilBoots::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_TranquilBoots::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_TranquilBoots::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_Item_TranquilBoots::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_TranquilBoots::DeclareFunctions(CDOTA_Modifier_Item_TranquilBoots *const this)
{
  this->m_Functions[16].__pfn = CDOTA_Modifier_Item_TranquilBoots::GetModifierMoveSpeedBonus_Special_Boots;
  this->m_Functions[16].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_TranquilBoots::GetModifierConstantHealthRegen;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_TranquilBoots::GetModifierPhysicalArmorBonus;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Item_TranquilBoots::OnTakeDamage;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Item_TranquilBoots::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Item_TranquilBoots::GetModifierMoveSpeedBonus_Special_Boots  (line 1226, @0x0000000002d701c0, libserver.so)
// calls: CDOTA_Buff_Item::GetItem, CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_Item_TranquilBoots *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  __m128i v5; // xmm1
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) != 0
    && this->break_count <= CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value
    || CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    *v3.m128i_i32 = this->broken_movement_speed;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  else
  {
    *v5.m128i_i32 = this->bonus_movement_speed;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Item_TranquilBoots::GetModifierConstantHealthRegen  (line 1235, @0x0000000002d70240, libserver.so)
// calls: CDOTA_Buff_Item::GetItem, CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_TranquilBoots *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) != 0
    && this->break_count <= CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value
    || CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    return 1uLL;
  }
  *v4.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_TranquilBoots::GetModifierPhysicalArmorBonus  (line 1245, @0x0000000002d6fa00, libserver.so)
// calls: CDOTA_Buff_Item::GetItem, CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_TranquilBoots *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) == 0
    || this->break_count > CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value )
  {
    CDOTA_Buff::GetParent(this);
  }
  *v3.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_TranquilBoots::OnTakeDamage  (line 1257, @0x0000000002d6eae0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots::OnTakeDamage(
        CDOTA_Modifier_Item_TranquilBoots *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Item_TranquilBoots::OnAttacked  (line 1292, @0x0000000002d7dee0, libserver.so)  // inlines: AddDamageRecord, AddToTail, AttackerNPC, CopyConstruct<float>, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, __dynamic_cast, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff_Item::GetItem, CDOTA_Modifier_Item_TranquilBoots::UpdateResetTime, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindOrAddSharedCooldown, CDOTA_Item::SetCurrentCharges, CUtlMemory<float, int>::Grow
// strings: "item_tranquil_boots_break"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Item_TranquilBoots
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots::OnAttacked(
        CDOTA_Modifier_Item_TranquilBoots *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // r14
  CDOTABaseAbility *Ability; // rax
  int *v15; // r13
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  int v19; // xmm0_4
  __int64 v20; // rbx
  int v21; // eax
  _DWORD *v22; // rax
  int v23; // ebx
  int break_count; // r13d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_UnitInventory *Inventory; // rax
  float v27; // xmm1_4
  CDOTA_Item *Item; // rax
  CDOTA_Item *v29; // rax
  float m_flResetTime; // [rsp+Ch] [rbp-24h]
  int v31; // [rsp+Ch] [rbp-24h]

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[params->hattacker.m_Index & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
      {
        v13 = v11->m_pInstance;
        if ( v11->m_pInstance != 0
          && v13->m_bIsDOTANPC
          && m_pInstance != 0
          && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
          && (CDOTA_Buff::GetParent(this) == m_pInstance || CDOTA_Buff::GetParent(this) == v13) )
        {
          Ability = CDOTA_Buff::GetAbility(this);
          if ( Ability != 0 )
          {
            v15 = __dynamic_cast(Ability, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_TranquilBoots, 0);
            if ( v15 != 0 )
            {
              iRecord = params->iRecord;
              AttackRecordsManager = GetAttackRecordsManager();
              RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
              if ( RecordByIndex == 0 || !RecordByIndex->m_bFakeAttack )
              {
                v19 = 0;
                if ( g_pGameRules != 0 )
                  v19 = *&g_pGameRules[18].m_szQuestName[20];
                v20 = v15[252];
                v21 = v15[252];
                if ( v20 == v15[256] )
                {
                  v31 = v19;
                  CUtlMemory<float,int>::Grow((v15 + 254), 1);
                  v21 = v15[252];
                  v19 = v31;
                }
                v15[252] = v21 + 1;
                v22 = (*(v15 + 127) + 4 * v20);
                if ( v22 != 0 )
                  *v22 = v19;
                (*(*v15 + 1928LL))(v15, -1.0);
                v23 = v15[252];
                break_count = this->break_count;
                if ( break_count >= v23 )
                {
                  break_count = 0;
                  if ( v23 >= 0 )
                    break_count = v23;
                }
                if ( v23 >= CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value )
                {
                  CDOTA_Modifier_Item_TranquilBoots::UpdateResetTime(this);
                  m_flResetTime = this->m_flResetTime;
                  Parent = CDOTA_Buff::GetParent(this);
                  Inventory = CDOTA_BaseNPC::GetInventory(Parent);
                  CDOTA_UnitInventory::FindOrAddSharedCooldown(
                    Inventory,
                    "item_tranquil_boots_break",
                    COERCE_DOUBLE(LODWORD(m_flResetTime)),
                    v27);
                  Item = CDOTA_Buff_Item::GetItem(this);
                  CDOTA_Item::SetCurrentCharges(Item, break_count);
                  v29 = CDOTA_Buff_Item::GetItem(this);
                  (*(v29->_vptr_IHandleEntity + 297))(v29);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_TranquilBoots::OnIntervalThink  (line 1329, @0x0000000002d7dc20, libserver.so)  // inlines: DOTAGameRules, GetDamageRecord, GetGameTime, RemoveDamageRecord, operator[]
// calls: CDOTA_Buff::GetAbility, __dynamic_cast, CUtlVectorBase<float, CUtlMemory<float, int> >::Remove, CDOTA_Buff::GetParent, CDOTA_Buff_Item::GetItem, CDOTA_Item::SetCurrentCharges
// globals: `typeinfo for'CDOTA_Item_TranquilBoots
void __fastcall CDOTA_Modifier_Item_TranquilBoots::OnIntervalThink(CDOTA_Modifier_Item_TranquilBoots *const this)
{
  CDOTABaseAbility *Ability; // rax
  CUtlVectorBase<float,CUtlMemory<float,int> > *v3; // rax
  CUtlVectorBase<float,CUtlMemory<float,int> > *v4; // r15
  int v5; // ebx
  float v6; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Item *Item; // rax
  int m_Size; // ebx
  CDOTA_Item *v10; // rax
  CDOTA_Item *v11; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    v3 = __dynamic_cast(Ability, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_TranquilBoots, 0);
    v4 = v3;
    if ( v3 != 0 )
    {
      if ( v3[42].m_Size > 0 )
      {
        v5 = 0;
        do
        {
          while ( 1 )
          {
            v6 = 0.0;
            if ( g_pGameRules != 0 )
              v6 = *&g_pGameRules[18].m_szQuestName[20];
            if ( (v6 - v4[42].m_Memory.m_pMemory[v5]) <= this->m_flResetTime )
            {
              Parent = CDOTA_Buff::GetParent(this);
              if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
                break;
            }
            CUtlVectorBase<float,CUtlMemory<float,int>>::Remove(v4 + 42, v5);
            if ( v5 >= v4[42].m_Size )
              goto LABEL_11;
          }
          ++v5;
        }
        while ( v5 < v4[42].m_Size );
      }
LABEL_11:
      Item = CDOTA_Buff_Item::GetItem(this);
      m_Size = v4[42].m_Size;
      if ( Item->m_iCurrentCharges.m_Value > m_Size )
      {
        v10 = CDOTA_Buff_Item::GetItem(this);
        CDOTA_Item::SetCurrentCharges(v10, m_Size);
        v11 = CDOTA_Buff_Item::GetItem(this);
        (*(v11->_vptr_IHandleEntity + 297))(v11);
      }
    }
  }
}


// CDOTA_Modifier_Item_TranquilBoots::GetMostRecentDamageTime  (line 1353, @0x0000000002d74ba0, libserver.so)  // inlines: GetDamageRecord
// calls: CDOTA_Buff::GetAbility, __dynamic_cast
// callers: CDOTA_Item_TranquilBoots::OnDisassemble
// globals: `typeinfo for'CDOTA_Item_TranquilBoots
float __fastcall CDOTA_Modifier_Item_TranquilBoots::GetMostRecentDamageTime(
        CDOTA_Modifier_Item_TranquilBoots *const this)
{
  CDOTABaseAbility *Ability; // rax
  _DWORD *v2; // rax
  int v3; // edx
  float result; // xmm0_4
  __int64 v5; // rcx
  __int64 v6; // rax
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
    return 0.0;
  v2 = __dynamic_cast(Ability, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_TranquilBoots, 0);
  if ( v2 == 0 )
    return 0.0;
  v3 = v2[252];
  if ( v3 <= 0 )
    return -1.0;
  result = -1.0;
  v5 = *(v2 + 127);
  v6 = 0;
  do
  {
    v7 = *(v5 + 4 * v6++);
    result = fmaxf(v7, result);
  }
  while ( v3 > v6 );
  return result;
}


// CDOTA_Item_TranquilBoots::OnDisassemble  (line 1376, @0x0000000002d74c20, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetInventory, CDOTA_BaseNPC::FindModifierByName, __dynamic_cast, CDOTA_Modifier_Item_TranquilBoots::GetMostRecentDamageTime, CDOTA_UnitInventory::FindOrAddSharedCooldown
// strings: "modifier_item_tranquil_boots", "item_tranquil_boots_break"
// globals: `typeinfo for'CDOTA_Modifier_Item_TranquilBoots
void __fastcall CDOTA_Item_TranquilBoots::OnDisassemble(CDOTA_Item_TranquilBoots *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_UnitInventory *Inventory; // r12
  CDOTA_BaseNPC *v4; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Modifier_Item_TranquilBoots *v6; // rax
  float MostRecentDamageTime; // xmm0_4
  float v8; // xmm1_4

  if ( this->break_count < this->m_iCurrentCharges.m_Value && CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    Inventory = CDOTA_BaseNPC::GetInventory(Caster);
    if ( Inventory != 0 )
    {
      v4 = CDOTABaseAbility::GetCaster(this);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(v4, "modifier_item_tranquil_boots", 0);
      if ( ModifierByName != 0 )
      {
        v6 = __dynamic_cast(
               ModifierByName,
               &`typeinfo for'CDOTA_Buff,
               &`typeinfo for'CDOTA_Modifier_Item_TranquilBoots,
               0);
        if ( v6 != 0 )
        {
          MostRecentDamageTime = CDOTA_Modifier_Item_TranquilBoots::GetMostRecentDamageTime(v6);
          v8 = 0.0;
          if ( g_pGameRules != 0 )
            v8 = *&g_pGameRules[18].m_szQuestName[20];
          CDOTA_UnitInventory::FindOrAddSharedCooldown(
            Inventory,
            "item_tranquil_boots_break",
            COERCE_DOUBLE(COERCE_UNSIGNED_INT(10.0 - (v8 - MostRecentDamageTime))),
            v8 - MostRecentDamageTime);
        }
      }
    }
  }
}


// CDOTA_Item_Recipe_TranquilBoots2::~CDOTA_Item_Recipe_TranquilBoots2  (line 1412, @0x0000000002d85be0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_TranquilBoots2::~CDOTA_Item_Recipe_TranquilBoots2(
        CDOTA_Item_Recipe_TranquilBoots2 *const this)
{
  this->_vptr_IHandleEntity = &off_46ADE30;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_TranquilBoots2::~CDOTA_Item_Recipe_TranquilBoots2  (line 1412, @0x0000000002d85c00, libserver.so)  // inlines: ~CDOTA_Item_Recipe_TranquilBoots2
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_TranquilBoots2::~CDOTA_Item_Recipe_TranquilBoots2(
        CDOTA_Item_Recipe_TranquilBoots2 *const this)
{
  this->_vptr_IHandleEntity = &off_46ADE30;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_TranquilBoots2::Schema_DynamicBinding  (line 1414, @0x0000000002d80870, libserver.so)
// globals: CDOTA_Item_Recipe_TranquilBoots2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_TranquilBoots2::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_TranquilBoots2 *const this)
{
  return CDOTA_Item_Recipe_TranquilBoots2::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1414, @0x0000000002d80880, libserver.so)
// globals: CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::DestructInstance  (line 1414, @0x0000000002d80890, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_TranquilBoots2>
void __fastcall CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::FreeInstance  (line 1414, @0x0000000002d808b0, libserver.so)
void __fastcall CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::CanAllocate  (line 1414, @0x0000000002d808d0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1414, @0x0000000002d808e0, libserver.so)
// globals: CDOTA_Item_Recipe_TranquilBoots2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_TranquilBoots2::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::AllocateInstance  (line 1414, @0x0000000002d833b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::ConstructInstance  (line 1414, @0x0000000002d84a40, libserver.so)  // inlines: CDOTA_Item_Recipe_TranquilBoots2, Construct<CDOTA_Item_Recipe_TranquilBoots2>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46ADE30;
  }
  return p;
}


// CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1414, @0x0000000002d88200, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1414, @0x0000000002d88220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal  (line 1414, @0x0000000002d8e530, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_tranquil_boots2", "CDOTA_Item_Recipe_TranquilBoots2"
// globals: `guard variable for'CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class, CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class, __dso_handle, CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2ClassInfo, CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2ClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class);
    CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class._vptr_CEntityClass = off_46ADDB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class);
    __cxa_atexit(
      CDOTA_Item_Recipe_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_TranquilBoots2Class != 0 )
    return &CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class;
  if ( `guard variable for'CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2ClassInfo,
      "CDOTA_Item_Recipe_TranquilBoots2",
      "item_recipe_tranquil_boots2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2ClassInfo);
  }
  CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class.m_pClassInfo = &CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2ClassInfo;
  CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class.m_pBaseClassInfo = CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_TranquilBoots2Class = &CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class;
  CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2ClassInfo.m_pClass = &CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class;
  CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_TranquilBoots2Class->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_TranquilBoots2Class;
}


// CDOTA_Item_TranquilBoots2::~CDOTA_Item_TranquilBoots2  (line 1424, @0x0000000002d87cd0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Item::~CDOTA_Item, CUtlMemory<float, int>::Purge
void __fastcall CDOTA_Item_TranquilBoots2::~CDOTA_Item_TranquilBoots2(CDOTA_Item_TranquilBoots2 *const this)
{
  bool v2; // zf
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_DamageList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_46AEA30;
  this->m_DamageList.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_DamageList.m_Memory,
        CUtlMemory<float,int>::Purge(&this->m_DamageList.m_Memory),
        (this->m_DamageList.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Item::~CDOTA_Item(this);
  }
  else
  {
    CUtlMemory<float,int>::Purge(p_m_Memory);
    CDOTA_Item::~CDOTA_Item(this);
  }
}


// CDOTA_Item_TranquilBoots2::~CDOTA_Item_TranquilBoots2  (line 1424, @0x0000000002d87e20, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Item_TranquilBoots2, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete, CUtlMemory<float, int>::Purge
void __fastcall CDOTA_Item_TranquilBoots2::~CDOTA_Item_TranquilBoots2(CDOTA_Item_TranquilBoots2 *const this)
{
  bool v2; // zf
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_DamageList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_46AEA30;
  this->m_DamageList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_DamageList.m_Memory;
    CUtlMemory<float,int>::Purge(&this->m_DamageList.m_Memory);
    if ( (this->m_DamageList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(p_m_Memory);
  }
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_TranquilBoots2::Schema_DynamicBinding  (line 1426, @0x0000000002d808f0, libserver.so)
// globals: CDOTA_Item_TranquilBoots2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_TranquilBoots2::Schema_DynamicBinding(
        const CDOTA_Item_TranquilBoots2 *const this)
{
  return CDOTA_Item_TranquilBoots2::s_pSchemaBinding;
}


// CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1426, @0x0000000002d80900, libserver.so)
// globals: CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::DestructInstance  (line 1426, @0x0000000002d80910, libserver.so)  // inlines: Destruct<CDOTA_Item_TranquilBoots2>
void __fastcall CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::FreeInstance  (line 1426, @0x0000000002d80930, libserver.so)
void __fastcall CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::CanAllocate  (line 1426, @0x0000000002d80950, libserver.so)
bool __fastcall CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1426, @0x0000000002d80960, libserver.so)
// globals: CDOTA_Item_TranquilBoots2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_TranquilBoots2::s_pSchemaBinding;
}


// CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::AllocateInstance  (line 1426, @0x0000000002d833f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1032);
  memset(v1, 0, 0x408u);
  return v1;
}


// CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::ConstructInstance  (line 1426, @0x0000000002d87b00, libserver.so)  // inlines: CDOTA_Item_TranquilBoots2, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Item_TranquilBoots2>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 252) = 0;
    *p = &off_46AEA30;
    *(p + 127) = 0;
    *(p + 256) = 0;
    *(p + 257) = 0;
  }
  return p;
}


// CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1426, @0x0000000002d88250, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1426, @0x0000000002d88270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_TranquilBoots2::GetEntityClassInternal  (line 1426, @0x0000000002d8e680, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "CDOTA_Item_TranquilBoots2"
// globals: `guard variable for'CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class, CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class, __dso_handle, CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBoots2ClassInfo, CDOTA_Item_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBoots2ClassInfo
CEntityClass *__cdecl CDOTA_Item_TranquilBoots2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class);
    CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class._vptr_CEntityClass = off_46AE9B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class);
    __cxa_atexit(
      CDOTA_Item_TranquilBoots2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_TranquilBoots2Class != 0 )
    return &CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class;
  if ( `guard variable for'CDOTA_Item_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBoots2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBoots2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBoots2ClassInfo,
      "CDOTA_Item_TranquilBoots2",
      "item_tranquil_boots2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBoots2ClassInfo);
  }
  CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class.m_pClassInfo = &CDOTA_Item_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBoots2ClassInfo;
  CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class.m_pBaseClassInfo = CDOTA_Item_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBoots2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_TranquilBoots2Class = &CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class;
  CDOTA_Item_TranquilBoots2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_TranquilBoots2ClassInfo.m_pClass = &CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class;
  CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_TranquilBoots2Class->m_pComponentOverrides = 0;
  return &CDOTA_Item_TranquilBoots2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_TranquilBoots2Class;
}


// CDOTA_Item_TranquilBoots2::GetIntrinsicModifierName  (line 1430, @0x0000000002d80970, libserver.so)
// strings: "modifier_item_tranquil_boots2"
const char *__fastcall CDOTA_Item_TranquilBoots2::GetIntrinsicModifierName(CDOTA_Item_TranquilBoots2 *const this)
{
  return "modifier_item_tranquil_boots2";
}


// CDOTA_Item_TranquilBoots2::YouForgotToImplementOrDeclareServerClass  (line 1452, @0x0000000002d6eaf0, libserver.so)
int __fastcall CDOTA_Item_TranquilBoots2::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_TranquilBoots2 *const this)
{
  return 0;
}


// CDOTA_Item_TranquilBoots2::GetServerClass  (line 1452, @0x0000000002d73c00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_TranquilBoots2::GetServerClass(CDOTA_Item_TranquilBoots2 *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Item_TranquilBoots2::AddDamageRecord  (line 1459, @0x0000000002d7e200, libserver.so)  // inlines: AddToTail, CopyConstruct<float>, Element, GrowMemory, operator[]
// calls: CUtlMemory<float, int>::Grow
void __fastcall CDOTA_Item_TranquilBoots2::AddDamageRecord(
        CDOTA_Item_TranquilBoots2 *const this,
        float a2,
        float fValue)
{
  __int64 m_Size; // r12
  int v5; // eax
  float *v6; // rax
  float fValuea; // [rsp+Ch] [rbp-14h]

  m_Size = this->m_DamageList.m_Size;
  v5 = this->m_DamageList.m_Size;
  if ( m_Size == this->m_DamageList.m_Memory.m_nAllocationCount )
  {
    fValuea = a2;
    CUtlMemory<float,int>::Grow(&this->m_DamageList.m_Memory, 1);
    v5 = this->m_DamageList.m_Size;
    a2 = fValuea;
  }
  this->m_DamageList.m_Size = v5 + 1;
  v6 = &this->m_DamageList.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = a2;
}


// CDOTA_Item_TranquilBoots2::GetDamageRecord  (line 1464, @0x0000000002d74cf0, libserver.so)  // inlines: operator[]
float __fastcall CDOTA_Item_TranquilBoots2::GetDamageRecord(CDOTA_Item_TranquilBoots2 *const this, int iIndex)
{
  return this->m_DamageList.m_Memory.m_pMemory[iIndex];
}


// CDOTA_Item_TranquilBoots2::DamageRecordCount  (line 1469, @0x0000000002d74d10, libserver.so)
int __fastcall CDOTA_Item_TranquilBoots2::DamageRecordCount(CDOTA_Item_TranquilBoots2 *const this)
{
  return this->m_DamageList.m_Size;
}


// CDOTA_Item_TranquilBoots2::RemoveDamageRecord  (line 1474, @0x0000000002d7dd70, libserver.so)
// calls: CUtlVectorBase<float, CUtlMemory<float, int> >::Remove
void __fastcall CDOTA_Item_TranquilBoots2::RemoveDamageRecord(CDOTA_Item_TranquilBoots2 *const this, int iIndex)
{
  CUtlVectorBase<float,CUtlMemory<float,int>>::Remove(&this->m_DamageList, iIndex);
}


// CDOTA_Modifier_Item_TranquilBoots2::~CDOTA_Modifier_Item_TranquilBoots2  (line 1514, @0x0000000002d84370, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_TranquilBoots2::~CDOTA_Modifier_Item_TranquilBoots2(
        CDOTA_Modifier_Item_TranquilBoots2 *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_TranquilBoots2::~CDOTA_Modifier_Item_TranquilBoots2  (line 1514, @0x0000000002d84390, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_TranquilBoots2
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_TranquilBoots2::~CDOTA_Modifier_Item_TranquilBoots2(
        CDOTA_Modifier_Item_TranquilBoots2 *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_TranquilBoots2::OnCreated  (line 1545, @0x0000000002d7e280, libserver.so)  // inlines: AddDamageRecord, AddToTail, CopyConstruct<float>, DOTAGameRules, Element, GetGameTime, GrowMemory, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetSharedCooldownTime, __dynamic_cast, CDOTA_Buff_Item::GetItem, CDOTA_Item::SetCurrentCharges, CUtlMemory<float, int>::Grow
// strings: "broken_movement_speed", "bonus_health_regen", "break_threshold", "break_time", "break_count", "item_tranquil_boots_break"
// globals: `typeinfo for'CDOTA_Item_TranquilBoots2
void __fastcall CDOTA_Modifier_Item_TranquilBoots2::OnCreated(
        CDOTA_Modifier_Item_TranquilBoots2 *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_UnitInventory *Inventory; // rax
  __m128i v13; // xmm0
  float v14; // xmm1_4
  int v15; // r14d
  CDOTABaseAbility *v16; // rax
  CDOTA_Item_TranquilBoots2 *v17; // rax
  __int64 m_Size; // r12
  int v19; // r13d
  float *m_pMemory; // rdx
  int v21; // r13d
  int *v22; // rdx
  int v23; // r12d
  float *v24; // rdx
  int v25; // r12d
  int *v26; // rdx
  int v27; // edx
  int *v28; // rax
  CDOTA_Item *Item; // rax
  CDOTA_Item *v30; // rax
  CDOTA_Item_TranquilBoots2 *pAbility; // [rsp+8h] [rbp-28h]
  CDOTA_Item_TranquilBoots2 *pAbilitya; // [rsp+8h] [rbp-28h]
  CDOTA_Item_TranquilBoots2 *pAbilityb; // [rsp+8h] [rbp-28h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_movement_speed, "bonus_movement_speed");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->broken_movement_speed, "broken_movement_speed");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_armor, "bonus_armor");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->bonus_health_regen, "bonus_health_regen");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->break_threshold, "break_threshold");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->break_time, "break_time");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->break_count, "break_count");
  CDOTA_Buff::StartIntervalThink(this, 0.1, v10);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    Inventory = CDOTA_BaseNPC::GetInventory(Parent);
    *v13.m128i_i32 = CDOTA_UnitInventory::GetSharedCooldownTime(Inventory, "item_tranquil_boots_break");
    v14 = 0.0;
    if ( g_pGameRules != 0 )
      v14 = *&g_pGameRules[18].m_szQuestName[20];
    if ( *v13.m128i_i32 > v14 )
    {
      *v13.m128i_i32 = *v13.m128i_i32 - this->break_time;
      v15 = _mm_cvtsi128_si32(v13);
      v16 = CDOTA_Buff::GetAbility(this);
      if ( v16 != 0 )
      {
        v17 = __dynamic_cast(v16, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_TranquilBoots2, 0);
        if ( v17 != 0 )
        {
          m_Size = v17->m_DamageList.m_Size;
          v19 = v17->m_DamageList.m_Size;
          if ( m_Size == v17->m_DamageList.m_Memory.m_nAllocationCount )
          {
            pAbility = v17;
            CUtlMemory<float,int>::Grow(&v17->m_DamageList.m_Memory, 1);
            v17 = pAbility;
            v19 = pAbility->m_DamageList.m_Size;
          }
          m_pMemory = v17->m_DamageList.m_Memory.m_pMemory;
          v21 = v19 + 1;
          v17->m_DamageList.m_Size = v21;
          v22 = &m_pMemory[m_Size];
          if ( v22 != 0 )
          {
            *v22 = v15;
            v21 = v17->m_DamageList.m_Size;
          }
          v23 = v21;
          if ( v17->m_DamageList.m_Memory.m_nAllocationCount == v21 )
          {
            pAbilitya = v17;
            CUtlMemory<float,int>::Grow(&v17->m_DamageList.m_Memory, 1);
            v17 = pAbilitya;
            v23 = pAbilitya->m_DamageList.m_Size;
          }
          v24 = v17->m_DamageList.m_Memory.m_pMemory;
          v25 = v23 + 1;
          v17->m_DamageList.m_Size = v25;
          v26 = &v24[v21];
          if ( v26 != 0 )
          {
            *v26 = v15;
            v25 = v17->m_DamageList.m_Size;
          }
          v27 = v25;
          if ( v17->m_DamageList.m_Memory.m_nAllocationCount == v25 )
          {
            pAbilityb = v17;
            CUtlMemory<float,int>::Grow(&v17->m_DamageList.m_Memory, 1);
            v17 = pAbilityb;
            v27 = pAbilityb->m_DamageList.m_Size;
          }
          v17->m_DamageList.m_Size = v27 + 1;
          v28 = &v17->m_DamageList.m_Memory.m_pMemory[v25];
          if ( v28 != 0 )
            *v28 = v15;
          Item = CDOTA_Buff_Item::GetItem(this);
          CDOTA_Item::SetCurrentCharges(Item, 3);
          v30 = CDOTA_Buff_Item::GetItem(this);
          (*(v30->_vptr_IHandleEntity + 297))(v30);
        }
      }
    }
  }
}


// CDOTA_Modifier_Item_TranquilBoots2::DeclareFunctions  (line 1579, @0x0000000002d6eb00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_TranquilBoots2::GetModifierMoveSpeedBonus_Special_Boots(CModifierParams const&), CDOTA_Modifier_Item_TranquilBoots2::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_TranquilBoots2::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Item_TranquilBoots2::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_Item_TranquilBoots2::OnAttacked(CModifierParams const&), CDOTA_Modifier_Item_TranquilBoots2::GetModifierPhysical_ConstantBlock(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_TranquilBoots2::DeclareFunctions(CDOTA_Modifier_Item_TranquilBoots2 *const this)
{
  this->m_Functions[16].__pfn = CDOTA_Modifier_Item_TranquilBoots2::GetModifierMoveSpeedBonus_Special_Boots;
  this->m_Functions[16].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_TranquilBoots2::GetModifierConstantHealthRegen;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_TranquilBoots2::GetModifierPhysicalArmorBonus;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Item_TranquilBoots2::OnTakeDamage;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Item_TranquilBoots2::OnAttacked;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[86].__pfn = CDOTA_Modifier_Item_TranquilBoots2::GetModifierPhysical_ConstantBlock;
  this->m_Functions[86].__delta = 0;
}


// CDOTA_Modifier_Item_TranquilBoots2::GetModifierMoveSpeedBonus_Special_Boots  (line 1589, @0x0000000002d702b0, libserver.so)
// calls: CDOTA_Buff_Item::GetItem, CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots2::GetModifierMoveSpeedBonus_Special_Boots(
        CDOTA_Modifier_Item_TranquilBoots2 *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  __m128i v5; // xmm1
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) != 0
    && this->break_count <= CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value
    || CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    *v3.m128i_i32 = this->broken_movement_speed;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  else
  {
    *v5.m128i_i32 = this->bonus_movement_speed;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Item_TranquilBoots2::GetModifierConstantHealthRegen  (line 1598, @0x0000000002d70330, libserver.so)
// calls: CDOTA_Buff_Item::GetItem, CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots2::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_TranquilBoots2 *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) != 0
    && this->break_count <= CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value
    || CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    return 1uLL;
  }
  *v4.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_TranquilBoots2::GetModifierPhysicalArmorBonus  (line 1608, @0x0000000002d6fa60, libserver.so)
// calls: CDOTA_Buff_Item::GetItem, CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots2::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_TranquilBoots2 *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) == 0
    || this->break_count > CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value )
  {
    CDOTA_Buff::GetParent(this);
  }
  *v3.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_TranquilBoots2::GetModifierPhysical_ConstantBlock  (line 1618, @0x0000000002d6ff00, libserver.so)
// calls: CDOTA_Buff::GetAbility
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots2::GetModifierPhysical_ConstantBlock(
        CDOTA_Modifier_Item_TranquilBoots2 *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *Ability; // rax
  __m128i fDamage_low; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Ability = CDOTA_Buff::GetAbility(this);
  if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) == 0 )
    return 1uLL;
  fDamage_low = LODWORD(params->fDamage);
  if ( *fDamage_low.m128i_i32 <= 0.0 )
    return 1uLL;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(fDamage_low) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_TranquilBoots2::OnTakeDamage  (line 1633, @0x0000000002d6eba0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots2::OnTakeDamage(
        CDOTA_Modifier_Item_TranquilBoots2 *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Item_TranquilBoots2::OnAttacked  (line 1667, @0x0000000002d7e860, libserver.so)  // inlines: AddDamageRecord, AddToTail, AttackerNPC, CopyConstruct<float>, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, __dynamic_cast, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff_Item::GetItem, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindOrAddSharedCooldown, CDOTA_Item::SetCurrentCharges, CUtlMemory<float, int>::Grow
// strings: "item_tranquil_boots_break"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Item_TranquilBoots2
ModifierVariant_t __fastcall CDOTA_Modifier_Item_TranquilBoots2::OnAttacked(
        CDOTA_Modifier_Item_TranquilBoots2 *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // r14
  CDOTABaseAbility *Ability; // rax
  int *v15; // r13
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  int v19; // xmm0_4
  __int64 v20; // rbx
  int v21; // eax
  _DWORD *v22; // rax
  int v23; // ebx
  int break_count; // r13d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_UnitInventory *Inventory; // rax
  float v27; // xmm1_4
  CDOTA_Item *Item; // rax
  CDOTA_Item *v29; // rax
  unsigned int v30; // [rsp+Ch] [rbp-24h]
  int v31; // [rsp+Ch] [rbp-24h]

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[params->hattacker.m_Index & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
      {
        v13 = v11->m_pInstance;
        if ( v11->m_pInstance != 0
          && v13->m_bIsDOTANPC
          && m_pInstance != 0
          && (CDOTA_Buff::GetParent(this) == m_pInstance || CDOTA_Buff::GetParent(this) == v13) )
        {
          Ability = CDOTA_Buff::GetAbility(this);
          if ( Ability != 0 )
          {
            v15 = __dynamic_cast(Ability, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_TranquilBoots2, 0);
            if ( v15 != 0 )
            {
              iRecord = params->iRecord;
              AttackRecordsManager = GetAttackRecordsManager();
              RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
              if ( RecordByIndex == 0 || !RecordByIndex->m_bFakeAttack )
              {
                v19 = 0;
                if ( g_pGameRules != 0 )
                  v19 = *&g_pGameRules[18].m_szQuestName[20];
                v20 = v15[252];
                v21 = v15[252];
                if ( v20 == v15[256] )
                {
                  v31 = v19;
                  CUtlMemory<float,int>::Grow((v15 + 254), 1);
                  v21 = v15[252];
                  v19 = v31;
                }
                v15[252] = v21 + 1;
                v22 = (*(v15 + 127) + 4 * v20);
                if ( v22 != 0 )
                  *v22 = v19;
                (*(*v15 + 1928LL))(v15, -1.0);
                v23 = v15[252];
                break_count = this->break_count;
                if ( break_count >= v23 )
                {
                  break_count = 0;
                  if ( v23 >= 0 )
                    break_count = v23;
                }
                if ( v23 >= CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value )
                {
                  *&v30 = this->break_time;
                  Parent = CDOTA_Buff::GetParent(this);
                  Inventory = CDOTA_BaseNPC::GetInventory(Parent);
                  CDOTA_UnitInventory::FindOrAddSharedCooldown(
                    Inventory,
                    "item_tranquil_boots_break",
                    COERCE_DOUBLE(v30),
                    v27);
                  Item = CDOTA_Buff_Item::GetItem(this);
                  CDOTA_Item::SetCurrentCharges(Item, break_count);
                  v29 = CDOTA_Buff_Item::GetItem(this);
                  (*(v29->_vptr_IHandleEntity + 297))(v29);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_TranquilBoots2::OnIntervalThink  (line 1703, @0x0000000002d7dd90, libserver.so)  // inlines: DOTAGameRules, GetDamageRecord, GetGameTime, RemoveDamageRecord, operator[]
// calls: CDOTA_Buff::GetAbility, __dynamic_cast, CUtlVectorBase<float, CUtlMemory<float, int> >::Remove, CDOTA_Buff::GetParent, CDOTA_Buff_Item::GetItem, CDOTA_Item::SetCurrentCharges
// globals: `typeinfo for'CDOTA_Item_TranquilBoots2
void __fastcall CDOTA_Modifier_Item_TranquilBoots2::OnIntervalThink(CDOTA_Modifier_Item_TranquilBoots2 *const this)
{
  CDOTABaseAbility *Ability; // rax
  CUtlVectorBase<float,CUtlMemory<float,int> > *v3; // rax
  CUtlVectorBase<float,CUtlMemory<float,int> > *v4; // r15
  int v5; // ebx
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Item *Item; // rax
  int m_Size; // ebx
  CDOTA_Item *v10; // rax
  CDOTA_Item *v11; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    v3 = __dynamic_cast(Ability, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_TranquilBoots2, 0);
    v4 = v3;
    if ( v3 != 0 )
    {
      if ( v3[42].m_Size > 0 )
      {
        v5 = 0;
        do
        {
          while ( 1 )
          {
            v6 = 0.0;
            if ( g_pGameRules != 0 )
              v6 = *&g_pGameRules[18].m_szQuestName[20];
            if ( (v6 - v4[42].m_Memory.m_pMemory[v5]) <= this->break_time )
            {
              Parent = CDOTA_Buff::GetParent(this);
              if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
                break;
            }
            CUtlVectorBase<float,CUtlMemory<float,int>>::Remove(v4 + 42, v5);
            if ( v5 >= v4[42].m_Size )
              goto LABEL_11;
          }
          ++v5;
        }
        while ( v5 < v4[42].m_Size );
      }
LABEL_11:
      Item = CDOTA_Buff_Item::GetItem(this);
      m_Size = v4[42].m_Size;
      if ( Item->m_iCurrentCharges.m_Value > m_Size )
      {
        v10 = CDOTA_Buff_Item::GetItem(this);
        CDOTA_Item::SetCurrentCharges(v10, m_Size);
        v11 = CDOTA_Buff_Item::GetItem(this);
        (*(v11->_vptr_IHandleEntity + 297))(v11);
      }
    }
  }
}


// CDOTA_Modifier_Item_TranquilBoots2::GetMostRecentDamageTime  (line 1727, @0x0000000002d74d20, libserver.so)  // inlines: GetDamageRecord
// calls: CDOTA_Buff::GetAbility, __dynamic_cast
// callers: CDOTA_Item_TranquilBoots2::OnDisassemble
// globals: `typeinfo for'CDOTA_Item_TranquilBoots2
float __fastcall CDOTA_Modifier_Item_TranquilBoots2::GetMostRecentDamageTime(
        CDOTA_Modifier_Item_TranquilBoots2 *const this)
{
  CDOTABaseAbility *Ability; // rax
  _DWORD *v2; // rax
  int v3; // edx
  float result; // xmm0_4
  __int64 v5; // rcx
  __int64 v6; // rax
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
    return 0.0;
  v2 = __dynamic_cast(Ability, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item_TranquilBoots2, 0);
  if ( v2 == 0 )
    return 0.0;
  v3 = v2[252];
  if ( v3 <= 0 )
    return -1.0;
  result = -1.0;
  v5 = *(v2 + 127);
  v6 = 0;
  do
  {
    v7 = *(v5 + 4 * v6++);
    result = fmaxf(v7, result);
  }
  while ( v3 > v6 );
  return result;
}


// CDOTA_Item_TranquilBoots2::OnDisassemble  (line 1750, @0x0000000002d74da0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetInventory, CDOTA_BaseNPC::FindModifierByName, __dynamic_cast, CDOTA_Modifier_Item_TranquilBoots2::GetMostRecentDamageTime, CDOTA_UnitInventory::FindOrAddSharedCooldown
// strings: "modifier_item_tranquil_boots", "item_tranquil_boots_break"
// globals: `typeinfo for'CDOTA_Modifier_Item_TranquilBoots2
void __fastcall CDOTA_Item_TranquilBoots2::OnDisassemble(CDOTA_Item_TranquilBoots2 *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_UnitInventory *Inventory; // r12
  CDOTA_BaseNPC *v4; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Modifier_Item_TranquilBoots2 *v6; // rax
  float MostRecentDamageTime; // xmm0_4
  float v8; // xmm1_4

  if ( this->break_count < this->m_iCurrentCharges.m_Value && CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    Inventory = CDOTA_BaseNPC::GetInventory(Caster);
    if ( Inventory != 0 )
    {
      v4 = CDOTABaseAbility::GetCaster(this);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(v4, "modifier_item_tranquil_boots", 0);
      if ( ModifierByName != 0 )
      {
        v6 = __dynamic_cast(
               ModifierByName,
               &`typeinfo for'CDOTA_Buff,
               &`typeinfo for'CDOTA_Modifier_Item_TranquilBoots2,
               0);
        if ( v6 != 0 )
        {
          MostRecentDamageTime = CDOTA_Modifier_Item_TranquilBoots2::GetMostRecentDamageTime(v6);
          v8 = 0.0;
          if ( g_pGameRules != 0 )
            v8 = *&g_pGameRules[18].m_szQuestName[20];
          CDOTA_UnitInventory::FindOrAddSharedCooldown(
            Inventory,
            "item_tranquil_boots_break",
            COERCE_DOUBLE(COERCE_UNSIGNED_INT(10.0 - (v8 - MostRecentDamageTime))),
            v8 - MostRecentDamageTime);
        }
      }
    }
  }
}


