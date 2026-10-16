// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:47
class CDOTA_Unit_Hero_Shredder : public CDOTA_BaseNPC_Hero {
public:

private:

	bool m_bHadScepter;  // +0x16ec
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
	CDOTA_Unit_Hero_Shredder(CDOTA_Unit_Hero_Shredder &);
	CDOTA_Unit_Hero_Shredder(CDOTA_Unit_Hero_Shredder &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnAlive();
	virtual void OnDying();
	virtual bool UsesConstantGesture(bool);
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Shredder();
	virtual bool OnLoadState(KeyValues *);
	virtual void OnItemEquipped(CDOTA_Item *);
	virtual ~CDOTA_Unit_Hero_Shredder();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[380] UsesConstantGesture
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[467] OnLoadState
	// vtable[479] OnItemEquipped
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:79
class C_CDOTA_Unit_Hero_Shredder_MapInstall {
	C_CDOTA_Unit_Hero_Shredder_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:205
class CDOTA_Ability_Shredder_WhirlingDeath : public CDOTABaseAbility {
public:

private:

	int whirling_radius;  // +0x390
	int whirling_damage;  // +0x394
	float whirling_tick;  // +0x398
	float duration;  // +0x39c
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
	CDOTA_Ability_Shredder_WhirlingDeath(CDOTA_Ability_Shredder_WhirlingDeath &);
	CDOTA_Ability_Shredder_WhirlingDeath(CDOTA_Ability_Shredder_WhirlingDeath &);
	CDOTA_Ability_Shredder_WhirlingDeath();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Shredder_WhirlingDeath();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:302
class CDOTA_Modifier_Shredder_WhirlingDeath_Debuff : public CDOTA_Buff {
public:

private:

	int stat_loss_pct;  // +0xba8
	int iPrimaryAttribute;  // +0xbac
	float flStatLoss;  // +0xbb0
	CDOTA_Modifier_Shredder_WhirlingDeath_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Shredder_WhirlingDeath_Debuff();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[7] GetAttributes
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:429
class CDOTA_Ability_Shredder_TimberChain : public CDOTABaseAbility {
public:

private:

	int chain_radius;  // +0x390
	int m_nFXIndex;  // +0x394
	bool m_bRetract;  // +0x3a4
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
	CDOTA_Ability_Shredder_TimberChain(CDOTA_Ability_Shredder_TimberChain &);
	CDOTA_Ability_Shredder_TimberChain(CDOTA_Ability_Shredder_TimberChain &);
	CDOTA_Ability_Shredder_TimberChain();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Shredder_TimberChain();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:450
class C_CDOTA_Ability_Shredder_TimberChain_MapInstall {
	C_CDOTA_Ability_Shredder_TimberChain_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:672
class CDOTA_Modifier_Shredder_TimberChain : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	EHANDLE m_hTarget;  // +0xbd0
	int speed;  // +0xbe0
	int radius;  // +0xbe4
	int damage;  // +0xbe8
	CDOTA_Modifier_Shredder_TimberChain();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Shredder_TimberChain();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3056
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:903
class CDOTA_Ability_Shredder_Reactive_Armor : public CDOTABaseAbility {
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
	CDOTA_Ability_Shredder_Reactive_Armor(CDOTA_Ability_Shredder_Reactive_Armor &);
	CDOTA_Ability_Shredder_Reactive_Armor(CDOTA_Ability_Shredder_Reactive_Armor &);
	CDOTA_Ability_Shredder_Reactive_Armor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Shredder_Reactive_Armor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:917
class CDOTA_Modifier_Shredder_Reactive_Armor : public CDOTA_Buff {
public:

private:

	int stack_limit;  // +0xba8
	float stack_duration;  // +0xbac
	float m_flStackDieTime;  // +0xbb0
	int m_nFXIndex[4];  // +0xbb4
	CDOTA_Modifier_Shredder_Reactive_Armor();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnStackCountChanged(int);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_Shredder_Reactive_Armor();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[29] OnStackCountChanged
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:1156
class CDOTA_Modifier_Shredder_Reactive_Armor_Stack : public CDOTA_Buff {
public:

private:

	float bonus_armor;  // +0xba8
	float bonus_hp_regen;  // +0xbac
	CDOTA_Modifier_Shredder_Reactive_Armor_Stack();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnDurationExpired();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Shredder_Reactive_Armor_Stack();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[55] OnDurationExpired
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:1238
class CDOTA_Ability_Shredder_Chakram : public CDOTABaseAbility {
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

	float radius;  // +0x390
	float speed;  // +0x394
	float pass_slow_duration;  // +0x398
	int pass_damage;  // +0x39c
	float m_fZCoord;  // +0x3ac
	bool m_bIsReturning;  // +0x3b0

	int m_nFXIndex;  // +0x3b4
	int m_nFXIndexB;  // +0x3b8
	int m_nFXIndexC;  // +0x3bc
	int m_nProjectileIndex;  // +0x3c0
	EHANDLE m_hThinker;  // +0x3c4
	CDOTA_Ability_Shredder_Chakram(CDOTA_Ability_Shredder_Chakram &);
	CDOTA_Ability_Shredder_Chakram(CDOTA_Ability_Shredder_Chakram &);
	CDOTA_Ability_Shredder_Chakram();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual void OnUnStolen();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual const char * GetAssociatedSecondaryAbilities();
	Vector GetChakramEndLocation();
	void ReturnChakram(Vector);
	void FXCleanUp();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Shredder_Chakram();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[308] OnUnStolen
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:1350
class C_CDOTA_Ability_Shredder_Chakram_MapInstall {
	C_CDOTA_Ability_Shredder_Chakram_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:1356
class CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2 : public CDOTA_Ability_Shredder_Chakram {
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
	CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2(CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2 &);
	CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2(CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2 &);
	CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:1687
class CDOTA_Modifier_Shredder_Chakram_Thinker : public CDOTA_Buff {
public:

private:

	int damage_per_second;  // +0xba8
	float mana_per_second;  // +0xbac
	float radius;  // +0xbb0
	float break_distance;  // +0xbb4
	float damage_interval;  // +0xbb8
	CDOTA_Modifier_Shredder_Chakram_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual int GetAttributes();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Shredder_Chakram_Thinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[7] GetAttributes
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:1834
class CDOTA_Modifier_Shredder_Chakram_Debuff : public CDOTA_Buff {
public:

private:

	int slow;  // +0xba8
	CDOTA_Modifier_Shredder_Chakram_Debuff();
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Shredder_Chakram_Debuff();

	// vtable[12] IsDebuff
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:1884
class CDOTA_Ability_Shredder_ReturnChakram : public CDOTABaseAbility {
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
	CDOTA_Ability_Shredder_ReturnChakram(CDOTA_Ability_Shredder_ReturnChakram &);
	CDOTA_Ability_Shredder_ReturnChakram(CDOTA_Ability_Shredder_ReturnChakram &);
	CDOTA_Ability_Shredder_ReturnChakram();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsHiddenWhenStolen();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Shredder_ReturnChakram();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[306] IsHiddenWhenStolen
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:1926
class CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2 : public CDOTA_Ability_Shredder_ReturnChakram {
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
	CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2(CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2 &);
	CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2(CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2 &);
	CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_shredder.cpp:1955
class CDOTA_Modifier_Shredder_Chakram_Disarm : public CDOTA_Modifier_Disarmed {
public:

	CDOTA_Modifier_Shredder_Chakram_Disarm();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsPurgable();
	virtual int GetAttributes();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_Shredder_Chakram_Disarm();

	// vtable[5] CheckState
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Shredder::~CDOTA_Unit_Hero_Shredder  (line 47, @0x0000000002d2cfc0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Shredder::~CDOTA_Unit_Hero_Shredder(CDOTA_Unit_Hero_Shredder *const this)
{
  this->_vptr_IHandleEntity = &off_461C730;
  this->_vptr_INextBotEventResponder = &off_461D710;
  this->_vptr_CObstructionObject = &off_461DA40;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Shredder::~CDOTA_Unit_Hero_Shredder  (line 47, @0x0000000002d2d000, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Shredder
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Shredder::~CDOTA_Unit_Hero_Shredder(CDOTA_Unit_Hero_Shredder *const this)
{
  this->_vptr_IHandleEntity = &off_461C730;
  this->_vptr_INextBotEventResponder = &off_461D710;
  this->_vptr_CObstructionObject = &off_461DA40;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Shredder::Schema_DynamicBinding  (line 49, @0x0000000002d1d6b0, libserver.so)
// globals: CDOTA_Unit_Hero_Shredder::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Shredder::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Shredder *const this)
{
  return CDOTA_Unit_Hero_Shredder::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 49, @0x0000000002d1d6e0, libserver.so)
// globals: CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::DestructInstance  (line 49, @0x0000000002d1d6f0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Shredder>
void __fastcall CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::FreeInstance  (line 49, @0x0000000002d1d710, libserver.so)
void __fastcall CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::CanAllocate  (line 49, @0x0000000002d1d730, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 49, @0x0000000002d1d740, libserver.so)
// globals: CDOTA_Unit_Hero_Shredder::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Shredder::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::AllocateInstance  (line 49, @0x0000000002d24550, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::ConstructInstance  (line 49, @0x0000000002d28790, libserver.so)  // inlines: CDOTA_Unit_Hero_Shredder, Construct<CDOTA_Unit_Hero_Shredder>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_461C730;
    *(p + 236) = &off_461D710;
    *(p + 257) = &off_461DA40;
  }
  return p;
}


// CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000002d35550, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000002d357e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Shredder::GetEntityClassInternal  (line 49, @0x0000000002d4ed20, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_shredder", "CDOTA_Unit_Hero_Shredder"
// globals: `guard variable for'CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass, CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Shredder::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShredderClassInfo, CDOTA_Unit_Hero_Shredder::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShredderClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Shredder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass) != 0 )
  {
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_pClassInfo = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_flags = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_pInputs = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_nInputCount = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_pOutputs = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_nOutputCount = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_pGameClass = 0;
    CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass._vptr_CEntityClass = off_461C6B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Shredder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_ShredderClass != 0 )
    return &CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Shredder::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShredderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Shredder::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShredderClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Shredder::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShredderClassInfo,
      "CDOTA_Unit_Hero_Shredder",
      "npc_dota_hero_shredder",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Shredder::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShredderClassInfo);
  }
  CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_pClassInfo = &CDOTA_Unit_Hero_Shredder::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShredderClassInfo;
  CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Shredder::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShredderClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_ShredderClass = &CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass;
  CDOTA_Unit_Hero_Shredder::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShredderClassInfo.m_pClass = &CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass;
  CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_ShredderClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Shredder::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShredderClass;
}


// CDOTA_Unit_Hero_Shredder::UsesConstantGesture  (line 55, @0x0000000002d1d750, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Shredder::UsesConstantGesture(CDOTA_Unit_Hero_Shredder *const this, bool bPortrait)
{
  return 1;
}


// CDOTA_Unit_Hero_Shredder::YouForgotToImplementOrDeclareServerClass  (line 79, @0x0000000002cc8e80, libserver.so)
int __fastcall CDOTA_Unit_Hero_Shredder::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Shredder *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Shredder::GetServerClass  (line 79, @0x0000000002cde9f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Shredder::GetServerClass(CDOTA_Unit_Hero_Shredder *const this)
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


// CDOTA_Unit_Hero_Shredder::OnItemEquipped  (line 88, @0x0000000002cd7620, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, NetworkStateChanged, Set, SetDroppable, SetSellable, _V_strcmp, operator=<bool>
// calls: CDOTA_BaseNPC::OnItemEquipped, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility
// strings: "item_ultimate_scepter", "shredder_chakram_2"
void __fastcall CDOTA_Unit_Hero_Shredder::OnItemEquipped(CDOTA_Unit_Hero_Shredder *const this, CDOTA_Item *pItem)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  int m_Value; // r13d
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v8; // rbx

  CDOTA_BaseNPC::OnItemEquipped(this, pItem);
  if ( pItem != 0 && !this->m_bHadScepter )
  {
    m_pAbilityData = pItem->m_pAbilityData;
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      if ( m_pAbilityData->m_pszAbilityName != 0
        && (m_pszAbilityName == "item_ultimate_scepter" || strcmp(m_pszAbilityName, "item_ultimate_scepter") == 0) )
      {
        m_Value = pItem->m_iPlayerOwnerID.m_Value;
        if ( (*(this->_vptr_IHandleEntity + 414))(this) == m_Value )
        {
          if ( pItem->m_bDroppable.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 22))(pItem, 928, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            pItem->m_bDroppable.m_Value = 0;
          }
          if ( pItem->m_bSellable.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 22))(pItem, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            pItem->m_bSellable.m_Value = 0;
          }
          CDOTA_Item::ExpireSellback(pItem);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "shredder_chakram_2", 0);
          v8 = AbilityByName;
          if ( AbilityByName != 0 )
          {
            CDOTABaseAbility::SetHidden(AbilityByName, 0);
            if ( v8->m_iLevel.m_Value == 0 )
              CDOTABaseAbility::UpgradeAbility(v8, 0);
          }
          this->m_bHadScepter = 1;
        }
      }
    }
  }
}


// CDOTA_Unit_Hero_Shredder::Spawn  (line 134, @0x0000000002ccf970, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC_Hero::CacheTogglableWearable
void __fastcall CDOTA_Unit_Hero_Shredder::Spawn(
        CDOTA_Unit_Hero_Shredder *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 0);
  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 1);
  this->m_bHadScepter = 0;
}


// CDOTA_Unit_Hero_Shredder::OnAlive  (line 147, @0x0000000002ccf9b0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::CacheTogglableWearable
void __fastcall CDOTA_Unit_Hero_Shredder::OnAlive(CDOTA_Unit_Hero_Shredder *const this)
{
  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 0);
  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 1);
}


// CDOTA_Unit_Hero_Shredder::OnDying  (line 159, @0x0000000002cc8e90, libserver.so)
void __fastcall CDOTA_Unit_Hero_Shredder::OnDying(CDOTA_Unit_Hero_Shredder *const this)
{
  ;
}


// CDOTA_Unit_Hero_Shredder::OnLoadState  (line 179, @0x0000000002ccb960, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "shredder_chakram", "shredder_chakram_2", "shredder_return_chakram_2", "shredder_return_chakram"
bool __fastcall CDOTA_Unit_Hero_Shredder::OnLoadState(CDOTA_Unit_Hero_Shredder *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  if ( CDOTA_BaseNPC::FindAbilityByName(this, "shredder_chakram", 0)->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "shredder_chakram", "shredder_return_chakram", 1, 0);
  if ( CDOTA_BaseNPC::FindAbilityByName(this, "shredder_chakram_2", 0)->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "shredder_chakram_2", "shredder_return_chakram_2", 1, 0);
  return 1;
}


// CDOTA_Ability_Shredder_WhirlingDeath::~CDOTA_Ability_Shredder_WhirlingDeath  (line 205, @0x0000000002d2ba50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Shredder_WhirlingDeath::~CDOTA_Ability_Shredder_WhirlingDeath(
        CDOTA_Ability_Shredder_WhirlingDeath *const this)
{
  this->_vptr_IHandleEntity = &off_461DB10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Shredder_WhirlingDeath::~CDOTA_Ability_Shredder_WhirlingDeath  (line 205, @0x0000000002d2ba70, libserver.so)  // inlines: ~CDOTA_Ability_Shredder_WhirlingDeath
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Shredder_WhirlingDeath::~CDOTA_Ability_Shredder_WhirlingDeath(
        CDOTA_Ability_Shredder_WhirlingDeath *const this)
{
  this->_vptr_IHandleEntity = &off_461DB10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shredder_WhirlingDeath::Schema_DynamicBinding  (line 207, @0x0000000002d1d760, libserver.so)
// globals: CDOTA_Ability_Shredder_WhirlingDeath::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_WhirlingDeath::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_WhirlingDeath *const this)
{
  return CDOTA_Ability_Shredder_WhirlingDeath::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 207, @0x0000000002d1d770, libserver.so)
// globals: CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::DestructInstance  (line 207, @0x0000000002d1d780, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shredder_WhirlingDeath>
void __fastcall CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::FreeInstance  (line 207, @0x0000000002d1d7a0, libserver.so)
void __fastcall CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::CanAllocate  (line 207, @0x0000000002d1d7c0, libserver.so)
bool __fastcall CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 207, @0x0000000002d1d7d0, libserver.so)
// globals: CDOTA_Ability_Shredder_WhirlingDeath::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_WhirlingDeath::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::AllocateInstance  (line 207, @0x0000000002d24590, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::ConstructInstance  (line 207, @0x0000000002d28f30, libserver.so)  // inlines: CDOTA_Ability_Shredder_WhirlingDeath, Construct<CDOTA_Ability_Shredder_WhirlingDeath>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_461DB10;
  }
  return p;
}


// CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 207, @0x0000000002d33e60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 207, @0x0000000002d33e80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal  (line 207, @0x0000000002d4fa60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "shredder_whirling_death", "CDOTA_Ability_Shredder_WhirlingDeath"
// globals: `guard variable for'CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass, CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClassInfo, CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass) != 0 )
  {
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_pClassInfo = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_flags = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_pInputs = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_nInputCount = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_pOutputs = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_nOutputCount = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_pGameClass = 0;
    CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass._vptr_CEntityClass = off_461DA90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass);
    __cxa_atexit(
      CDOTA_Ability_Shredder_WhirlingDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shredder_WhirlingDeathClass != 0 )
    return &CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass;
  if ( `guard variable for'CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClassInfo,
      "CDOTA_Ability_Shredder_WhirlingDeath",
      "shredder_whirling_death",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClassInfo);
  }
  CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_pClassInfo = &CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClassInfo;
  CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_pBaseClassInfo = CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shredder_WhirlingDeathClass = &CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass;
  CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClassInfo.m_pClass = &CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass;
  CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shredder_WhirlingDeathClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shredder_WhirlingDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_WhirlingDeathClass;
}


// CDOTA_Ability_Shredder_WhirlingDeath::GetStolenActivityModifier  (line 212, @0x0000000002d1d7e0, libserver.so)
const char *__fastcall CDOTA_Ability_Shredder_WhirlingDeath::GetStolenActivityModifier(
        CDOTA_Ability_Shredder_WhirlingDeath *const this)
{
  return "spin";
}


// CDOTA_Ability_Shredder_WhirlingDeath::OnSpellStart  (line 227, @0x0000000002d07bb0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CGridNav::GetStandingTreesAroundPoint, CGridNav::DestroyTreesAroundPoint, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound (25 total)
// strings: "whirling_radius", "whirling_tick", "whirling_damage", "particles/units/heroes/hero_shredder/shredder_whirling_death.vpcf", "attach_hitloc", "Hero_Shredder.WhirlingDeath.Cast" (9 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Shredder_WhirlingDeath::OnSpellStart(CDOTA_Ability_Shredder_WhirlingDeath *const this)
{
  int LevelSpecialValue; // eax
  __m128i v3; // xmm6
  float v4; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  unsigned int v7; // eax
  __m128i v8; // xmm2
  unsigned int v9; // r14d
  float v10; // r13d
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm3_4
  CDOTA_BaseNPC *v13; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // r13
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  __m128i v24; // xmm7
  CDOTA_BaseNPC *v25; // r13
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  __int64 v29; // r14
  int v30; // r13d
  CHandle<CBaseEntity> *v31; // rdx
  uint32 m_Index; // eax
  __int16 v33; // cx
  CEntityIdentity *v34; // rdx
  CEntityIdentity *v35; // rdx
  CBaseEntity *m_pInstance; // rbx
  float v37; // xmm1_4
  CDOTA_BaseNPC *v38; // rax
  int Health; // eax
  CDOTA_BaseNPC *v40; // rax
  int iDamageType; // [rsp+34h] [rbp-9Ch]
  float flTargetMaxDeltaHealtha; // [rsp+38h] [rbp-98h]
  float flTargetMaxDeltaHealth; // [rsp+38h] [rbp-98h]
  float flTargetDeltaHealtha; // [rsp+3Ch] [rbp-94h]
  float flTargetDeltaHealth; // [rsp+3Ch] [rbp-94h]
  float flTargetDeltaHealthb; // [rsp+3Ch] [rbp-94h]
  CUtlVector<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> > trees; // [rsp+40h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp-38h]
  Vector v51; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v52; // 0:xmm0_8.8,8:xmm1_4.4

  v50 = __readfsqword(0x28u);
  this->whirling_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "whirling_radius", -1, 0);
  this->whirling_tick = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "whirling_tick", -1, 0);
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "whirling_damage", -1, 0);
  trees.m_Memory.m_nAllocationCount = 0;
  *v3.m128i_i32 = this->whirling_radius;
  this->whirling_damage = LevelSpecialValue;
  trees.m_Size = 0;
  trees.m_Memory.m_pMemory = 0;
  trees.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  Caster = CDOTABaseAbility::GetCaster(this);
  v51 = *CBaseEntity::GetAbsOrigin(Caster);
  CGridNav::GetStandingTreesAroundPoint(&g_GridNav, v51, v4, 0, &trees);
  if ( trees.m_Size <= 0 )
  {
    iDamageType = 2;
  }
  else
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    v7 = (*(v6->_vptr_IHandleEntity + 414))(v6);
    *v8.m128i_i32 = this->whirling_radius;
    v9 = v7;
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
    v11 = CDOTABaseAbility::GetCaster(this);
    v52 = *CBaseEntity::GetAbsOrigin(v11);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v9, v52, v10, v12);
    iDamageType = 4;
  }
  v13 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_shredder/shredder_whirling_death.vpcf",
                   2,
                   v13,
                   0,
                   0);
  v15 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, v13, 0, v17, 5, "attach_hitloc", *AbsOrigin, 1);
  v19 = CDOTABaseAbility::GetCaster(this);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v20, v13, 1, v19, 1, 0, vec3_invalid, 1);
  *&entities.m_Size = this->whirling_radius;
  *(&entities.m_Size + 1) = entities.m_Size;
  LODWORD(entities.m_Memory.m_pMemory) = entities.m_Size;
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v21, v13, 2, *&entities.m_Size, *&entities.m_Memory.m_pMemory);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v22, v13);
  v23 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Shredder.WhirlingDeath.Cast", v23);
  entities.m_Size = 0;
  *v24.m128i_i32 = this->whirling_radius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  LODWORD(v17) = _mm_cvtsi128_si32(v24);
  v25 = CDOTABaseAbility::GetCaster(this);
  v26 = CDOTABaseAbility::GetCaster(this);
  v27 = CBaseEntity::GetAbsOrigin(v26);
  v28 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v28->m_iTeamNum.m_Value, v27, v25, *&v17, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v29 = 0;
    v30 = 0;
    do
    {
      while ( 1 )
      {
        v31 = &entities.m_Memory.m_pMemory[v29];
        m_Index = entities.m_Memory.m_pMemory[v29].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v33 = v31->m_Index;
          v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v31->m_Index) >> 9) & 0x3F];
          if ( v34 != 0 )
          {
            v35 = &v34[v33 & 0x1FF];
            if ( v35 != 0 && m_Index == v35->m_EHandle.m_Index )
            {
              m_pInstance = v35->m_pInstance;
              if ( v35->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++v30;
        ++v29;
        if ( entities.m_Size <= v30 )
          goto LABEL_17;
      }
      if ( (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
      {
        flTargetDeltaHealtha = CBaseEntity::GetHealth(v35->m_pInstance);
        flTargetMaxDeltaHealtha = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
        KeyValues::KeyValues(&kv, "modifier_whirling_death_debuff");
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
        KeyValues::SetFloat(&kv, "duration", v37);
        v38 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v38, this, "modifier_shredder_whirling_death_debuff", &kv, 0);
        DOTA_EmitSound(10, "Hero_Shredder.WhirlingDeath.Damage", m_pInstance);
        (*(m_pInstance->_vptr_IHandleEntity + 490))(m_pInstance);
        flTargetDeltaHealth = flTargetDeltaHealtha - CBaseEntity::GetHealth(m_pInstance);
        flTargetMaxDeltaHealth = flTargetMaxDeltaHealtha - (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
        if ( flTargetMaxDeltaHealth != flTargetDeltaHealth )
        {
          Health = CBaseEntity::GetHealth(m_pInstance);
          CDOTA_BaseNPC::ModifyHealth(m_pInstance, (Health - (flTargetMaxDeltaHealth - flTargetDeltaHealth)), 0, 0, 0);
        }
        KeyValues::~KeyValues(&kv);
      }
      flTargetDeltaHealthb = this->whirling_damage;
      v40 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v40, m_pInstance, this, flTargetDeltaHealthb, iDamageType, 0);
      ++v30;
      ++v29;
    }
    while ( entities.m_Size > v30 );
  }
LABEL_17:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  trees.m_Size = 0;
  if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
    if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
  }
}


// CDOTA_Ability_Shredder_WhirlingDeath::GetAbilityDamageToTargetOverInterval  (line 290, @0x0000000002cfe900, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "whirling_damage"
__int64 __fastcall CDOTA_Ability_Shredder_WhirlingDeath::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Shredder_WhirlingDeath *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "whirling_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::~CDOTA_Modifier_Shredder_WhirlingDeath_Debuff  (line 302, @0x0000000002d28160, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::~CDOTA_Modifier_Shredder_WhirlingDeath_Debuff(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_461E5D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::~CDOTA_Modifier_Shredder_WhirlingDeath_Debuff  (line 302, @0x0000000002d28180, libserver.so)  // inlines: ~CDOTA_Modifier_Shredder_WhirlingDeath_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::~CDOTA_Modifier_Shredder_WhirlingDeath_Debuff(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_461E5D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetStatusEffectName  (line 316, @0x0000000002d1d7f0, libserver.so)
// strings: "particles/status_fx/status_effect_shredder_whirl.vpcf"
const char *__fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetStatusEffectName(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this)
{
  return "particles/status_fx/status_effect_shredder_whirl.vpcf";
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::StatusEffectPriority  (line 317, @0x0000000002d1d800, libserver.so)
int __fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::StatusEffectPriority(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this)
{
  return 50;
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetAttributes  (line 319, @0x0000000002d1d810, libserver.so)
int __fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetAttributes(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this)
{
  return 2;
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::OnCreated  (line 332, @0x0000000002d0ae50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, GetPrimaryAttribute, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "stat_loss_pct", "special_bonus_unique_timbersaw", "particles/units/heroes/hero_shredder/shredder_whirling_death_debuff.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::OnCreated(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v7; // r12
  int v8; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->stat_loss_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "stat_loss_pct", -1, 0);
  else
    this->stat_loss_pct = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_timbersaw", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->stat_loss_pct += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent != 0 && (Parent->m_iUnitType & 1) != 0 )
      v7 = Parent;
    else
      v7 = 0;
    v8 = *(&v7[1].m_aThinkFunctions.m_Size + 1);
    this->iPrimaryAttribute = v8;
    if ( v8 != 0 )
    {
      if ( v8 == 1 )
      {
        this->flStatLoss = (this->stat_loss_pct * *&v7[1].m_NetworkTransmitComponent.m_nTransmitStateOwnedCounter)
                         / 100.0;
      }
      else if ( v8 == 2 )
      {
        this->flStatLoss = (this->stat_loss_pct * *&v7[1].m_NetworkTransmitComponent.m_pOuter) / 100.0;
      }
    }
    else
    {
      this->flStatLoss = (this->stat_loss_pct * *&v7[1].m_NetworkTransmitComponent.m_nStateFlags) / 100.0;
    }
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_shredder/shredder_whirling_death_debuff.vpcf",
                 2,
                 v7,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 0, v7, 5, "attach_hitloc", *AbsOrigin, 1);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v13, Particle, 1, v7, 1, 0, vec3_invalid, 1);
    CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  }
  else
  {
    this->iPrimaryAttribute = -1;
  }
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::DeclareFunctions  (line 371, @0x0000000002cc8ea0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Intellect(CModifierParams const&)
void __fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::DeclareFunctions(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Strength  (line 380, @0x0000000002cd2400, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->iPrimaryAttribute == 0 )
    *&result.m_eType = (_mm_cvtsi128_si32(_mm_xor_ps(LODWORD(this->flStatLoss), 0x80000000)) << 32) | 1;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Agility  (line 390, @0x0000000002cd2440, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->iPrimaryAttribute == 1 )
    *&result.m_eType = (_mm_cvtsi128_si32(_mm_xor_ps(LODWORD(this->flStatLoss), 0x80000000)) << 32) | 1;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Intellect  (line 400, @0x0000000002cd2480, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->iPrimaryAttribute == 2 )
    *&result.m_eType = (_mm_cvtsi128_si32(_mm_xor_ps(LODWORD(this->flStatLoss), 0x80000000)) << 32) | 1;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::OnDestroy  (line 409, @0x0000000002cd2170, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth
void __fastcall CDOTA_Modifier_Shredder_WhirlingDeath_Debuff::OnDestroy(
        CDOTA_Modifier_Shredder_WhirlingDeath_Debuff *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v4; // rax
  int v5; // r12d
  CDOTA_BaseNPC *v6; // rax

  if ( this->iPrimaryAttribute == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    Health = CBaseEntity::GetHealth(Parent);
    v4 = CDOTA_Buff::GetParent(this);
    (*(v4->_vptr_IHandleEntity + 490))(v4);
    v5 = (Health + (19.0 * this->flStatLoss));
    v6 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::ModifyHealth(v6, v5, 0, 0, 0);
  }
}


// CDOTA_Ability_Shredder_TimberChain::~CDOTA_Ability_Shredder_TimberChain  (line 429, @0x0000000002d2baa0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Shredder_TimberChain::~CDOTA_Ability_Shredder_TimberChain(
        CDOTA_Ability_Shredder_TimberChain *const this)
{
  this->_vptr_IHandleEntity = &off_461E930;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Shredder_TimberChain::~CDOTA_Ability_Shredder_TimberChain  (line 429, @0x0000000002d2bac0, libserver.so)  // inlines: ~CDOTA_Ability_Shredder_TimberChain
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Shredder_TimberChain::~CDOTA_Ability_Shredder_TimberChain(
        CDOTA_Ability_Shredder_TimberChain *const this)
{
  this->_vptr_IHandleEntity = &off_461E930;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shredder_TimberChain::Schema_DynamicBinding  (line 431, @0x0000000002d1d820, libserver.so)
// globals: CDOTA_Ability_Shredder_TimberChain::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_TimberChain::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_TimberChain *const this)
{
  return CDOTA_Ability_Shredder_TimberChain::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 431, @0x0000000002d1d830, libserver.so)
// globals: CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::DestructInstance  (line 431, @0x0000000002d1d840, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shredder_TimberChain>
void __fastcall CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::FreeInstance  (line 431, @0x0000000002d1d860, libserver.so)
void __fastcall CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::CanAllocate  (line 431, @0x0000000002d1d880, libserver.so)
bool __fastcall CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 431, @0x0000000002d1d890, libserver.so)
// globals: CDOTA_Ability_Shredder_TimberChain::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_TimberChain::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::AllocateInstance  (line 431, @0x0000000002d245d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::ConstructInstance  (line 431, @0x0000000002d28f60, libserver.so)  // inlines: CDOTA_Ability_Shredder_TimberChain, Construct<CDOTA_Ability_Shredder_TimberChain>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_461E930;
  }
  return p;
}


// CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 431, @0x0000000002d33eb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 431, @0x0000000002d33ed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal  (line 431, @0x0000000002d47e10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "shredder_timber_chain", "CDOTA_Ability_Shredder_TimberChain"
// globals: `guard variable for'CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass, CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass, __dso_handle, CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shredder_TimberChain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClassInfo, CDOTA_Ability_Shredder_TimberChain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass);
    CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass._vptr_CEntityClass = off_461E8B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass);
    __cxa_atexit(
      CDOTA_Ability_Shredder_TimberChain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shredder_TimberChainClass != 0 )
    return &CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass;
  if ( `guard variable for'CDOTA_Ability_Shredder_TimberChain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_TimberChain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shredder_TimberChain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClassInfo,
      "CDOTA_Ability_Shredder_TimberChain",
      "shredder_timber_chain",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_TimberChain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClassInfo);
  }
  CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass.m_pClassInfo = &CDOTA_Ability_Shredder_TimberChain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClassInfo;
  CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass.m_pBaseClassInfo = CDOTA_Ability_Shredder_TimberChain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shredder_TimberChainClass = &CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass;
  CDOTA_Ability_Shredder_TimberChain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClassInfo.m_pClass = &CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass;
  CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shredder_TimberChainClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shredder_TimberChain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_TimberChainClass;
}


// CDOTA_Ability_Shredder_TimberChain::YouForgotToImplementOrDeclareServerClass  (line 450, @0x0000000002cc8f00, libserver.so)
int __fastcall CDOTA_Ability_Shredder_TimberChain::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Shredder_TimberChain *const this)
{
  return 0;
}


// CDOTA_Ability_Shredder_TimberChain::GetServerClass  (line 450, @0x0000000002cde6b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Shredder_TimberChain::GetServerClass(
        CDOTA_Ability_Shredder_TimberChain *const this)
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


// CDOTA_Ability_Shredder_TimberChain::OnSpellStart  (line 459, @0x0000000002cfcb40, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GetTogglableWearable, Set, ToDOTABaseNPCHero, Vector, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, DOTA_EmitSound, CBaseEntity::AddEffects (14 total)
// strings: "chain_radius", "particles/units/heroes/hero_shredder/shredder_timberchain.vpcf", "attach_attack1", "Hero_Shredder.TimberChain.Cast"
void __fastcall CDOTA_Ability_Shredder_TimberChain::OnSpellStart(CDOTA_Ability_Shredder_TimberChain *const this)
{
  int LevelSpecialValue; // r14d
  int v3; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r15
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  int v8; // eax
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  vec_t v14; // xmm3_4
  vec_t v15; // xmm4_4
  vec_t z; // xmm1_4
  vec_t y; // xmm3_4
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v21; // si
  int m_Value; // eax
  CDOTA_BaseNPC *v23; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // rax
  vec_t v27; // xmm1_4
  vec_t v28; // xmm0_4
  CDOTA_BaseNPC *v29; // rax
  const CBaseAnimating *v30; // r13
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rbx
  CBaseEntity *v38; // rdi
  CDOTA_BaseNPC *v39; // rax
  const QAngle *AbsAngles; // rax
  float v41; // [rsp+14h] [rbp-FCh]
  float v42; // [rsp+18h] [rbp-F8h]
  float v43; // [rsp+1Ch] [rbp-F4h]
  Vector vDirection; // [rsp+20h] [rbp-F0h] BYREF
  Vector vTargetPos; // [rsp+30h] [rbp-E0h]
  __int64 v46; // [rsp+40h] [rbp-D0h]
  float v47; // [rsp+48h] [rbp-C8h]
  Vector vecFallbackPosition; // [rsp+50h] [rbp-C0h]
  sLinearProjectileCreateInfo info; // [rsp+60h] [rbp-B0h] BYREF

  this->chain_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "chain_radius", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  v3 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v6 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v7 = *&info.pszEffectName - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v6;
  vDirection.x = v7;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v39 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v39);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  v8 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  v41 = vDirection.x * v8;
  v42 = vDirection.y * v8;
  v43 = v8 * vDirection.z;
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = CBaseEntity::GetAbsOrigin(v9);
  v11 = v42 + v10->y;
  v12 = v43 + v10->z;
  v13 = v41 + v10->x;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  vTargetPos.y = v11 + 0.0;
  vTargetPos.z = v12 + 96.0;
  vTargetPos.x = v13 + 0.0;
  v14 = vDirection.y * LevelSpecialValue;
  v15 = LevelSpecialValue * vDirection.x;
  this->m_vProjectileVelocity.z = vDirection.z * LevelSpecialValue;
  z = vec3_origin.z;
  this->m_vProjectileVelocity.y = v14;
  y = vec3_origin.y;
  this->m_vProjectileVelocity.x = v15;
  info.vSpawnOrigin.y = y;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.z = z;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = y;
  info.vVelocity.z = z;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = y;
  info.vAcceleration.z = z;
  info.fEndRadius = 0.0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.bHasFrontalCone = 1;
  info.bCheckStartPosition = 0;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.bProvidesVision = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.pAbility = this;
  v18 = CDOTABaseAbility::GetCaster(this);
  info.vSpawnOrigin = *CBaseEntity::GetAbsOrigin(v18);
  info.vVelocity = this->m_vProjectileVelocity;
  info.fDistance = v3;
  info.fStartRadius = this->chain_radius;
  info.fEndRadius = info.fStartRadius;
  v19 = CDOTABaseAbility::GetCaster(this);
  if ( v19 != 0 && (m_pEntity = v19->m_pEntity) != 0 )
  {
    v21 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v21 & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 3;
  info.iUnitTargetType = 64;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 100;
  info.bVisibleToEnemies = 0;
  info.bIgnoreSource = 1;
  info.iVisionTeamNumber = m_Value;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  this->m_bRetract = 0;
  v23 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_shredder/shredder_timberchain.vpcf",
                       2,
                       0,
                       0,
                       v23);
  v25 = CDOTABaseAbility::GetCaster(this);
  v26 = CBaseEntity::GetAbsOrigin(v25);
  v27 = v26->z + 96.0;
  v28 = v26->x + 0.0;
  vecFallbackPosition.y = v26->y + 0.0;
  vecFallbackPosition.z = v27;
  vecFallbackPosition.x = v28;
  v29 = CDOTABaseAbility::GetCaster(this);
  LODWORD(v23) = this->m_nFXIndex;
  v30 = v29;
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v31, v23, 0, v30, 5, "attach_attack1", vecFallbackPosition, 1);
  LODWORD(v23) = this->m_nFXIndex;
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v32, v23, 1, *&vTargetPos.x, vTargetPos.z);
  LODWORD(v23) = this->m_nFXIndex;
  v47 = 0.0;
  v46 = COERCE_UNSIGNED_INT(LevelSpecialValue);
  v33 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v33, v23, 2, *&v46, v47);
  LODWORD(v23) = this->m_nFXIndex;
  v46 = 1092616192;
  v47 = 0.0;
  v34 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v34, v23, 3, *&v46, v47);
  v35 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Shredder.TimberChain.Cast", v35);
  v36 = CDOTABaseAbility::GetCaster(this);
  v37 = v36;
  if ( v36 != 0 && (v36->m_iUnitType & 1) != 0 )
  {
    v38 = *&v36[1].m_vecVelocity.m_vecY.m_nEncoder;
    if ( v38 != 0 )
    {
      CBaseEntity::AddEffects(v38, 32);
      (*(**&v37[1].m_vecVelocity.m_vecY.m_nEncoder + 1704LL))(*&v37[1].m_vecVelocity.m_vecY.m_nEncoder);
    }
  }
}


// CDOTA_Ability_Shredder_TimberChain::OnProjectileThink  (line 521, @0x0000000002cf2ab0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, GetEHandle, GetEntryIndex, GetSerialNumber, Purge, RemoveAll, Set, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGridNav::GetStandingTreesAroundPoint, CUtlMemory<CDOTA_Tree*, int>::Purge, CUtlVectorBase<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CDOTA_Ability_Shredder_TimberChain::OnProjectileThink(
        CDOTA_Ability_Shredder_TimberChain *const this,
        const Vector *const vLocation)
{
  float chain_radius; // xmm2_4
  void (__fastcall *v5)(CDOTA_Ability_Shredder_TimberChain *const, int *, const Vector *const); // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int16 v8; // cx
  int v9[4]; // [rsp+0h] [rbp-50h] BYREF
  CUtlVector<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> > trees; // [rsp+10h] [rbp-40h] BYREF
  Vector v11; // 0:xmm0_8.8,8:xmm1_4.4

  trees.m_Size = 0;
  chain_radius = this->chain_radius;
  trees.m_Memory.m_pMemory = 0;
  trees.m_Memory.m_nAllocationCount = 0;
  *&v11.x = *&vLocation->x;
  trees.m_Memory.m_nGrowSize = 0;
  v11.z = vLocation->z;
  CGridNav::GetStandingTreesAroundPoint(&g_GridNav, v11, chain_radius, 0, &trees);
  if ( trees.m_Size > 0 )
  {
    v5 = *(this->_vptr_IHandleEntity + 289);
    v6 = (*(**trees.m_Memory.m_pMemory + 64LL))(*trees.m_Memory.m_pMemory);
    v9[0] = -1;
    if ( v6 != 0 )
    {
      v7 = *(v6 + 8);
      if ( v7 != 0 )
      {
        v8 = 0x7FFF;
        if ( *(v7 + 16) != -1 )
          v8 = *(v7 + 16) & 0x7FFF;
        v9[0] = (((*(v7 + 16) >> 15) - (*(v7 + 48) & 1)) << 15) | v8 & 0x7FFF;
      }
    }
    v5(this, v9, vLocation);
  }
  trees.m_Size = 0;
  if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
    if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
  }
}


// CDOTA_Ability_Shredder_TimberChain::OnProjectileHit  (line 536, @0x0000000002d08200, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GetTogglableWearable, Length2D, MarkPVSInformationDirty, Normalized, Purge, QueueConcept, RemoveAll, RemoveEffects, Set, SpeakConcept, ToDOTABaseNPCHero, Vector, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::DispatchUpdateTransmitState, CResponseCriteriaSet::CResponseCriteriaSet, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetPtr, CDOTA_BaseNPC::AddNewModifier, CResponseCriteriaSet::AppendCriteria (32 total)
// strings: "modifier_shredder_timber_chain", "timberchainhit", "Hero_Shredder.TimberChain.Impact", "Hero_Shredder.TimberChain.Cast", "Hero_Shredder.TimberChain.Retract", "particles/units/heroes/hero_shredder/shredder_timber_chain_tree.vpcf" (9 total)
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDOTA_Ability_Shredder_TimberChain::OnProjectileHit(
        CDOTA_Ability_Shredder_TimberChain *const this,
        const CEntityHandle *hTarget,
        const CFieldPath *vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // r12
  CBaseEntity *v6; // rbx
  CEntityInstance *v10; // rax
  void *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  const CBaseEntity *v13; // rax
  const Vector *v14; // rax
  float v15; // xmm1_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  int m_nFXIndex; // eax
  float v19; // xmm0_4
  __m128d v20; // xmm0
  unsigned int v21; // xmm6_4
  CDOTA_ParticleManager *ParticleManager; // rax
  const CBaseEntity *v23; // rax
  const Vector *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  const CBaseEntity *v26; // rax
  const Vector *v27; // rax
  unsigned int v28; // xmm1_4
  unsigned int v29; // xmm0_4
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  const CBaseEntity *v32; // rax
  const Vector *v33; // rax
  float v34; // xmm0_4
  float v35; // xmm1_4
  CDOTA_BaseNPC *v36; // r12
  CDOTA_ParticleManager *v37; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  int v40; // r12d
  CDOTA_ParticleManager *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  vec_t z; // xmm0_4
  vec_t y; // xmm1_4
  vec_t v45; // xmm0_4
  float x; // xmm3_4
  vec_t v47; // xmm0_4
  float v48; // xmm2_4
  vec_t v49; // xmm0_4
  float v50; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v52; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v54; // eax
  __int16 v55; // cx
  int m_Value; // eax
  __m128i v57; // xmm7
  float v58; // r12d
  __m128i v59; // xmm4
  float v60; // r12d
  CDOTA_BaseNPC *v61; // rax
  const Vector *AbsOrigin; // rax
  unsigned int v63; // xmm2_4
  unsigned int v64; // xmm0_4
  const void *v65; // rax
  CDOTA_BaseNPC *v66; // rax
  const Vector *v67; // rax
  CDOTA_BaseNPC *v68; // r12
  CDOTA_ParticleManager *v69; // rax
  int LevelSpecialValue; // eax
  __m128d v71; // xmm0
  unsigned int v72; // xmm7_4
  CDOTA_ParticleManager *v73; // rax
  CDOTA_Speech *v74; // rdi
  CDOTA_BaseNPC *v75; // rax
  CDOTA_BaseNPC *v76; // rax
  CDOTA_BaseNPC *pCaster; // [rsp+18h] [rbp-158h]
  float pCastera; // [rsp+18h] [rbp-158h]
  int pCasterb; // [rsp+18h] [rbp-158h]
  int fDuration; // [rsp+24h] [rbp-14Ch]
  float fDurationa; // [rsp+24h] [rbp-14Ch]
  int fDurationb; // [rsp+24h] [rbp-14Ch]
  const Vector *pKV; // [rsp+28h] [rbp-148h]
  int pKVa; // [rsp+28h] [rbp-148h]
  float pKVb; // [rsp+28h] [rbp-148h]
  double v86; // [rsp+30h] [rbp-140h]
  float v87; // [rsp+38h] [rbp-138h]
  Vector vFullExtendLocation; // [rsp+50h] [rbp-120h] BYREF
  CResponseCriteriaSet criteria; // [rsp+60h] [rbp-110h] BYREF
  __int128 vTreeLoc; // [rsp+A0h] [rbp-D0h] OVERLAPPED BYREF
  vec_t v91; // [rsp+B0h] [rbp-C0h]
  vec_t v92; // [rsp+B4h] [rbp-BCh]
  vec_t v93; // [rsp+B8h] [rbp-B8h]
  float v94; // [rsp+BCh] [rbp-B4h]
  float v95; // [rsp+C0h] [rbp-B0h]
  float v96; // [rsp+C4h] [rbp-ACh]
  vec_t v97; // [rsp+C8h] [rbp-A8h]
  vec_t v98; // [rsp+CCh] [rbp-A4h]
  vec_t v99; // [rsp+D0h] [rbp-A0h]
  float v100; // [rsp+D4h] [rbp-9Ch]
  int v101; // [rsp+D8h] [rbp-98h]
  int v102; // [rsp+DCh] [rbp-94h]
  char v103; // [rsp+E0h] [rbp-90h]
  char v104; // [rsp+E1h] [rbp-8Fh]
  int v105; // [rsp+E4h] [rbp-8Ch]
  int v106; // [rsp+E8h] [rbp-88h]
  int v107; // [rsp+ECh] [rbp-84h]
  int v108; // [rsp+F0h] [rbp-80h]
  char v109; // [rsp+F4h] [rbp-7Ch]
  int v110; // [rsp+F8h] [rbp-78h]
  int v111; // [rsp+FCh] [rbp-74h]
  char v112; // [rsp+100h] [rbp-70h]
  char v113; // [rsp+101h] [rbp-6Fh]
  char v114; // [rsp+102h] [rbp-6Eh]
  char v115; // [rsp+103h] [rbp-6Dh]
  int v116; // [rsp+104h] [rbp-6Ch]
  int v117; // [rsp+108h] [rbp-68h]
  __int64 v118; // [rsp+110h] [rbp-60h]
  KeyValues kv; // [rsp+120h] [rbp-50h] BYREF
  unsigned __int64 v120; // [rsp+138h] [rbp-38h]
  Vector vecFallbackPosition; // 0:^40.12
  Vector v122; // 0:xmm0_8.8,8:xmm1_4.4

  v120 = __readfsqword(0x28u);
  if ( this->m_bRetract )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = Caster;
    if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    {
      v6 = *&Caster[1].m_vecVelocity.m_vecY.m_nEncoder;
      if ( v6 != 0 )
      {
        (*(v6->_vptr_IHandleEntity + 188))(
          *&Caster[1].m_vecVelocity.m_vecY.m_nEncoder,
          v6->m_fEffects.m_Value & 0xFFFFFFDF);
        v6->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
        CBaseEntity::DispatchUpdateTransmitState(v6);
        (*(**&v5[1].m_vecVelocity.m_vecY.m_nEncoder + 1704LL))(*&v5[1].m_vecVelocity.m_vecY.m_nEncoder);
      }
    }
  }
  else
  {
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    fDuration = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
    v10 = CEntityHandle::operator CEntityInstance *(hTarget);
    if ( v10 != 0 )
    {
      v11 = __dynamic_cast(v10, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
      if ( v11 != 0 )
        goto LABEL_9;
    }
    *v57.m128i_i32 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
    vFullExtendLocation = this->m_vProjectileVelocity;
    v58 = COERCE_FLOAT(_mm_cvtsi128_si32(v57));
    VectorNormalize(&vFullExtendLocation);
    v59 = _mm_cvtsi32_si128(LODWORD(v58));
    *v59.m128i_i32 = *v59.m128i_i32 * vFullExtendLocation.z;
    pKVb = v58 * vFullExtendLocation.x;
    pCastera = v58 * vFullExtendLocation.y;
    v60 = COERCE_FLOAT(_mm_cvtsi128_si32(v59));
    v61 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v61);
    *&v63 = pKVb + AbsOrigin->x;
    *&v64 = pCastera + AbsOrigin->y;
    v122.z = v60 + AbsOrigin->z;
    LODWORD(vTreeLoc) = 0;
    LODWORD(AbsOrigin) = this->chain_radius;
    *&vFullExtendLocation.x = __PAIR64__(v64, v63);
    *&v122.x = __PAIR64__(v64, v63);
    vFullExtendLocation.z = v122.z;
    *(&vTreeLoc + 1) = 0;
    v91 = 0.0;
    v92 = 0.0;
    CGridNav::GetStandingTreesAroundPoint(&g_GridNav, v122, (2 * AbsOrigin), 0, &vTreeLoc);
    if ( vTreeLoc > 0 && (v65 = (*(***(&vTreeLoc + 1) + 64LL))(**(&vTreeLoc + 1))) != 0 )
      v11 = __dynamic_cast(v65, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
    else
      v11 = 0;
    LODWORD(vTreeLoc) = 0;
    if ( (LODWORD(v92) & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Tree *,int>::Purge((&vTreeLoc + 8));
      if ( (LODWORD(v92) & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_Tree *,int>::Purge((&vTreeLoc + 8));
    }
    if ( v11 != 0 )
    {
LABEL_9:
      v12 = CDOTABaseAbility::GetCaster(this);
      pKV = CBaseEntity::GetAbsOrigin(v12);
      v13 = (*(*v11 + 64LL))(v11);
      v14 = CBaseEntity::GetAbsOrigin(v13);
      LODWORD(pKV) = fsqrt(((v14->x - pKV->x) * (v14->x - pKV->x)) + ((v14->y - pKV->y) * (v14->y - pKV->y)));
      fDurationa = *&pKV / CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_shredder_timber_chain");
      KeyValues::SetFloat(&kv, "duration", v15);
      KeyValues::SetPtr(&kv, "target", v11);
      pCaster = CDOTABaseAbility::GetCaster(this);
      v16 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v16, pCaster, this, "modifier_shredder_timber_chain", &kv, 0);
      CResponseCriteriaSet::AppendCriteria(&criteria, "timberchainhit", "yes", 1.0);
      m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 18, 1.0, &criteria, 1, 1, 0, 0, 0);
      m_nFXIndex = this->m_nFXIndex;
      DWORD2(vTreeLoc) = 0;
      v19 = fDurationa;
      fDurationb = m_nFXIndex;
      v20.m128d_f64[1] = (v19 + v19);
      v20.m128d_f64[0] = v20.m128d_f64[1] - 0.1;
      *&v21 = _mm_movedup_pd(v20).m128d_f64[0];
      *&vTreeLoc = v21;
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, fDurationb, 3, *&vTreeLoc, *(&vTreeLoc + 2));
      KeyValues::~KeyValues(&kv);
      v23 = (*(*v11 + 64LL))(v11);
      v24 = CBaseEntity::GetAbsOrigin(v23);
      *(&v86 + 1) = v24->y + 0.0;
      v87 = v24->z + 96.0;
      *&v86 = v24->x + 0.0;
      pKVa = this->m_nFXIndex;
      v25 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v25, pKVa, 1, v86, v87);
      v26 = (*(*v11 + 64LL))(v11);
      v27 = CBaseEntity::GetAbsOrigin(v26);
      *&v28 = v27->y + 0.0;
      *&v29 = v27->z + 96.0;
      *&vTreeLoc = v27->x + 0.0;
      *(&vTreeLoc + 4) = __PAIR64__(v29, v28);
      DOTA_EmitSoundLocation(&vTreeLoc, "Hero_Shredder.TimberChain.Impact", 1);
      v30 = CDOTABaseAbility::GetCaster(this);
      CBaseEntity::StopSound(v30, "Hero_Shredder.TimberChain.Cast");
      v31 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Shredder.TimberChain.Retract", v31);
      v32 = (*(*v11 + 64LL))(v11);
      v33 = CBaseEntity::GetAbsOrigin(v32);
      v34 = v33->z + 96.0;
      v35 = v33->x + 0.0;
      *(&vTreeLoc + 1) = v33->y + 0.0;
      *(&vTreeLoc + 2) = v34;
      *&vTreeLoc = v35;
      v36 = CDOTABaseAbility::GetCaster(this);
      v37 = GetParticleManager();
      LODWORD(v36) = CDOTA_ParticleManager::CreateParticle(
                       v37,
                       "particles/units/heroes/hero_shredder/shredder_timber_chain_tree.vpcf",
                       2,
                       v36,
                       0,
                       0);
      v38 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v38, v36, 0, *&vTreeLoc, *(&vTreeLoc + 2));
      v39 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v39, v36);
    }
    else
    {
      v66 = CDOTABaseAbility::GetCaster(this);
      v67 = CBaseEntity::GetAbsOrigin(v66);
      vecFallbackPosition.y = v67->y + 0.0;
      vecFallbackPosition.z = v67->z + 96.0;
      vecFallbackPosition.x = v67->x + 0.0;
      v68 = CDOTABaseAbility::GetCaster(this);
      pCasterb = this->m_nFXIndex;
      v69 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v69, pCasterb, 1, v68, 5, "attach_attack1", vecFallbackPosition, 1);
      CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "chain_radius", -1, 0);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
      LODWORD(v68) = this->m_nFXIndex;
      DWORD2(vTreeLoc) = 0;
      v71.m128d_f64[1] = ((fDuration + fDuration) / LevelSpecialValue);
      v71.m128d_f64[0] = v71.m128d_f64[1] - 0.1;
      *&v72 = _mm_movedup_pd(v71).m128d_f64[0];
      *&vTreeLoc = v72;
      v73 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v73, v68, 3, *&vTreeLoc, *(&vTreeLoc + 2));
      CResponseCriteriaSet::AppendCriteria(&criteria, "timberchainmiss", "yes", 1.0);
      v74 = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
      if ( v74 != 0 )
        CDOTA_Speech::SpeakConcept(v74, 18, &criteria, 4, 0, 0, 0, 0);
      v75 = CDOTABaseAbility::GetCaster(this);
      CBaseEntity::StopSound(v75, "Hero_Shredder.TimberChain.Cast");
      v76 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Shredder.TimberChain.Retract", v76);
    }
    this->m_bRetract = 1;
    v40 = this->m_nFXIndex;
    v41 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v41, v40);
    v42 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_HOOKSHOT,
      v42->m_iTeamNum.m_Value,
      vLocation,
      450.0,
      0.1,
      1);
    z = vec3_origin.z;
    v103 = 1;
    y = vec3_origin.y;
    v104 = 0;
    v108 = 0;
    v99 = z;
    v45 = *&vLocation->u.m_pPaths;
    x = this->m_vProjectileVelocity.x;
    v97 = vec3_origin.x;
    v91 = v45;
    v47 = *&vLocation->u.m_FixedPaths[2].m_nValue;
    v98 = y;
    v48 = this->m_vProjectileVelocity.y;
    v92 = v47;
    v49 = *&vLocation->u.m_FixedPaths[4].m_nValue;
    v50 = this->m_vProjectileVelocity.z;
    v109 = 0;
    v93 = v49;
    v105 = -1;
    *&vTreeLoc = 0;
    v100 = 0.0;
    v101 = 0;
    v102 = 0;
    v106 = 0;
    v107 = 0;
    v110 = -1;
    v111 = -1;
    v112 = 0;
    v113 = 1;
    v114 = 0;
    v115 = 0;
    v118 = 0;
    v116 = 0;
    v117 = 0;
    *(&vTreeLoc + 1) = this;
    v94 = -x;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    v95 = -v48;
    v96 = -v50;
    v100 = vptr_IHandleEntity[229](this, &vec3_origin, 0);
    v52 = CDOTABaseAbility::GetCaster(this);
    if ( v52 != 0 && (m_pEntity = v52->m_pEntity) != 0 )
    {
      v54 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v55 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v55 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v105) = v55 | v105 & 0x8000;
      v105 = (v54 << 15) | v105 & 0x7FFF;
    }
    else
    {
      v105 = -1;
    }
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v111 = 100;
    v113 = 0;
    v114 = 1;
    v110 = m_Value;
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &vTreeLoc);
    this->m_bRetract = 1;
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
  return 1;
}


// CDOTA_Ability_Shredder_TimberChain::GetAbilityDamageToTargetOverInterval  (line 660, @0x0000000002cfe960, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Shredder_TimberChain::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Shredder_TimberChain *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Shredder_TimberChain::~CDOTA_Modifier_Shredder_TimberChain  (line 672, @0x0000000002d46630, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Shredder_TimberChain::~CDOTA_Modifier_Shredder_TimberChain(
        CDOTA_Modifier_Shredder_TimberChain *const this)
{
  this->_vptr_CDOTA_Buff = &off_461F3F0;
  this->_vptr_CHorizontalMotionController = &off_461F6E0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hDamaged);
  if ( (this->m_hDamaged.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDamaged.m_Memory),
        (this->m_hDamaged.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDamaged.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Shredder_TimberChain::~CDOTA_Modifier_Shredder_TimberChain  (line 672, @0x0000000002d46ba0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Shredder_TimberChain, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Shredder_TimberChain::~CDOTA_Modifier_Shredder_TimberChain(
        CDOTA_Modifier_Shredder_TimberChain *const this)
{
  this->_vptr_CDOTA_Buff = &off_461F3F0;
  this->_vptr_CHorizontalMotionController = &off_461F6E0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hDamaged);
  if ( (this->m_hDamaged.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDamaged.m_Memory);
    if ( (this->m_hDamaged.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDamaged.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shredder_TimberChain::IsPurgable  (line 683, @0x0000000002d1d8a0, libserver.so)
bool __fastcall CDOTA_Modifier_Shredder_TimberChain::IsPurgable(CDOTA_Modifier_Shredder_TimberChain *const this)
{
  return 0;
}


// CDOTA_Modifier_Shredder_TimberChain::IsHorizontalMotionValidToApply  (line 689, @0x0000000002d1d8b0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Shredder_TimberChain::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Shredder_TimberChain *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Shredder_TimberChain::IsMotionController  (line 691, @0x0000000002d1d8e0, libserver.so)
bool __fastcall CDOTA_Modifier_Shredder_TimberChain::IsMotionController(
        CDOTA_Modifier_Shredder_TimberChain *const this)
{
  return 1;
}


// CDOTA_Modifier_Shredder_TimberChain::OnCreated  (line 710, @0x0000000002d0bab0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, KeyValues::GetPtr, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Shredder_TimberChain::OnCreated(
        CDOTA_Modifier_Shredder_TimberChain *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v8; // rax
  void *Ptr; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int16 v13; // cx

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "speed", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_14:
    this->radius = 0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
LABEL_15:
    this->damage = 0;
    goto LABEL_5;
  }
  this->speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_14;
LABEL_3:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "radius", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_15;
LABEL_4:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage", -1, 0);
LABEL_5:
  Parent = CDOTA_Buff::GetParent(this);
  v8 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v8, &this->CHorizontalMotionController, 0)
    && (Ptr = KeyValues::GetPtr(pKV, "target", 0)) != 0 )
  {
    v10 = (*(*Ptr + 64LL))(Ptr);
    if ( v10 != 0 && (v11 = *(v10 + 8)) != 0 )
    {
      v12 = (*(v11 + 16) >> 15) - (*(v11 + 48) & 1);
      if ( *(v11 + 16) == -1 )
        v13 = 0x7FFF;
      else
        v13 = *(v11 + 16) & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v13 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v12 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Shredder_TimberChain::OnDestroy  (line 743, @0x0000000002ccd390, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint
void __fastcall CDOTA_Modifier_Shredder_TimberChain::OnDestroy(CDOTA_Modifier_Shredder_TimberChain *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v5; // r12d
  CDOTA_BaseNPC *v6; // rax
  float v7; // xmm3_4
  Vector v8; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  v6 = CDOTA_Buff::GetCaster(this);
  v8 = *CBaseEntity::GetAbsOrigin(v6);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v5, v8, 90.0, v7);
}


// CDOTA_Modifier_Shredder_TimberChain::UpdateHorizontalMotion  (line 753, @0x0000000002d13ef0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DotProduct, Element, FastSqrt, Get, GetInstance, GetPaddedCollisionRadius, GetTeamNumber, GrowMemory, HasElement, InState, IsInvulnerable, Length2D, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator+, operator-, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle (25 total)
// strings: "particles/units/heroes/hero_shredder/shredder_timber_dmg.vpcf", "attach_hitloc", "Hero_Shredder.TimberChain.Damage", "Hero_Shredder.TimberChain.Impact", "particles/units/heroes/hero_shredder/shredder_tree_dmg.vpcf"
void __fastcall CDOTA_Modifier_Shredder_TimberChain::UpdateHorizontalMotion(
        CDOTA_Modifier_Shredder_TimberChain *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  CEntityInstance *v5; // rax
  __m128i v6; // xmm7
  float v7; // r14d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v11; // rax
  __int64 v12; // rbx
  int v13; // r12d
  CHandle<CBaseEntity> *v14; // r14
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // r15
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  __int64 m_Size; // r15
  int v25; // eax
  CHandle<CBaseEntity> *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_Tree *v28; // r15
  const Vector *v29; // rbx
  const CBaseEntity *v30; // rax
  const Vector *v31; // rax
  vec_t v32; // xmm1_4
  vec_t v33; // xmm0_4
  float speed; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  CDOTA_BaseNPC *v38; // rax
  const Vector *v39; // rax
  vec_t v40; // xmm1_4
  vec_t v41; // xmm0_4
  CDOTA_BaseNPC *v42; // rax
  const CBaseEntity *v43; // rax
  const Vector *v44; // rax
  double v45; // xmm1_8
  const CBaseEntity *v46; // rax
  const Vector *v47; // rax
  vec_t v48; // xmm4_4
  vec_t v49; // xmm0_4
  double v50; // xmm1_8
  double v51; // xmm0_8
  CDOTA_BaseNPC *v52; // rax
  CDOTA_BaseNPC *v53; // rax
  float v54; // xmm2_4
  const CBaseEntity *v55; // rax
  const Vector *v56; // rax
  float v57; // xmm0_4
  int v58; // xmm2_4
  CDOTA_BaseNPC *v59; // rax
  CDOTA_BaseNPC *v60; // rax
  const Vector *v61; // rbx
  CDOTA_BaseNPC *v62; // rax
  CDOTA_BaseNPC *v63; // rax
  __m128i v64; // xmm4
  float v65; // r14d
  CDOTA_BaseNPC *v66; // r12
  CDOTA_BaseNPC *v67; // rax
  const Vector *v68; // rbx
  CDOTA_BaseNPC *v69; // rax
  __int64 v70; // rbx
  int v71; // r12d
  CHandle<CBaseEntity> *v72; // r14
  CEntityInstance *v73; // rax
  __m128i v74; // xmm6
  CDOTA_BaseNPC *v75; // r15
  float v76; // r14d
  CDOTA_BaseNPC *v77; // rax
  CDOTA_ParticleManager *v78; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v80; // rax
  CDOTA_ParticleManager *v81; // rax
  CDOTA_ParticleManager *v82; // rax
  __int64 v83; // r15
  int v84; // eax
  CHandle<CBaseEntity> *v85; // rax
  void (__fastcall *v86)(CDOTA_Tree *, _QWORD, __int64); // rbx
  CDOTA_BaseNPC *v87; // rax
  unsigned int v88; // eax
  CDOTA_BaseNPC *v89; // rax
  int v90; // eax
  CDOTA_BaseNPC *v91; // rbx
  CDOTA_ParticleManager *v92; // rax
  const CBaseEntity *v93; // rax
  const Vector *v94; // r12
  CDOTA_ParticleManager *v95; // rax
  CDOTA_ParticleManager *v96; // rax
  const CBaseEntity *v97; // rax
  const Vector *v98; // rbx
  CDOTA_BaseNPC *v99; // rax
  float vStepa; // [rsp+20h] [rbp-B0h]
  float vStepb; // [rsp+20h] [rbp-B0h]
  CDOTA_Tree *pTree; // [rsp+28h] [rbp-A8h]
  float TARGET_RANGEa; // [rsp+30h] [rbp-A0h]
  const Vector *TARGET_RANGEb; // [rsp+30h] [rbp-A0h]
  float TARGET_RANGEc; // [rsp+30h] [rbp-A0h]
  float TARGET_RANGE; // [rsp+30h] [rbp-A0h]
  float TARGET_RANGEd; // [rsp+30h] [rbp-A0h]
  CDOTABaseAbility *TARGET_RANGEe; // [rsp+30h] [rbp-A0h]
  const Vector *TARGET_RANGEf; // [rsp+30h] [rbp-A0h]
  float flToTargetLena; // [rsp+40h] [rbp-90h]
  float flToTargetLenb; // [rsp+40h] [rbp-90h]
  unsigned int flToTargetLenc; // [rsp+40h] [rbp-90h]
  double flToTargetLen; // [rsp+40h] [rbp-90h]
  float flToTargetLend; // [rsp+40h] [rbp-90h]
  Vector vDirection; // [rsp+50h] [rbp-80h] BYREF
  Vector vNewLocation; // [rsp+60h] [rbp-70h] BYREF
  Vector vNewDirection; // [rsp+70h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+80h] [rbp-50h] BYREF

  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  if ( v5 != 0 )
  {
    pTree = __dynamic_cast(v5, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
    if ( pTree != 0 )
    {
      if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x20) != 0
        || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x40) != 0 )
      {
        CDOTA_Buff::Destroy(this, 0, 0, 0);
      }
      *v6.m128i_i32 = this->radius;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      Parent = CDOTA_Buff::GetParent(this);
      v9 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
      v11 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v11->m_iTeamNum.m_Value, AbsOrigin, Parent, v7, &entities, 2, 19, 0, 0, 0);
      if ( entities.m_Size > 0 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          while ( 1 )
          {
            v14 = &entities.m_Memory.m_pMemory[v12];
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_hDamaged,
                   &entities.m_Memory.m_pMemory[v12]) < 0 )
            {
              v15 = CEntityHandle::operator CEntityInstance *(v14);
              v16 = v15;
              if ( v15 != 0
                && BYTE3(v15[7]._vptr_IHandleEntity) != 0
                && LOBYTE(v15[71]._vptr_IHandleEntity) == 0
                && (BYTE1(v15[58]._vptr_IHandleEntity) & 1) == 0 )
              {
                TARGET_RANGEa = this->damage;
                Ability = CDOTA_Buff::GetAbility(this);
                v18 = CDOTA_Buff::GetParent(this);
                ApplyDamage(v18, v16, Ability, TARGET_RANGEa, 4, 0);
                Caster = CDOTA_Buff::GetCaster(this);
                ParticleManager = GetParticleManager();
                LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                                    ParticleManager,
                                    "particles/units/heroes/hero_shredder/shredder_timber_dmg.vpcf",
                                    2,
                                    v16,
                                    0,
                                    Caster);
                TARGET_RANGEb = CBaseEntity::GetAbsOrigin(v16);
                v21 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v21, Caster, 0, v16, 5, "attach_hitloc", *TARGET_RANGEb, 1);
                v22 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v22, Caster, 1, v16, 1, 0, vec3_invalid, 1);
                v23 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v23, Caster);
                DOTA_EmitSound(10, "Hero_Shredder.TimberChain.Damage", v16);
                v14 = &entities.m_Memory.m_pMemory[v12];
              }
              m_Size = this->m_hDamaged.m_Size;
              v25 = this->m_hDamaged.m_Size;
              if ( m_Size == this->m_hDamaged.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hDamaged.m_Memory, 1);
                v25 = this->m_hDamaged.m_Size;
              }
              this->m_hDamaged.m_Size = v25 + 1;
              v26 = &this->m_hDamaged.m_Memory.m_pMemory[m_Size];
              if ( v26 != 0 )
                break;
            }
            ++v13;
            ++v12;
            if ( entities.m_Size <= v13 )
              goto LABEL_18;
          }
          ++v13;
          ++v12;
          v26->m_Index = v14->m_Index;
        }
        while ( entities.m_Size > v13 );
      }
LABEL_18:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      v27 = CDOTA_Buff::GetParent(this);
      v28 = pTree;
      v29 = CBaseEntity::GetAbsOrigin(v27);
      v30 = (*(pTree->_vptr_CObstructionObject + 8))(pTree);
      v31 = CBaseEntity::GetAbsOrigin(v30);
      v32 = v31->y - v29->y;
      v33 = v31->z - v29->z;
      vDirection.x = v31->x - v29->x;
      vDirection.y = v32;
      vDirection.z = v33;
      VectorNormalize(&vDirection);
      speed = this->speed;
      v35 = (vDirection.x * speed) * a3;
      v36 = (vDirection.y * speed) * a3;
      v37 = (speed * vDirection.z) * a3;
      vStepa = v35;
      TARGET_RANGEc = v36;
      flToTargetLena = v37;
      v38 = CDOTA_Buff::GetParent(this);
      v39 = CBaseEntity::GetAbsOrigin(v38);
      v40 = vStepa + v39->x;
      v41 = flToTargetLena + v39->z;
      vNewLocation.y = TARGET_RANGEc + v39->y;
      vNewLocation.x = v40;
      vNewLocation.z = v41;
      flToTargetLenb = (*(v28->_vptr_CObstructionObject + 1))(v28);
      v42 = CDOTA_Buff::GetParent(this);
      TARGET_RANGE = (flToTargetLenb + (v42->m_flHullRadius + v42->m_flCollisionPadding)) + 5.0;
      v43 = (*(v28->_vptr_CObstructionObject + 8))(v28);
      v44 = CBaseEntity::GetAbsOrigin(v43);
      *&flToTargetLenc = ((vNewLocation.x - v44->x) * (vNewLocation.x - v44->x))
                       + ((vNewLocation.y - v44->y) * (vNewLocation.y - v44->y));
      *&v45 = flToTargetLenc;
      *&v45 = fsqrt(*&flToTargetLenc);
      flToTargetLen = v45;
      v46 = (*(v28->_vptr_CObstructionObject + 8))(v28);
      v47 = CBaseEntity::GetAbsOrigin(v46);
      v48 = v47->x - vNewLocation.x;
      v49 = v47->z - vNewLocation.z;
      vNewDirection.y = v47->y - vNewLocation.y;
      vNewDirection.x = v48;
      vNewDirection.z = v49;
      VectorNormalize(&vNewDirection);
      *&v51 = LODWORD(vNewDirection.x);
      v50 = flToTargetLen;
      *&v51 = ((vNewDirection.x * vDirection.x) + (vNewDirection.y * vDirection.y)) + (vNewDirection.z * vDirection.z);
      if ( *&v51 < 0.0 || TARGET_RANGE > *&flToTargetLen )
      {
        v54 = TARGET_RANGE * vDirection.z;
        flToTargetLend = vDirection.x * TARGET_RANGE;
        TARGET_RANGEd = vDirection.y * TARGET_RANGE;
        vStepb = v54;
        v55 = (*(pTree->_vptr_CObstructionObject + 8))(pTree, v51, v50);
        v56 = CBaseEntity::GetAbsOrigin(v55);
        v57 = v56->z - vStepb;
        *&v58 = v56->x - flToTargetLend;
        *(&entities.m_Size + 1) = v56->y - TARGET_RANGEd;
        *&entities.m_Memory.m_pMemory = v57;
        entities.m_Size = v58;
        v59 = CDOTA_Buff::GetParent(this);
        CBaseEntity::SetAbsOrigin(v59, &entities);
        v60 = CDOTA_Buff::GetParent(this);
        v61 = CBaseEntity::GetAbsOrigin(v60);
        v62 = CDOTA_Buff::GetParent(this);
        if ( CDOTA_BaseNPC::DoesUnitCollideAtPosition(v62, 1, *&v61->x, v61->z) )
        {
          v97 = (*(pTree->_vptr_CObstructionObject + 8))(pTree);
          v98 = CBaseEntity::GetAbsOrigin(v97);
          v99 = CDOTA_Buff::GetParent(this);
          CBaseEntity::SetAbsOrigin(v99, v98);
        }
        v63 = CDOTA_Buff::GetCaster(this);
        DOTA_EmitSound(10, "Hero_Shredder.TimberChain.Impact", v63);
        entities.m_Size = 0;
        *v64.m128i_i32 = this->radius;
        entities.m_Memory.m_pMemory = 0;
        entities.m_Memory.m_nAllocationCount = 0;
        entities.m_Memory.m_nGrowSize = 0;
        v65 = COERCE_FLOAT(_mm_cvtsi128_si32(v64));
        v66 = CDOTA_Buff::GetParent(this);
        v67 = CDOTA_Buff::GetParent(this);
        v68 = CBaseEntity::GetAbsOrigin(v67);
        v69 = CDOTA_Buff::GetParent(this);
        FindUnitsInRadius(v69->m_iTeamNum.m_Value, v68, v66, v65, &entities, 2, 19, 0, 0, 0);
        if ( entities.m_Size > 0 )
        {
          v70 = 0;
          v71 = 0;
          do
          {
            while ( 1 )
            {
              v72 = &entities.m_Memory.m_pMemory[v70];
              if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     &this->m_hDamaged,
                     &entities.m_Memory.m_pMemory[v70]) < 0 )
              {
                v73 = CEntityHandle::operator CEntityInstance *(v72);
                v75 = v73;
                if ( v73 != 0
                  && BYTE3(v73[7]._vptr_IHandleEntity) != 0
                  && LOBYTE(v73[71]._vptr_IHandleEntity) == 0
                  && (BYTE1(v73[58]._vptr_IHandleEntity) & 1) == 0 )
                {
                  *v74.m128i_i32 = this->damage;
                  v76 = COERCE_FLOAT(_mm_cvtsi128_si32(v74));
                  TARGET_RANGEe = CDOTA_Buff::GetAbility(this);
                  v77 = CDOTA_Buff::GetParent(this);
                  ApplyDamage(v77, v75, TARGET_RANGEe, v76, 4, 0);
                  v78 = GetParticleManager();
                  Particle = CDOTA_ParticleManager::CreateParticle(
                               v78,
                               "particles/units/heroes/hero_shredder/shredder_timber_dmg.vpcf",
                               2,
                               v75,
                               0,
                               0);
                  TARGET_RANGEf = CBaseEntity::GetAbsOrigin(v75);
                  v80 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(
                    v80,
                    Particle,
                    0,
                    v75,
                    5,
                    "attach_hitloc",
                    *TARGET_RANGEf,
                    1);
                  v81 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v81, Particle, 1, v75, 1, 0, vec3_invalid, 1);
                  v82 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v82, Particle);
                  DOTA_EmitSound(10, "Hero_Shredder.TimberChain.Damage", v75);
                  v72 = &entities.m_Memory.m_pMemory[v70];
                }
                v83 = this->m_hDamaged.m_Size;
                v84 = this->m_hDamaged.m_Size;
                if ( v83 == this->m_hDamaged.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hDamaged.m_Memory, 1);
                  v84 = this->m_hDamaged.m_Size;
                }
                this->m_hDamaged.m_Size = v84 + 1;
                v85 = &this->m_hDamaged.m_Memory.m_pMemory[v83];
                if ( v85 != 0 )
                  break;
              }
              ++v71;
              ++v70;
              if ( entities.m_Size <= v71 )
                goto LABEL_37;
            }
            ++v71;
            ++v70;
            v85->m_Index = v72->m_Index;
          }
          while ( entities.m_Size > v71 );
        }
LABEL_37:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
        v86 = *(pTree->_vptr_CObstructionObject + 9);
        v87 = CDOTA_Buff::GetCaster(this);
        v88 = (*(v87->_vptr_IHandleEntity + 414))(v87);
        v86(pTree, v88, 0xFFFFFFFFLL);
        v89 = CDOTA_Buff::GetCaster(this);
        v90 = (*(v89->_vptr_IHandleEntity + 414))(v89);
        CDOTA_CombatLog::AddTreeCutDownEvent(&g_DOTACombatLog, v90, 1);
        CDOTA_Buff::Destroy(this, 0, 0, 0);
        v91 = CDOTA_Buff::GetCaster(this);
        v92 = GetParticleManager();
        LODWORD(v91) = CDOTA_ParticleManager::CreateParticle(
                         v92,
                         "particles/units/heroes/hero_shredder/shredder_tree_dmg.vpcf",
                         2,
                         0,
                         0,
                         v91);
        v93 = (*(pTree->_vptr_CObstructionObject + 8))(pTree);
        v94 = CBaseEntity::GetAbsOrigin(v93);
        v95 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v95, v91, 0, *&v94->x, v94->z);
        v96 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v96, v91);
      }
      else
      {
        VectorAngles(&vDirection, &entities);
        entities.m_Size = 0;
        LODWORD(entities.m_Memory.m_pMemory) = 0;
        v52 = CDOTA_Buff::GetParent(this);
        CBaseEntity::SetAbsAngles(v52, &entities);
        v53 = CDOTA_Buff::GetParent(this);
        CBaseEntity::SetAbsOrigin(v53, &vNewLocation);
      }
    }
  }
}


// CDOTA_Modifier_Shredder_TimberChain::OnHorizontalMotionInterrupted  (line 880, @0x0000000002cccfa0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::StopSound, CDOTA_Buff::Destroy
// strings: "Hero_Shredder.TimberChain.Retract"
void __fastcall CDOTA_Modifier_Shredder_TimberChain::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Shredder_TimberChain *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_Shredder.TimberChain.Retract");
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Shredder_TimberChain::CheckState  (line 890, @0x0000000002cc8f10, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Shredder_TimberChain::CheckState(
        CDOTA_Modifier_Shredder_TimberChain *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Ability_Shredder_Reactive_Armor::~CDOTA_Ability_Shredder_Reactive_Armor  (line 903, @0x0000000002d2baf0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Shredder_Reactive_Armor::~CDOTA_Ability_Shredder_Reactive_Armor(
        CDOTA_Ability_Shredder_Reactive_Armor *const this)
{
  this->_vptr_IHandleEntity = &off_461F7B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Shredder_Reactive_Armor::~CDOTA_Ability_Shredder_Reactive_Armor  (line 903, @0x0000000002d2bb10, libserver.so)  // inlines: ~CDOTA_Ability_Shredder_Reactive_Armor
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Shredder_Reactive_Armor::~CDOTA_Ability_Shredder_Reactive_Armor(
        CDOTA_Ability_Shredder_Reactive_Armor *const this)
{
  this->_vptr_IHandleEntity = &off_461F7B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shredder_Reactive_Armor::Schema_DynamicBinding  (line 905, @0x0000000002d1d8f0, libserver.so)
// globals: CDOTA_Ability_Shredder_Reactive_Armor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_Reactive_Armor::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_Reactive_Armor *const this)
{
  return CDOTA_Ability_Shredder_Reactive_Armor::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 905, @0x0000000002d1d900, libserver.so)
// globals: CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::DestructInstance  (line 905, @0x0000000002d1d910, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shredder_Reactive_Armor>
void __fastcall CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::FreeInstance  (line 905, @0x0000000002d1d930, libserver.so)
void __fastcall CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::CanAllocate  (line 905, @0x0000000002d1d950, libserver.so)
bool __fastcall CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 905, @0x0000000002d1d960, libserver.so)
// globals: CDOTA_Ability_Shredder_Reactive_Armor::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_Reactive_Armor::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::AllocateInstance  (line 905, @0x0000000002d24610, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::ConstructInstance  (line 905, @0x0000000002d28f90, libserver.so)  // inlines: CDOTA_Ability_Shredder_Reactive_Armor, Construct<CDOTA_Ability_Shredder_Reactive_Armor>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_461F7B0;
  }
  return p;
}


// CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 905, @0x0000000002d33f00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 905, @0x0000000002d33f20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal  (line 905, @0x0000000002d47f60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "shredder_reactive_armor", "CDOTA_Ability_Shredder_Reactive_Armor"
// globals: `guard variable for'CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass, CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass, __dso_handle, CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClassInfo, CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass);
    CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass._vptr_CEntityClass = off_461F730;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass);
    __cxa_atexit(
      CDOTA_Ability_Shredder_Reactive_Armor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shredder_Reactive_ArmorClass != 0 )
    return &CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass;
  if ( `guard variable for'CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClassInfo,
      "CDOTA_Ability_Shredder_Reactive_Armor",
      "shredder_reactive_armor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClassInfo);
  }
  CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass.m_pClassInfo = &CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClassInfo;
  CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass.m_pBaseClassInfo = CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shredder_Reactive_ArmorClass = &CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass;
  CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClassInfo.m_pClass = &CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass;
  CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shredder_Reactive_ArmorClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shredder_Reactive_Armor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_Reactive_ArmorClass;
}


// CDOTA_Ability_Shredder_Reactive_Armor::GetIntrinsicModifierName  (line 908, @0x0000000002d1d970, libserver.so)
// strings: "modifier_shredder_reactive_armor"
const char *__fastcall CDOTA_Ability_Shredder_Reactive_Armor::GetIntrinsicModifierName(
        CDOTA_Ability_Shredder_Reactive_Armor *const this)
{
  return "modifier_shredder_reactive_armor";
}


// CDOTA_Modifier_Shredder_Reactive_Armor::~CDOTA_Modifier_Shredder_Reactive_Armor  (line 917, @0x0000000002d28110, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor::~CDOTA_Modifier_Shredder_Reactive_Armor(
        CDOTA_Modifier_Shredder_Reactive_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_4620270;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shredder_Reactive_Armor::~CDOTA_Modifier_Shredder_Reactive_Armor  (line 917, @0x0000000002d28130, libserver.so)  // inlines: ~CDOTA_Modifier_Shredder_Reactive_Armor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor::~CDOTA_Modifier_Shredder_Reactive_Armor(
        CDOTA_Modifier_Shredder_Reactive_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_4620270;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shredder_Reactive_Armor::IsHidden  (line 922, @0x0000000002d2b1b0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_shredder_reactive_armor_stack"
bool __fastcall CDOTA_Modifier_Shredder_Reactive_Armor::IsHidden(CDOTA_Modifier_Shredder_Reactive_Armor *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  bool v3; // zf
  int (**vptr_CDOTA_Buff)(...); // rax
  bool result; // al
  int v6; // edx

  Parent = CDOTA_Buff::GetParent(this);
  v3 = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_shredder_reactive_armor_stack", 0) == 0;
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  if ( !v3 )
    return vptr_CDOTA_Buff[27](this) == 0;
  v6 = vptr_CDOTA_Buff[27](this);
  result = 1;
  if ( v6 != 0 )
  {
    (*(this->_vptr_CDOTA_Buff + 28))(this, 0);
    return 1;
  }
  return result;
}


// CDOTA_Modifier_Shredder_Reactive_Armor::IsPurgable  (line 935, @0x0000000002d1d980, libserver.so)
bool __fastcall CDOTA_Modifier_Shredder_Reactive_Armor::IsPurgable(CDOTA_Modifier_Shredder_Reactive_Armor *const this)
{
  return 0;
}


// CDOTA_Modifier_Shredder_Reactive_Armor::OnCreated  (line 969, @0x0000000002d09f70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "stack_limit"
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor::OnCreated(
        CDOTA_Modifier_Shredder_Reactive_Armor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  (*(this->_vptr_CDOTA_Buff + 28))(this, 0);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->stack_limit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "stack_limit", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->stack_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "stack_duration", -1, 0);
      return;
    }
  }
  else
  {
    this->stack_limit = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->stack_duration = 0.0;
}


// CDOTA_Modifier_Shredder_Reactive_Armor::OnStackCountChanged  (line 993, @0x0000000002d093a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "stack_limit"
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor::OnStackCountChanged(
        CDOTA_Modifier_Shredder_Reactive_Armor *const this,
        int iOldCount)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->stack_limit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "stack_limit", -1, 0);
  else
    this->stack_limit = 0;
}


// CDOTA_Modifier_Shredder_Reactive_Armor::OnRefresh  (line 1047, @0x0000000002d09cd0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "stack_limit"
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor::OnRefresh(
        CDOTA_Modifier_Shredder_Reactive_Armor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float LevelSpecialValue; // xmm0_4
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->stack_limit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "stack_limit", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "stack_duration", -1, 0);
      this->stack_duration = LevelSpecialValue;
      goto LABEL_4;
    }
  }
  else
  {
    this->stack_limit = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  LevelSpecialValue = 0.0;
  this->stack_duration = 0.0;
LABEL_4:
  v6 = 0.0;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flStackDieTime = LevelSpecialValue + v6;
}


// CDOTA_Modifier_Shredder_Reactive_Armor::DeclareFunctions  (line 1086, @0x0000000002cc8f20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Shredder_Reactive_Armor::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Shredder_Reactive_Armor::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor::DeclareFunctions(
        CDOTA_Modifier_Shredder_Reactive_Armor *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Shredder_Reactive_Armor::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Shredder_Reactive_Armor::OnDeath;
}


// CDOTA_Modifier_Shredder_Reactive_Armor::OnAttackLanded  (line 1095, @0x0000000002cd97e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetCaster (17 total)
// strings: "modifier_shredder_reactive_armor_stack", "particles/units/heroes/hero_shredder/shredder_reactive_hit.vpcf", "attach_chimmney", "attach_hitloc", "Hero_Shredder.ReactiveArmor"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Shredder_Reactive_Armor::OnAttackLanded(
        CDOTA_Modifier_Shredder_Reactive_Armor *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // r13
  float v9; // xmm1_4
  CDOTABaseAbility *v10; // r14
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v17; // r15
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // r14
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r14
  CDOTA_BaseNPC *v23; // r15
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v29; // r13
  CDOTA_BaseNPC *v30; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v32 = __readfsqword(0x28u);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->htarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( Parent == m_pInstance )
          {
            result.m_szVal = CDOTA_Buff::GetParent(this);
            *&result.m_eType = 1;
            if ( (result.m_szVal[2787] & 0x10) != 0 )
              goto LABEL_6;
            KeyValues::KeyValues(&kv, "modifier_shredder_reactive_armor_stack");
            KeyValues::SetFloat(&kv, "duration", v9);
            if ( (*(this->_vptr_CDOTA_Buff + 27))(this) >= this->stack_limit )
            {
              ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_shredder_reactive_armor_stack", 0);
              if ( ModifierByName != 0 )
                CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
              Ability = CDOTA_Buff::GetAbility(this);
              v29 = CDOTA_Buff::GetParent(this);
              v30 = CDOTA_Buff::GetParent(this);
              CDOTA_BaseNPC::AddNewModifier(v30, v29, Ability, "modifier_shredder_reactive_armor_stack", &kv, 0);
            }
            else
            {
              v10 = CDOTA_Buff::GetAbility(this);
              v11 = CDOTA_Buff::GetParent(this);
              v12 = CDOTA_Buff::GetParent(this);
              CDOTA_BaseNPC::AddNewModifier(v12, v11, v10, "modifier_shredder_reactive_armor_stack", &kv, 0);
              (*(this->_vptr_CDOTA_Buff + 25))(this);
            }
            v13 = CDOTA_Buff::GetParent(this);
            ParticleManager = GetParticleManager();
            LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_shredder/shredder_reactive_hit.vpcf",
                             2,
                             v13,
                             0,
                             0);
            v15 = CDOTA_Buff::GetParent(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
            v17 = CDOTA_Buff::GetParent(this);
            v18 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v18, v13, 0, v17, 5, "attach_chimmney", *AbsOrigin, 1);
            v19 = CDOTA_Buff::GetParent(this);
            v20 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v20, v13, 1, v19, 1, 0, vec3_invalid, 1);
            v21 = CDOTA_Buff::GetParent(this);
            v22 = CBaseEntity::GetAbsOrigin(v21);
            v23 = CDOTA_Buff::GetParent(this);
            v24 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v24, v13, 2, v23, 5, "attach_hitloc", *v22, 1);
            v25 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v25, v13);
            Caster = CDOTA_Buff::GetCaster(this);
            DOTA_EmitSound(10, "Hero_Shredder.ReactiveArmor", Caster);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Shredder_Reactive_Armor::OnDeath  (line 1138, @0x0000000002cd86b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Shredder_Reactive_Armor::OnDeath(
        CDOTA_Modifier_Shredder_Reactive_Armor *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
    (*(this->_vptr_CDOTA_Buff + 28))(this, 0);
  return 1uLL;
}


// CDOTA_Modifier_Shredder_Reactive_Armor_Stack::~CDOTA_Modifier_Shredder_Reactive_Armor_Stack  (line 1156, @0x0000000002d280c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor_Stack::~CDOTA_Modifier_Shredder_Reactive_Armor_Stack(
        CDOTA_Modifier_Shredder_Reactive_Armor_Stack *const this)
{
  this->_vptr_CDOTA_Buff = &off_4620590;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shredder_Reactive_Armor_Stack::~CDOTA_Modifier_Shredder_Reactive_Armor_Stack  (line 1156, @0x0000000002d280e0, libserver.so)  // inlines: ~CDOTA_Modifier_Shredder_Reactive_Armor_Stack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor_Stack::~CDOTA_Modifier_Shredder_Reactive_Armor_Stack(
        CDOTA_Modifier_Shredder_Reactive_Armor_Stack *const this)
{
  this->_vptr_CDOTA_Buff = &off_4620590;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shredder_Reactive_Armor_Stack::IsHidden  (line 1161, @0x0000000002d1d990, libserver.so)
bool __fastcall CDOTA_Modifier_Shredder_Reactive_Armor_Stack::IsHidden(
        CDOTA_Modifier_Shredder_Reactive_Armor_Stack *const this)
{
  return 1;
}


// CDOTA_Modifier_Shredder_Reactive_Armor_Stack::IsPurgable  (line 1162, @0x0000000002d1d9a0, libserver.so)
bool __fastcall CDOTA_Modifier_Shredder_Reactive_Armor_Stack::IsPurgable(
        CDOTA_Modifier_Shredder_Reactive_Armor_Stack *const this)
{
  return 0;
}


// CDOTA_Modifier_Shredder_Reactive_Armor_Stack::GetAttributes  (line 1164, @0x0000000002d1d9b0, libserver.so)
int __fastcall CDOTA_Modifier_Shredder_Reactive_Armor_Stack::GetAttributes(
        CDOTA_Modifier_Shredder_Reactive_Armor_Stack *const this)
{
  return 2;
}


// CDOTA_Modifier_Shredder_Reactive_Armor_Stack::OnCreated  (line 1186, @0x0000000002cf73c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_hp_regen"
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor_Stack::OnCreated(
        CDOTA_Modifier_Shredder_Reactive_Armor_Stack *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "bonus_armor", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_hp_regen = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "bonus_hp_regen", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_armor = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_hp_regen = 0.0;
}


// CDOTA_Modifier_Shredder_Reactive_Armor_Stack::OnDurationExpired  (line 1199, @0x0000000002ccc400, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_shredder_reactive_armor"
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor_Stack::OnDurationExpired(
        CDOTA_Modifier_Shredder_Reactive_Armor_Stack *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax

  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_shredder_reactive_armor", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
}


// CDOTA_Modifier_Shredder_Reactive_Armor_Stack::DeclareFunctions  (line 1212, @0x0000000002cc8f60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Shredder_Reactive_Armor_Stack::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Shredder_Reactive_Armor_Stack::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Shredder_Reactive_Armor_Stack::DeclareFunctions(
        CDOTA_Modifier_Shredder_Reactive_Armor_Stack *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Shredder_Reactive_Armor_Stack::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Shredder_Reactive_Armor_Stack::GetModifierConstantHealthRegen;
}


// CDOTA_Modifier_Shredder_Reactive_Armor_Stack::GetModifierPhysicalArmorBonus  (line 1220, @0x0000000002cc8fa0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Shredder_Reactive_Armor_Stack::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Shredder_Reactive_Armor_Stack *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->bonus_armor) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Shredder_Reactive_Armor_Stack::GetModifierConstantHealthRegen  (line 1227, @0x0000000002cc8fc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Shredder_Reactive_Armor_Stack::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Shredder_Reactive_Armor_Stack *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->bonus_hp_regen) << 32) | 1;
  return result;
}


// CDOTA_Ability_Shredder_Chakram::~CDOTA_Ability_Shredder_Chakram  (line 1238, @0x0000000002d46230, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Shredder_Chakram::~CDOTA_Ability_Shredder_Chakram(
        CDOTA_Ability_Shredder_Chakram *const this)
{
  this->_vptr_IHandleEntity = &off_46208F0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hReturnHits);
  if ( (this->m_hReturnHits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hReturnHits.m_Memory),
        (this->m_hReturnHits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hReturnHits.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Shredder_Chakram::~CDOTA_Ability_Shredder_Chakram  (line 1238, @0x0000000002d467a0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Shredder_Chakram, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Shredder_Chakram::~CDOTA_Ability_Shredder_Chakram(
        CDOTA_Ability_Shredder_Chakram *const this)
{
  this->_vptr_IHandleEntity = &off_46208F0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hReturnHits);
  if ( (this->m_hReturnHits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hReturnHits.m_Memory);
    if ( (this->m_hReturnHits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hReturnHits.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shredder_Chakram::Schema_DynamicBinding  (line 1240, @0x0000000002d1d9c0, libserver.so)
// globals: CDOTA_Ability_Shredder_Chakram::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_Chakram::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_Chakram *const this)
{
  return CDOTA_Ability_Shredder_Chakram::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1240, @0x0000000002d1d9d0, libserver.so)
// globals: CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::DestructInstance  (line 1240, @0x0000000002d1d9e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shredder_Chakram>
void __fastcall CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::FreeInstance  (line 1240, @0x0000000002d1da00, libserver.so)
void __fastcall CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::CanAllocate  (line 1240, @0x0000000002d1da20, libserver.so)
bool __fastcall CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1240, @0x0000000002d1da30, libserver.so)
// globals: CDOTA_Ability_Shredder_Chakram::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_Chakram::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::AllocateInstance  (line 1240, @0x0000000002d24650, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::ConstructInstance  (line 1240, @0x0000000002d32be0, libserver.so)  // inlines: CDOTA_Ability_Shredder_Chakram, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Shredder_Chakram>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 241) = -1;
    *p = &off_46208F0;
    *(p + 242) = 0;
    *(p + 122) = 0;
    *(p + 246) = 0;
    *(p + 247) = 0;
    *(p + 248) = 0;
    *(p + 249) = -1;
  }
  return p;
}


// CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1240, @0x0000000002d33f50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1240, @0x0000000002d33f70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo  (line 1240, @0x0000000002d3faa0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::InitOptionalTables, CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal
// strings: "shredder_chakram", "CDOTA_Ability_Shredder_Chakram", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo, CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo != 0 )
    return &CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo) == 0 )
    return &CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo;
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
    &CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo,
    "CDOTA_Ability_Shredder_Chakram",
    "shredder_chakram",
    0,
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo);
  return &CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo;
}


// CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal  (line 1240, @0x0000000002d4dfe0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "shredder_chakram", "CDOTA_Ability_Shredder_Chakram"
// globals: `guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass, CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo, CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass) != 0 )
  {
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_pClassInfo = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_flags = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_pInputs = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_nInputCount = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_pOutputs = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_nOutputCount = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_pGameClass = 0;
    CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass._vptr_CEntityClass = off_4620870;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass);
    __cxa_atexit(
      CDOTA_Ability_Shredder_Chakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shredder_ChakramClass != 0 )
    return &CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass;
  if ( `guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo,
      "CDOTA_Ability_Shredder_Chakram",
      "shredder_chakram",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo);
  }
  CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_pClassInfo = &CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo;
  CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_pBaseClassInfo = CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shredder_ChakramClass = &CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass;
  CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramClassInfo.m_pClass = &CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass;
  CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shredder_ChakramClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shredder_Chakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramClass;
}


// CDOTA_Ability_Shredder_Chakram::Spawn  (line 1244, @0x0000000002d2b3e0, libserver.so)
// calls: CDOTABaseAbility::Spawn
void __fastcall CDOTA_Ability_Shredder_Chakram::Spawn(
        CDOTA_Ability_Shredder_Chakram *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  this->m_nFXIndex = -1;
  this->m_nFXIndexB = -1;
  this->m_nFXIndexC = -1;
}


// CDOTA_Ability_Shredder_Chakram::GetAssociatedPrimaryAbilities  (line 1277, @0x0000000002d2f780, libserver.so)  // inlines: FStrEq, GetAbilityName, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
// strings: "shredder_chakram", "shredder_chakram_2"
const char *__fastcall CDOTA_Ability_Shredder_Chakram::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Shredder_Chakram *const this)
{
  const char *result; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *m_pszAbilityName; // rsi
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // dl

  result = "shredder_chakram";
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0
      && (m_pszAbilityName == "shredder_chakram" || strcmp(m_pszAbilityName, "shredder_chakram") == 0) )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
      result = 0;
      if ( HasScepter )
        return "shredder_chakram_2";
    }
  }
  return result;
}


// CDOTA_Ability_Shredder_Chakram::GetAssociatedSecondaryAbilities  (line 1292, @0x0000000002d2f7e0, libserver.so)  // inlines: FStrEq, GetAbilityName, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
// strings: "shredder_return_chakram;shredder_return_chakram_2", "shredder_return_chakram_2", "shredder_chakram", "shredder_return_chakram"
const char *__fastcall CDOTA_Ability_Shredder_Chakram::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Shredder_Chakram *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v4; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi

  Caster = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  v4 = "shredder_return_chakram;shredder_return_chakram_2";
  if ( !HasScepter
    && (m_pAbilityData = this->m_pAbilityData, v4 = "shredder_return_chakram_2", m_pAbilityData != 0)
    && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName != 0)
    && (m_pszAbilityName == "shredder_chakram" || strcmp(m_pszAbilityName, "shredder_chakram") == 0) )
  {
    return "shredder_return_chakram";
  }
  else
  {
    return v4;
  }
}


// CDOTA_Ability_Shredder_Chakram::GetSlowDuration  (line 1326, @0x0000000002d1da40, libserver.so)
float __fastcall CDOTA_Ability_Shredder_Chakram::GetSlowDuration(CDOTA_Ability_Shredder_Chakram *const this)
{
  return 5.0;
}


// CDOTA_Ability_Shredder_Chakram::YouForgotToImplementOrDeclareServerClass  (line 1350, @0x0000000002cc8fe0, libserver.so)
int __fastcall CDOTA_Ability_Shredder_Chakram::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Shredder_Chakram *const this)
{
  return 0;
}


// CDOTA_Ability_Shredder_Chakram::GetServerClass  (line 1350, @0x0000000002cdea70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Shredder_Chakram::GetServerClass(CDOTA_Ability_Shredder_Chakram *const this)
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


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::Schema_DynamicBinding  (line 1356, @0x0000000002d1da50, libserver.so)
// globals: CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2 *const this)
{
  return CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1356, @0x0000000002d1da60, libserver.so)
// globals: CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::DestructInstance  (line 1356, @0x0000000002d1da70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2>
void __fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::FreeInstance  (line 1356, @0x0000000002d1da90, libserver.so)
void __fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::CanAllocate  (line 1356, @0x0000000002d1dab0, libserver.so)
bool __fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1356, @0x0000000002d1dac0, libserver.so)
// globals: CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::AllocateInstance  (line 1356, @0x0000000002d24690, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::ConstructInstance  (line 1356, @0x0000000002d32c60, libserver.so)  // inlines: CDOTA_Ability_Shredder_Chakram, CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 241) = -1;
    *(p + 242) = 0;
    *(p + 122) = 0;
    *(p + 246) = 0;
    *(p + 247) = 0;
    *(p + 248) = 0;
    *(p + 249) = -1;
    *p = &off_46213F0;
  }
  return p;
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1356, @0x0000000002d33fa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1356, @0x0000000002d33fc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::~CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2  (line 1356, @0x0000000002d466b0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Shredder_Chakram, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::~CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2(
        CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2 *const this)
{
  this->_vptr_IHandleEntity = &off_46208F0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hReturnHits);
  if ( (this->m_hReturnHits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hReturnHits.m_Memory),
        (this->m_hReturnHits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hReturnHits.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::~CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2  (line 1356, @0x0000000002d46c20, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Shredder_Chakram, ~CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::~CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2(
        CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2 *const this)
{
  this->_vptr_IHandleEntity = &off_46208F0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hReturnHits);
  if ( (this->m_hReturnHits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hReturnHits.m_Memory);
    if ( (this->m_hReturnHits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hReturnHits.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal  (line 1356, @0x0000000002d51830, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "shredder_chakram_2", "CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2"
// globals: `guard variable for'CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_c, CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakr, CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class) != 0 )
  {
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_classInputs.m_Size = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_hNetworkSerializer = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_pBaseClassInfo = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_pClassInfo = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_flags = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_pScriptClassDesc = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_pInputs = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_nInputCount = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_pOutputs = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_nOutputCount = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_pGameClass = 0;
    CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class._vptr_CEntityClass = off_4621370;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class);
    __cxa_atexit(
      CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class != 0 )
    return &CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class;
  if ( `guard variable for'CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Shredder_Chakram::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2ClassInfo,
      "CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2",
      "shredder_chakram_2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2ClassInfo);
  }
  CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_pClassInfo = &CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2ClassInfo;
  CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_pBaseClassInfo = CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class = &CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class;
  CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2ClassInfo.m_pClass = &CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class;
  CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ChakramAlias_shredder_chakram_2Class;
}


// CDOTA_Ability_Shredder_Chakram::OnUpgrade  (line 1361, @0x0000000002ccf070, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "shredder_return_chakram", "shredder_return_chakram_2", "shredder_chakram", "shredder_chakram_2"
void __fastcall CDOTA_Ability_Shredder_Chakram::OnUpgrade(CDOTA_Ability_Shredder_Chakram *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTABaseAbility *v9; // rbx

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "shredder_return_chakram", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "shredder_return_chakram_2", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTA_BaseNPC::FindAbilityByName(v6, "shredder_chakram", 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTA_BaseNPC::FindAbilityByName(v8, "shredder_chakram_2", 0);
  if ( v9 != 0 && v7 != 0 && v9->m_iLevel.m_Value < v7->m_iLevel.m_Value )
  {
    do
      CDOTABaseAbility::UpgradeAbility(v9, 0);
    while ( v9->m_iLevel.m_Value < v7->m_iLevel.m_Value );
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Shredder_Chakram::OnSpellStart  (line 1389, @0x0000000002cf3cc0, libserver.so)  // inlines: CEntityHandle, CHandle, FStrEq, FastSqrt, GetAbilityName, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetParent, GetSerialNumber, GetTeamNumber, GetTogglableWearable, Length2D, Set, ToDOTABaseNPCHero, VectorMultiply, VectorNormalize2D, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-, operator=, sLinearProjectileCreateInfo, ~CDOTAPASFilter, ~CPASFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetCursorPosition, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::GetModifiedAbilityParticleName (22 total)
// strings: "modifier_shredder_chakram_disarm", "shredder_chakram", "shredder_return_chakram_2", "shredder_chakram_2", "particles/units/heroes/hero_shredder/shredder_chakram_aghs.vpcf", "Hero_Shredder.Chakram" (9 total)
void __fastcall CDOTA_Ability_Shredder_Chakram::OnSpellStart(CDOTA_Ability_Shredder_Chakram *const this)
{
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  CDOTA_BaseNPC *v9; // rax
  const QAngle *AbsAngles; // rax
  float speed; // xmm0_4
  __m128i x_low; // xmm6
  vec_t v13; // r15d
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // rax
  float v16; // xmm1_4
  __m128i v17; // xmm0
  float v18; // r14d
  __m128i v19; // xmm7
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // rax
  vec_t x; // xmm5_4
  vec_t y; // xmm4_4
  vec_t z; // xmm0_4
  vec_t v25; // xmm2_4
  vec_t v26; // xmm1_4
  float radius; // xmm0_4
  CDOTA_BaseNPC *v28; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v30; // eax
  __int16 v31; // cx
  int m_Value; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  const char *ModifiedAbilityParticleName; // rax
  CDOTA_BaseNPC *v38; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC *v43; // rbx
  CBaseEntity *v44; // rdi
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  float v47; // [rsp+4h] [rbp-23Ch]
  float v48; // [rsp+8h] [rbp-238h]
  float v49; // [rsp+Ch] [rbp-234h]
  Vector vDir; // [rsp+20h] [rbp-220h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+30h] [rbp-210h] BYREF
  KeyValues kv; // [rsp+B0h] [rbp-190h] BYREF
  CDOTAPASFilter filter; // [rsp+D0h] [rbp-170h] BYREF
  unsigned __int64 v54; // [rsp+208h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v54 = __readfsqword(0x28u);
  this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "speed", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "radius", -1, 0);
  this->m_bIsReturning = 0;
  this->radius = LevelSpecialValue;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hReturnHits);
  this->m_nProjectileIndex = -1;
  KeyValues::KeyValues(&kv, "modifier_shredder_chakram_disarm");
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_shredder_chakram_disarm", &kv, 0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  this->m_vEndLocation.z = CursorPosition.z;
  this->m_fZCoord = CursorPosition.z;
  this->m_vEndLocation.x = CursorPosition.x;
  this->m_vEndLocation.y = CursorPosition.y;
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = this->m_vEndLocation.y - AbsOrigin->y;
  v8 = this->m_vEndLocation.x - AbsOrigin->x;
  vDir.z = 0.0;
  vDir.y = v7;
  vDir.x = v8;
  if ( VectorNormalize(&vDir) < 0.0099999998 )
  {
    v9 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v9);
    AngleVectors(AbsAngles, &vDir, 0, 0);
  }
  speed = this->speed;
  x_low = LODWORD(vDir.x);
  *x_low.m128i_i32 = vDir.x * speed;
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v49 = vDir.y * speed;
  v48 = speed * vDir.z;
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = this->m_vEndLocation.y - v15->y;
  v47 = ((this->m_vEndLocation.x - v15->x) * (this->m_vEndLocation.x - v15->x)) + (v16 * v16);
  v17 = LODWORD(v47);
  *v17.m128i_i32 = fsqrt(v47);
  v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  if ( v18 > (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0) )
  {
    *v19.m128i_i32 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
    v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
  }
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  x = v21->x;
  y = v21->y;
  info.pszEffectName = 0;
  z = v21->z;
  info.vSpawnOrigin.x = x;
  v25 = vec3_origin.y;
  info.vSpawnOrigin.y = y;
  v26 = vec3_origin.z;
  info.vSpawnOrigin.z = z;
  info.vAcceleration.y = v25;
  info.hSource.m_Index = -1;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.z = v26;
  info.bHasFrontalCone = 1;
  info.bCheckStartPosition = 0;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.bProvidesVision = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pAbility = this;
  info.vVelocity.x = v13;
  info.vVelocity.y = v49;
  info.vVelocity.z = v48;
  radius = this->radius;
  info.fDistance = v18;
  info.fStartRadius = radius;
  info.fEndRadius = radius;
  v28 = CDOTABaseAbility::GetCaster(this);
  if ( v28 != 0 && (m_pEntity = v28->m_pEntity) != 0 )
  {
    v30 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v31 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v31 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v31 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v30 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 0;
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 67;
  info.iUnitTargetFlags = 512;
  info.iVisionTeamNumber = m_Value;
  m_pAbilityData = this->m_pAbilityData;
  info.bHasFrontalCone = 0;
  if ( m_pAbilityData != 0
    && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName != 0)
    && (m_pszAbilityName == "shredder_chakram" || strcmp(m_pszAbilityName, "shredder_chakram") == 0) )
  {
    v45 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v45, "shredder_chakram", "shredder_return_chakram", 0, 1);
    v46 = CDOTABaseAbility::GetCaster(this);
    ModifiedAbilityParticleName = CDOTA_BaseNPC::GetModifiedAbilityParticleName(
                                    v46,
                                    "particles/units/heroes/hero_shredder/shredder_chakram.vpcf");
  }
  else
  {
    v35 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v35, "shredder_chakram_2", "shredder_return_chakram_2", 0, 1);
    v36 = CDOTABaseAbility::GetCaster(this);
    ModifiedAbilityParticleName = CDOTA_BaseNPC::GetModifiedAbilityParticleName(
                                    v36,
                                    "particles/units/heroes/hero_shredder/shredder_chakram_aghs.vpcf");
  }
  info.pszEffectName = ModifiedAbilityParticleName;
  this->m_nProjectileIndex = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v38 = CDOTABaseAbility::GetCaster(this);
  CDOTAPASFilter::CDOTAPASFilter(&filter, v38);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  this->m_SoundEventGuid = CBaseEntity::EmitSound(OwnerEntity, &filter, "Hero_Shredder.Chakram", 0.0, 0);
  v41 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Shredder.Chakram.Cast", v41);
  v42 = CDOTABaseAbility::GetCaster(this);
  v43 = v42;
  if ( v42 != 0 && (v42->m_iUnitType & 1) != 0 )
  {
    v44 = *&v42[1].m_vecVelocity.m_vecZ.m_nEncoder;
    if ( v44 != 0 )
    {
      CBaseEntity::AddEffects(v44, 32);
      (*(**&v43[1].m_vecVelocity.m_vecZ.m_nEncoder + 1704LL))(*&v43[1].m_vecVelocity.m_vecZ.m_nEncoder);
    }
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Shredder_Chakram::ReturnChakram  (line 1467, @0x0000000002ce2e70, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, Color, FStrEq, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, InValidate, IndexToIdentity, IsValid, LookupEntity, Set, StopSoundEvent, Vector, _V_strcmp, operator bool, operator=, sTrackingProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ProjectileManager::CreateTrackingProjectile, DOTA_EmitSound, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable (17 total)
// callers: CDOTA_Ability_Shredder_Chakram::OnUnStolen, CDOTA_Ability_Shredder_ReturnChakram::OnSpellStart, CDOTA_Modifier_Shredder_Chakram_Thinker::OnIntervalThink
// strings: "particles/units/heroes/hero_shredder/shredder_chakram_return.vpcf", "attach_attack2", "shredder_chakram", "Hero_Shredder.Chakram.Return"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Shredder_Chakram::ReturnChakram(
        CDOTA_Ability_Shredder_Chakram *const this,
        double a2,
        vec_t a3)
{
  int m_nProjectileIndex; // esi
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // rax
  int m_nFXIndexB; // r14d
  const CBaseAnimating *v13; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  int v18; // r13d
  CDOTA_ParticleManager *v19; // rax
  int v20; // r13d
  CDOTA_ParticleManager *v21; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  float speed; // xmm0_4
  CDOTA_BaseNPC *v25; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v27; // cx
  CSoundOpGameSystem *v28; // r13
  CDOTA_BaseNPC *v29; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  int v33; // r13d
  CDOTA_ParticleManager *v34; // rax
  Vector vChakramLocationa; // [rsp+10h] [rbp-1F0h]
  double v36; // [rsp+20h] [rbp-1E0h]
  int v37; // [rsp+20h] [rbp-1E0h]
  sTrackingProjectileCreateInfo info; // [rsp+30h] [rbp-1D0h] BYREF
  CRecipientFilter v39; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v40; // [rsp+1C8h] [rbp-38h]

  vChakramLocationa.z = a3;
  v40 = __readfsqword(0x28u);
  *&vChakramLocationa.x = a2;
  if ( !this->m_bIsReturning )
  {
    m_nProjectileIndex = this->m_nProjectileIndex;
    if ( m_nProjectileIndex != -1 )
    {
      CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, m_nProjectileIndex);
      this->m_nProjectileIndex = -1;
    }
    this->m_bIsReturning = 1;
    Caster = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_shredder/shredder_chakram_return.vpcf",
                 2,
                 0,
                 0,
                 Caster);
    this->m_nFXIndexB = Particle;
    LODWORD(Caster) = Particle;
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v8, Caster, 0, *&vChakramLocationa.x, vChakramLocationa.z);
    v9 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    v11 = CDOTABaseAbility::GetCaster(this);
    m_nFXIndexB = this->m_nFXIndexB;
    v13 = v11;
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v14, m_nFXIndexB, 1, v13, 5, "attach_attack2", *AbsOrigin, 1);
    LODWORD(AbsOrigin) = this->m_nFXIndexB;
    *&v36 = this->speed;
    HIDWORD(v36) = LODWORD(v36);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v15, AbsOrigin, 2, v36, *&v36);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData != 0
      && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName != 0)
      && (m_pszAbilityName == "shredder_chakram" || strcmp(m_pszAbilityName, "shredder_chakram") == 0) )
    {
      v18 = this->m_nFXIndexB;
      v37 = 0;
      v19 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v19, v18, 15, 0.0, 0.0);
    }
    else
    {
      v33 = this->m_nFXIndexB;
      v34 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v34, v33, 15, 0.0, 255.0);
      v37 = 1065353216;
    }
    v20 = this->m_nFXIndexB;
    v21 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v21, v20, 16, COERCE_DOUBLE(v37), 0.0);
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.pszEffectName = 0;
    info.pAttackRecord = 0;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.iSourceAttachment = 1;
    info.vSourceLoc.y = y;
    z = vec3_origin.z;
    info.bProvidesVision = 0;
    info.vSourceLoc.z = z;
    speed = this->speed;
    info.iVisionTeamNumber = -1;
    info.bDrawsOnMinimap = 0;
    info.iVisionRadius = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pAbility = this;
    info.iMoveSpeed = speed;
    v25 = CDOTABaseAbility::GetCaster(this);
    if ( v25 != 0 && (m_pEntity = v25->m_pEntity) != 0 )
    {
      v27 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v27 & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    info.bDodgeable = 0;
    info.vSourceLoc = vChakramLocationa;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    v28 = g_pSoundOpGameSystem;
    if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
    {
      CRecipientFilter::CRecipientFilter(&v39);
      v39._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&v39);
      v39._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&v39);
      CSoundOpGameSystem::StopSoundEvent(v28, &v39, this->m_SoundEventGuid);
      v39._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&v39);
      this->m_SoundEventGuid.m_nGuid.m_Data = 0;
      this->m_SoundEventGuid.m_hStackHash = -1;
    }
    v29 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Shredder.Chakram.Return", v29);
    m_Index = this->m_hThinker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hThinker.m_Index) >> 9) & 0x3F];
      if ( v31 != 0 )
      {
        v32 = &v31[this->m_hThinker.m_Index & 0x1FF];
        if ( v32 != 0 && m_Index == v32->m_EHandle.m_Index )
        {
          UTIL_Remove(v32->m_pInstance);
          this->m_hThinker.m_Index = -1;
        }
      }
    }
  }
}


// CDOTA_Ability_Shredder_Chakram::OnProjectileThink  (line 1523, @0x0000000002d12160, libserver.so)  // inlines: AddToTail, AllocateData, CEntityHandle, CHandle, CSosFieldData, CSosFieldDataFloat3, CUtlMemory, CUtlVector, CUtlVectorBase, ClearData, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetDataPtr, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, Init, IsValid, LookupEntity, Purge, RemoveAll, Set, SetValue, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CDOTAPASFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat3, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CDOTAPASFilter::CDOTAPASFilter, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CGridNav::GetStandingTreesAroundPoint, CBaseEntity::GetAbsOrigin, DOTA_EmitSoundLocation, CGridNav::DestroyTreesAroundPoint, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find (32 total)
// strings: "Hero_Shredder.Chakram.Tree", "modifier_shredder_chakram_debuff", "Hero_Shredder.Chakram.Target", "particles/units/heroes/hero_shredder/shredder_chakram_hit.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Shredder_Chakram::OnProjectileThink(
        CDOTA_Ability_Shredder_Chakram *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  vec_t z; // r15d
  vec_t y; // ebx
  vec_t x; // r13d
  float radius; // xmm2_4
  __int64 v9; // r13
  int i; // ebx
  const CBaseEntity *v11; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v13; // rax
  unsigned int v14; // eax
  float v15; // xmm3_4
  int m_nFXIndexC; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  float v18; // r13d
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_BaseNPC *v20; // rax
  __int64 v21; // rbx
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *m_pInstance; // r13
  CEntityIdentity *m_pEntity; // rdx
  int v29; // eax
  __int16 v30; // cx
  __m128i v31; // xmm3
  float v32; // r14d
  CDOTA_BaseNPC *v33; // rax
  float v34; // xmm1_4
  CDOTA_BaseNPC *v35; // rax
  CEntityIdentity *v36; // rax
  int v37; // edx
  __int16 v38; // cx
  __int64 m_Size; // r14
  int v40; // eax
  CHandle<CBaseEntity> *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  vec_t *v47; // rax
  const Vector *v48; // [rsp+38h] [rbp-1F8h]
  CHandle<CBaseEntity> v49; // [rsp+50h] [rbp-1E0h] BYREF
  CUtlVector<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> > trees; // [rsp+60h] [rbp-1D0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+80h] [rbp-1B0h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-190h] BYREF
  CDOTAPASFilter filter; // [rsp+C0h] [rbp-170h] BYREF
  unsigned __int64 v54; // [rsp+1F8h] [rbp-38h]
  Vector v55; // 0:xmm0_8.8,8:xmm1_4.4

  v54 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTAPASFilter::CDOTAPASFilter(&filter, Caster);
  LOBYTE(entities.m_Size) = -1;
  z = vLocation->z;
  LODWORD(entities.m_Memory.m_pMemory) = 0;
  *&entities.m_Memory.m_nAllocationCount = 0;
  y = vLocation->y;
  x = vLocation->x;
  *(&entities.m_Size + 1) = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  LOBYTE(entities.m_Size) = 10;
  v47 = operator new[](0xCu);
  *&entities.m_Memory.m_nAllocationCount = v47;
  LODWORD(entities.m_Memory.m_pMemory) = 12;
  *v47 = x;
  v47[1] = y;
  v47[2] = z;
  CSoundOpGameSystem::SetSoundEventParam(
    g_pSoundOpGameSystem,
    &filter,
    this->m_SoundEventGuid,
    "position",
    &entities,
    0,
    0);
  if ( LODWORD(entities.m_Memory.m_pMemory) > 8 && *&entities.m_Memory.m_nAllocationCount != 0 )
    operator delete[](*&entities.m_Memory.m_nAllocationCount);
  *&v55.x = *&vLocation->x;
  trees.m_Size = 0;
  v55.z = vLocation->z;
  radius = this->radius;
  trees.m_Memory.m_pMemory = 0;
  trees.m_Memory.m_nAllocationCount = 0;
  trees.m_Memory.m_nGrowSize = 0;
  CGridNav::GetStandingTreesAroundPoint(&g_GridNav, v55, radius, 0, &trees);
  v9 = 0;
  for ( i = 0; trees.m_Size > i; ++v9 )
  {
    v11 = (*(trees.m_Memory.m_pMemory[v9]->_vptr_CObstructionObject + 8))(trees.m_Memory.m_pMemory[v9]);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
    DOTA_EmitSoundLocation(AbsOrigin, "Hero_Shredder.Chakram.Tree", 1);
    ++i;
  }
  this->m_vEndLocation.x = vLocation->x;
  this->m_vEndLocation.y = vLocation->y;
  this->m_vEndLocation.z = vLocation->z;
  v13 = CDOTABaseAbility::GetCaster(this);
  v14 = (*(v13->_vptr_IHandleEntity + 414))(v13);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v14, *vLocation, this->radius, v15);
  if ( this->m_bIsReturning )
  {
    m_nFXIndexC = this->m_nFXIndexC;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndexC, 0);
    entities.m_Size = 0;
    v18 = this->radius;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v19 = CDOTABaseAbility::GetCaster(this);
    v20 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v20->m_iTeamNum.m_Value, vLocation, v19, v18, &entities, 2, 19, 512, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v21 = 0;
      do
      {
        while ( 1 )
        {
          v22 = &entities.m_Memory.m_pMemory[v21];
          m_Index = v22->m_Index;
          if ( v22->m_Index + 2 > 1 )
          {
            v24 = v22->m_Index;
            v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
            if ( v25 != 0 )
            {
              v26 = &v25[v24 & 0x1FF];
              if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
              {
                m_pInstance = v26->m_pInstance;
                if ( v26->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                {
                  v49.m_Index = -1;
                  m_pEntity = m_pInstance->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v29 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    v30 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v30 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(v49.m_Index) = v30 | v49.m_Index & 0x8000;
                    v49.m_Index = (v29 << 15) | v49.m_Index & 0x7FFF;
                  }
                  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                         &this->m_hReturnHits,
                         &v49) < 0 )
                    break;
                }
              }
            }
          }
          if ( ++v21 >= entities.m_Size )
            goto LABEL_32;
        }
        *v31.m128i_i32 = this->pass_damage;
        v32 = COERCE_FLOAT(_mm_cvtsi128_si32(v31));
        v33 = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(v33, m_pInstance, this, v32, 4, 0);
        KeyValues::KeyValues(&kv, "modifier_shredder_chakram_debuff");
        KeyValues::SetFloat(&kv, "duration", v34);
        v35 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v35, this, "modifier_shredder_chakram_debuff", &kv, 0);
        v49.m_Index = -1;
        v36 = m_pInstance->m_pEntity;
        if ( v36 != 0 )
        {
          v37 = (v36->m_EHandle.m_Index >> 15) - (v36->m_flags & 1);
          v38 = 0x7FFF;
          if ( v36->m_EHandle.m_Index != -1 )
            v38 = v36->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v49.m_Index) = v38 | v49.m_Index & 0x8000;
          v49.m_Index = (v37 << 15) | v49.m_Index & 0x7FFF;
        }
        m_Size = this->m_hReturnHits.m_Size;
        v40 = this->m_hReturnHits.m_Size;
        if ( m_Size == this->m_hReturnHits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hReturnHits.m_Memory, 1);
          v40 = this->m_hReturnHits.m_Size;
        }
        this->m_hReturnHits.m_Size = v40 + 1;
        v41 = &this->m_hReturnHits.m_Memory.m_pMemory[m_Size];
        if ( v41 != 0 )
          v41->m_Index = v49.m_Index;
        DOTA_EmitSound(10, "Hero_Shredder.Chakram.Target", m_pInstance);
        if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v42 = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(
                       v42,
                       "particles/units/heroes/hero_shredder/shredder_chakram_hit.vpcf",
                       2,
                       m_pInstance,
                       0,
                       0);
          v44 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v44, Particle, 0, m_pInstance, 1, 0, vec3_invalid, 1);
          v48 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v45 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v45, Particle, 1, m_pInstance, 5, "attach_hitloc", *v48, 1);
          v46 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v46, Particle);
        }
        KeyValues::~KeyValues(&kv);
        ++v21;
      }
      while ( v21 < entities.m_Size );
    }
LABEL_32:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
  }
  trees.m_Size = 0;
  if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
    if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Shredder_Chakram::OnProjectileHit  (line 1579, @0x0000000002d011b0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, FStrEq, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GetTogglableWearable, InState, InValidate, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, MarkPVSInformationDirty, RemoveEffects, Set, StopSoundEvent, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::SwapAbilities, CBaseEntity::DispatchUpdateTransmitState, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StopSoundEvent (28 total)
// strings: "pass_damage", "pass_slow_duration", "modifier_shredder_chakram_disarm", "shredder_chakram", "shredder_return_chakram", "shredder_return_chakram_2" (13 total)
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Shredder_Chakram::OnProjectileHit(
        CDOTA_Ability_Shredder_Chakram *const this,
        _WORD *hTarget,
        const CFieldPath *vLocation)
{
  float LevelSpecialValue; // xmm0_4
  CConcreteEntityList *v7; // rsi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *v10; // rax
  int m_nFXIndexB; // r12d
  CDOTA_ParticleManager *v12; // rax
  CSoundOpGameSystem *v13; // r12
  DOTAAbilityData_t *v14; // rax
  const char *v15; // rsi
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // r12
  CBaseEntity *v19; // rbx
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  int m_Value; // r12d
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v27; // eax
  __int16 v28; // cx
  CDOTA_BaseNPC *v29; // r12
  CDOTA_ParticleManager *v30; // rax
  int v31; // eax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  int m_nFXIndexC; // r12d
  CDOTA_ParticleManager *v37; // rax
  int v38; // r12d
  CDOTA_ParticleManager *v39; // rax
  int v40; // r12d
  CDOTA_ParticleManager *v41; // rax
  int v42; // r12d
  CDOTA_ParticleManager *v43; // rax
  CEntityInstance *m_pInstance; // r12
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *Caster; // rax
  float v47; // xmm1_4
  CDOTA_BaseNPC *v48; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v51; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v53; // rax
  CDOTA_ParticleManager *v54; // rax
  float flRadius; // [rsp+1Ch] [rbp-184h]
  float flRadiusa; // [rsp+1Ch] [rbp-184h]
  double v57; // [rsp+20h] [rbp-180h]
  KeyValues kv; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v59; // [rsp+168h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  this->pass_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "pass_damage", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "pass_slow_duration", -1, 0);
  v7 = CEntityHandle::gm_pEntityList;
  this->pass_slow_duration = LevelSpecialValue;
  if ( (*hTarget + 2) > 1 )
  {
    v8 = v7->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[*hTarget & 0x1FF];
      if ( v9 != 0 && *hTarget == v9->m_EHandle.m_Index )
      {
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
          if ( (BYTE1(vptr_IHandleEntity) & 2) != 0
            || LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0
            || (BYTE1(vptr_IHandleEntity) & 1) != 0
            || CDOTABaseAbility::GetCaster(this) == m_pInstance )
          {
LABEL_30:
            if ( !this->m_bIsReturning )
              return 0;
            goto LABEL_6;
          }
          flRadiusa = this->pass_damage;
          Caster = CDOTABaseAbility::GetCaster(this);
          ApplyDamage(Caster, m_pInstance, this, flRadiusa, 4, 0);
          KeyValues::KeyValues(&kv, "modifier_shredder_chakram_debuff");
          KeyValues::SetFloat(&kv, "duration", v47);
          v48 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v48, this, "modifier_shredder_chakram_debuff", &kv, 0);
          DOTA_EmitSound(10, "Hero_Shredder.Chakram.Target", m_pInstance);
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_shredder/shredder_chakram_hit.vpcf",
                         2,
                         m_pInstance,
                         0,
                         0);
            v51 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v51, Particle, 0, m_pInstance, 1, 0, vec3_invalid, 1);
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            v53 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(
              v53,
              Particle,
              1,
              m_pInstance,
              5,
              "attach_hitloc",
              *AbsOrigin,
              1);
            v54 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v54, Particle);
          }
LABEL_29:
          KeyValues::~KeyValues(&kv);
          goto LABEL_30;
        }
      }
    }
  }
  if ( !this->m_bIsReturning )
  {
    flRadius = this->radius;
    v22 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY_TEMP,
      v22->m_iTeamNum.m_Value,
      vLocation,
      flRadius,
      1.0,
      0);
    this->m_nProjectileIndex = -1;
    KeyValues::KeyValues(&kv, "modifier_shredder_chakram_thinker");
    this->m_vEndLocation.z = this->m_fZCoord;
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v24 = CDOTABaseAbility::GetCaster(this);
    v25 = Thinker_Create(v24, this, "modifier_shredder_chakram_thinker", &kv, this->m_vEndLocation, m_Value, 0, 1, 0);
    if ( v25 != 0 && (m_pEntity = v25->m_pEntity) != 0 )
    {
      v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v28 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hThinker.m_Index) = v28 | this->m_hThinker.m_Index & 0x8000;
      this->m_hThinker.m_Index = (v27 << 15) | this->m_hThinker.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hThinker.m_Index = -1;
    }
    v29 = CDOTABaseAbility::GetCaster(this);
    v30 = GetParticleManager();
    v31 = CDOTA_ParticleManager::CreateParticle(
            v30,
            "particles/units/heroes/hero_shredder/shredder_chakram_stay.vpcf",
            2,
            0,
            0,
            v29);
    this->m_nFXIndexC = v31;
    LODWORD(v29) = v31;
    v32 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v32, v29, 0, *&this->m_vEndLocation.x, this->m_vEndLocation.z);
    LODWORD(v29) = this->m_nFXIndexC;
    *&v57 = this->radius;
    HIDWORD(v57) = LODWORD(v57);
    v33 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v33, v29, 1, v57, *&v57);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData != 0
      && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName != 0)
      && (m_pszAbilityName == "shredder_chakram" || strcmp(m_pszAbilityName, "shredder_chakram") == 0) )
    {
      m_nFXIndexC = this->m_nFXIndexC;
      v37 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v37, m_nFXIndexC, 15, 0.0, 0.0);
      v38 = this->m_nFXIndexC;
      v39 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v39, v38, 16, 0.0, 0.0);
    }
    else
    {
      v40 = this->m_nFXIndexC;
      v41 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v41, v40, 15, 0.0, 255.0);
      v42 = this->m_nFXIndexC;
      v43 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v43, v42, 16, COERCE_DOUBLE(1065353216), 0.0);
    }
    goto LABEL_29;
  }
LABEL_6:
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v10, "modifier_shredder_chakram_disarm");
  m_nFXIndexB = this->m_nFXIndexB;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v12, m_nFXIndexB, 0);
  v13 = g_pSoundOpGameSystem;
  if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&kv);
    kv.m_uValue = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&kv);
    kv.m_uValue = &off_3FCB130;
    CRecipientFilter::MakeReliable(&kv);
    CSoundOpGameSystem::StopSoundEvent(v13, &kv, this->m_SoundEventGuid);
    kv.m_uValue = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&kv);
    this->m_SoundEventGuid.m_nGuid.m_Data = 0;
    this->m_SoundEventGuid.m_hStackHash = -1;
  }
  v14 = this->m_pAbilityData;
  if ( v14 != 0
    && (v15 = v14->m_pszAbilityName, v14->m_pszAbilityName != 0)
    && (v15 == "shredder_chakram" || strcmp(v15, "shredder_chakram") == 0) )
  {
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v16, "shredder_chakram", "shredder_return_chakram", 1, 0);
  }
  else
  {
    v21 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v21, "shredder_chakram_2", "shredder_return_chakram_2", 1, 0);
  }
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = v17;
  if ( v17 != 0 && (v17->m_iUnitType & 1) != 0 )
  {
    v19 = *&v17[1].m_vecVelocity.m_vecZ.m_nEncoder;
    if ( v19 != 0 )
    {
      (*(v19->_vptr_IHandleEntity + 188))(
        *&v17[1].m_vecVelocity.m_vecZ.m_nEncoder,
        v19->m_fEffects.m_Value & 0xFFFFFFDF);
      v19->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
      CBaseEntity::DispatchUpdateTransmitState(v19);
      (*(**&v18[1].m_vecVelocity.m_vecZ.m_nEncoder + 1704LL))(*&v18[1].m_vecVelocity.m_vecZ.m_nEncoder);
    }
  }
  return 0;
}


// CDOTA_Ability_Shredder_Chakram::OnUnStolen  (line 1665, @0x0000000002ce3440, libserver.so)  // inlines: FXCleanUp
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Ability_Shredder_Chakram::ReturnChakram, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::OnUnStolen
void __fastcall CDOTA_Ability_Shredder_Chakram::OnUnStolen(CDOTA_Ability_Shredder_Chakram *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  int m_nFXIndexC; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  CDOTA_Ability_Shredder_Chakram::ReturnChakram(this, *&AbsOrigin->x, AbsOrigin->z);
  m_nFXIndexC = this->m_nFXIndexC;
  if ( m_nFXIndexC != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndexC, 0);
  }
  CDOTABaseAbility::OnUnStolen(this);
}


// CDOTA_Ability_Shredder_Chakram::GetAbilityDamageToTargetOverInterval  (line 1676, @0x0000000002cfe9c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
__int64 __fastcall CDOTA_Ability_Shredder_Chakram::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Shredder_Chakram *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
    return (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_second", -1, 0) * fInterval);
  return result;
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::~CDOTA_Modifier_Shredder_Chakram_Thinker  (line 1687, @0x0000000002d28070, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::~CDOTA_Modifier_Shredder_Chakram_Thinker(
        CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4621EB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::~CDOTA_Modifier_Shredder_Chakram_Thinker  (line 1687, @0x0000000002d28090, libserver.so)  // inlines: ~CDOTA_Modifier_Shredder_Chakram_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::~CDOTA_Modifier_Shredder_Chakram_Thinker(
        CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4621EB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::IsHidden  (line 1696, @0x0000000002d1dad0, libserver.so)
bool __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::IsHidden(CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::GetAttributes  (line 1697, @0x0000000002d286b0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::GetAttributes(
        CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::IsAura  (line 1699, @0x0000000002d1dae0, libserver.so)
bool __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::IsAura(CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::GetModifierAura  (line 1700, @0x0000000002d1daf0, libserver.so)
// strings: "modifier_shredder_chakram_debuff"
const char *__fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::GetModifierAura(
        CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  return "modifier_shredder_chakram_debuff";
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::GetAuraSearchTeam  (line 1701, @0x0000000002d1db00, libserver.so)
int __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  return 2;
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::GetAuraSearchType  (line 1702, @0x0000000002d1db10, libserver.so)
int __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::GetAuraSearchType(
        CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  return 19;
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::GetAuraSearchFlags  (line 1703, @0x0000000002d1db20, libserver.so)
int __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::GetAuraSearchFlags(
        CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::GetAuraRadius  (line 1704, @0x0000000002d1db30, libserver.so)
int __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::GetAuraRadius(
        CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::OnCreated  (line 1719, @0x0000000002d0b500, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "mana_per_second", "break_distance"
void __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::OnCreated(
        CDOTA_Modifier_Shredder_Chakram_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  float v10; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->mana_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "mana_per_second", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->mana_per_second = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "radius", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->radius = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->break_distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "break_distance", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->damage_per_second = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->break_distance = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_per_second", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "damage_interval", -1, 0);
    this->damage_interval = LevelSpecialValue;
    CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v10);
    return;
  }
LABEL_11:
  this->damage_interval = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v8);
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::OnDestroy  (line 1734, @0x0000000002cccff0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::StopSound
// strings: "Hero_Shredder.Chakram"
void __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::OnDestroy(CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_Shredder.Chakram");
}


// CDOTA_Modifier_Shredder_Chakram_Thinker::OnIntervalThink  (line 1748, @0x0000000002cefcd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, FXCleanUp, FastSqrt, Get, GetAbilityName, GetBool, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetTeamNumber, GetTogglableWearable, IndexToIdentity, IsValid, Length, LookupEntity, MarkPVSInformationDirty, RemoveEffects, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, CDOTA_Buff::Destroy, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::SwapAbilities, CBaseEntity::DispatchUpdateTransmitState, CGridNav::DestroyTreesAroundPoint (21 total)
// strings: "modifier_shredder_chakram_disarm", "shredder_chakram", "shredder_return_chakram", "particles/units/heroes/hero_shredder/shredder_chakram_hit.vpcf", "attach_hitloc", "shredder_return_chakram_2" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Shredder_Chakram_Thinker::OnIntervalThink(
        CDOTA_Modifier_Shredder_Chakram_Thinker *const this)
{
  CDOTA_Ability_Shredder_Chakram *Ability; // rbx
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r12
  CDOTA_BaseNPC *v7; // r14
  const Vector *v8; // r12
  const Vector *v9; // rax
  float v10; // xmm0_4
  CDOTA_BaseNPC *v11; // rax
  int m_nFXIndexC; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v14; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rbx
  CBaseEntity *v20; // r12
  CDOTA_BaseNPC *v21; // rax
  unsigned int v22; // ebx
  CDOTA_BaseNPC *v23; // rax
  float v24; // xmm3_4
  float radius; // r14d
  CDOTA_BaseNPC *v26; // r12
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rbx
  CDOTA_BaseNPC *v29; // rax
  __int64 v30; // rbx
  CHandle<CBaseEntity> *v31; // rdx
  uint32 m_Index; // eax
  __int16 v33; // cx
  CEntityIdentity *v34; // rdx
  CEntityIdentity *v35; // rdx
  CEntityInstance *m_pInstance; // r12
  __m128i v37; // xmm3
  float v38; // r15d
  CDOTABaseAbility *v39; // r14
  CDOTA_BaseNPC *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v43; // rax
  const Vector *v44; // r15
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  const Vector *v48; // rax
  CDOTA_BaseNPC *v49; // rax
  const Vector *v50; // rax
  CDOTA_BaseNPC *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  float flDuration; // [rsp+24h] [rbp-5Ch]
  float flRadius; // [rsp+28h] [rbp-58h]
  float flRadiusb; // [rsp+28h] [rbp-58h]
  float flRadiusa; // [rsp+28h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF
  Vector v58; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  flDuration = this->damage_interval;
  flRadius = this->radius;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY_TEMP,
    Caster->m_iTeamNum.m_Value,
    AbsOrigin,
    flRadius,
    flDuration,
    0);
  if ( Ability != 0 )
  {
    v6 = CDOTA_Buff::GetCaster(this);
    v7 = CDOTA_Buff::GetParent(this);
    if ( v6 != 0 )
    {
      v8 = CBaseEntity::GetAbsOrigin(v6);
      v9 = CBaseEntity::GetAbsOrigin(v7);
      v10 = fsqrt(
              (((v9->x - v8->x) * (v9->x - v8->x)) + ((v9->y - v8->y) * (v9->y - v8->y)))
            + ((v9->z - v8->z) * (v9->z - v8->z)));
    }
    else
    {
      v10 = -1.0;
    }
    if ( v10 > this->break_distance )
    {
      v49 = CDOTA_Buff::GetParent(this);
      v50 = CBaseEntity::GetAbsOrigin(v49);
      CDOTA_Ability_Shredder_Chakram::ReturnChakram(Ability, *&v50->x, v50->z);
    }
    if ( CDOTA_Buff::GetCaster(this)->m_flMana.m_Value <= (0.5 * this->mana_per_second) )
    {
      v47 = CDOTA_Buff::GetParent(this);
      v48 = CBaseEntity::GetAbsOrigin(v47);
      CDOTA_Ability_Shredder_Chakram::ReturnChakram(Ability, *&v48->x, v48->z);
    }
    else if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
    {
      flRadiusa = 0.5 * this->mana_per_second;
      v52 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::SpendMana(v52, flRadiusa, Ability, 0);
    }
    v11 = CDOTA_Buff::GetCaster(this);
    if ( (*(v11->_vptr_IHandleEntity + 408))(v11) == 0 )
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      m_nFXIndexC = Ability->m_nFXIndexC;
      if ( m_nFXIndexC != -1 )
      {
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndexC, 0);
      }
      v14 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v14, "modifier_shredder_chakram_disarm");
      m_pAbilityData = CDOTA_Buff::GetAbility(this)->m_pAbilityData;
      if ( m_pAbilityData != 0
        && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName != 0)
        && (m_pszAbilityName == "shredder_chakram" || strcmp(m_pszAbilityName, "shredder_chakram") == 0) )
      {
        v17 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::SwapAbilities(v17, "shredder_chakram", "shredder_return_chakram", 1, 0);
      }
      else
      {
        v51 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::SwapAbilities(v51, "shredder_chakram_2", "shredder_return_chakram_2", 1, 0);
      }
      v18 = CDOTA_Buff::GetCaster(this);
      v19 = v18;
      if ( v18 != 0 && (v18->m_iUnitType & 1) != 0 )
      {
        v20 = *&v18[1].m_vecVelocity.m_vecZ.m_nEncoder;
        if ( v20 != 0 )
        {
          (*(v20->_vptr_IHandleEntity + 188))(
            *&v18[1].m_vecVelocity.m_vecZ.m_nEncoder,
            v20->m_fEffects.m_Value & 0xFFFFFFDF);
          v20->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
          CBaseEntity::DispatchUpdateTransmitState(v20);
          (*(**&v19[1].m_vecVelocity.m_vecZ.m_nEncoder + 1704LL))(*&v19[1].m_vecVelocity.m_vecZ.m_nEncoder);
        }
      }
    }
  }
  v21 = CDOTA_Buff::GetCaster(this);
  v22 = (*(v21->_vptr_IHandleEntity + 414))(v21);
  flRadiusb = this->radius;
  v23 = CDOTA_Buff::GetParent(this);
  v58 = *CBaseEntity::GetAbsOrigin(v23);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v22, v58, flRadiusb, v24);
  entities.m_Size = 0;
  radius = this->radius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v26 = CDOTA_Buff::GetParent(this);
  v27 = CDOTA_Buff::GetParent(this);
  v28 = CBaseEntity::GetAbsOrigin(v27);
  v29 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v29->m_iTeamNum.m_Value, v28, v26, radius, &entities, 2, 531, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v30 = 0;
    do
    {
      while ( 1 )
      {
        v31 = &entities.m_Memory.m_pMemory[v30];
        m_Index = v31->m_Index;
        if ( v31->m_Index + 2 > 1 )
        {
          v33 = v31->m_Index;
          v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v31->m_Index) >> 9) & 0x3F];
          if ( v34 != 0 )
          {
            v35 = &v34[v33 & 0x1FF];
            if ( v35 != 0 && m_Index == v35->m_EHandle.m_Index )
            {
              m_pInstance = v35->m_pInstance;
              if ( v35->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                v37 = 0x3F000000u;
                *v37.m128i_i32 = 0.5 * this->damage_per_second;
                v38 = COERCE_FLOAT(_mm_cvtsi128_si32(v37));
                v39 = CDOTA_Buff::GetAbility(this);
                v40 = CDOTA_Buff::GetCaster(this);
                ApplyDamage(v40, m_pInstance, v39, v38, 4, 0);
                if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  break;
              }
            }
          }
        }
        if ( entities.m_Size <= ++v30 )
          goto LABEL_32;
      }
      v41 = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   v41,
                   "particles/units/heroes/hero_shredder/shredder_chakram_hit.vpcf",
                   2,
                   m_pInstance,
                   0,
                   0);
      v43 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v43, Particle, 0, m_pInstance, 1, 0, vec3_invalid, 1);
      v44 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v45 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v45, Particle, 1, m_pInstance, 5, "attach_hitloc", *v44, 1);
      v46 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v46, Particle);
      ++v30;
    }
    while ( entities.m_Size > v30 );
  }
LABEL_32:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Shredder_Chakram_Debuff::~CDOTA_Modifier_Shredder_Chakram_Debuff  (line 1834, @0x0000000002d28020, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shredder_Chakram_Debuff::~CDOTA_Modifier_Shredder_Chakram_Debuff(
        CDOTA_Modifier_Shredder_Chakram_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_46221D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shredder_Chakram_Debuff::~CDOTA_Modifier_Shredder_Chakram_Debuff  (line 1834, @0x0000000002d28040, libserver.so)  // inlines: ~CDOTA_Modifier_Shredder_Chakram_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shredder_Chakram_Debuff::~CDOTA_Modifier_Shredder_Chakram_Debuff(
        CDOTA_Modifier_Shredder_Chakram_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_46221D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shredder_Chakram_Debuff::IsDebuff  (line 1839, @0x0000000002d1db50, libserver.so)
bool __fastcall CDOTA_Modifier_Shredder_Chakram_Debuff::IsDebuff(CDOTA_Modifier_Shredder_Chakram_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Shredder_Chakram_Debuff::GetStatusEffectName  (line 1846, @0x0000000002d1db60, libserver.so)
// strings: "particles/status_fx/status_effect_iceblast_half.vpcf"
const char *__fastcall CDOTA_Modifier_Shredder_Chakram_Debuff::GetStatusEffectName(
        CDOTA_Modifier_Shredder_Chakram_Debuff *const this)
{
  return "particles/status_fx/status_effect_iceblast_half.vpcf";
}


// CDOTA_Modifier_Shredder_Chakram_Debuff::StatusEffectPriority  (line 1847, @0x0000000002d1db70, libserver.so)
int __fastcall CDOTA_Modifier_Shredder_Chakram_Debuff::StatusEffectPriority(
        CDOTA_Modifier_Shredder_Chakram_Debuff *const this)
{
  return 51;
}


// CDOTA_Modifier_Shredder_Chakram_Debuff::OnCreated  (line 1858, @0x0000000002d09340, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Shredder_Chakram_Debuff::OnCreated(
        CDOTA_Modifier_Shredder_Chakram_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow", -1, 0);
  else
    this->slow = 0;
}


// CDOTA_Modifier_Shredder_Chakram_Debuff::DeclareFunctions  (line 1865, @0x0000000002cc8ff0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Shredder_Chakram_Debuff::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Shredder_Chakram_Debuff::DeclareFunctions(
        CDOTA_Modifier_Shredder_Chakram_Debuff *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Shredder_Chakram_Debuff::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Shredder_Chakram_Debuff::GetModifierMoveSpeedBonus_Percentage  (line 1872, @0x0000000002cd7580, libserver.so)  // inlines: GetHealthPercent
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
ModifierVariant_t __fastcall CDOTA_Modifier_Shredder_Chakram_Debuff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Shredder_Chakram_Debuff *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rbx
  __int64 v4; // r12
  int v5; // eax
  __m128i v6; // xmm0
  __int64 v7; // rcx
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  v4 = 100LL * CBaseEntity::GetHealth(Parent);
  v5 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v7 = 1;
  if ( v5 > 0 )
    v7 = v5;
  *v6.m128i_i32 = (this->slow * ~((100 - v4 / v7) / 5));
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  return result;
}


// CDOTA_Ability_Shredder_ReturnChakram::~CDOTA_Ability_Shredder_ReturnChakram  (line 1884, @0x0000000002d2bb40, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Shredder_ReturnChakram::~CDOTA_Ability_Shredder_ReturnChakram(
        CDOTA_Ability_Shredder_ReturnChakram *const this)
{
  this->_vptr_IHandleEntity = &off_4623030;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Shredder_ReturnChakram::~CDOTA_Ability_Shredder_ReturnChakram  (line 1884, @0x0000000002d2bb60, libserver.so)  // inlines: ~CDOTA_Ability_Shredder_ReturnChakram
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Shredder_ReturnChakram::~CDOTA_Ability_Shredder_ReturnChakram(
        CDOTA_Ability_Shredder_ReturnChakram *const this)
{
  this->_vptr_IHandleEntity = &off_4623030;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shredder_ReturnChakram::Schema_DynamicBinding  (line 1886, @0x0000000002d1db80, libserver.so)
// globals: CDOTA_Ability_Shredder_ReturnChakram::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_ReturnChakram::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_ReturnChakram *const this)
{
  return CDOTA_Ability_Shredder_ReturnChakram::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1886, @0x0000000002d1db90, libserver.so)
// globals: CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::DestructInstance  (line 1886, @0x0000000002d1dba0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shredder_ReturnChakram>
void __fastcall CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::FreeInstance  (line 1886, @0x0000000002d1dbc0, libserver.so)
void __fastcall CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::CanAllocate  (line 1886, @0x0000000002d1dbe0, libserver.so)
bool __fastcall CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1886, @0x0000000002d1dbf0, libserver.so)
// globals: CDOTA_Ability_Shredder_ReturnChakram::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_ReturnChakram::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::AllocateInstance  (line 1886, @0x0000000002d246d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::ConstructInstance  (line 1886, @0x0000000002d28fc0, libserver.so)  // inlines: CDOTA_Ability_Shredder_ReturnChakram, Construct<CDOTA_Ability_Shredder_ReturnChakram>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4623030;
  }
  return p;
}


// CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1886, @0x0000000002d33ff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1886, @0x0000000002d34010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo  (line 1886, @0x0000000002d3fbf0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::InitOptionalTables, CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal
// strings: "shredder_return_chakram", "CDOTA_Ability_Shredder_ReturnChakram", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo, CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo != 0 )
    return &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo) == 0 )
    return &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo;
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
    &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo,
    "CDOTA_Ability_Shredder_ReturnChakram",
    "shredder_return_chakram",
    0,
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo);
  return &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo;
}


// CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal  (line 1886, @0x0000000002d4dc90, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "shredder_return_chakram", "CDOTA_Ability_Shredder_ReturnChakram"
// globals: `guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass, CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo, CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo
CEntityClass *__cdecl CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass) != 0 )
  {
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_pClassInfo = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_flags = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_pInputs = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_nInputCount = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_pOutputs = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_nOutputCount = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_pGameClass = 0;
    CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass._vptr_CEntityClass = off_46224B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass);
    __cxa_atexit(
      CDOTA_Ability_Shredder_ReturnChakram::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shredder_ReturnChakramClass != 0 )
    return &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass;
  if ( `guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo,
      "CDOTA_Ability_Shredder_ReturnChakram",
      "shredder_return_chakram",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo);
  }
  CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_pClassInfo = &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo;
  CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_pBaseClassInfo = CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shredder_ReturnChakramClass = &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass;
  CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClassInfo.m_pClass = &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass;
  CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shredder_ReturnChakramClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramClass;
}


// CDOTA_Ability_Shredder_ReturnChakram::ProcsMagicStick  (line 1890, @0x0000000002d1dc00, libserver.so)
bool __fastcall CDOTA_Ability_Shredder_ReturnChakram::ProcsMagicStick(CDOTA_Ability_Shredder_ReturnChakram *const this)
{
  return 0;
}


// CDOTA_Ability_Shredder_ReturnChakram::IsHiddenWhenStolen  (line 1892, @0x0000000002d1dc10, libserver.so)
bool __fastcall CDOTA_Ability_Shredder_ReturnChakram::IsHiddenWhenStolen(
        CDOTA_Ability_Shredder_ReturnChakram *const this)
{
  return 1;
}


// CDOTA_Ability_Shredder_ReturnChakram::GetAssociatedPrimaryAbilities  (line 1893, @0x0000000002d2f860, libserver.so)  // inlines: FStrEq, GetAbilityName, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
// strings: "shredder_chakram_2", "shredder_return_chakram", "shredder_chakram_2;shredder_chakram", "shredder_chakram"
const char *__fastcall CDOTA_Ability_Shredder_ReturnChakram::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Shredder_ReturnChakram *const this)
{
  const char *result; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *m_pszAbilityName; // rsi
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // dl

  result = "shredder_chakram_2";
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0
      && (m_pszAbilityName == "shredder_return_chakram" || strcmp(m_pszAbilityName, "shredder_return_chakram") == 0) )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
      result = "shredder_chakram_2;shredder_chakram";
      if ( !HasScepter )
        return "shredder_chakram";
    }
  }
  return result;
}


// CDOTA_Ability_Shredder_ReturnChakram::GetAssociatedSecondaryAbilities  (line 1908, @0x0000000002d2f8d0, libserver.so)  // inlines: FStrEq, GetAbilityName, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
// strings: "shredder_return_chakram", "shredder_return_chakram_2"
const char *__fastcall CDOTA_Ability_Shredder_ReturnChakram::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Shredder_ReturnChakram *const this)
{
  const char *result; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *m_pszAbilityName; // rsi
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // dl

  result = "shredder_return_chakram";
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0
      && (m_pszAbilityName == "shredder_return_chakram" || strcmp(m_pszAbilityName, "shredder_return_chakram") == 0) )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
      result = 0;
      if ( HasScepter )
        return "shredder_return_chakram_2";
    }
  }
  return result;
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::Schema_DynamicBinding  (line 1926, @0x0000000002d1dc20, libserver.so)
// globals: CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2 *const this)
{
  return CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1926, @0x0000000002d1dc30, libserver.so)
// globals: CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::DestructInstance  (line 1926, @0x0000000002d1dc40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2>
void __fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::FreeInstance  (line 1926, @0x0000000002d1dc60, libserver.so)
void __fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::CanAllocate  (line 1926, @0x0000000002d1dc80, libserver.so)
bool __fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1926, @0x0000000002d1dc90, libserver.so)
// globals: CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::s_pSchemaBinding;
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::AllocateInstance  (line 1926, @0x0000000002d24710, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::ConstructInstance  (line 1926, @0x0000000002d28ff0, libserver.so)  // inlines: CDOTA_Ability_Shredder_ReturnChakram, CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2, Construct<CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46225B0;
  }
  return p;
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::~CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2  (line 1926, @0x0000000002d2bb90, libserver.so)  // inlines: ~CDOTA_Ability_Shredder_ReturnChakram
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::~CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2(
        CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2 *const this)
{
  this->_vptr_IHandleEntity = &off_4623030;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::~CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2  (line 1926, @0x0000000002d2bbb0, libserver.so)  // inlines: ~CDOTA_Ability_Shredder_ReturnChakram, ~CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::~CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2(
        CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2 *const this)
{
  this->_vptr_IHandleEntity = &off_4623030;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1926, @0x0000000002d34040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1926, @0x0000000002d34060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal  (line 1926, @0x0000000002d51b80, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "shredder_return_chakram_2", "CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2"
// globals: `guard variable for'CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChak, CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_re, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramA, CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return
CEntityClass *__cdecl CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class) != 0 )
  {
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_classInputs.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_hNetworkSerializer = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_pBaseClassInfo = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_pClassInfo = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_flags = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_pScriptClassDesc = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_pInputs = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_nInputCount = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_pOutputs = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_nOutputCount = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_pGameClass = 0;
    CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class._vptr_CEntityClass = off_4622530;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class);
    __cxa_atexit(
      CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class != 0 )
    return &CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class;
  if ( `guard variable for'CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Shredder_ReturnChakram::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2ClassInfo,
      "CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2",
      "shredder_return_chakram_2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2ClassInfo);
  }
  CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_pClassInfo = &CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2ClassInfo;
  CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_pBaseClassInfo = CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class = &CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class;
  CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2ClassInfo.m_pClass = &CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class;
  CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Shredder_ReturnChakramAlias_shredder_return_chakram_2Class;
}


// CDOTA_Ability_Shredder_ReturnChakram::OnSpellStart  (line 1930, @0x0000000002ce34a0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetChakramEndLocation, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Shredder_Chakram::ReturnChakram
// strings: "shredder_return_chakram", "shredder_chakram", "shredder_chakram_2"
void __fastcall CDOTA_Ability_Shredder_ReturnChakram::OnSpellStart(CDOTA_Ability_Shredder_ReturnChakram *const this)
{
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *m_pszAbilityName; // rsi
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *v6; // rax

  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData != 0
    && (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName != 0)
    && (m_pszAbilityName == "shredder_return_chakram" || strcmp(m_pszAbilityName, "shredder_return_chakram") == 0) )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "shredder_chakram", 0);
    if ( AbilityByName != 0 )
      CDOTA_Ability_Shredder_Chakram::ReturnChakram(
        AbilityByName,
        *&AbilityByName[1].m_hPrivateScope.m_hScope,
        *&AbilityByName[1].m_iszPrivateVScripts.u.m_Id);
  }
  else
  {
    v5 = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTA_BaseNPC::FindAbilityByName(v5, "shredder_chakram_2", 0);
    if ( v6 != 0 )
      CDOTA_Ability_Shredder_Chakram::ReturnChakram(
        v6,
        *&v6[1].m_hPrivateScope.m_hScope,
        *&v6[1].m_iszPrivateVScripts.u.m_Id);
  }
}


// CDOTA_Modifier_Shredder_Chakram_Disarm::~CDOTA_Modifier_Shredder_Chakram_Disarm  (line 1955, @0x0000000002d27a00, libserver.so)  // inlines: ~CDOTA_Modifier_Disarmed
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shredder_Chakram_Disarm::~CDOTA_Modifier_Shredder_Chakram_Disarm(
        CDOTA_Modifier_Shredder_Chakram_Disarm *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shredder_Chakram_Disarm::~CDOTA_Modifier_Shredder_Chakram_Disarm  (line 1955, @0x0000000002d27a20, libserver.so)  // inlines: ~CDOTA_Modifier_Disarmed, ~CDOTA_Modifier_Shredder_Chakram_Disarm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shredder_Chakram_Disarm::~CDOTA_Modifier_Shredder_Chakram_Disarm(
        CDOTA_Modifier_Shredder_Chakram_Disarm *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shredder_Chakram_Disarm::IsPurgable  (line 1961, @0x0000000002d1dca0, libserver.so)
bool __fastcall CDOTA_Modifier_Shredder_Chakram_Disarm::IsPurgable(CDOTA_Modifier_Shredder_Chakram_Disarm *const this)
{
  return 0;
}


// CDOTA_Modifier_Shredder_Chakram_Disarm::GetAttributes  (line 1962, @0x0000000002d286c0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Shredder_Chakram_Disarm::GetAttributes(
        CDOTA_Modifier_Shredder_Chakram_Disarm *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Shredder_Chakram_Disarm::CheckState  (line 1971, @0x0000000002ccfa80, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Disarmed::CheckState
void __fastcall CDOTA_Modifier_Shredder_Chakram_Disarm::CheckState(
        CDOTA_Modifier_Shredder_Chakram_Disarm *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Disarmed::CheckState(this, buffState);
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Modifier_Shredder_Chakram_Disarm::DeclareFunctions  (line 1980, @0x0000000002cc9010, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Shredder_Chakram_Disarm::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Shredder_Chakram_Disarm::DeclareFunctions(
        CDOTA_Modifier_Shredder_Chakram_Disarm *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_Shredder_Chakram_Disarm::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Shredder_Chakram_Disarm::GetActivityTranslationModifiers  (line 1988, @0x0000000002cc9030, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Shredder_Chakram_Disarm::GetActivityTranslationModifiers(
        CDOTA_Modifier_Shredder_Chakram_Disarm *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "chakram";
  *&result.m_eType = 2;
  return result;
}


