// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_necronomicon.cpp:39
class CDOTA_Item_Recipe_Necronomicon : public CDOTA_Item {
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

	CDOTA_Item_Recipe_Necronomicon(CDOTA_Item_Recipe_Necronomicon &);
	CDOTA_Item_Recipe_Necronomicon(CDOTA_Item_Recipe_Necronomicon &);
	CDOTA_Item_Recipe_Necronomicon();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Necronomicon();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:45
class CDOTA_Item_Recipe_Necronomicon_2 : public CDOTA_Item_Recipe_Necronomicon {
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
	CDOTA_Item_Recipe_Necronomicon_2(CDOTA_Item_Recipe_Necronomicon_2 &);
	CDOTA_Item_Recipe_Necronomicon_2(CDOTA_Item_Recipe_Necronomicon_2 &);
	CDOTA_Item_Recipe_Necronomicon_2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Necronomicon_2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:46
class CDOTA_Item_Recipe_Necronomicon_3 : public CDOTA_Item_Recipe_Necronomicon {
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
	CDOTA_Item_Recipe_Necronomicon_3(CDOTA_Item_Recipe_Necronomicon_3 &);
	CDOTA_Item_Recipe_Necronomicon_3(CDOTA_Item_Recipe_Necronomicon_3 &);
	CDOTA_Item_Recipe_Necronomicon_3();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Necronomicon_3();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:51
class CDOTA_Item_Necronomicon : public CDOTA_Item {
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

	EHANDLE m_hWarrior;  // +0x3e8
	EHANDLE m_hArcher;  // +0x3ec
	CDOTA_Item_Necronomicon(CDOTA_Item_Necronomicon &);
	CDOTA_Item_Necronomicon(CDOTA_Item_Necronomicon &);
	CDOTA_Item_Necronomicon();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Item_Necronomicon();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 1008
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:71
class C_CDOTA_Item_Necronomicon_MapInstall {
	C_CDOTA_Item_Necronomicon_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:207
class CDOTA_Modifier_Item_Necronomicon : public CDOTA_Buff_Item {
public:

private:

	int bonus_intellect;  // +0xba8
	int bonus_strength;  // +0xbac
	CDOTA_Modifier_Item_Necronomicon();
	virtual void OnCreated(KeyValues *);
	virtual void OnItemCombine();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Necronomicon();

	// vtable[57] OnCreated
	// vtable[89] OnItemCombine
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:251
class CDOTA_Item_Necronomicon_Level2 : public CDOTA_Item_Necronomicon {
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
	CDOTA_Item_Necronomicon_Level2(CDOTA_Item_Necronomicon_Level2 &);
	CDOTA_Item_Necronomicon_Level2(CDOTA_Item_Necronomicon_Level2 &);
	CDOTA_Item_Necronomicon_Level2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Item_Necronomicon_Level2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1008
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:262
class C_CDOTA_Item_Necronomicon_Level2_MapInstall {
	C_CDOTA_Item_Necronomicon_Level2_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:271
class CDOTA_Item_Necronomicon_Level3 : public CDOTA_Item_Necronomicon {
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
	CDOTA_Item_Necronomicon_Level3(CDOTA_Item_Necronomicon_Level3 &);
	CDOTA_Item_Necronomicon_Level3(CDOTA_Item_Necronomicon_Level3 &);
	CDOTA_Item_Necronomicon_Level3();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Item_Necronomicon_Level3();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1008
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:282
class C_CDOTA_Item_Necronomicon_Level3_MapInstall {
	C_CDOTA_Item_Necronomicon_Level3_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:306
class CDOTA_Ability_Necronomicon_Warrior_ManaBurn : public CDOTABaseAbility {
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
	CDOTA_Ability_Necronomicon_Warrior_ManaBurn(CDOTA_Ability_Necronomicon_Warrior_ManaBurn &);
	CDOTA_Ability_Necronomicon_Warrior_ManaBurn(CDOTA_Ability_Necronomicon_Warrior_ManaBurn &);
	CDOTA_Ability_Necronomicon_Warrior_ManaBurn();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Necronomicon_Warrior_ManaBurn();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:320
class CDOTA_Modifier_Necronomicon_Warrior_ManaBurn : public CDOTA_Buff {
public:

private:

	int burn_amount;  // +0xba8
	CDOTA_Modifier_Necronomicon_Warrior_ManaBurn();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProcAttack_Feedback(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Necronomicon_Warrior_ManaBurn();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:392
class CDOTA_Ability_Necronomicon_Warrior_LastWill : public CDOTABaseAbility {
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
	CDOTA_Ability_Necronomicon_Warrior_LastWill(CDOTA_Ability_Necronomicon_Warrior_LastWill &);
	CDOTA_Ability_Necronomicon_Warrior_LastWill(CDOTA_Ability_Necronomicon_Warrior_LastWill &);
	CDOTA_Ability_Necronomicon_Warrior_LastWill();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Necronomicon_Warrior_LastWill();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:406
class CDOTA_Modifier_Necronomicon_Warrior_LastWill : public CDOTA_Buff {
public:

private:

	int explosion;  // +0xba8
	CDOTA_Modifier_Necronomicon_Warrior_LastWill();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Necronomicon_Warrior_LastWill();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:488
class CDOTA_Ability_Necronomicon_Warrior_Sight : public CDOTABaseAbility {
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
	CDOTA_Ability_Necronomicon_Warrior_Sight(CDOTA_Ability_Necronomicon_Warrior_Sight &);
	CDOTA_Ability_Necronomicon_Warrior_Sight(CDOTA_Ability_Necronomicon_Warrior_Sight &);
	CDOTA_Ability_Necronomicon_Warrior_Sight();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Necronomicon_Warrior_Sight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:502
class CDOTA_Modifier_Necronomicon_Warrior_Sight : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Necronomicon_Warrior_Sight();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Necronomicon_Warrior_Sight();

	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:542
class CDOTA_Ability_Necronomicon_Archer_ManaBurn : public CDOTABaseAbility {
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
	CDOTA_Ability_Necronomicon_Archer_ManaBurn(CDOTA_Ability_Necronomicon_Archer_ManaBurn &);
	CDOTA_Ability_Necronomicon_Archer_ManaBurn(CDOTA_Ability_Necronomicon_Archer_ManaBurn &);
	CDOTA_Ability_Necronomicon_Archer_ManaBurn();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Necronomicon_Archer_ManaBurn();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:582
class CDOTA_Ability_Necronomicon_Archer_AoE : public CDOTABaseAbility {
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
	CDOTA_Ability_Necronomicon_Archer_AoE(CDOTA_Ability_Necronomicon_Archer_AoE &);
	CDOTA_Ability_Necronomicon_Archer_AoE(CDOTA_Ability_Necronomicon_Archer_AoE &);
	CDOTA_Ability_Necronomicon_Archer_AoE();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Necronomicon_Archer_AoE();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:596
class CDOTA_Modifier_Necronomicon_Archer_AoE : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Necronomicon_Archer_AoE();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Necronomicon_Archer_AoE();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_necronomicon.cpp:638
class CDOTA_Modifier_Item_Necronomicon_Archer_Aura : public CDOTA_Buff {
public:

private:

	int as_bonus;  // +0xba8
	int ms_bonus;  // +0xbac
	CDOTA_Modifier_Item_Necronomicon_Archer_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Necronomicon_Archer_Aura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Necronomicon::~CDOTA_Item_Recipe_Necronomicon  (line 39, @0x0000000002dd7c90, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Necronomicon::~CDOTA_Item_Recipe_Necronomicon(
        CDOTA_Item_Recipe_Necronomicon *const this)
{
  this->_vptr_IHandleEntity = &off_47237B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Necronomicon::~CDOTA_Item_Recipe_Necronomicon  (line 39, @0x0000000002dd7cb0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Necronomicon
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Necronomicon::~CDOTA_Item_Recipe_Necronomicon(
        CDOTA_Item_Recipe_Necronomicon *const this)
{
  this->_vptr_IHandleEntity = &off_47237B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Necronomicon::Schema_DynamicBinding  (line 41, @0x0000000002dd3a90, libserver.so)
// globals: CDOTA_Item_Recipe_Necronomicon::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Necronomicon::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Necronomicon *const this)
{
  return CDOTA_Item_Recipe_Necronomicon::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002dd3aa0, libserver.so)
// globals: CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002dd3ab0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Necronomicon>
void __fastcall CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002dd3ad0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002dd3af0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002dd3b00, libserver.so)
// globals: CDOTA_Item_Recipe_Necronomicon::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Necronomicon::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002dd5b30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002dd6dd0, libserver.so)  // inlines: CDOTA_Item_Recipe_Necronomicon, Construct<CDOTA_Item_Recipe_Necronomicon>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47237B0;
  }
  return p;
}


// CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dd9bc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002dd9be0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo  (line 41, @0x0000000002dde9c0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal, CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal
// strings: "item_recipe_necronomicon", "CDOTA_Item_Recipe_Necronomicon", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility" (8 total)
// globals: `guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo, CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo (10 total)
CEntityClassInfo *__cdecl CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo != 0 )
    return &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo) == 0 )
    return &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo;
  if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
      {
        if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
          && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
        {
          CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
            &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
            "CGameEntity",
            0,
            0,
            &g_EntityRootClassInfo);
          __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
        }
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
          "CBaseEntity",
          0,
          0,
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
        "CDOTABaseAbility",
        "dota_base_ability",
        0,
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
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
    &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo,
    "CDOTA_Item_Recipe_Necronomicon",
    "item_recipe_necronomicon",
    0,
    &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo);
  return &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo;
}


// CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal  (line 41, @0x0000000002ddeb60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_necronomicon", "CDOTA_Item_Recipe_Necronomicon"
// globals: `guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass, CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass, __dso_handle, CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo, CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass);
    CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass._vptr_CEntityClass = off_4723730;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_NecronomiconClass != 0 )
    return &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo,
      "CDOTA_Item_Recipe_Necronomicon",
      "item_recipe_necronomicon",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo);
  }
  CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass.m_pClassInfo = &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo;
  CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_NecronomiconClass = &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass;
  CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClassInfo.m_pClass = &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass;
  CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_NecronomiconClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_NecronomiconClass;
}


// CDOTA_Item_Recipe_Necronomicon_2::Schema_DynamicBinding  (line 45, @0x0000000002dd3b10, libserver.so)
// globals: CDOTA_Item_Recipe_Necronomicon_2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Necronomicon_2::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Necronomicon_2 *const this)
{
  return CDOTA_Item_Recipe_Necronomicon_2::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 45, @0x0000000002dd3b20, libserver.so)
// globals: CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::DestructInstance  (line 45, @0x0000000002dd3b30, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Necronomicon_2>
void __fastcall CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::FreeInstance  (line 45, @0x0000000002dd3b50, libserver.so)
void __fastcall CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::CanAllocate  (line 45, @0x0000000002dd3b70, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 45, @0x0000000002dd3b80, libserver.so)
// globals: CDOTA_Item_Recipe_Necronomicon_2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Necronomicon_2::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::AllocateInstance  (line 45, @0x0000000002dd5b70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::ConstructInstance  (line 45, @0x0000000002dd6e00, libserver.so)  // inlines: CDOTA_Item_Recipe_Necronomicon, CDOTA_Item_Recipe_Necronomicon_2, Construct<CDOTA_Item_Recipe_Necronomicon_2>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47243B0;
  }
  return p;
}


// CDOTA_Item_Recipe_Necronomicon_2::~CDOTA_Item_Recipe_Necronomicon_2  (line 45, @0x0000000002dd7ce0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Necronomicon
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Necronomicon_2::~CDOTA_Item_Recipe_Necronomicon_2(
        CDOTA_Item_Recipe_Necronomicon_2 *const this)
{
  this->_vptr_IHandleEntity = &off_47237B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Necronomicon_2::~CDOTA_Item_Recipe_Necronomicon_2  (line 45, @0x0000000002dd7d00, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Necronomicon, ~CDOTA_Item_Recipe_Necronomicon_2
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Necronomicon_2::~CDOTA_Item_Recipe_Necronomicon_2(
        CDOTA_Item_Recipe_Necronomicon_2 *const this)
{
  this->_vptr_IHandleEntity = &off_47237B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002dd9c10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 45, @0x0000000002dd9c30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal  (line 45, @0x0000000002ddecb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_necronomicon_2", "CDOTA_Item_Recipe_Necronomicon_2"
// globals: `guard variable for'CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class, CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class, __dso_handle, CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2ClassInfo, CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2ClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class);
    CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class._vptr_CEntityClass = off_4724330;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class);
    __cxa_atexit(
      CDOTA_Item_Recipe_Necronomicon_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Necronomicon_2Class != 0 )
    return &CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class;
  if ( `guard variable for'CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2ClassInfo,
      "CDOTA_Item_Recipe_Necronomicon_2",
      "item_recipe_necronomicon_2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2ClassInfo);
  }
  CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class.m_pClassInfo = &CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2ClassInfo;
  CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class.m_pBaseClassInfo = CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Necronomicon_2Class = &CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class;
  CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2ClassInfo.m_pClass = &CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class;
  CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Necronomicon_2Class->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Necronomicon_2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_2Class;
}


// CDOTA_Item_Recipe_Necronomicon_3::Schema_DynamicBinding  (line 46, @0x0000000002dd3b90, libserver.so)
// globals: CDOTA_Item_Recipe_Necronomicon_3::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Necronomicon_3::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Necronomicon_3 *const this)
{
  return CDOTA_Item_Recipe_Necronomicon_3::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 46, @0x0000000002dd3ba0, libserver.so)
// globals: CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::DestructInstance  (line 46, @0x0000000002dd3bb0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Necronomicon_3>
void __fastcall CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::FreeInstance  (line 46, @0x0000000002dd3bd0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::CanAllocate  (line 46, @0x0000000002dd3bf0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 46, @0x0000000002dd3c00, libserver.so)
// globals: CDOTA_Item_Recipe_Necronomicon_3::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Necronomicon_3::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::AllocateInstance  (line 46, @0x0000000002dd5bb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::ConstructInstance  (line 46, @0x0000000002dd6e30, libserver.so)  // inlines: CDOTA_Item_Recipe_Necronomicon, CDOTA_Item_Recipe_Necronomicon_3, Construct<CDOTA_Item_Recipe_Necronomicon_3>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4724FB0;
  }
  return p;
}


// CDOTA_Item_Recipe_Necronomicon_3::~CDOTA_Item_Recipe_Necronomicon_3  (line 46, @0x0000000002dd7d30, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Necronomicon
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Necronomicon_3::~CDOTA_Item_Recipe_Necronomicon_3(
        CDOTA_Item_Recipe_Necronomicon_3 *const this)
{
  this->_vptr_IHandleEntity = &off_47237B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Necronomicon_3::~CDOTA_Item_Recipe_Necronomicon_3  (line 46, @0x0000000002dd7d50, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Necronomicon, ~CDOTA_Item_Recipe_Necronomicon_3
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Necronomicon_3::~CDOTA_Item_Recipe_Necronomicon_3(
        CDOTA_Item_Recipe_Necronomicon_3 *const this)
{
  this->_vptr_IHandleEntity = &off_47237B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002dd9c60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002dd9c80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal  (line 46, @0x0000000002ddee00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_recipe_necronomicon_3", "CDOTA_Item_Recipe_Necronomicon_3"
// globals: `guard variable for'CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class, CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class, __dso_handle, CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3ClassInfo, CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3ClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class);
    CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class._vptr_CEntityClass = off_4724F30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class);
    __cxa_atexit(
      CDOTA_Item_Recipe_Necronomicon_3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Necronomicon_3Class != 0 )
    return &CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class;
  if ( `guard variable for'CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Recipe_Necronomicon::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3ClassInfo,
      "CDOTA_Item_Recipe_Necronomicon_3",
      "item_recipe_necronomicon_3",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3ClassInfo);
  }
  CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class.m_pClassInfo = &CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3ClassInfo;
  CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class.m_pBaseClassInfo = CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Necronomicon_3Class = &CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class;
  CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3ClassInfo.m_pClass = &CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class;
  CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Necronomicon_3Class->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Necronomicon_3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Necronomicon_3Class;
}


// CDOTA_Item_Necronomicon::~CDOTA_Item_Necronomicon  (line 51, @0x0000000002dd7d80, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Necronomicon::~CDOTA_Item_Necronomicon(CDOTA_Item_Necronomicon *const this)
{
  this->_vptr_IHandleEntity = &off_4725BB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Necronomicon::~CDOTA_Item_Necronomicon  (line 51, @0x0000000002dd7da0, libserver.so)  // inlines: ~CDOTA_Item_Necronomicon
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Necronomicon::~CDOTA_Item_Necronomicon(CDOTA_Item_Necronomicon *const this)
{
  this->_vptr_IHandleEntity = &off_4725BB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Necronomicon::Schema_DynamicBinding  (line 53, @0x0000000002dd3c10, libserver.so)
// globals: CDOTA_Item_Necronomicon::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Necronomicon::Schema_DynamicBinding(
        const CDOTA_Item_Necronomicon *const this)
{
  return CDOTA_Item_Necronomicon::s_pSchemaBinding;
}


// CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 53, @0x0000000002dd3c20, libserver.so)
// globals: CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Necronomicon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::DestructInstance  (line 53, @0x0000000002dd3c30, libserver.so)  // inlines: Destruct<CDOTA_Item_Necronomicon>
void __fastcall CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Necronomicon::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::FreeInstance  (line 53, @0x0000000002dd3c50, libserver.so)
void __fastcall CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Necronomicon::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::CanAllocate  (line 53, @0x0000000002dd3c70, libserver.so)
bool __fastcall CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Necronomicon::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 53, @0x0000000002dd3c80, libserver.so)
// globals: CDOTA_Item_Necronomicon::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Necronomicon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Necronomicon::s_pSchemaBinding;
}


// CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::AllocateInstance  (line 53, @0x0000000002dd5bf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Necronomicon::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::ConstructInstance  (line 53, @0x0000000002dd6e60, libserver.so)  // inlines: CDOTA_Item_Necronomicon, CEntityHandle, CHandle, Construct<CDOTA_Item_Necronomicon>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Necronomicon::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 250) = -1;
    *p = &off_4725BB0;
    *(p + 251) = -1;
  }
  return p;
}


// CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 53, @0x0000000002dd9cb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Necronomicon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 53, @0x0000000002dd9cd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Necronomicon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Necronomicon::GetEntityClassInfo  (line 53, @0x0000000002ddef50, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal, CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal
// strings: "CDOTA_Item_Necronomicon", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity" (7 total)
// globals: `guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo, CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo (10 total)
CEntityClassInfo *__cdecl CDOTA_Item_Necronomicon::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo != 0 )
    return &CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo) == 0 )
    return &CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo;
  if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
      {
        if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
          && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
        {
          CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
            &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
            "CGameEntity",
            0,
            0,
            &g_EntityRootClassInfo);
          __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
        }
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
          "CBaseEntity",
          0,
          0,
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
        "CDOTABaseAbility",
        "dota_base_ability",
        0,
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
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
    &CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo,
    "CDOTA_Item_Necronomicon",
    "item_necronomicon",
    0,
    &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo);
  return &CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo;
}


// CDOTA_Item_Necronomicon::GetEntityClassInternal  (line 53, @0x0000000002ddf0f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "CDOTA_Item_Necronomicon"
// globals: `guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass, CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass, __dso_handle, CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo, CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo
CEntityClass *__cdecl CDOTA_Item_Necronomicon::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass);
    CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass._vptr_CEntityClass = off_4725B30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass);
    __cxa_atexit(
      CDOTA_Item_Necronomicon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_NecronomiconClass != 0 )
    return &CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass;
  if ( `guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo,
      "CDOTA_Item_Necronomicon",
      "item_necronomicon",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo);
  }
  CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass.m_pClassInfo = &CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo;
  CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass.m_pBaseClassInfo = CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_NecronomiconClass = &CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass;
  CDOTA_Item_Necronomicon::GetEntityClassInfo(void)::g_EntityCDOTA_Item_NecronomiconClassInfo.m_pClass = &CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass;
  CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_NecronomiconClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Necronomicon::GetEntityClassInternal(void)::g_EntityCDOTA_Item_NecronomiconClass;
}


// CDOTA_Item_Necronomicon::GetIntrinsicModifierName  (line 57, @0x0000000002dd3c90, libserver.so)
// strings: "modifier_item_necronomicon"
const char *__fastcall CDOTA_Item_Necronomicon::GetIntrinsicModifierName(CDOTA_Item_Necronomicon *const this)
{
  return "modifier_item_necronomicon";
}


// CDOTA_Item_Necronomicon::YouForgotToImplementOrDeclareServerClass  (line 71, @0x0000000002dc6ed0, libserver.so)
int __fastcall CDOTA_Item_Necronomicon::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Necronomicon *const this)
{
  return 0;
}


// CDOTA_Item_Necronomicon::GetServerClass  (line 71, @0x0000000002dca920, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Necronomicon::GetServerClass(CDOTA_Item_Necronomicon *const this)
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


// CDOTA_Item_Necronomicon::OnSpellStart  (line 80, @0x0000000002dd17d0, libserver.so)  // inlines: Get, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetModifier_Constant_First, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IsListeningToEvent, IsTempestDouble, Set, SetRefCountsModifiers, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CBaseEntity::GetAbsOrigin, DOTA_EmitSound, CEntityHandle::operator CEntityInstance*, CEntityHandle::GetHandleEntity, CFmtStrN<256, false>::CFmtStrN, DOTA_Character_ScriptSpawn_Synchronous, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, FindClearSpaceForUnit (26 total)
// strings: "DOTA_Item.Necronomicon.Activate", "npc_dota_necronomicon_warrior_%d", "npc_dota_necronomicon_archer_%d", "particles/items_fx/necronomicon_spawn_warrior.vpcf", "particles/items_fx/necronomicon_spawn.vpcf", "summon_duration" (9 total)
void __fastcall CDOTA_Item_Necronomicon::OnSpellStart(CDOTA_Item_Necronomicon *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __int64 v3; // rdx
  CDOTA_BaseNPC *v4; // rax
  __m128i x_low; // xmm3
  __m128i y_low; // xmm4
  float v7; // ebx
  float v8; // r12d
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm2_4
  CDOTA_BaseNPC *v13; // rax
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // rbx
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rbx
  CDOTA_BaseNPC *v18; // rax
  CBaseEntity *v19; // rbx
  CDOTA_BaseNPC *v20; // rax
  IHandleEntity *HandleEntity; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // r12
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // r13
  CEntityIdentity *m_pEntity; // rdx
  int v27; // eax
  __int16 v28; // cx
  CEntityIdentity *v29; // rdx
  int v30; // eax
  __int16 v31; // cx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  int v36; // ebx
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  int v39; // eax
  CDOTA_BaseNPC *v40; // rax
  int v41; // eax
  float v42; // xmm1_4
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  int BodygroupByName; // ebx
  int EffectiveLevel; // eax
  int v47; // ebx
  int v48; // eax
  int v49; // r14d
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v52; // rax
  CDOTA_ParticleManager *v53; // rax
  int v54; // ebx
  CDOTA_ParticleManager *v55; // rax
  float v56; // [rsp+8h] [rbp-2A8h]
  Vector vDirection; // [rsp+10h] [rbp-2A0h] BYREF
  Vector vMyPos; // [rsp+20h] [rbp-290h]
  KeyValues kv; // [rsp+30h] [rbp-280h] BYREF
  CFmtStr warriorScriptName; // [rsp+50h] [rbp-260h] BYREF
  CFmtStr archerScriptName; // [rsp+160h] [rbp-150h] BYREF
  unsigned __int64 v62; // [rsp+278h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster->m_ModifierManager.m_buffsForModifiers[166];
  if ( v3 != 0xFF
    && Caster->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0
    && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         &Caster->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
         &CModifierParams::s_Default) == 1.0 )
  {
    this->m_bRefCountsModifiers = 1;
  }
  v4 = CDOTABaseAbility::GetCaster(this);
  (*(v4->_vptr_IHandleEntity + 61))(v4, &vDirection, 0, 0);
  x_low = LODWORD(vDirection.x);
  y_low = LODWORD(vDirection.y);
  *x_low.m128i_i32 = vDirection.x * 150.0;
  *y_low.m128i_i32 = vDirection.y * 150.0;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  v56 = 150.0 * vDirection.z;
  v9 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = v56 + AbsOrigin->z;
  v12 = v7 + AbsOrigin->x;
  vMyPos.y = v8 + AbsOrigin->y;
  vMyPos.z = v11;
  vMyPos.x = v12;
  v13 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "DOTA_Item.Necronomicon.Activate", v13);
  v14 = CEntityHandle::operator CEntityInstance *(&this->m_hWarrior);
  v15 = v14;
  if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 && (*(v14->_vptr_IHandleEntity + 408))(v14) != 0 )
    CDOTA_BaseNPC::ForceKill(v15, 0);
  v16 = CEntityHandle::operator CEntityInstance *(&this->m_hArcher);
  v17 = v16;
  if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 && (*(v16->_vptr_IHandleEntity + 408))(v16) != 0 )
    CDOTA_BaseNPC::ForceKill(v17, 0);
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = v18;
  if ( v18 == 0 || (v18->m_iUnitType & 1) == 0 )
  {
    v20 = CDOTABaseAbility::GetCaster(this);
    if ( v20 == 0
      || !v20->m_bIsDOTANPC
      || (v20->m_iUnitType & 2) == 0
      || (HandleEntity = CEntityHandle::GetHandleEntity(&v20->m_hOwnerEntity.m_Value),
          v19 = HandleEntity,
          HandleEntity == 0)
      || BYTE3(HandleEntity[42]._vptr_IHandleEntity) == 0
      || (HandleEntity[261]._vptr_IHandleEntity & 1) == 0 )
    {
      v19 = 0;
    }
  }
  CFmtStrN<256,false>::CFmtStrN(&warriorScriptName, "npc_dota_necronomicon_warrior_%d", this->m_iLevel.m_Value);
  CFmtStrN<256,false>::CFmtStrN(&archerScriptName, "npc_dota_necronomicon_archer_%d", this->m_iLevel.m_Value);
  v22 = CDOTABaseAbility::GetCaster(this);
  v23 = DOTA_Character_ScriptSpawn_Synchronous(warriorScriptName.m_szBuf, v22->m_iTeamNum.m_Value, v19, 0, 0, vMyPos);
  v24 = CDOTABaseAbility::GetCaster(this);
  v25 = DOTA_Character_ScriptSpawn_Synchronous(archerScriptName.m_szBuf, v24->m_iTeamNum.m_Value, v19, 0, 0, vMyPos);
  if ( v23 != 0 && (m_pEntity = v23->m_pEntity) != 0 )
  {
    v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v28 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hWarrior.m_Index) = v28 | this->m_hWarrior.m_Index & 0x8000;
    this->m_hWarrior.m_Index = (v27 << 15) | this->m_hWarrior.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hWarrior.m_Index = -1;
  }
  if ( v25 != 0 && (v29 = v25->m_pEntity) != 0 )
  {
    v30 = (v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1);
    v31 = 0x7FFF;
    if ( v29->m_EHandle.m_Index != -1 )
      v31 = v29->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hArcher.m_Index) = v31 | this->m_hArcher.m_Index & 0x8000;
    this->m_hArcher.m_Index = (v30 << 15) | this->m_hArcher.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hArcher.m_Index = -1;
  }
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/items_fx/necronomicon_spawn_warrior.vpcf",
               1,
               v23,
               0,
               0);
  v34 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v34, Particle);
  v35 = GetParticleManager();
  v36 = CDOTA_ParticleManager::CreateParticle(v35, "particles/items_fx/necronomicon_spawn.vpcf", 1, v25, 0, 0);
  v37 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v37, v36);
  FindClearSpaceForUnit(v23, vMyPos, 1);
  FindClearSpaceForUnit(v25, vMyPos, 1);
  v38 = CDOTABaseAbility::GetCaster(this);
  v39 = (*(v38->_vptr_IHandleEntity + 414))(v38);
  CDOTA_BaseNPC::SetControllableByPlayer(v23, v39, 0);
  v40 = CDOTABaseAbility::GetCaster(this);
  v41 = (*(v40->_vptr_IHandleEntity + 414))(v40);
  CDOTA_BaseNPC::SetControllableByPlayer(v25, v41, 0);
  v23->m_iUnitType |= 0x8000u;
  v25->m_iUnitType |= 0x8000u;
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "summon_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_kill");
  KeyValues::SetFloat(&kv, "duration", v42);
  v43 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v23, v43, this, "modifier_kill", &kv, 0);
  v44 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v25, v44, this, "modifier_kill", &kv, 0);
  BodygroupByName = CBaseAnimating::FindBodygroupByName(v23, "necro_gear1");
  EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
  CBaseAnimating::SetBodygroup(v23, BodygroupByName, EffectiveLevel);
  v47 = CBaseAnimating::FindBodygroupByName(v25, "necro_gear1");
  v48 = CDOTABaseAbility::GetEffectiveLevel(this);
  CBaseAnimating::SetBodygroup(v25, v47, v48);
  if ( CDOTABaseAbility::GetEffectiveLevel(this) == 2 )
  {
    v53 = GetParticleManager();
    v54 = CDOTA_ParticleManager::CreateParticle(v53, "particles/items_fx/necronomicon_true_sight.vpcf", 1, v23, 0, 0);
    v55 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v55, v54);
  }
  if ( this->m_iLevel.m_Value > 0 )
  {
    v49 = 0;
    do
    {
      for ( i = 0; i != 24; ++i )
      {
        AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v23, i);
        if ( AbilityByIndex != 0 )
          CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
        v52 = CDOTA_BaseNPC::GetAbilityByIndex(v25, i);
        if ( v52 != 0 )
          CDOTABaseAbility::UpgradeAbility(v52, 0);
      }
      ++v49;
    }
    while ( v49 < this->m_iLevel.m_Value );
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Item_Necronomicon::~CDOTA_Modifier_Item_Necronomicon  (line 207, @0x0000000002dd6700, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Necronomicon::~CDOTA_Modifier_Item_Necronomicon(
        CDOTA_Modifier_Item_Necronomicon *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Necronomicon::~CDOTA_Modifier_Item_Necronomicon  (line 207, @0x0000000002dd6720, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Necronomicon
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Necronomicon::~CDOTA_Modifier_Item_Necronomicon(
        CDOTA_Modifier_Item_Necronomicon *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Necronomicon::OnCreated  (line 229, @0x0000000002dd0d70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_Necronomicon::OnCreated(
        CDOTA_Modifier_Item_Necronomicon *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_intellect", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_strength", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_intellect = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_strength = 0;
}


// CDOTA_Modifier_Item_Necronomicon::OnItemCombine  (line 237, @0x0000000002dd0f20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_Necronomicon::OnItemCombine(CDOTA_Modifier_Item_Necronomicon *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_intellect", -1, 0);
    v3 = CDOTA_Buff::GetAbility(this);
    if ( v3 != 0 )
    {
LABEL_3:
      this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v3, "bonus_strength", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_intellect = 0;
    v3 = CDOTA_Buff::GetAbility(this);
    if ( v3 != 0 )
      goto LABEL_3;
  }
  this->bonus_strength = 0;
}


// CDOTA_Modifier_Item_Necronomicon::DeclareFunctions  (line 245, @0x0000000002dc6ee0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Necronomicon::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_Necronomicon::GetModifierBonusStats_Strength(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Necronomicon::DeclareFunctions(CDOTA_Modifier_Item_Necronomicon *const this)
{
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_Necronomicon::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_Necronomicon::GetModifierBonusStats_Strength;
}


// CDOTA_Item_Necronomicon_Level2::~CDOTA_Item_Necronomicon_Level2  (line 251, @0x0000000002dd7dd0, libserver.so)  // inlines: ~CDOTA_Item_Necronomicon
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Necronomicon_Level2::~CDOTA_Item_Necronomicon_Level2(
        CDOTA_Item_Necronomicon_Level2 *const this)
{
  this->_vptr_IHandleEntity = &off_4725BB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Necronomicon_Level2::~CDOTA_Item_Necronomicon_Level2  (line 251, @0x0000000002dd7df0, libserver.so)  // inlines: ~CDOTA_Item_Necronomicon, ~CDOTA_Item_Necronomicon_Level2
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Necronomicon_Level2::~CDOTA_Item_Necronomicon_Level2(
        CDOTA_Item_Necronomicon_Level2 *const this)
{
  this->_vptr_IHandleEntity = &off_4725BB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Necronomicon_Level2::Schema_DynamicBinding  (line 253, @0x0000000002dd3ca0, libserver.so)
// globals: CDOTA_Item_Necronomicon_Level2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Necronomicon_Level2::Schema_DynamicBinding(
        const CDOTA_Item_Necronomicon_Level2 *const this)
{
  return CDOTA_Item_Necronomicon_Level2::s_pSchemaBinding;
}


// CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 253, @0x0000000002dd3cb0, libserver.so)
// globals: CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::DestructInstance  (line 253, @0x0000000002dd3cc0, libserver.so)  // inlines: Destruct<CDOTA_Item_Necronomicon_Level2>
void __fastcall CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::FreeInstance  (line 253, @0x0000000002dd3ce0, libserver.so)
void __fastcall CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::CanAllocate  (line 253, @0x0000000002dd3d00, libserver.so)
bool __fastcall CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 253, @0x0000000002dd3d10, libserver.so)
// globals: CDOTA_Item_Necronomicon_Level2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Necronomicon_Level2::s_pSchemaBinding;
}


// CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::AllocateInstance  (line 253, @0x0000000002dd5c30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::ConstructInstance  (line 253, @0x0000000002dd6eb0, libserver.so)  // inlines: CDOTA_Item_Necronomicon, CDOTA_Item_Necronomicon_Level2, CEntityHandle, CHandle, Construct<CDOTA_Item_Necronomicon_Level2>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 250) = -1;
    *(p + 251) = -1;
    *p = &off_4726AD0;
  }
  return p;
}


// CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 253, @0x0000000002dd9d00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 253, @0x0000000002dd9d20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal  (line 253, @0x0000000002ddf240, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item_Necronomicon::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_necronomicon_2", "CDOTA_Item_Necronomicon_Level2"
// globals: `guard variable for'CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class, CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class, __dso_handle, CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Necronomicon_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level2ClassInfo, CDOTA_Item_Necronomicon_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level2ClassInfo
CEntityClass *__cdecl CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class);
    CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class._vptr_CEntityClass = off_4726A50;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class);
    __cxa_atexit(
      CDOTA_Item_Necronomicon_Level2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Necronomicon_Level2Class != 0 )
    return &CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class;
  if ( `guard variable for'CDOTA_Item_Necronomicon_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Necronomicon_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Necronomicon::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Necronomicon_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level2ClassInfo,
      "CDOTA_Item_Necronomicon_Level2",
      "item_necronomicon_2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Necronomicon_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level2ClassInfo);
  }
  CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class.m_pClassInfo = &CDOTA_Item_Necronomicon_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level2ClassInfo;
  CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class.m_pBaseClassInfo = CDOTA_Item_Necronomicon_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Necronomicon_Level2Class = &CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class;
  CDOTA_Item_Necronomicon_Level2::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level2ClassInfo.m_pClass = &CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class;
  CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Necronomicon_Level2Class->m_pComponentOverrides = 0;
  return &CDOTA_Item_Necronomicon_Level2::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level2Class;
}


// CDOTA_Item_Necronomicon_Level2::YouForgotToImplementOrDeclareServerClass  (line 262, @0x0000000002dc6f20, libserver.so)
int __fastcall CDOTA_Item_Necronomicon_Level2::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Necronomicon_Level2 *const this)
{
  return 0;
}


// CDOTA_Item_Necronomicon_Level2::GetServerClass  (line 262, @0x0000000002dca9a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Necronomicon_Level2::GetServerClass(CDOTA_Item_Necronomicon_Level2 *const this)
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


// CDOTA_Item_Necronomicon_Level3::~CDOTA_Item_Necronomicon_Level3  (line 271, @0x0000000002dd7e20, libserver.so)  // inlines: ~CDOTA_Item_Necronomicon
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Necronomicon_Level3::~CDOTA_Item_Necronomicon_Level3(
        CDOTA_Item_Necronomicon_Level3 *const this)
{
  this->_vptr_IHandleEntity = &off_4725BB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Necronomicon_Level3::~CDOTA_Item_Necronomicon_Level3  (line 271, @0x0000000002dd7e40, libserver.so)  // inlines: ~CDOTA_Item_Necronomicon, ~CDOTA_Item_Necronomicon_Level3
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Necronomicon_Level3::~CDOTA_Item_Necronomicon_Level3(
        CDOTA_Item_Necronomicon_Level3 *const this)
{
  this->_vptr_IHandleEntity = &off_4725BB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Necronomicon_Level3::Schema_DynamicBinding  (line 273, @0x0000000002dd3d20, libserver.so)
// globals: CDOTA_Item_Necronomicon_Level3::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Necronomicon_Level3::Schema_DynamicBinding(
        const CDOTA_Item_Necronomicon_Level3 *const this)
{
  return CDOTA_Item_Necronomicon_Level3::s_pSchemaBinding;
}


// CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 273, @0x0000000002dd3d30, libserver.so)
// globals: CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::DestructInstance  (line 273, @0x0000000002dd3d40, libserver.so)  // inlines: Destruct<CDOTA_Item_Necronomicon_Level3>
void __fastcall CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::FreeInstance  (line 273, @0x0000000002dd3d60, libserver.so)
void __fastcall CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::CanAllocate  (line 273, @0x0000000002dd3d80, libserver.so)
bool __fastcall CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 273, @0x0000000002dd3d90, libserver.so)
// globals: CDOTA_Item_Necronomicon_Level3::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Necronomicon_Level3::s_pSchemaBinding;
}


// CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::AllocateInstance  (line 273, @0x0000000002dd5c70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::ConstructInstance  (line 273, @0x0000000002dd6f00, libserver.so)  // inlines: CDOTA_Item_Necronomicon, CDOTA_Item_Necronomicon_Level3, CEntityHandle, CHandle, Construct<CDOTA_Item_Necronomicon_Level3>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *(p + 250) = -1;
    *(p + 251) = -1;
    *p = &off_47276D0;
  }
  return p;
}


// CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 273, @0x0000000002dd9d50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 273, @0x0000000002dd9d70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal  (line 273, @0x0000000002ddf390, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item_Necronomicon::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "item_necronomicon_3", "CDOTA_Item_Necronomicon_Level3"
// globals: `guard variable for'CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class, CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class, __dso_handle, CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Necronomicon_Level3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level3ClassInfo, CDOTA_Item_Necronomicon_Level3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level3ClassInfo
CEntityClass *__cdecl CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class);
    CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class._vptr_CEntityClass = off_4727650;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class);
    __cxa_atexit(
      CDOTA_Item_Necronomicon_Level3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Necronomicon_Level3Class != 0 )
    return &CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class;
  if ( `guard variable for'CDOTA_Item_Necronomicon_Level3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level3ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Necronomicon_Level3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level3ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item_Necronomicon::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Necronomicon_Level3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level3ClassInfo,
      "CDOTA_Item_Necronomicon_Level3",
      "item_necronomicon_3",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Necronomicon_Level3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level3ClassInfo);
  }
  CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class.m_pClassInfo = &CDOTA_Item_Necronomicon_Level3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level3ClassInfo;
  CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class.m_pBaseClassInfo = CDOTA_Item_Necronomicon_Level3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level3ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Necronomicon_Level3Class = &CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class;
  CDOTA_Item_Necronomicon_Level3::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Necronomicon_Level3ClassInfo.m_pClass = &CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class;
  CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Necronomicon_Level3Class->m_pComponentOverrides = 0;
  return &CDOTA_Item_Necronomicon_Level3::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Necronomicon_Level3Class;
}


// CDOTA_Item_Necronomicon_Level3::YouForgotToImplementOrDeclareServerClass  (line 282, @0x0000000002dc6f30, libserver.so)
int __fastcall CDOTA_Item_Necronomicon_Level3::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Necronomicon_Level3 *const this)
{
  return 0;
}


// CDOTA_Item_Necronomicon_Level3::GetServerClass  (line 282, @0x0000000002dca8e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Necronomicon_Level3::GetServerClass(CDOTA_Item_Necronomicon_Level3 *const this)
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


// CDOTA_Modifier_Item_Necronomicon::GetModifierBonusStats_Intellect  (line 291, @0x0000000002dc6f40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Necronomicon::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_Necronomicon *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Necronomicon::GetModifierBonusStats_Strength  (line 298, @0x0000000002dc6f60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Necronomicon::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_Necronomicon *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::~CDOTA_Ability_Necronomicon_Warrior_ManaBurn  (line 306, @0x0000000002dd84b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::~CDOTA_Ability_Necronomicon_Warrior_ManaBurn(
        CDOTA_Ability_Necronomicon_Warrior_ManaBurn *const this)
{
  this->_vptr_IHandleEntity = &off_47282D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::~CDOTA_Ability_Necronomicon_Warrior_ManaBurn  (line 306, @0x0000000002dd84d0, libserver.so)  // inlines: ~CDOTA_Ability_Necronomicon_Warrior_ManaBurn
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::~CDOTA_Ability_Necronomicon_Warrior_ManaBurn(
        CDOTA_Ability_Necronomicon_Warrior_ManaBurn *const this)
{
  this->_vptr_IHandleEntity = &off_47282D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::Schema_DynamicBinding  (line 308, @0x0000000002dd3da0, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Warrior_ManaBurn::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::Schema_DynamicBinding(
        const CDOTA_Ability_Necronomicon_Warrior_ManaBurn *const this)
{
  return CDOTA_Ability_Necronomicon_Warrior_ManaBurn::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 308, @0x0000000002dd3db0, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::DestructInstance  (line 308, @0x0000000002dd3dc0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Necronomicon_Warrior_ManaBurn>
void __fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::FreeInstance  (line 308, @0x0000000002dd3de0, libserver.so)
void __fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::CanAllocate  (line 308, @0x0000000002dd3e00, libserver.so)
bool __fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 308, @0x0000000002dd3e10, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Warrior_ManaBurn::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necronomicon_Warrior_ManaBurn::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::AllocateInstance  (line 308, @0x0000000002dd5cb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::ConstructInstance  (line 308, @0x0000000002dd7920, libserver.so)  // inlines: CDOTA_Ability_Necronomicon_Warrior_ManaBurn, Construct<CDOTA_Ability_Necronomicon_Warrior_ManaBurn>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_47282D0;
  }
  return p;
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 308, @0x0000000002dda3e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 308, @0x0000000002dda400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal  (line 308, @0x0000000002ddf4e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "necronomicon_warrior_mana_burn", "CDOTA_Ability_Necronomicon_Warrior_ManaBurn"
// globals: `guard variable for'CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass, CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass, __dso_handle, CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClassInfo, CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClassInfo
CEntityClass *__cdecl CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass);
    CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass._vptr_CEntityClass = off_4728250;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass);
    __cxa_atexit(
      CDOTA_Ability_Necronomicon_Warrior_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass != 0 )
    return &CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass;
  if ( `guard variable for'CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClassInfo,
      "CDOTA_Ability_Necronomicon_Warrior_ManaBurn",
      "necronomicon_warrior_mana_burn",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClassInfo);
  }
  CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass.m_pClassInfo = &CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClassInfo;
  CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass.m_pBaseClassInfo = CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass = &CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass;
  CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClassInfo.m_pClass = &CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass;
  CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_ManaBurnClass;
}


// CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetIntrinsicModifierName  (line 311, @0x0000000002dd3e20, libserver.so)
// strings: "modifier_necronomicon_warrior_mana_burn"
const char *__fastcall CDOTA_Ability_Necronomicon_Warrior_ManaBurn::GetIntrinsicModifierName(
        CDOTA_Ability_Necronomicon_Warrior_ManaBurn *const this)
{
  return "modifier_necronomicon_warrior_mana_burn";
}


// CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::~CDOTA_Modifier_Necronomicon_Warrior_ManaBurn  (line 320, @0x0000000002dd6b10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::~CDOTA_Modifier_Necronomicon_Warrior_ManaBurn(
        CDOTA_Modifier_Necronomicon_Warrior_ManaBurn *const this)
{
  this->_vptr_CDOTA_Buff = &off_4728D90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::~CDOTA_Modifier_Necronomicon_Warrior_ManaBurn  (line 320, @0x0000000002dd6b30, libserver.so)  // inlines: ~CDOTA_Modifier_Necronomicon_Warrior_ManaBurn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::~CDOTA_Modifier_Necronomicon_Warrior_ManaBurn(
        CDOTA_Modifier_Necronomicon_Warrior_ManaBurn *const this)
{
  this->_vptr_CDOTA_Buff = &off_4728D90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::IsHidden  (line 331, @0x0000000002dd3e30, libserver.so)
bool __fastcall CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::IsHidden(
        CDOTA_Modifier_Necronomicon_Warrior_ManaBurn *const this)
{
  return 1;
}


// CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::OnCreated  (line 342, @0x0000000002dd09b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "burn_amount"
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::OnCreated(
        CDOTA_Modifier_Necronomicon_Warrior_ManaBurn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->burn_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "burn_amount", -1, 0);
  else
    this->burn_amount = 0;
}


// CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::OnRefresh  (line 349, @0x0000000002dd0830, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "burn_amount"
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::OnRefresh(
        CDOTA_Modifier_Necronomicon_Warrior_ManaBurn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->burn_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "burn_amount", -1, 0);
  else
    this->burn_amount = 0;
}


// CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::DeclareFunctions  (line 356, @0x0000000002dc6f80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::GetModifierProcAttack_Feedback(CModifierParams const&)
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::DeclareFunctions(
        CDOTA_Modifier_Necronomicon_Warrior_ManaBurn *const this)
{
  this->m_Functions[7].__pfn = CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::GetModifierProcAttack_Feedback;
  this->m_Functions[7].__delta = 0;
}


// CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::GetModifierProcAttack_Feedback  (line 363, @0x0000000002dd0070, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_BaseNPC::ReduceMana, CDOTA_CombatLog::AddManaDamageEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "burn_damage_conversion", "particles/generic_gameplay/generic_manaburn.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Necronomicon_Warrior_ManaBurn::GetModifierProcAttack_Feedback(
        CDOTA_Modifier_Necronomicon_Warrior_ManaBurn *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTABaseAbility *Ability; // rax
  float v9; // xmm1_4
  float burn_amount; // xmm0_4
  int v11; // r13d
  CDOTABaseAbility *v12; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v15; // rax
  __m128i v16; // xmm2
  int burn_damage_conversion[9]; // [rsp+Ch] [rbp-24h] BYREF
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[params->htarget.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && *&m_pInstance[44].m_worldGroupId.m_nHashCode > 0.0
    && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
  {
    result.m_szVal = CDOTA_Buff::GetParent(this);
    *&result.m_eType = 1;
    if ( (result.m_szVal[2787] & 0x10) == 0 )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      DotaRetrieveAbilityValue<int>(Ability, burn_damage_conversion, "burn_damage_conversion");
      v9 = *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id;
      burn_amount = this->burn_amount;
      if ( v9 <= burn_amount )
        v11 = v9;
      else
        v11 = burn_amount;
      CDOTA_BaseNPC::ReduceMana(m_pInstance, v11, v9);
      v12 = CDOTA_Buff::GetAbility(this);
      CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, v12, m_pInstance, v11);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/generic_gameplay/generic_manaburn.vpcf",
                   1,
                   m_pInstance,
                   0,
                   0);
      v15 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v15, Particle);
      *v16.m128i_i32 = (burn_damage_conversion[0] * v11 / 100);
      *&result.m_eType = (_mm_cvtsi128_si32(v16) << 32) | 1;
    }
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::~CDOTA_Ability_Necronomicon_Warrior_LastWill  (line 392, @0x0000000002dd8500, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::~CDOTA_Ability_Necronomicon_Warrior_LastWill(
        CDOTA_Ability_Necronomicon_Warrior_LastWill *const this)
{
  this->_vptr_IHandleEntity = &off_47290F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::~CDOTA_Ability_Necronomicon_Warrior_LastWill  (line 392, @0x0000000002dd8520, libserver.so)  // inlines: ~CDOTA_Ability_Necronomicon_Warrior_LastWill
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::~CDOTA_Ability_Necronomicon_Warrior_LastWill(
        CDOTA_Ability_Necronomicon_Warrior_LastWill *const this)
{
  this->_vptr_IHandleEntity = &off_47290F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::Schema_DynamicBinding  (line 394, @0x0000000002dd3e40, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Warrior_LastWill::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::Schema_DynamicBinding(
        const CDOTA_Ability_Necronomicon_Warrior_LastWill *const this)
{
  return CDOTA_Ability_Necronomicon_Warrior_LastWill::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 394, @0x0000000002dd3e50, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::DestructInstance  (line 394, @0x0000000002dd3e60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Necronomicon_Warrior_LastWill>
void __fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::FreeInstance  (line 394, @0x0000000002dd3e80, libserver.so)
void __fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::CanAllocate  (line 394, @0x0000000002dd3ea0, libserver.so)
bool __fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 394, @0x0000000002dd3eb0, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Warrior_LastWill::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necronomicon_Warrior_LastWill::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::AllocateInstance  (line 394, @0x0000000002dd5cf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::ConstructInstance  (line 394, @0x0000000002dd7950, libserver.so)  // inlines: CDOTA_Ability_Necronomicon_Warrior_LastWill, Construct<CDOTA_Ability_Necronomicon_Warrior_LastWill>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_47290F0;
  }
  return p;
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 394, @0x0000000002dda430, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 394, @0x0000000002dda450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal  (line 394, @0x0000000002ddf630, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "necronomicon_warrior_last_will", "CDOTA_Ability_Necronomicon_Warrior_LastWill"
// globals: `guard variable for'CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass, CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass, __dso_handle, CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClassInfo, CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClassInfo
CEntityClass *__cdecl CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass);
    CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass._vptr_CEntityClass = off_4729070;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass);
    __cxa_atexit(
      CDOTA_Ability_Necronomicon_Warrior_LastWill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass != 0 )
    return &CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass;
  if ( `guard variable for'CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClassInfo,
      "CDOTA_Ability_Necronomicon_Warrior_LastWill",
      "necronomicon_warrior_last_will",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClassInfo);
  }
  CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass.m_pClassInfo = &CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClassInfo;
  CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass.m_pBaseClassInfo = CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass = &CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass;
  CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClassInfo.m_pClass = &CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass;
  CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Necronomicon_Warrior_LastWill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_LastWillClass;
}


// CDOTA_Ability_Necronomicon_Warrior_LastWill::GetIntrinsicModifierName  (line 397, @0x0000000002dd3ec0, libserver.so)
// strings: "modifier_necronomicon_warrior_last_will"
const char *__fastcall CDOTA_Ability_Necronomicon_Warrior_LastWill::GetIntrinsicModifierName(
        CDOTA_Ability_Necronomicon_Warrior_LastWill *const this)
{
  return "modifier_necronomicon_warrior_last_will";
}


// CDOTA_Modifier_Necronomicon_Warrior_LastWill::~CDOTA_Modifier_Necronomicon_Warrior_LastWill  (line 406, @0x0000000002dd6ac0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_LastWill::~CDOTA_Modifier_Necronomicon_Warrior_LastWill(
        CDOTA_Modifier_Necronomicon_Warrior_LastWill *const this)
{
  this->_vptr_CDOTA_Buff = &off_4729BB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necronomicon_Warrior_LastWill::~CDOTA_Modifier_Necronomicon_Warrior_LastWill  (line 406, @0x0000000002dd6ae0, libserver.so)  // inlines: ~CDOTA_Modifier_Necronomicon_Warrior_LastWill
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_LastWill::~CDOTA_Modifier_Necronomicon_Warrior_LastWill(
        CDOTA_Modifier_Necronomicon_Warrior_LastWill *const this)
{
  this->_vptr_CDOTA_Buff = &off_4729BB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necronomicon_Warrior_LastWill::IsHidden  (line 417, @0x0000000002dd3ed0, libserver.so)
bool __fastcall CDOTA_Modifier_Necronomicon_Warrior_LastWill::IsHidden(
        CDOTA_Modifier_Necronomicon_Warrior_LastWill *const this)
{
  return 1;
}


// CDOTA_Modifier_Necronomicon_Warrior_LastWill::OnCreated  (line 428, @0x0000000002dd0ad0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_LastWill::OnCreated(
        CDOTA_Modifier_Necronomicon_Warrior_LastWill *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->explosion = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "explosion", -1, 0);
  else
    this->explosion = 0;
}


// CDOTA_Modifier_Necronomicon_Warrior_LastWill::OnRefresh  (line 435, @0x0000000002dd0890, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_LastWill::OnRefresh(
        CDOTA_Modifier_Necronomicon_Warrior_LastWill *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->explosion = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "explosion", -1, 0);
  else
    this->explosion = 0;
}


// CDOTA_Modifier_Necronomicon_Warrior_LastWill::DeclareFunctions  (line 442, @0x0000000002dc6fa0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Necronomicon_Warrior_LastWill::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_LastWill::DeclareFunctions(
        CDOTA_Modifier_Necronomicon_Warrior_LastWill *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Necronomicon_Warrior_LastWill::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Necronomicon_Warrior_LastWill::OnDeath  (line 449, @0x0000000002dca9e0, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, Unit, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::DestroyAllParticleEffectsInvolving, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/items_fx/necronomicon_warrior_last_will.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Necronomicon_Warrior_LastWill::OnDeath(
        CDOTA_Modifier_Necronomicon_Warrior_LastWill *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // r13
  char m_CScriptComponent_high; // r14
  CEntityInstance *v16; // rdi
  void *v17; // rax
  char **v18; // rax
  char *v19; // rsi
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v25; // r15
  CDOTA_ParticleManager *v26; // rax
  const Vector *v27; // r14
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // r14
  CDOTA_ParticleManager *v30; // rax
  __int64 v31; // r12
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  float flDamage; // [rsp+Ch] [rbp-34h]
  vec_t flDamagea; // [rsp+Ch] [rbp-34h]
  Vector v37; // 0:xmm0_8.8,8:xmm1_4.4

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hunit.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance
    && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyAllParticleEffectsInvolving(ParticleManager, Parent, 1);
    v11 = params->hattacker.m_Index;
    if ( v11 + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[params->hattacker.m_Index & 0x1FF];
        if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
        {
          v14 = v13->m_pInstance;
          if ( v13->m_pInstance != 0
            && BYTE3(v14[7]._vptr_IHandleEntity) != 0
            && (*(v14->_vptr_IHandleEntity + 408))(v13->m_pInstance) != 0
            && CDOTA_Buff::GetParent(this) != v14
            && (v14[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
          {
            m_CScriptComponent_high = HIBYTE(v14[7].m_CScriptComponent);
            if ( m_CScriptComponent_high != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
            {
              v16 = CEntityHandle::operator CEntityInstance *(&params->inflictor);
              if ( v16 == 0
                || (v17 = __dynamic_cast(v16, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0)) == 0
                || (v18 = *(v17 + 111)) == 0
                || (v19 = *v18, *v18 == 0)
                || v19 != "item_hand_of_midas" && strcmp(v19, "item_hand_of_midas") != 0 )
              {
                flDamage = this->explosion;
                Ability = CDOTA_Buff::GetAbility(this);
                v21 = CDOTA_Buff::GetParent(this);
                ApplyDamage(v21, v14, Ability, flDamage, 2, 0);
                v22 = GetParticleManager();
                LODWORD(Ability) = CDOTA_ParticleManager::CreateParticle(
                                     v22,
                                     "particles/items_fx/necronomicon_warrior_last_will.vpcf",
                                     2,
                                     0,
                                     0,
                                     0);
                v23 = CDOTA_Buff::GetParent(this);
                AbsOrigin = CBaseEntity::GetAbsOrigin(v23);
                v25 = CDOTA_Buff::GetParent(this);
                v26 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v26, Ability, 0, v25, 5, "attach_hitloc", *AbsOrigin, 1);
                v27 = CBaseEntity::GetAbsOrigin(v14);
                v28 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v28, Ability, 1, v14, 5, "attach_hitloc", *v27, 1);
                v29 = CDOTA_Buff::GetParent(this);
                v30 = GetParticleManager();
                v31 = *&vec3_invalid.x;
                flDamagea = vec3_invalid.z;
                CDOTA_ParticleManager::SetParticleControlEnt(v30, Ability, 2, v29, 1, 0, vec3_invalid, 1);
                v32 = GetParticleManager();
                *&v37.x = v31;
                v37.z = flDamagea;
                CDOTA_ParticleManager::SetParticleControlEnt(v32, Ability, 3, v14, 1, 0, v37, 1);
                v33 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v33, Ability);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::~CDOTA_Ability_Necronomicon_Warrior_Sight  (line 488, @0x0000000002dd8550, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::~CDOTA_Ability_Necronomicon_Warrior_Sight(
        CDOTA_Ability_Necronomicon_Warrior_Sight *const this)
{
  this->_vptr_IHandleEntity = &off_4729F10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::~CDOTA_Ability_Necronomicon_Warrior_Sight  (line 488, @0x0000000002dd8570, libserver.so)  // inlines: ~CDOTA_Ability_Necronomicon_Warrior_Sight
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::~CDOTA_Ability_Necronomicon_Warrior_Sight(
        CDOTA_Ability_Necronomicon_Warrior_Sight *const this)
{
  this->_vptr_IHandleEntity = &off_4729F10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::Schema_DynamicBinding  (line 490, @0x0000000002dd3ee0, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Warrior_Sight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::Schema_DynamicBinding(
        const CDOTA_Ability_Necronomicon_Warrior_Sight *const this)
{
  return CDOTA_Ability_Necronomicon_Warrior_Sight::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 490, @0x0000000002dd3ef0, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::DestructInstance  (line 490, @0x0000000002dd3f00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Necronomicon_Warrior_Sight>
void __fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::FreeInstance  (line 490, @0x0000000002dd3f20, libserver.so)
void __fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::CanAllocate  (line 490, @0x0000000002dd3f40, libserver.so)
bool __fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 490, @0x0000000002dd3f50, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Warrior_Sight::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necronomicon_Warrior_Sight::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::AllocateInstance  (line 490, @0x0000000002dd5d30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::ConstructInstance  (line 490, @0x0000000002dd7980, libserver.so)  // inlines: CDOTA_Ability_Necronomicon_Warrior_Sight, Construct<CDOTA_Ability_Necronomicon_Warrior_Sight>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4729F10;
  }
  return p;
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 490, @0x0000000002dda480, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 490, @0x0000000002dda4a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal  (line 490, @0x0000000002ddf780, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "necronomicon_warrior_sight", "CDOTA_Ability_Necronomicon_Warrior_Sight"
// globals: `guard variable for'CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass, CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass, __dso_handle, CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClassInfo, CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClassInfo
CEntityClass *__cdecl CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass);
    CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass._vptr_CEntityClass = off_4729E90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass);
    __cxa_atexit(
      CDOTA_Ability_Necronomicon_Warrior_Sight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Necronomicon_Warrior_SightClass != 0 )
    return &CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass;
  if ( `guard variable for'CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClassInfo,
      "CDOTA_Ability_Necronomicon_Warrior_Sight",
      "necronomicon_warrior_sight",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClassInfo);
  }
  CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass.m_pClassInfo = &CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClassInfo;
  CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass.m_pBaseClassInfo = CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Necronomicon_Warrior_SightClass = &CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass;
  CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClassInfo.m_pClass = &CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass;
  CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Necronomicon_Warrior_SightClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Necronomicon_Warrior_Sight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Warrior_SightClass;
}


// CDOTA_Ability_Necronomicon_Warrior_Sight::GetIntrinsicModifierName  (line 493, @0x0000000002dd3f60, libserver.so)
// strings: "modifier_necronomicon_warrior_sight"
const char *__fastcall CDOTA_Ability_Necronomicon_Warrior_Sight::GetIntrinsicModifierName(
        CDOTA_Ability_Necronomicon_Warrior_Sight *const this)
{
  return "modifier_necronomicon_warrior_sight";
}


// CDOTA_Modifier_Necronomicon_Warrior_Sight::~CDOTA_Modifier_Necronomicon_Warrior_Sight  (line 502, @0x0000000002dd6a70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_Sight::~CDOTA_Modifier_Necronomicon_Warrior_Sight(
        CDOTA_Modifier_Necronomicon_Warrior_Sight *const this)
{
  this->_vptr_CDOTA_Buff = &off_472A9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necronomicon_Warrior_Sight::~CDOTA_Modifier_Necronomicon_Warrior_Sight  (line 502, @0x0000000002dd6a90, libserver.so)  // inlines: ~CDOTA_Modifier_Necronomicon_Warrior_Sight
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_Sight::~CDOTA_Modifier_Necronomicon_Warrior_Sight(
        CDOTA_Modifier_Necronomicon_Warrior_Sight *const this)
{
  this->_vptr_CDOTA_Buff = &off_472A9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necronomicon_Warrior_Sight::IsAura  (line 507, @0x0000000002dd3f70, libserver.so)
bool __fastcall CDOTA_Modifier_Necronomicon_Warrior_Sight::IsAura(
        CDOTA_Modifier_Necronomicon_Warrior_Sight *const this)
{
  return 1;
}


// CDOTA_Modifier_Necronomicon_Warrior_Sight::GetModifierAura  (line 508, @0x0000000002dd3f80, libserver.so)
// strings: "modifier_truesight"
const char *__fastcall CDOTA_Modifier_Necronomicon_Warrior_Sight::GetModifierAura(
        CDOTA_Modifier_Necronomicon_Warrior_Sight *const this)
{
  return "modifier_truesight";
}


// CDOTA_Modifier_Necronomicon_Warrior_Sight::GetAuraSearchTeam  (line 510, @0x0000000002dd3f90, libserver.so)
int __fastcall CDOTA_Modifier_Necronomicon_Warrior_Sight::GetAuraSearchTeam(
        CDOTA_Modifier_Necronomicon_Warrior_Sight *const this)
{
  return 2;
}


// CDOTA_Modifier_Necronomicon_Warrior_Sight::GetAuraSearchType  (line 511, @0x0000000002dd3fa0, libserver.so)
int __fastcall CDOTA_Modifier_Necronomicon_Warrior_Sight::GetAuraSearchType(
        CDOTA_Modifier_Necronomicon_Warrior_Sight *const this)
{
  return 51;
}


// CDOTA_Modifier_Necronomicon_Warrior_Sight::GetAuraSearchFlags  (line 512, @0x0000000002dd3fb0, libserver.so)
int __fastcall CDOTA_Modifier_Necronomicon_Warrior_Sight::GetAuraSearchFlags(
        CDOTA_Modifier_Necronomicon_Warrior_Sight *const this)
{
  return 80;
}


// CDOTA_Modifier_Necronomicon_Warrior_Sight::GetAuraRadius  (line 513, @0x0000000002dd3fc0, libserver.so)
int __fastcall CDOTA_Modifier_Necronomicon_Warrior_Sight::GetAuraRadius(
        CDOTA_Modifier_Necronomicon_Warrior_Sight *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Necronomicon_Warrior_Sight::IsHidden  (line 517, @0x0000000002dd3fd0, libserver.so)
bool __fastcall CDOTA_Modifier_Necronomicon_Warrior_Sight::IsHidden(
        CDOTA_Modifier_Necronomicon_Warrior_Sight *const this)
{
  return 1;
}


// CDOTA_Modifier_Necronomicon_Warrior_Sight::OnCreated  (line 528, @0x0000000002dd0950, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Necronomicon_Warrior_Sight::OnCreated(
        CDOTA_Modifier_Necronomicon_Warrior_Sight *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::~CDOTA_Ability_Necronomicon_Archer_ManaBurn  (line 542, @0x0000000002dd85a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::~CDOTA_Ability_Necronomicon_Archer_ManaBurn(
        CDOTA_Ability_Necronomicon_Archer_ManaBurn *const this)
{
  this->_vptr_IHandleEntity = &off_472AD30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::~CDOTA_Ability_Necronomicon_Archer_ManaBurn  (line 542, @0x0000000002dd85c0, libserver.so)  // inlines: ~CDOTA_Ability_Necronomicon_Archer_ManaBurn
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::~CDOTA_Ability_Necronomicon_Archer_ManaBurn(
        CDOTA_Ability_Necronomicon_Archer_ManaBurn *const this)
{
  this->_vptr_IHandleEntity = &off_472AD30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::Schema_DynamicBinding  (line 544, @0x0000000002dd3fe0, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Archer_ManaBurn::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::Schema_DynamicBinding(
        const CDOTA_Ability_Necronomicon_Archer_ManaBurn *const this)
{
  return CDOTA_Ability_Necronomicon_Archer_ManaBurn::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 544, @0x0000000002dd3ff0, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::DestructInstance  (line 544, @0x0000000002dd4000, libserver.so)  // inlines: Destruct<CDOTA_Ability_Necronomicon_Archer_ManaBurn>
void __fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::FreeInstance  (line 544, @0x0000000002dd4020, libserver.so)
void __fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::CanAllocate  (line 544, @0x0000000002dd4040, libserver.so)
bool __fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 544, @0x0000000002dd4050, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Archer_ManaBurn::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necronomicon_Archer_ManaBurn::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::AllocateInstance  (line 544, @0x0000000002dd5d70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::ConstructInstance  (line 544, @0x0000000002dd79b0, libserver.so)  // inlines: CDOTA_Ability_Necronomicon_Archer_ManaBurn, Construct<CDOTA_Ability_Necronomicon_Archer_ManaBurn>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_472AD30;
  }
  return p;
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 544, @0x0000000002dda4d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 544, @0x0000000002dda4f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal  (line 544, @0x0000000002ddf8d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "necronomicon_archer_mana_burn", "CDOTA_Ability_Necronomicon_Archer_ManaBurn"
// globals: `guard variable for'CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass, CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass, __dso_handle, CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClassInfo, CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClassInfo
CEntityClass *__cdecl CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass);
    CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass._vptr_CEntityClass = off_472ACB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass);
    __cxa_atexit(
      CDOTA_Ability_Necronomicon_Archer_ManaBurn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass != 0 )
    return &CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass;
  if ( `guard variable for'CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClassInfo,
      "CDOTA_Ability_Necronomicon_Archer_ManaBurn",
      "necronomicon_archer_mana_burn",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClassInfo);
  }
  CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass.m_pClassInfo = &CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClassInfo;
  CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass.m_pBaseClassInfo = CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass = &CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass;
  CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClassInfo.m_pClass = &CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass;
  CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Necronomicon_Archer_ManaBurn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_ManaBurnClass;
}


// CDOTA_Ability_Necronomicon_Archer_ManaBurn::OnSpellStart  (line 554, @0x0000000002dd04d0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, GetMana, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, ApplyDamage, CDOTA_BaseNPC::ReduceMana, CDOTA_CombatLog::AddManaDamageEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "burn_amount", "particles/items2_fx/necronomicon_archer_manaburn.vpcf", "attach_attack1", "attach_hitloc", "particles/generic_gameplay/generic_manaburn.vpcf"
void __fastcall CDOTA_Ability_Necronomicon_Archer_ManaBurn::OnSpellStart(
        CDOTA_Ability_Necronomicon_Archer_ManaBurn *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  int LevelSpecialValue; // eax
  __m128i v5; // xmm3
  float m_Value; // xmm1_4
  int v7; // r14d
  float v8; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v10; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  __int64 v15; // r12
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  int v19; // ebx
  CDOTA_ParticleManager *v20; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "burn_amount", -1, 0);
    m_Value = v3->m_flMana.m_Value;
    if ( m_Value <= LevelSpecialValue )
      v7 = m_Value;
    else
      v7 = LevelSpecialValue;
    *v5.m128i_i32 = v7;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, v3, this, v8, 2, 0);
    CDOTA_BaseNPC::ReduceMana(v3, v8, v10);
    CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, this, v3, v7);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/items2_fx/necronomicon_archer_manaburn.vpcf",
                 2,
                 0,
                 0,
                 0);
    v13 = CDOTABaseAbility::GetCaster(this);
    v14 = GetParticleManager();
    v15 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v14, Particle, 0, v13, 5, "attach_attack1", vec3_invalid, 1);
    v16 = GetParticleManager();
    *&v22.x = v15;
    v22.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v16, Particle, 1, v3, 5, "attach_hitloc", v22, 1);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v17, Particle);
    v18 = GetParticleManager();
    v19 = CDOTA_ParticleManager::CreateParticle(v18, "particles/generic_gameplay/generic_manaburn.vpcf", 1, v3, 0, 0);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v20, v19);
  }
}


// CDOTA_Ability_Necronomicon_Archer_AoE::~CDOTA_Ability_Necronomicon_Archer_AoE  (line 582, @0x0000000002dd85f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Necronomicon_Archer_AoE::~CDOTA_Ability_Necronomicon_Archer_AoE(
        CDOTA_Ability_Necronomicon_Archer_AoE *const this)
{
  this->_vptr_IHandleEntity = &off_472B830;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Necronomicon_Archer_AoE::~CDOTA_Ability_Necronomicon_Archer_AoE  (line 582, @0x0000000002dd8610, libserver.so)  // inlines: ~CDOTA_Ability_Necronomicon_Archer_AoE
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Necronomicon_Archer_AoE::~CDOTA_Ability_Necronomicon_Archer_AoE(
        CDOTA_Ability_Necronomicon_Archer_AoE *const this)
{
  this->_vptr_IHandleEntity = &off_472B830;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Necronomicon_Archer_AoE::Schema_DynamicBinding  (line 584, @0x0000000002dd4060, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Archer_AoE::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necronomicon_Archer_AoE::Schema_DynamicBinding(
        const CDOTA_Ability_Necronomicon_Archer_AoE *const this)
{
  return CDOTA_Ability_Necronomicon_Archer_AoE::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 584, @0x0000000002dd4070, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::DestructInstance  (line 584, @0x0000000002dd4080, libserver.so)  // inlines: Destruct<CDOTA_Ability_Necronomicon_Archer_AoE>
void __fastcall CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::FreeInstance  (line 584, @0x0000000002dd40a0, libserver.so)
void __fastcall CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::CanAllocate  (line 584, @0x0000000002dd40c0, libserver.so)
bool __fastcall CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 584, @0x0000000002dd40d0, libserver.so)
// globals: CDOTA_Ability_Necronomicon_Archer_AoE::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Necronomicon_Archer_AoE::s_pSchemaBinding;
}


// CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::AllocateInstance  (line 584, @0x0000000002dd5db0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::ConstructInstance  (line 584, @0x0000000002dd79e0, libserver.so)  // inlines: CDOTA_Ability_Necronomicon_Archer_AoE, Construct<CDOTA_Ability_Necronomicon_Archer_AoE>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_472B830;
  }
  return p;
}


// CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 584, @0x0000000002dda520, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 584, @0x0000000002dda540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal  (line 584, @0x0000000002ddfa20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_05.cpp
// strings: "necronomicon_archer_aoe", "CDOTA_Ability_Necronomicon_Archer_AoE"
// globals: `guard variable for'CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass, CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass, __dso_handle, CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClassInfo, CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClassInfo
CEntityClass *__cdecl CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass);
    CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass._vptr_CEntityClass = off_472B7B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass);
    __cxa_atexit(
      CDOTA_Ability_Necronomicon_Archer_AoE::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Necronomicon_Archer_AoEClass != 0 )
    return &CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass;
  if ( `guard variable for'CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClassInfo,
      "CDOTA_Ability_Necronomicon_Archer_AoE",
      "necronomicon_archer_aoe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClassInfo);
  }
  CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass.m_pClassInfo = &CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClassInfo;
  CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass.m_pBaseClassInfo = CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Necronomicon_Archer_AoEClass = &CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass;
  CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClassInfo.m_pClass = &CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass;
  CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Necronomicon_Archer_AoEClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Necronomicon_Archer_AoE::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Necronomicon_Archer_AoEClass;
}


// CDOTA_Ability_Necronomicon_Archer_AoE::GetIntrinsicModifierName  (line 587, @0x0000000002dd40e0, libserver.so)
// strings: "modifier_necronomicon_archer_aoe"
const char *__fastcall CDOTA_Ability_Necronomicon_Archer_AoE::GetIntrinsicModifierName(
        CDOTA_Ability_Necronomicon_Archer_AoE *const this)
{
  return "modifier_necronomicon_archer_aoe";
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::~CDOTA_Modifier_Necronomicon_Archer_AoE  (line 596, @0x0000000002dd6a20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::~CDOTA_Modifier_Necronomicon_Archer_AoE(
        CDOTA_Modifier_Necronomicon_Archer_AoE *const this)
{
  this->_vptr_CDOTA_Buff = &off_472C2F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::~CDOTA_Modifier_Necronomicon_Archer_AoE  (line 596, @0x0000000002dd6a40, libserver.so)  // inlines: ~CDOTA_Modifier_Necronomicon_Archer_AoE
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::~CDOTA_Modifier_Necronomicon_Archer_AoE(
        CDOTA_Modifier_Necronomicon_Archer_AoE *const this)
{
  this->_vptr_CDOTA_Buff = &off_472C2F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::IsAura  (line 604, @0x0000000002dd40f0, libserver.so)
bool __fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::IsAura(CDOTA_Modifier_Necronomicon_Archer_AoE *const this)
{
  return 1;
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::GetModifierAura  (line 605, @0x0000000002dd4100, libserver.so)
// strings: "modifier_necronomicon_archer_aura"
const char *__fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::GetModifierAura(
        CDOTA_Modifier_Necronomicon_Archer_AoE *const this)
{
  return "modifier_necronomicon_archer_aura";
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::GetAuraSearchTeam  (line 607, @0x0000000002dd4110, libserver.so)
int __fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::GetAuraSearchTeam(
        CDOTA_Modifier_Necronomicon_Archer_AoE *const this)
{
  return 1;
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::GetAuraSearchType  (line 608, @0x0000000002dd4120, libserver.so)
int __fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::GetAuraSearchType(
        CDOTA_Modifier_Necronomicon_Archer_AoE *const this)
{
  return 19;
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::GetAuraSearchFlags  (line 609, @0x0000000002dd4130, libserver.so)
int __fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::GetAuraSearchFlags(
        CDOTA_Modifier_Necronomicon_Archer_AoE *const this)
{
  return 16;
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::GetAuraRadius  (line 610, @0x0000000002dd4140, libserver.so)
int __fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::GetAuraRadius(
        CDOTA_Modifier_Necronomicon_Archer_AoE *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::IsHidden  (line 612, @0x0000000002dd4150, libserver.so)
bool __fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::IsHidden(CDOTA_Modifier_Necronomicon_Archer_AoE *const this)
{
  return 1;
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::OnCreated  (line 623, @0x0000000002dd0710, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::OnCreated(
        CDOTA_Modifier_Necronomicon_Archer_AoE *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Necronomicon_Archer_AoE::OnRefresh  (line 630, @0x0000000002dd07d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Necronomicon_Archer_AoE::OnRefresh(
        CDOTA_Modifier_Necronomicon_Archer_AoE *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Item_Necronomicon_Archer_Aura::~CDOTA_Modifier_Item_Necronomicon_Archer_Aura  (line 638, @0x0000000002dd69d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Necronomicon_Archer_Aura::~CDOTA_Modifier_Item_Necronomicon_Archer_Aura(
        CDOTA_Modifier_Item_Necronomicon_Archer_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_472C610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Necronomicon_Archer_Aura::~CDOTA_Modifier_Item_Necronomicon_Archer_Aura  (line 638, @0x0000000002dd69f0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Necronomicon_Archer_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Necronomicon_Archer_Aura::~CDOTA_Modifier_Item_Necronomicon_Archer_Aura(
        CDOTA_Modifier_Item_Necronomicon_Archer_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_472C610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Necronomicon_Archer_Aura::OnCreated  (line 660, @0x0000000002dd0e00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "as_bonus", "ms_bonus"
void __fastcall CDOTA_Modifier_Item_Necronomicon_Archer_Aura::OnCreated(
        CDOTA_Modifier_Item_Necronomicon_Archer_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->as_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "as_bonus", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->ms_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "ms_bonus", -1, 0);
      return;
    }
  }
  else
  {
    this->as_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->ms_bonus = 0;
}


// CDOTA_Modifier_Item_Necronomicon_Archer_Aura::OnRefresh  (line 668, @0x0000000002dd0ce0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "as_bonus", "ms_bonus"
void __fastcall CDOTA_Modifier_Item_Necronomicon_Archer_Aura::OnRefresh(
        CDOTA_Modifier_Item_Necronomicon_Archer_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->as_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "as_bonus", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->ms_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "ms_bonus", -1, 0);
      return;
    }
  }
  else
  {
    this->as_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->ms_bonus = 0;
}


// CDOTA_Modifier_Item_Necronomicon_Archer_Aura::DeclareFunctions  (line 676, @0x0000000002dc6fc0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Necronomicon_Archer_Aura::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Item_Necronomicon_Archer_Aura::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Necronomicon_Archer_Aura::DeclareFunctions(
        CDOTA_Modifier_Item_Necronomicon_Archer_Aura *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Item_Necronomicon_Archer_Aura::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Item_Necronomicon_Archer_Aura::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Item_Necronomicon_Archer_Aura::GetModifierMoveSpeedBonus_Percentage  (line 684, @0x0000000002dc8270, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Necronomicon_Archer_Aura::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Item_Necronomicon_Archer_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->ms_bonus;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Item_Necronomicon_Archer_Aura::GetModifierAttackSpeedBonus_Constant  (line 694, @0x0000000002dc82d0, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Necronomicon_Archer_Aura::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Item_Necronomicon_Archer_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->as_bonus;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


