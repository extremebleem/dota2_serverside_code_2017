// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:32
class CDOTA_Unit_Hero_Life_Stealer : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Life_Stealer(CDOTA_Unit_Hero_Life_Stealer &);
	CDOTA_Unit_Hero_Life_Stealer(CDOTA_Unit_Hero_Life_Stealer &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnItemEquipped(CDOTA_Item *);
	void SetAmbientEffectsActive(bool);
	CDOTA_Unit_Hero_Life_Stealer();
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Unit_Hero_Life_Stealer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[479] OnItemEquipped
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:59
class C_CDOTA_Unit_Hero_Life_Stealer_MapInstall {
	C_CDOTA_Unit_Hero_Life_Stealer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:167
class CDOTA_Ability_Life_Stealer_Rage : public CDOTABaseAbility {
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
	CDOTA_Ability_Life_Stealer_Rage(CDOTA_Ability_Life_Stealer_Rage &);
	CDOTA_Ability_Life_Stealer_Rage(CDOTA_Ability_Life_Stealer_Rage &);
	CDOTA_Ability_Life_Stealer_Rage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Life_Stealer_Rage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:212
class CDOTA_Modifier_Life_Stealer_Rage : public CDOTA_Buff {
public:

	int attack_speed_bonus;  // +0xba8
	CDOTA_Modifier_Life_Stealer_Rage();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsPurgable();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	virtual ~CDOTA_Modifier_Life_Stealer_Rage();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[14] IsPurgable
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:293
class CDOTA_Ability_Life_Stealer_Feast : public CDOTABaseAbility {
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
	CDOTA_Ability_Life_Stealer_Feast(CDOTA_Ability_Life_Stealer_Feast &);
	CDOTA_Ability_Life_Stealer_Feast(CDOTA_Ability_Life_Stealer_Feast &);
	CDOTA_Ability_Life_Stealer_Feast();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Life_Stealer_Feast();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:321
class CDOTA_Modifier_Life_Stealer_Feast : public CDOTA_Buff {
public:

private:

	float hp_leech_percent;  // +0xba8
	CDOTA_Modifier_Life_Stealer_Feast();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Life_Stealer_Feast();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:431
class CDOTA_Ability_Life_Stealer_Open_Wounds : public CDOTABaseAbility {
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
	CDOTA_Ability_Life_Stealer_Open_Wounds(CDOTA_Ability_Life_Stealer_Open_Wounds &);
	CDOTA_Ability_Life_Stealer_Open_Wounds(CDOTA_Ability_Life_Stealer_Open_Wounds &);
	CDOTA_Ability_Life_Stealer_Open_Wounds();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Life_Stealer_Open_Wounds();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:485
class CDOTA_Modifier_Life_Stealer_Open_Wounds : public CDOTA_Buff {
public:

private:

	int slow_steps[8];  // +0xba8
	int heal_percent;  // +0xbc8
	CDOTA_Modifier_Life_Stealer_Open_Wounds();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Life_Stealer_Open_Wounds();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:571
class CDOTA_Ability_Life_Stealer_Empty1 : public CDOTABaseAbility {
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
	CDOTA_Ability_Life_Stealer_Empty1(CDOTA_Ability_Life_Stealer_Empty1 &);
	CDOTA_Ability_Life_Stealer_Empty1(CDOTA_Ability_Life_Stealer_Empty1 &);
	CDOTA_Ability_Life_Stealer_Empty1();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Life_Stealer_Empty1();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:583
class CDOTA_Ability_Life_Stealer_Empty2 : public CDOTABaseAbility {
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
	CDOTA_Ability_Life_Stealer_Empty2(CDOTA_Ability_Life_Stealer_Empty2 &);
	CDOTA_Ability_Life_Stealer_Empty2(CDOTA_Ability_Life_Stealer_Empty2 &);
	CDOTA_Ability_Life_Stealer_Empty2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Life_Stealer_Empty2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:595
class CDOTA_Ability_Life_Stealer_Empty3 : public CDOTABaseAbility {
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
	CDOTA_Ability_Life_Stealer_Empty3(CDOTA_Ability_Life_Stealer_Empty3 &);
	CDOTA_Ability_Life_Stealer_Empty3(CDOTA_Ability_Life_Stealer_Empty3 &);
	CDOTA_Ability_Life_Stealer_Empty3();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Life_Stealer_Empty3();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:609
class CDOTA_Ability_Life_Stealer_Infest : public CDOTABaseAbility {
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
	CDOTA_Ability_Life_Stealer_Infest(CDOTA_Ability_Life_Stealer_Infest &);
	CDOTA_Ability_Life_Stealer_Infest(CDOTA_Ability_Life_Stealer_Infest &);
	CDOTA_Ability_Life_Stealer_Infest();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual float GetCooldown(int);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Life_Stealer_Infest();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[242] GetCooldown
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:631
class C_CDOTA_Ability_Life_Stealer_Infest_MapInstall {
	C_CDOTA_Ability_Life_Stealer_Infest_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:794
class CDOTA_Modifier_Life_Stealer_Infest : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

	EHANDLE m_hTarget;  // +0xbc4
	int m_nFXIndex;  // +0xbc8
	CDOTA_Modifier_Life_Stealer_Infest();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAbilityLayout(const CModifierParams &);
	virtual int GetPriority();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	EHANDLE GetInfestedUnit();
	virtual ~CDOTA_Modifier_Life_Stealer_Infest();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[6] GetPriority
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[92] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:1090
class CDOTA_Modifier_Life_Stealer_Infest_Effect : public CDOTA_Buff {
public:

private:

	int damage_increase_pct;  // +0xba8
	CDOTA_Modifier_Life_Stealer_Infest_Effect();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Life_Stealer_Infest_Effect();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:1188
class CDOTA_Ability_Life_Stealer_Consume : public CDOTABaseAbility {
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
	CDOTA_Ability_Life_Stealer_Consume(CDOTA_Ability_Life_Stealer_Consume &);
	CDOTA_Ability_Life_Stealer_Consume(CDOTA_Ability_Life_Stealer_Consume &);
	CDOTA_Ability_Life_Stealer_Consume();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Life_Stealer_Consume();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[239] ProcsMagicStick
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:1275
class CDOTA_Ability_Life_Stealer_Control : public CDOTABaseAbility {
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
	CDOTA_Ability_Life_Stealer_Control(CDOTA_Ability_Life_Stealer_Control &);
	CDOTA_Ability_Life_Stealer_Control(CDOTA_Ability_Life_Stealer_Control &);
	CDOTA_Ability_Life_Stealer_Control();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool IsStealable();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Life_Stealer_Control();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[305] IsStealable
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:1319
class CDOTA_Modifier_Life_Stealer_Infest_Creep : public CDOTA_Buff {
public:

	bool m_bChangedTeams;  // +0xba8
	CDOTA_Modifier_Life_Stealer_Infest_Creep();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedOverride(const CModifierParams &);
	ModifierVariant_t GetModifierAbilityLayout(const CModifierParams &);
	ModifierVariant_t OnDominated(const CModifierParams &);
	virtual ~CDOTA_Modifier_Life_Stealer_Infest_Creep();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:1474
class CDOTA_Ability_Life_Stealer_Assimilate : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hLastAssimilation;  // +0x390
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
	CDOTA_Ability_Life_Stealer_Assimilate(CDOTA_Ability_Life_Stealer_Assimilate &);
	CDOTA_Ability_Life_Stealer_Assimilate(CDOTA_Ability_Life_Stealer_Assimilate &);
	CDOTA_Ability_Life_Stealer_Assimilate();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	CDOTA_BaseNPC_Hero * GetLastAssimilatedHero();
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_Life_Stealer_Assimilate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[211] GetGestureBasedActivity
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:1586
class CDOTA_Modifier_Life_Stealer_Assimilate : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

	float order_lock_duration;  // +0xbc4
	float m_fOrderLockDone;  // +0xbc8
	int m_nFXIndex;  // +0xbcc
	CDOTA_Modifier_Life_Stealer_Assimilate();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	virtual bool CanBeManuallyRemoved();
	virtual bool IsPurgable();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	virtual void DeclareFunctions();
	ModifierVariant_t OnHealthGained(const CModifierParams &);
	ModifierVariant_t OnOrder(const CModifierParams &);
	virtual ~CDOTA_Modifier_Life_Stealer_Assimilate();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// vtable[19] CanBeManuallyRemoved
	// vtable[14] IsPurgable
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[92] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:1798
class CDOTA_Modifier_Life_Stealer_Assimilate_Effect : public CDOTA_Buff {
public:

	CDOTA_Modifier_Life_Stealer_Assimilate_Effect();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Life_Stealer_Assimilate_Effect();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_life_stealer.cpp:1833
class CDOTA_Ability_Life_Stealer_AssimilateEject : public CDOTABaseAbility {
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
	CDOTA_Ability_Life_Stealer_AssimilateEject(CDOTA_Ability_Life_Stealer_AssimilateEject &);
	CDOTA_Ability_Life_Stealer_AssimilateEject(CDOTA_Ability_Life_Stealer_AssimilateEject &);
	CDOTA_Ability_Life_Stealer_AssimilateEject();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual ~CDOTA_Ability_Life_Stealer_AssimilateEject();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// sizeof = 912
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Life_Stealer::~CDOTA_Unit_Hero_Life_Stealer  (line 32, @0x0000000002ba2ec0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Life_Stealer::~CDOTA_Unit_Hero_Life_Stealer(CDOTA_Unit_Hero_Life_Stealer *const this)
{
  this->_vptr_IHandleEntity = &off_4512C10;
  this->_vptr_INextBotEventResponder = &off_4513BF0;
  this->_vptr_CObstructionObject = &off_4513F20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Life_Stealer::~CDOTA_Unit_Hero_Life_Stealer  (line 32, @0x0000000002ba2f00, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Life_Stealer
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Life_Stealer::~CDOTA_Unit_Hero_Life_Stealer(CDOTA_Unit_Hero_Life_Stealer *const this)
{
  this->_vptr_IHandleEntity = &off_4512C10;
  this->_vptr_INextBotEventResponder = &off_4513BF0;
  this->_vptr_CObstructionObject = &off_4513F20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Life_Stealer::Schema_DynamicBinding  (line 34, @0x0000000002b92800, libserver.so)
// globals: CDOTA_Unit_Hero_Life_Stealer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Life_Stealer::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Life_Stealer *const this)
{
  return CDOTA_Unit_Hero_Life_Stealer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002b92830, libserver.so)
// globals: CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002b92840, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Life_Stealer>
void __fastcall CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002b92860, libserver.so)
void __fastcall CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002b92880, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002b92890, libserver.so)
// globals: CDOTA_Unit_Hero_Life_Stealer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Life_Stealer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002b987a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002b9c840, libserver.so)  // inlines: CDOTA_Unit_Hero_Life_Stealer, Construct<CDOTA_Unit_Hero_Life_Stealer>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4512C10;
    *(p + 236) = &off_4513BF0;
    *(p + 257) = &off_4513F20;
  }
  return p;
}


// CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002babeb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002bac490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal  (line 34, @0x0000000002bce810, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_life_stealer", "CDOTA_Unit_Hero_Life_Stealer"
// globals: `guard variable for'CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass, CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass, __dso_handle, CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClassInfo, CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass);
    CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass._vptr_CEntityClass = off_4512B90;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Life_Stealer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Life_StealerClass != 0 )
    return &CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClassInfo,
      "CDOTA_Unit_Hero_Life_Stealer",
      "npc_dota_hero_life_stealer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClassInfo);
  }
  CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass.m_pClassInfo = &CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClassInfo;
  CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Life_StealerClass = &CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass;
  CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClassInfo.m_pClass = &CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass;
  CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Life_StealerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Life_Stealer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Life_StealerClass;
}


// CDOTA_Unit_Hero_Life_Stealer::YouForgotToImplementOrDeclareServerClass  (line 59, @0x0000000002b35eb0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Life_Stealer::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Life_Stealer *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Life_Stealer::GetServerClass  (line 59, @0x0000000002b4cda0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Life_Stealer::GetServerClass(CDOTA_Unit_Hero_Life_Stealer *const this)
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


// CDOTA_Unit_Hero_Life_Stealer::SetAmbientEffectsActive  (line 68, @0x0000000002b5b800, libserver.so)
void __fastcall CDOTA_Unit_Hero_Life_Stealer::SetAmbientEffectsActive(
        CDOTA_Unit_Hero_Life_Stealer *const this,
        bool bActive)
{
  ;
}


// CDOTA_Unit_Hero_Life_Stealer::OnItemEquipped  (line 82, @0x0000000002b41d10, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, NetworkStateChanged, Set, SetDroppable, SetSellable, _V_strcmp, operator=<bool>
// calls: CDOTA_BaseNPC::OnItemEquipped, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::SetActivated
// strings: "item_ultimate_scepter", "life_stealer_assimilate", "life_stealer_assimilate_eject"
void __fastcall CDOTA_Unit_Hero_Life_Stealer::OnItemEquipped(
        CDOTA_Unit_Hero_Life_Stealer *const this,
        CDOTA_Item *pItem)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  int m_Value; // r13d
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v8; // rbx
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rbx

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
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "life_stealer_assimilate", 0);
          v8 = AbilityByName;
          if ( AbilityByName != 0 )
          {
            CDOTABaseAbility::SetHidden(AbilityByName, 0);
            CDOTABaseAbility::UpgradeAbility(v8, 0);
          }
          v9 = CDOTA_BaseNPC::FindAbilityByName(this, "life_stealer_assimilate_eject", 0);
          v10 = v9;
          if ( v9 != 0 )
          {
            CDOTABaseAbility::SetActivated(v9, 0);
            CDOTABaseAbility::UpgradeAbility(v10, 0);
          }
          this->m_bHadScepter = 1;
        }
      }
    }
  }
}


// CDOTA_Unit_Hero_Life_Stealer::OnLoadState  (line 134, @0x0000000002b36b20, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "life_stealer_consume", "life_stealer_open_wounds"
bool __fastcall CDOTA_Unit_Hero_Life_Stealer::OnLoadState(CDOTA_Unit_Hero_Life_Stealer *const this, KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "life_stealer_infest", 0);
  if ( !AbilityByName->m_bHidden.m_Value )
    return 1;
  if ( AbilityByName->m_bStolen.m_Value )
  {
    CDOTA_BaseNPC::SwapAbilities(this, "life_stealer_infest", "life_stealer_consume", 1, 0);
    return 1;
  }
  CDOTA_BaseNPC::SwapAbilities(this, "life_stealer_rage", "life_stealer_consume", 1, 0);
  CDOTA_BaseNPC::SwapAbilities(this, "life_stealer_feast", "life_stealer_feast", 1, 1);
  CDOTA_BaseNPC::SwapAbilities(this, "life_stealer_infest", "life_stealer_infest", 1, 1);
  CDOTA_BaseNPC::SwapAbilities(this, "life_stealer_open_wounds", "life_stealer_open_wounds", 1, 1);
  return 1;
}


// CDOTA_Ability_Life_Stealer_Rage::~CDOTA_Ability_Life_Stealer_Rage  (line 167, @0x0000000002ba1b90, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_Rage::~CDOTA_Ability_Life_Stealer_Rage(
        CDOTA_Ability_Life_Stealer_Rage *const this)
{
  this->_vptr_IHandleEntity = &off_4513FF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_Rage::~CDOTA_Ability_Life_Stealer_Rage  (line 167, @0x0000000002ba1bb0, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_Rage
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Rage::~CDOTA_Ability_Life_Stealer_Rage(
        CDOTA_Ability_Life_Stealer_Rage *const this)
{
  this->_vptr_IHandleEntity = &off_4513FF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Rage::Schema_DynamicBinding  (line 169, @0x0000000002b928a0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Rage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Rage::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Rage *const this)
{
  return CDOTA_Ability_Life_Stealer_Rage::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 169, @0x0000000002b928b0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::DestructInstance  (line 169, @0x0000000002b928c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_Rage>
void __fastcall CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::FreeInstance  (line 169, @0x0000000002b928e0, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::CanAllocate  (line 169, @0x0000000002b92900, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 169, @0x0000000002b92910, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Rage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Rage::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::AllocateInstance  (line 169, @0x0000000002b987e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::ConstructInstance  (line 169, @0x0000000002b9d8b0, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_Rage, Construct<CDOTA_Ability_Life_Stealer_Rage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4513FF0;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 169, @0x0000000002bab6f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 169, @0x0000000002bab710, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal  (line 169, @0x0000000002bcbb70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Life_Stealer_Rage"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass, CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass, __dso_handle, CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClassInfo, CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass);
    CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass._vptr_CEntityClass = off_4513F70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_Rage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_RageClass != 0 )
    return &CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClassInfo,
      "CDOTA_Ability_Life_Stealer_Rage",
      "life_stealer_rage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClassInfo);
  }
  CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass.m_pClassInfo = &CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClassInfo;
  CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_RageClass = &CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass;
  CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass;
  CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_RageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_Rage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_RageClass;
}


// CDOTA_Ability_Life_Stealer_Rage::OnSpellStart  (line 179, @0x0000000002b6aa30, libserver.so)
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, Purge, KeyValues::~KeyValues (14 total)
// strings: "special_bonus_unique_lifestealer", "modifier_life_stealer_rage", "modifier_heavens_halberd_debuff", "modifier_oracle_fates_edict", "modifier_silencer_curse_of_the_silent", "modifier_slark_pounce_leash" (8 total)
void __fastcall CDOTA_Ability_Life_Stealer_Rage::OnSpellStart(CDOTA_Ability_Life_Stealer_Rage *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  CDOTABaseAbility::GetDuration(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lifestealer", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  KeyValues::KeyValues(&kv, "modifier_life_stealer_rage");
  KeyValues::SetFloat(&kv, "duration", v4);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, v5, this, "modifier_life_stealer_rage", &kv, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v7, "modifier_heavens_halberd_debuff");
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v8, "modifier_oracle_fates_edict");
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v9, "modifier_silencer_curse_of_the_silent");
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v10, "modifier_slark_pounce_leash");
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_invoker_deafening_blast_disarm");
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v12, 1566, 0.1, 0.1, 9, 0, 1.0);
  v13 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v13, "Hero_LifeStealer.Rage", 0.0, 0, 0);
  v14 = CDOTABaseAbility::GetCaster(this);
  Purge(v14, this, 4);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Life_Stealer_Rage::~CDOTA_Modifier_Life_Stealer_Rage  (line 212, @0x0000000002b999f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Life_Stealer_Rage::~CDOTA_Modifier_Life_Stealer_Rage(
        CDOTA_Modifier_Life_Stealer_Rage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4514AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Life_Stealer_Rage::~CDOTA_Modifier_Life_Stealer_Rage  (line 212, @0x0000000002b99a10, libserver.so)  // inlines: ~CDOTA_Modifier_Life_Stealer_Rage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Life_Stealer_Rage::~CDOTA_Modifier_Life_Stealer_Rage(
        CDOTA_Modifier_Life_Stealer_Rage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4514AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Life_Stealer_Rage::IsPurgable  (line 221, @0x0000000002b92920, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Rage::IsPurgable(CDOTA_Modifier_Life_Stealer_Rage *const this)
{
  return 0;
}


// CDOTA_Modifier_Life_Stealer_Rage::GetStatusEffectName  (line 223, @0x0000000002b92930, libserver.so)
// strings: "particles/status_fx/status_effect_life_stealer_rage.vpcf"
const char *__fastcall CDOTA_Modifier_Life_Stealer_Rage::GetStatusEffectName(
        CDOTA_Modifier_Life_Stealer_Rage *const this)
{
  return "particles/status_fx/status_effect_life_stealer_rage.vpcf";
}


// CDOTA_Modifier_Life_Stealer_Rage::StatusEffectPriority  (line 224, @0x0000000002b92940, libserver.so)
int __fastcall CDOTA_Modifier_Life_Stealer_Rage::StatusEffectPriority(CDOTA_Modifier_Life_Stealer_Rage *const this)
{
  return 60;
}


// CDOTA_Modifier_Life_Stealer_Rage::OnCreated  (line 237, @0x0000000002b6c870, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Life_Stealer_Rage::OnCreated(
        CDOTA_Modifier_Life_Stealer_Rage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->attack_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed_bonus", -1, 0);
  else
    this->attack_speed_bonus = 0;
}


// CDOTA_Modifier_Life_Stealer_Rage::CheckState  (line 251, @0x0000000002b35ec0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Life_Stealer_Rage::CheckState(
        CDOTA_Modifier_Life_Stealer_Rage *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x200uLL;
  buffState->m_nDisabledStateMask &= ~0x200uLL;
}


// CDOTA_Modifier_Life_Stealer_Rage::DeclareFunctions  (line 259, @0x0000000002b35ee0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Life_Stealer_Rage::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Life_Stealer_Rage::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_Life_Stealer_Rage::DeclareFunctions(CDOTA_Modifier_Life_Stealer_Rage *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Life_Stealer_Rage::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[147].__delta = 0;
  this->m_Functions[147].__pfn = CDOTA_Modifier_Life_Stealer_Rage::OnHeroKilled;
}


// CDOTA_Modifier_Life_Stealer_Rage::GetModifierAttackSpeedBonus_Constant  (line 270, @0x0000000002b35f20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Rage::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Life_Stealer_Rage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Life_Stealer_Rage::OnHeroKilled  (line 276, @0x0000000002b49690, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Target, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Rage::OnHeroKilled(
        CDOTA_Modifier_Life_Stealer_Rage *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // rsi
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rdi

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hattacker.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  v8 = params->htarget.m_Index;
  if ( v8 + 2 <= 1
    || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v10 = &v9[params->htarget.m_Index & 0x1FF]) == 0
    || v8 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0
    || (v11[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    v11 = 0;
  }
  v12 = params->hattacker.m_Index;
  if ( v12 + 2 <= 1
    || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v14 = &v13[params->hattacker.m_Index & 0x1FF]) == 0
    || v12 != v14->m_EHandle.m_Index
    || (v15 = v14->m_pInstance, v14->m_pInstance == 0)
    || BYTE3(v15[7]._vptr_IHandleEntity) == 0
    || (v15[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    v15 = 0;
  }
  EconEntity_OnOwnerKillEaterEvent(
    v15,
    v11,
    kill_eater_event_t::kKillEaterEvent_Lifestealer_RageKills,
    1,
    INVALID_ITEM_DEF_INDEX);
  return 1uLL;
}


// CDOTA_Ability_Life_Stealer_Feast::~CDOTA_Ability_Life_Stealer_Feast  (line 293, @0x0000000002ba1be0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_Feast::~CDOTA_Ability_Life_Stealer_Feast(
        CDOTA_Ability_Life_Stealer_Feast *const this)
{
  this->_vptr_IHandleEntity = &off_4514E10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_Feast::~CDOTA_Ability_Life_Stealer_Feast  (line 293, @0x0000000002ba1c00, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_Feast
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Feast::~CDOTA_Ability_Life_Stealer_Feast(
        CDOTA_Ability_Life_Stealer_Feast *const this)
{
  this->_vptr_IHandleEntity = &off_4514E10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Feast::Schema_DynamicBinding  (line 295, @0x0000000002b92950, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Feast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Feast::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Feast *const this)
{
  return CDOTA_Ability_Life_Stealer_Feast::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 295, @0x0000000002b92960, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::DestructInstance  (line 295, @0x0000000002b92970, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_Feast>
void __fastcall CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::FreeInstance  (line 295, @0x0000000002b92990, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::CanAllocate  (line 295, @0x0000000002b929b0, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 295, @0x0000000002b929c0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Feast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Feast::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::AllocateInstance  (line 295, @0x0000000002b98820, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::ConstructInstance  (line 295, @0x0000000002b9d8e0, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_Feast, Construct<CDOTA_Ability_Life_Stealer_Feast>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4514E10;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 295, @0x0000000002bab740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 295, @0x0000000002bab760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal  (line 295, @0x0000000002bcbcc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Life_Stealer_Feast"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass, CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass, __dso_handle, CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClassInfo, CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass);
    CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass._vptr_CEntityClass = off_4514D90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_Feast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_FeastClass != 0 )
    return &CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClassInfo,
      "CDOTA_Ability_Life_Stealer_Feast",
      "life_stealer_feast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClassInfo);
  }
  CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass.m_pClassInfo = &CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClassInfo;
  CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_FeastClass = &CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass;
  CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass;
  CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_FeastClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_Feast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_FeastClass;
}


// CDOTA_Ability_Life_Stealer_Feast::GetIntrinsicModifierName  (line 298, @0x0000000002b929d0, libserver.so)
// strings: "modifier_life_stealer_feast"
const char *__fastcall CDOTA_Ability_Life_Stealer_Feast::GetIntrinsicModifierName(
        CDOTA_Ability_Life_Stealer_Feast *const this)
{
  return "modifier_life_stealer_feast";
}


// CDOTA_Ability_Life_Stealer_Feast::GetAbilityDamageToTargetOverInterval  (line 307, @0x0000000002b760c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CBaseEntity::GetHealth, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "hp_leech_percent"
__int64 __fastcall CDOTA_Ability_Life_Stealer_Feast::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Life_Stealer_Feast *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  float LevelSpecialValue; // [rsp-4h] [rbp-20h]
  float fNumAttacksa; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fNumAttacksa = fInterval / CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    fNumAttacksb = CBaseEntity::GetHealth(pTarget) * fNumAttacksa;
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "hp_leech_percent", -1, 0);
    return (((fNumAttacksb * LevelSpecialValue) / 100.0)
          * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Modifier_Life_Stealer_Feast::~CDOTA_Modifier_Life_Stealer_Feast  (line 321, @0x0000000002b999a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Life_Stealer_Feast::~CDOTA_Modifier_Life_Stealer_Feast(
        CDOTA_Modifier_Life_Stealer_Feast *const this)
{
  this->_vptr_CDOTA_Buff = &off_45158D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Life_Stealer_Feast::~CDOTA_Modifier_Life_Stealer_Feast  (line 321, @0x0000000002b999c0, libserver.so)  // inlines: ~CDOTA_Modifier_Life_Stealer_Feast
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Life_Stealer_Feast::~CDOTA_Modifier_Life_Stealer_Feast(
        CDOTA_Modifier_Life_Stealer_Feast *const this)
{
  this->_vptr_CDOTA_Buff = &off_45158D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Life_Stealer_Feast::IsHidden  (line 326, @0x0000000002b929e0, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Feast::IsHidden(CDOTA_Modifier_Life_Stealer_Feast *const this)
{
  return 1;
}


// CDOTA_Modifier_Life_Stealer_Feast::OnCreated  (line 344, @0x0000000002b7d8a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "hp_leech_percent"
void __fastcall CDOTA_Modifier_Life_Stealer_Feast::OnCreated(
        CDOTA_Modifier_Life_Stealer_Feast *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->hp_leech_percent = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "hp_leech_percent", -1, 0);
  else
    this->hp_leech_percent = 0.0;
}


// CDOTA_Modifier_Life_Stealer_Feast::OnRefresh  (line 351, @0x0000000002b7d600, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "hp_leech_percent"
void __fastcall CDOTA_Modifier_Life_Stealer_Feast::OnRefresh(
        CDOTA_Modifier_Life_Stealer_Feast *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->hp_leech_percent = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "hp_leech_percent", -1, 0);
  else
    this->hp_leech_percent = 0.0;
}


// CDOTA_Modifier_Life_Stealer_Feast::DeclareFunctions  (line 358, @0x0000000002b35f40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Life_Stealer_Feast::OnAttacked(CModifierParams const&), CDOTA_Modifier_Life_Stealer_Feast::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Life_Stealer_Feast::DeclareFunctions(CDOTA_Modifier_Life_Stealer_Feast *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_Life_Stealer_Feast::OnAttacked;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Life_Stealer_Feast::GetModifierPreAttack_BonusDamage;
}


// CDOTA_Modifier_Life_Stealer_Feast::GetModifierPreAttack_BonusDamage  (line 366, @0x0000000002b45d50, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Feast::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Life_Stealer_Feast *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const CBaseEntity *m_pInstance; // rbx
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *Parent; // rax
  uint32 v14; // edx
  __int64 hp_leech_percent_low; // xmm0_8
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1
    && (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v10 = &v9[m_Index_low & 0x1FF]) != 0
    && v7 == v10->m_EHandle.m_Index
    && (v12 = v10->m_pInstance, v10->m_pInstance != 0)
    && v12->m_bIsDOTANPC
    && (Parent = CDOTA_Buff::GetParent(this)) == v12
    && m_pInstance != 0
    && ((v14 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index) & 0x10) == 0
    && !Parent->m_bIsIllusion.m_Value
    && m_pInstance->m_iTeamNum.m_Value != Parent->m_iTeamNum.m_Value
    && (v14 & 0x800) == 0
    && (Parent->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    result.m_eType = CBaseEntity::GetHealth(m_pInstance);
    hp_leech_percent_low = LODWORD(this->hp_leech_percent);
    *&hp_leech_percent_low = (*&hp_leech_percent_low / 100.0) * result.m_eType;
    *&result.m_eType = (hp_leech_percent_low << 32) | 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Life_Stealer_Feast::OnAttacked  (line 390, @0x0000000002b474a0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, SendOverheadEventMessage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/generic_gameplay/generic_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Feast::OnAttacked(
        CDOTA_Modifier_Life_Stealer_Feast *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const CBaseEntity *m_pInstance; // r13
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v12; // r14
  CDOTA_BaseNPC *Parent; // rbx
  uint32 v14; // eax
  CDOTABaseAbility *Ability; // rax
  CDOTAPlayer *v16; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v19; // rax
  float flLifeSteal; // [rsp+Ch] [rbp-24h]

  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[params->htarget.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    v8 = params->hattacker.m_Index;
    if ( v8 + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[params->hattacker.m_Index & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          v12 = v10->m_pInstance;
          if ( v10->m_pInstance != 0 && v12->m_bIsDOTANPC )
          {
            Parent = CDOTA_Buff::GetParent(this);
            if ( Parent == v12 && m_pInstance != 0 )
            {
              v14 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index;
              if ( (v14 & 0x10) == 0
                && (v14 & 0x193) != 0
                && m_pInstance->m_iTeamNum.m_Value != Parent->m_iTeamNum.m_Value
                && (v14 & 0x800) == 0
                && (Parent->m_nUnitState64.m_Value & 0x10000000) == 0
                && !Parent->m_bIsIllusion.m_Value )
              {
                flLifeSteal = CBaseEntity::GetHealth(m_pInstance) * (this->hp_leech_percent / 100.0);
                Ability = CDOTA_Buff::GetAbility(this);
                CDOTA_BaseNPC::Heal(Parent, flLifeSteal, Ability, 1, 1);
                v16 = (*(Parent->_vptr_IHandleEntity + 413))(Parent);
                SendOverheadEventMessage(v16, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, Parent, flLifeSteal, 0);
                ParticleManager = GetParticleManager();
                Particle = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/generic_gameplay/generic_lifesteal.vpcf",
                             1,
                             Parent,
                             0,
                             0);
                v19 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v19, Particle);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::~CDOTA_Ability_Life_Stealer_Open_Wounds  (line 431, @0x0000000002ba1c30, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::~CDOTA_Ability_Life_Stealer_Open_Wounds(
        CDOTA_Ability_Life_Stealer_Open_Wounds *const this)
{
  this->_vptr_IHandleEntity = &off_4515C30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::~CDOTA_Ability_Life_Stealer_Open_Wounds  (line 431, @0x0000000002ba1c50, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_Open_Wounds
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::~CDOTA_Ability_Life_Stealer_Open_Wounds(
        CDOTA_Ability_Life_Stealer_Open_Wounds *const this)
{
  this->_vptr_IHandleEntity = &off_4515C30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::Schema_DynamicBinding  (line 433, @0x0000000002b929f0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Open_Wounds::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Open_Wounds *const this)
{
  return CDOTA_Ability_Life_Stealer_Open_Wounds::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 433, @0x0000000002b92a00, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::DestructInstance  (line 433, @0x0000000002b92a10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_Open_Wounds>
void __fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::FreeInstance  (line 433, @0x0000000002b92a30, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::CanAllocate  (line 433, @0x0000000002b92a50, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 433, @0x0000000002b92a60, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Open_Wounds::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Open_Wounds::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::AllocateInstance  (line 433, @0x0000000002b98860, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::ConstructInstance  (line 433, @0x0000000002b9d910, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_Open_Wounds, Construct<CDOTA_Ability_Life_Stealer_Open_Wounds>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4515C30;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 433, @0x0000000002bab790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 433, @0x0000000002bab7b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal  (line 433, @0x0000000002bcbe10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "life_stealer_open_wounds", "CDOTA_Ability_Life_Stealer_Open_Wounds"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass, CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass, __dso_handle, CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClassInfo, CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass);
    CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass._vptr_CEntityClass = off_4515BB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_Open_Wounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_Open_WoundsClass != 0 )
    return &CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClassInfo,
      "CDOTA_Ability_Life_Stealer_Open_Wounds",
      "life_stealer_open_wounds",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClassInfo);
  }
  CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass.m_pClassInfo = &CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClassInfo;
  CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_Open_WoundsClass = &CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass;
  CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass;
  CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_Open_WoundsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_Open_Wounds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Open_WoundsClass;
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::OnSpellStart  (line 443, @0x0000000002b43ac0, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound (16 total)
// strings: "modifier_life_stealer_open_wounds", "particles/units/heroes/hero_life_stealer/life_stealer_open_wounds_impact.vpcf", "Hero_LifeStealer.OpenWounds.Cast", "Hero_LifeStealer.OpenWounds"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::OnSpellStart(
        CDOTA_Ability_Life_Stealer_Open_Wounds *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *v5; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC_Hero *v11; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v13; // rdi
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    KeyValues::KeyValues(&kv, "modifier_life_stealer_open_wounds");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kv, "duration", v4);
    if ( (v3->m_iUnitType & 1) != 0 && !v3->m_bIsIllusion.m_Value && (*(v3->_vptr_IHandleEntity + 408))(v3) == 0 )
    {
      v11 = 0;
      if ( v3->m_bIsDOTANPC && (v3->m_iUnitType & 1) != 0 && !v3->m_bIsIllusion.m_Value )
        v11 = v3;
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
        v13 = Caster;
      else
        v13 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v13,
        v11,
        kill_eater_event_t::kKillEaterEvent_Lifestealer_OpenWoundsKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, v5, this, "modifier_life_stealer_open_wounds", &kv, 0);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_life_stealer/life_stealer_open_wounds_impact.vpcf",
                 0,
                 v3,
                 0,
                 0);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v8, Particle);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v9, 1567, 0.1, 0.1, 9, 0, 1.0);
    v10 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_LifeStealer.OpenWounds.Cast", 0.0, 0, 0);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_LifeStealer.OpenWounds", 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Life_Stealer_Open_Wounds::GetSlowDuration  (line 475, @0x0000000002b76170, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Life_Stealer_Open_Wounds::GetSlowDuration(
        CDOTA_Ability_Life_Stealer_Open_Wounds *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Life_Stealer_Open_Wounds::~CDOTA_Modifier_Life_Stealer_Open_Wounds  (line 485, @0x0000000002b99950, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Life_Stealer_Open_Wounds::~CDOTA_Modifier_Life_Stealer_Open_Wounds(
        CDOTA_Modifier_Life_Stealer_Open_Wounds *const this)
{
  this->_vptr_CDOTA_Buff = &off_45166F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Life_Stealer_Open_Wounds::~CDOTA_Modifier_Life_Stealer_Open_Wounds  (line 485, @0x0000000002b99970, libserver.so)  // inlines: ~CDOTA_Modifier_Life_Stealer_Open_Wounds
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Life_Stealer_Open_Wounds::~CDOTA_Modifier_Life_Stealer_Open_Wounds(
        CDOTA_Modifier_Life_Stealer_Open_Wounds *const this)
{
  this->_vptr_CDOTA_Buff = &off_45166F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Life_Stealer_Open_Wounds::GetEffectName  (line 496, @0x0000000002b92a70, libserver.so)
// strings: "particles/units/heroes/hero_life_stealer/life_stealer_open_wounds.vpcf"
const char *__fastcall CDOTA_Modifier_Life_Stealer_Open_Wounds::GetEffectName(
        CDOTA_Modifier_Life_Stealer_Open_Wounds *const this)
{
  return "particles/units/heroes/hero_life_stealer/life_stealer_open_wounds.vpcf";
}


// CDOTA_Modifier_Life_Stealer_Open_Wounds::GetStatusEffectName  (line 497, @0x0000000002b92a80, libserver.so)
// strings: "particles/status_fx/status_effect_life_stealer_open_wounds.vpcf"
const char *__fastcall CDOTA_Modifier_Life_Stealer_Open_Wounds::GetStatusEffectName(
        CDOTA_Modifier_Life_Stealer_Open_Wounds *const this)
{
  return "particles/status_fx/status_effect_life_stealer_open_wounds.vpcf";
}


// CDOTA_Modifier_Life_Stealer_Open_Wounds::StatusEffectPriority  (line 498, @0x0000000002b92a90, libserver.so)
int __fastcall CDOTA_Modifier_Life_Stealer_Open_Wounds::StatusEffectPriority(
        CDOTA_Modifier_Life_Stealer_Open_Wounds *const this)
{
  return 18;
}


// CDOTA_Modifier_Life_Stealer_Open_Wounds::OnCreated  (line 511, @0x0000000002b6f460, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "heal_percent", "slow_steps"
void __fastcall CDOTA_Modifier_Life_Stealer_Open_Wounds::OnCreated(
        CDOTA_Modifier_Life_Stealer_Open_Wounds *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  __int64 i; // rbx
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->heal_percent = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "heal_percent", -1, 0);
  else
    this->heal_percent = 0;
  for ( i = 0; i != 8; ++i )
  {
    while ( CDOTA_Buff::GetAbility(this) != 0 )
    {
      v5 = CDOTA_Buff::GetAbility(this);
      this->slow_steps[i] = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "slow_steps", i, 0);
      if ( ++i == 8 )
        return;
    }
    this->slow_steps[i] = 0;
  }
}


// CDOTA_Modifier_Life_Stealer_Open_Wounds::DeclareFunctions  (line 530, @0x0000000002b35f80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Life_Stealer_Open_Wounds::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Life_Stealer_Open_Wounds::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Life_Stealer_Open_Wounds::DeclareFunctions(
        CDOTA_Modifier_Life_Stealer_Open_Wounds *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Life_Stealer_Open_Wounds::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Life_Stealer_Open_Wounds::OnTakeDamage;
}


// CDOTA_Modifier_Life_Stealer_Open_Wounds::OnTakeDamage  (line 538, @0x0000000002b472c0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, SendOverheadEventMessage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/generic_gameplay/generic_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Open_Wounds::OnTakeDamage(
        CDOTA_Modifier_Life_Stealer_Open_Wounds *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v12; // r14
  uint32 m_iUnitType; // eax
  CDOTABaseAbility *Ability; // rax
  CDOTAPlayer *v15; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v18; // rax
  float flLifeSteal; // [rsp+Ch] [rbp-24h]

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v8 = params->hunit.m_Index;
  if ( v8 + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[params->hunit.m_Index & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
      {
        v12 = v10->m_pInstance;
        if ( v10->m_pInstance != 0 && v12->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == v12 && m_pInstance != 0 )
        {
          m_iUnitType = m_pInstance->m_iUnitType;
          if ( (m_iUnitType & 0x10) == 0
            && (m_iUnitType & 0x193) != 0
            && this->m_iTeam == m_pInstance->m_iTeamNum.m_Value
            && (CDOTA_Buff::GetParent(this)->m_iUnitType & 0x10) == 0 )
          {
            flLifeSteal = (this->heal_percent / 100.0) * params->fDamage;
            Ability = CDOTA_Buff::GetAbility(this);
            CDOTA_BaseNPC::Heal(m_pInstance, flLifeSteal, Ability, 1, 1);
            v15 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
            SendOverheadEventMessage(v15, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, flLifeSteal, 0);
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/generic_gameplay/generic_lifesteal.vpcf",
                         1,
                         m_pInstance,
                         0,
                         0);
            v18 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v18, Particle);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Life_Stealer_Open_Wounds::GetModifierMoveSpeedBonus_Percentage  (line 560, @0x0000000002b386a0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: floorf
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Open_Wounds::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Life_Stealer_Open_Wounds *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  __m128i v6; // xmm4
  int v7; // eax
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // r14d
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // [rsp+Ch] [rbp-24h]
  float v16; // [rsp+Ch] [rbp-24h]
  float v17; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  v15 = (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  (*(this->_vptr_CDOTA_Buff + 30))(this);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  v5 = floorf(v15 - (v3 - v4));
  v7 = 7;
  if ( v5 <= 7.0 )
  {
    v16 = (*(this->_vptr_CDOTA_Buff + 31))(this);
    (*(this->_vptr_CDOTA_Buff + 30))(this);
    if ( g_pGameRules != 0 )
    {
      v10 = *&g_pGameRules[18].m_szQuestName[20];
      v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    }
    else
    {
      v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
      v10 = 0.0;
    }
    v12 = floorf(v16 - (v9 - v10));
    v7 = 0;
    if ( v11 <= v12 )
    {
      v17 = (*(this->_vptr_CDOTA_Buff + 31))(this);
      (*(this->_vptr_CDOTA_Buff + 30))(this);
      if ( g_pGameRules != 0 )
        v14 = *&g_pGameRules[18].m_szQuestName[20];
      else
        v14 = v11;
      v7 = floorf(v17 - (v13 - v14));
    }
  }
  result.m_szVal = 0;
  *v6.m128i_i32 = this->slow_steps[v7];
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  return result;
}


// CDOTA_Ability_Life_Stealer_Empty1::~CDOTA_Ability_Life_Stealer_Empty1  (line 571, @0x0000000002ba1c80, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_Empty1::~CDOTA_Ability_Life_Stealer_Empty1(
        CDOTA_Ability_Life_Stealer_Empty1 *const this)
{
  this->_vptr_IHandleEntity = &off_4516A50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_Empty1::~CDOTA_Ability_Life_Stealer_Empty1  (line 571, @0x0000000002ba1ca0, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_Empty1
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Empty1::~CDOTA_Ability_Life_Stealer_Empty1(
        CDOTA_Ability_Life_Stealer_Empty1 *const this)
{
  this->_vptr_IHandleEntity = &off_4516A50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Empty1::Schema_DynamicBinding  (line 573, @0x0000000002b92aa0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Empty1::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Empty1::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Empty1 *const this)
{
  return CDOTA_Ability_Life_Stealer_Empty1::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 573, @0x0000000002b92ab0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::DestructInstance  (line 573, @0x0000000002b92ac0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_Empty1>
void __fastcall CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::FreeInstance  (line 573, @0x0000000002b92ae0, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::CanAllocate  (line 573, @0x0000000002b92b00, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 573, @0x0000000002b92b10, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Empty1::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Empty1::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::AllocateInstance  (line 573, @0x0000000002b988a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::ConstructInstance  (line 573, @0x0000000002b9d940, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_Empty1, Construct<CDOTA_Ability_Life_Stealer_Empty1>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4516A50;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 573, @0x0000000002bab7e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 573, @0x0000000002bab800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal  (line 573, @0x0000000002bcbf60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "life_stealer_empty_1", "CDOTA_Ability_Life_Stealer_Empty1"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class, CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class, __dso_handle, CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1ClassInfo, CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class);
    CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class._vptr_CEntityClass = off_45169D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_Empty1Class != 0 )
    return &CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1ClassInfo,
      "CDOTA_Ability_Life_Stealer_Empty1",
      "life_stealer_empty_1",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1ClassInfo);
  }
  CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class.m_pClassInfo = &CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1ClassInfo;
  CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_Empty1Class = &CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class;
  CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1ClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class;
  CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_Empty1Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty1Class;
}


// CDOTA_Ability_Life_Stealer_Empty2::~CDOTA_Ability_Life_Stealer_Empty2  (line 583, @0x0000000002ba1cd0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_Empty2::~CDOTA_Ability_Life_Stealer_Empty2(
        CDOTA_Ability_Life_Stealer_Empty2 *const this)
{
  this->_vptr_IHandleEntity = &off_4517550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_Empty2::~CDOTA_Ability_Life_Stealer_Empty2  (line 583, @0x0000000002ba1cf0, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_Empty2
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Empty2::~CDOTA_Ability_Life_Stealer_Empty2(
        CDOTA_Ability_Life_Stealer_Empty2 *const this)
{
  this->_vptr_IHandleEntity = &off_4517550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Empty2::Schema_DynamicBinding  (line 585, @0x0000000002b92b20, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Empty2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Empty2::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Empty2 *const this)
{
  return CDOTA_Ability_Life_Stealer_Empty2::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 585, @0x0000000002b92b30, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::DestructInstance  (line 585, @0x0000000002b92b40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_Empty2>
void __fastcall CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::FreeInstance  (line 585, @0x0000000002b92b60, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::CanAllocate  (line 585, @0x0000000002b92b80, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 585, @0x0000000002b92b90, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Empty2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Empty2::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::AllocateInstance  (line 585, @0x0000000002b988e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::ConstructInstance  (line 585, @0x0000000002b9d970, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_Empty2, Construct<CDOTA_Ability_Life_Stealer_Empty2>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4517550;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 585, @0x0000000002bab830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 585, @0x0000000002bab850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal  (line 585, @0x0000000002bcc0b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "life_stealer_empty_2", "CDOTA_Ability_Life_Stealer_Empty2"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class, CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class, __dso_handle, CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2ClassInfo, CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class);
    CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class._vptr_CEntityClass = off_45174D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_Empty2Class != 0 )
    return &CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2ClassInfo,
      "CDOTA_Ability_Life_Stealer_Empty2",
      "life_stealer_empty_2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2ClassInfo);
  }
  CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class.m_pClassInfo = &CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2ClassInfo;
  CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_Empty2Class = &CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class;
  CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2ClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class;
  CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_Empty2Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty2Class;
}


// CDOTA_Ability_Life_Stealer_Empty3::~CDOTA_Ability_Life_Stealer_Empty3  (line 595, @0x0000000002ba1d20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_Empty3::~CDOTA_Ability_Life_Stealer_Empty3(
        CDOTA_Ability_Life_Stealer_Empty3 *const this)
{
  this->_vptr_IHandleEntity = &off_4518050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_Empty3::~CDOTA_Ability_Life_Stealer_Empty3  (line 595, @0x0000000002ba1d40, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_Empty3
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Empty3::~CDOTA_Ability_Life_Stealer_Empty3(
        CDOTA_Ability_Life_Stealer_Empty3 *const this)
{
  this->_vptr_IHandleEntity = &off_4518050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Empty3::Schema_DynamicBinding  (line 597, @0x0000000002b92ba0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Empty3::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Empty3::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Empty3 *const this)
{
  return CDOTA_Ability_Life_Stealer_Empty3::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 597, @0x0000000002b92bb0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::DestructInstance  (line 597, @0x0000000002b92bc0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_Empty3>
void __fastcall CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::FreeInstance  (line 597, @0x0000000002b92be0, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::CanAllocate  (line 597, @0x0000000002b92c00, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 597, @0x0000000002b92c10, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Empty3::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Empty3::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::AllocateInstance  (line 597, @0x0000000002b98920, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::ConstructInstance  (line 597, @0x0000000002b9d9a0, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_Empty3, Construct<CDOTA_Ability_Life_Stealer_Empty3>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4518050;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 597, @0x0000000002bab880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 597, @0x0000000002bab8a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal  (line 597, @0x0000000002bcc200, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "life_stealer_empty_3", "CDOTA_Ability_Life_Stealer_Empty3"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class, CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class, __dso_handle, CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3ClassInfo, CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class);
    CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class._vptr_CEntityClass = off_4517FD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_Empty3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_Empty3Class != 0 )
    return &CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3ClassInfo,
      "CDOTA_Ability_Life_Stealer_Empty3",
      "life_stealer_empty_3",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3ClassInfo);
  }
  CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class.m_pClassInfo = &CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3ClassInfo;
  CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_Empty3Class = &CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class;
  CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3ClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class;
  CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_Empty3Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_Empty3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_Empty3Class;
}


// CDOTA_Ability_Life_Stealer_Infest::~CDOTA_Ability_Life_Stealer_Infest  (line 609, @0x0000000002ba1d70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_Infest::~CDOTA_Ability_Life_Stealer_Infest(
        CDOTA_Ability_Life_Stealer_Infest *const this)
{
  this->_vptr_IHandleEntity = &off_4518B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_Infest::~CDOTA_Ability_Life_Stealer_Infest  (line 609, @0x0000000002ba1d90, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_Infest
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Infest::~CDOTA_Ability_Life_Stealer_Infest(
        CDOTA_Ability_Life_Stealer_Infest *const this)
{
  this->_vptr_IHandleEntity = &off_4518B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Infest::Schema_DynamicBinding  (line 611, @0x0000000002b92c20, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Infest::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Infest::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Infest *const this)
{
  return CDOTA_Ability_Life_Stealer_Infest::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 611, @0x0000000002b92c30, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::DestructInstance  (line 611, @0x0000000002b92c40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_Infest>
void __fastcall CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::FreeInstance  (line 611, @0x0000000002b92c60, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::CanAllocate  (line 611, @0x0000000002b92c80, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 611, @0x0000000002b92c90, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Infest::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Infest::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::AllocateInstance  (line 611, @0x0000000002b98960, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::ConstructInstance  (line 611, @0x0000000002b9d9d0, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_Infest, Construct<CDOTA_Ability_Life_Stealer_Infest>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4518B50;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 611, @0x0000000002bab8d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 611, @0x0000000002bab8f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal  (line 611, @0x0000000002bcc350, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Life_Stealer_Infest"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass, CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass, __dso_handle, CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClassInfo, CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass);
    CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass._vptr_CEntityClass = off_4518AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_Infest::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_InfestClass != 0 )
    return &CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClassInfo,
      "CDOTA_Ability_Life_Stealer_Infest",
      "life_stealer_infest",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClassInfo);
  }
  CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass.m_pClassInfo = &CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClassInfo;
  CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_InfestClass = &CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass;
  CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass;
  CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_InfestClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_Infest::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_InfestClass;
}


// CDOTA_Ability_Life_Stealer_Infest::GetAssociatedSecondaryAbilities  (line 624, @0x0000000002b92ca0, libserver.so)
// strings: "life_stealer_consume"
const char *__fastcall CDOTA_Ability_Life_Stealer_Infest::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Life_Stealer_Infest *const this)
{
  return "life_stealer_consume";
}


// CDOTA_Ability_Life_Stealer_Infest::YouForgotToImplementOrDeclareServerClass  (line 631, @0x0000000002b35fc0, libserver.so)
int __fastcall CDOTA_Ability_Life_Stealer_Infest::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Life_Stealer_Infest *const this)
{
  return 0;
}


// CDOTA_Ability_Life_Stealer_Infest::GetServerClass  (line 631, @0x0000000002b4cba0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Life_Stealer_Infest::GetServerClass(
        CDOTA_Ability_Life_Stealer_Infest *const this)
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


// CDOTA_Ability_Life_Stealer_Infest::GetAbilityDamageToTargetOverInterval  (line 640, @0x0000000002b6ac10, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Life_Stealer_Infest::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Life_Stealer_Infest *const this,
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


// CDOTA_Ability_Life_Stealer_Infest::GetCooldown  (line 650, @0x0000000002b38820, libserver.so)
// calls: CDOTABaseAbility::GetCooldown
float __fastcall CDOTA_Ability_Life_Stealer_Infest::GetCooldown(
        CDOTA_Ability_Life_Stealer_Infest *const this,
        int iLevel)
{
  return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Life_Stealer_Infest::OnSpellStart  (line 663, @0x0000000002b74b10, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, GetLevelSpecialValueFor<float>, GetTeamNumber, ToDOTABaseNPC, VectorNormalize2D, VectorSubtract, operator-, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::StartGesture, Purge, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors (31 total)
// strings: "modifier_life_stealer_infest", "modifier_life_stealer_infest_effect", "particles/units/heroes/hero_life_stealer/life_stealer_infest_cast.vpcf", "attach_hitloc", "Hero_LifeStealer.Infest", "infest_scepter_duration"
void __fastcall CDOTA_Ability_Life_Stealer_Infest::OnSpellStart(CDOTA_Ability_Life_Stealer_Infest *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r13
  vec_t v11; // xmm0_4
  vec_t v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v15; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v18; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int v20; // r14d
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // rbx
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  unsigned __int8 m_Value; // r13
  float v28; // xmm1_4
  unsigned __int8 v29; // r14
  Vector vCastDir; // [rsp+10h] [rbp-1B0h] BYREF
  Vector CursorPosition; // [rsp+20h] [rbp-1A0h]
  KeyValues kv; // [rsp+30h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v34; // [rsp+188h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_life_stealer_infest");
    KeyValues::SetPtr(&kv, "target", v3);
    if ( (v3[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
    {
      m_Value = v3->m_iTeamNum.m_Value;
      if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "infest_scepter_duration", -1, 0);
        KeyValues::SetFloat(&kv, "duration", v28);
      }
    }
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_life_stealer_infest", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v6, 1576, 0.1, 0.1, 9, 0, 1.0);
    v7 = CDOTABaseAbility::GetCaster(this);
    Purge(v7, this, 6);
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, v8, this, "modifier_life_stealer_infest_effect", &kv, 0);
    v9 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    v11 = CursorPosition.y - AbsOrigin->y;
    v12 = CursorPosition.x - AbsOrigin->x;
    vCastDir.z = 0.0;
    vCastDir.y = v11;
    vCastDir.x = v12;
    if ( VectorNormalize(&vCastDir) < 0.0099999998 )
    {
      v13 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v13);
      AngleVectors(AbsAngles, &vCastDir, 0, 0);
    }
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    if ( (v3[2].m_hEffectEntity.m_Value.m_Index & 1) == 0
      || (v29 = v3->m_iTeamNum.m_Value) == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      v15 = CDOTABaseAbility::GetCaster(this);
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v15);
      GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
      CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
    }
    v18 = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filter, v18);
    ParticleManager = GetParticleManager();
    v20 = CDOTA_ParticleManager::CreateParticle(
            ParticleManager,
            "particles/units/heroes/hero_life_stealer/life_stealer_infest_cast.vpcf",
            2,
            0,
            &filter,
            0);
    v21 = CDOTABaseAbility::GetCaster(this);
    v22 = CBaseEntity::GetAbsOrigin(v21);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v23, v20, 0, *&v22->x, v22->z);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v24, v20, 1, v3, 5, "attach_hitloc", vec3_invalid, 1);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v25, v20, 2, *&vCastDir.x, vCastDir.z);
    v26 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v26, v20);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_LifeStealer.Infest", 0.0, 0, 0);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Life_Stealer_Infest::OnUpgrade  (line 713, @0x0000000002b37df0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "life_stealer_consume", "life_stealer_control"
void __fastcall CDOTA_Ability_Life_Stealer_Infest::OnUpgrade(CDOTA_Ability_Life_Stealer_Infest *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "life_stealer_consume", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "life_stealer_control", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Life_Stealer_Infest::OnUnStolen  (line 732, @0x0000000002b384a0, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_life_stealer_infest"
void __fastcall CDOTA_Ability_Life_Stealer_Infest::OnUnStolen(CDOTA_Ability_Life_Stealer_Infest *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_life_stealer_infest");
}


// CDOTA_Ability_Life_Stealer_Infest::CastFilterResult  (line 743, @0x0000000002b3b6f0, libserver.so)  // inlines: GetBool, GetUnitName, IsConsideredHero, String, ToCStr
// calls: CDOTABaseAbility::GetCaster, UnitFilter, DOTAGameManager, CDOTAGameManager::GetDataForHeroOrUnit, KeyValues::GetInt
// strings: "ImmuneToInfest"
int __fastcall CDOTA_Ability_Life_Stealer_Infest::CastFilterResult(
        CDOTA_Ability_Life_Stealer_Infest *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax
  const char *m_pAsString; // r12
  CDOTAGameManager *v7; // rax
  KeyValues *DataForHeroOrUnit; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 3, 3, 16, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
  {
    if ( CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value != pTarget->m_iTeamNum.m_Value
      && (pTarget->m_iUnitType & 3) != 0
      || pTarget == CDOTABaseAbility::GetCaster(this)
      || (pTarget->m_iUnitType & 0x800) != 0
      || pTarget->m_bIsAncient.m_Value && this->m_iLevel.m_Value == 1 )
    {
      return 23;
    }
    else
    {
      m_pAsString = "";
      if ( pTarget->m_iszUnitName.m_Value.u.m_Id != 0 )
        m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
      v7 = DOTAGameManager();
      DataForHeroOrUnit = CDOTAGameManager::GetDataForHeroOrUnit(v7, m_pAsString);
      if ( DataForHeroOrUnit != 0 && KeyValues::GetInt(DataForHeroOrUnit, "ImmuneToInfest", 0) != 0 )
        return 8;
      else
        return 0;
    }
  }
  return result;
}


// CDOTA_Ability_Life_Stealer_Infest::GetCustomCastError  (line 772, @0x0000000002b3cc10, libserver.so)  // inlines: IsConsideredHero
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_enemy_hero", "#dota_hud_error_cant_cast_on_roshan", "#dota_hud_error_infest_ancient", "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_Life_Stealer_Infest::GetCustomCastError(
        CDOTA_Ability_Life_Stealer_Infest *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax

  if ( CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == pTarget->m_iTeamNum.m_Value
    || (result = "#dota_hud_error_cant_cast_enemy_hero", (pTarget->m_iUnitType & 3) == 0) )
  {
    if ( pTarget == CDOTABaseAbility::GetCaster(this) )
    {
      return "#dota_hud_error_cant_cast_on_self";
    }
    else
    {
      result = "#dota_hud_error_cant_cast_on_roshan";
      if ( (pTarget->m_iUnitType & 0x800) == 0 )
      {
        if ( !pTarget->m_bIsAncient.m_Value )
          return "";
        result = "#dota_hud_error_infest_ancient";
        if ( this->m_iLevel.m_Value != 1 )
          return "";
      }
    }
  }
  return result;
}


// CDOTA_Modifier_Life_Stealer_Infest::~CDOTA_Modifier_Life_Stealer_Infest  (line 794, @0x0000000002b998d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Life_Stealer_Infest::~CDOTA_Modifier_Life_Stealer_Infest(
        CDOTA_Modifier_Life_Stealer_Infest *const this)
{
  this->_vptr_CDOTA_Buff = &off_4519610;
  this->_vptr_CHorizontalMotionController = &off_4519908;
  this->_vptr_CVerticalMotionController = &off_4519948;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Life_Stealer_Infest::~CDOTA_Modifier_Life_Stealer_Infest  (line 794, @0x0000000002b99900, libserver.so)  // inlines: ~CDOTA_Modifier_Life_Stealer_Infest
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Life_Stealer_Infest::~CDOTA_Modifier_Life_Stealer_Infest(
        CDOTA_Modifier_Life_Stealer_Infest *const this)
{
  this->_vptr_CDOTA_Buff = &off_4519610;
  this->_vptr_CHorizontalMotionController = &off_4519908;
  this->_vptr_CVerticalMotionController = &off_4519948;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Life_Stealer_Infest::IsPurgable  (line 808, @0x0000000002b92cb0, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Infest::IsPurgable(CDOTA_Modifier_Life_Stealer_Infest *const this)
{
  return 0;
}


// CDOTA_Modifier_Life_Stealer_Infest::GetPriority  (line 812, @0x0000000002b92cc0, libserver.so)
int __fastcall CDOTA_Modifier_Life_Stealer_Infest::GetPriority(CDOTA_Modifier_Life_Stealer_Infest *const this)
{
  return 4;
}


// CDOTA_Modifier_Life_Stealer_Infest::IsHorizontalMotionValidToApply  (line 819, @0x0000000002b92cd0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Life_Stealer_Infest::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Life_Stealer_Infest *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Life_Stealer_Infest::IsVerticalMotionValidToApply  (line 820, @0x0000000002b92d00, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Life_Stealer_Infest::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Life_Stealer_Infest *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Life_Stealer_Infest::IsMotionController  (line 822, @0x0000000002b92d30, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Infest::IsMotionController(CDOTA_Modifier_Life_Stealer_Infest *const this)
{
  return 1;
}


// CDOTA_Modifier_Life_Stealer_Infest::OnCreated  (line 835, @0x0000000002b49ff0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameMode, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsControllableByPlayer, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyVerticalMotionController, KeyValues::GetPtr, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::SetAbilityHidden, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated, CDOTA_Buff::GetCaster, CBaseEntity::AddEffects (14 total)
// strings: "life_stealer_assimilate", "life_stealer_assimilate_eject", "life_stealer_control", "life_stealer_open_wounds", "life_stealer_consume"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Life_Stealer_Infest::OnCreated(
        CDOTA_Modifier_Life_Stealer_Infest *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTALocomotor *v7; // rax
  _QWORD *Ptr; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int16 v11; // cx
  CConcreteEntityList *v12; // rsi
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v26; // r14
  unsigned __int64 v27; // r12
  HSCRIPT m_hScope; // rdx
  bool v29; // si
  CDOTA_BaseNPC *Caster; // rax
  int Team; // r15d
  CDOTA_BaseNPC *v32; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( !CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0)
    || (v6 = CDOTA_Buff::GetParent(this),
        v7 = (*(v6->_vptr_IHandleEntity + 376))(v6),
        !CDOTALocomotor::ApplyVerticalMotionController(v7, &this->CVerticalMotionController, 0)) )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return;
  }
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v9 = Ptr[1]) != 0 )
  {
    v10 = (*(v9 + 16) >> 15) - (*(v9 + 48) & 1);
    v11 = 0x7FFF;
    if ( *(v9 + 16) != -1 )
      v11 = *(v9 + 16) & 0x7FFF;
    v12 = CEntityHandle::gm_pEntityList;
    LOWORD(this->m_hTarget.m_Index) = v11 | this->m_hTarget.m_Index & 0x8000;
    v13 = (v10 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    this->m_hTarget.m_Index = v13;
    if ( v13 + 2 > 1 )
    {
      v14 = v12->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_hTarget.m_Index & 0x1FF];
        if ( v15 != 0 && v15->m_EHandle.m_Index == v13 )
        {
          m_pInstance = v15->m_pInstance;
          if ( v15->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            goto LABEL_13;
        }
      }
    }
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  m_pInstance = 0;
LABEL_13:
  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value || *&g_pGameRules[6].m_szQuestName[68] == 18 )
  {
    v32 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SwapAbilities(v32, "life_stealer_infest", "life_stealer_consume", 0, 1);
  }
  else
  {
    v17 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SetAbilityHidden(v17, "life_stealer_rage", 1);
    v18 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SetAbilityHidden(v18, "life_stealer_feast", 1);
    v19 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SetAbilityHidden(v19, "life_stealer_assimilate", 1);
    v20 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SetAbilityHidden(v20, "life_stealer_assimilate_eject", 1);
    v21 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SetAbilityHidden(v21, "life_stealer_control", 0);
    v22 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SwapAbilities(v22, "life_stealer_open_wounds", "life_stealer_control", 0, 1);
    v23 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SwapAbilities(v23, "life_stealer_infest", "life_stealer_consume", 0, 1);
    v24 = CDOTA_Buff::GetParent(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v24, "life_stealer_control", 0);
    v26 = AbilityByName;
    if ( AbilityByName != 0 )
    {
      if ( AbilityByName->m_iLevel.m_Value == 0 )
        CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
      v27 = 0;
      while ( 1 )
      {
        m_hScope = m_pInstance[61].m_hPrivateScope.m_hScope;
        if ( _bittest64(&m_hScope, v27) )
        {
          Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v27);
          if ( Team != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
            break;
        }
        v27 = (v27 + 1);
        if ( v27 == 24 )
        {
          v29 = 0;
          if ( m_pInstance[61].m_hPrivateScope.m_hScope != 0 )
            goto LABEL_23;
          break;
        }
      }
      v29 = 1;
LABEL_23:
      CDOTABaseAbility::SetActivated(v26, v29);
    }
  }
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::AddEffects(Caster, 32);
}


// CDOTA_Modifier_Life_Stealer_Infest::OnDestroy  (line 903, @0x0000000002b65aa0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetGameMode, GetInstance, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, MarkPVSInformationDirty, RemoveEffects, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::SetAbilityHidden, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::SwapAbilities, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_Buff::GetCaster, CBaseEntity::DispatchUpdateTransmitState, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::StartGesture (27 total)
// strings: "life_stealer_open_wounds", "modifier_life_stealer_assimilate_effect", "life_stealer_assimilate_eject", "life_stealer_assimilate", "life_stealer_consume", "modifier_life_stealer_infest_effect" (9 total)
// globals: INVALID_ITEM_DEF_INDEX, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Life_Stealer_Infest::OnDestroy(CDOTA_Modifier_Life_Stealer_Infest *const this)
{
  CDOTA_BaseNPC *v2; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTALocomotor *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTALocomotor *v12; // rax
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rbx
  CDOTA_BaseNPC *v16; // rax
  CDOTABaseAbility *v17; // rax
  CDOTABaseAbility *v18; // rax
  __m128i v19; // xmm4
  float v20; // r13d
  CDOTA_BaseNPC *v21; // r12
  CDOTA_BaseNPC *v22; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v24; // rax
  __int64 v25; // r12
  int v26; // ebx
  __int16 v27; // cx
  CEntityIdentity *v28; // rdx
  CDOTA_BaseNPC *v29; // rdi
  CEntityIdentity *v30; // rdx
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC_Hero *v32; // rdi
  CHandle<CBaseEntity> *v33; // rdx
  uint32 m_Index; // eax
  CDOTABaseAbility *Ability; // r12
  int Health; // r13d
  CDOTA_BaseNPC *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTAPlayer *v39; // rax
  CDOTA_BaseNPC *v40; // r12
  CDOTABaseAbility *v41; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v44; // rax
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  CDOTA_BaseNPC *v49; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTABaseAbility *v51; // r15
  CDOTA_BaseNPC *v52; // rax
  float flDamage; // [rsp+2Ch] [rbp-64h]
  int radius; // [rsp+38h] [rbp-58h] BYREF
  int damage; // [rsp+3Ch] [rbp-54h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-50h] BYREF

  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value || *&g_pGameRules[6].m_szQuestName[68] == 18 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SwapAbilities(Parent, "life_stealer_infest", "life_stealer_consume", 1, 0);
  }
  else
  {
    v2 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SetAbilityHidden(v2, "life_stealer_rage", 0);
    v3 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SetAbilityHidden(v3, "life_stealer_feast", 0);
    v4 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SetAbilityHidden(v4, "life_stealer_open_wounds", 0);
    v5 = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::HasScepter(v5) )
    {
      v6 = CDOTA_Buff::GetParent(this);
      if ( CDOTA_BaseNPC::FindModifierByName(v6, "modifier_life_stealer_assimilate_effect", 0) != 0 )
      {
        v7 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::SwapAbilities(v7, "life_stealer_assimilate", "life_stealer_assimilate_eject", 0, 1);
      }
      else
      {
        v49 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::SwapAbilities(v49, "life_stealer_assimilate", "life_stealer_assimilate_eject", 1, 0);
      }
    }
    else
    {
      v45 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::SetAbilityHidden(v45, "life_stealer_assimilate", 1);
      v46 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::SetAbilityHidden(v46, "life_stealer_assimilate_eject", 1);
    }
    v47 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SwapAbilities(v47, "life_stealer_control", "life_stealer_open_wounds", 0, 1);
    v48 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SwapAbilities(v48, "life_stealer_consume", "life_stealer_infest", 0, 1);
  }
  v9 = CDOTA_Buff::GetParent(this);
  v10 = (*(v9->_vptr_IHandleEntity + 376))(v9);
  CDOTALocomotor::RemoveHorizontalMotionController(v10, &this->CHorizontalMotionController);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = (*(v11->_vptr_IHandleEntity + 376))(v11);
  CDOTALocomotor::RemoveVerticalMotionController(v12, &this->CVerticalMotionController);
  Caster = CDOTA_Buff::GetCaster(this);
  (*(Caster->_vptr_IHandleEntity + 188))(Caster, Caster->m_fEffects.m_Value & 0xFFFFFFDF);
  Caster->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Caster);
  v14 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  v15 = v14;
  if ( v14 != 0 && v14->m_bIsDOTANPC )
  {
    CDOTA_BaseNPC::RemoveModifierByName(v14, "modifier_life_stealer_infest_effect");
    if ( (*(v15->_vptr_IHandleEntity + 408))(v15) != 0
      && (CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value != v15->m_iTeamNum.m_Value && (v15->m_iUnitType & 1) == 0
       || CDOTA_BaseNPC::FindModifierByName(v15, "modifier_life_stealer_infest_creep", 0) != 0) )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      Health = CBaseEntity::GetHealth(v15);
      v37 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::Heal(v37, Health, Ability, 0, 1);
      LODWORD(Ability) = CBaseEntity::GetHealth(v15);
      v38 = CDOTA_Buff::GetCaster(this);
      v39 = (*(v38->_vptr_IHandleEntity + 413))(v38);
      SendOverheadEventMessage(v39, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v15, Ability, 0);
      v40 = CDOTA_Buff::GetCaster(this);
      v41 = CDOTA_Buff::GetAbility(this);
      CDOTA_BaseNPC::Kill(v15, v41, v40, 0.0, 0);
    }
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_life_stealer/life_stealer_infest_emerge_bloody.vpcf",
                 1,
                 v15,
                 0,
                 0);
    v44 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v44, Particle);
  }
  v16 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(v16, 1577, 0.0, 0.1, 9, 0, 1.0);
  v17 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v17, &radius, "radius");
  v18 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v18, &damage, "damage");
  *v19.m128i_i32 = radius;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
  v21 = CDOTA_Buff::GetCaster(this);
  v22 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
  v24 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v24->m_iTeamNum.m_Value, AbsOrigin, v21, v20, &hEntities, 2, 3, 0, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v25 = 0;
    v26 = 0;
    do
    {
      v33 = &hEntities.m_Memory.m_pMemory[v25];
      m_Index = hEntities.m_Memory.m_pMemory[v25].m_Index;
      if ( m_Index + 2 > 1
        && (v27 = v33->m_Index,
            (v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v33->m_Index) >> 9) & 0x3F]) != 0) )
      {
        v29 = 0;
        v30 = &v28[v27 & 0x1FF];
        if ( v30 != 0 && m_Index == v30->m_EHandle.m_Index )
        {
          m_pInstance = v30->m_pInstance;
          if ( v30->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            flDamage = damage;
            v51 = CDOTA_Buff::GetAbility(this);
            v52 = CDOTA_Buff::GetCaster(this);
            ApplyDamage(v52, m_pInstance, v51, flDamage, 2, 0);
            v29 = m_pInstance;
          }
        }
      }
      else
      {
        v29 = 0;
      }
      if ( (v29->m_iUnitType & 1) != 0 && !v29->m_bIsIllusion.m_Value && (*(v29->_vptr_IHandleEntity + 408))(v29) == 0 )
      {
        v31 = CDOTA_Buff::GetCaster(this);
        if ( v31 != 0 && (v31->m_iUnitType & 1) != 0 )
          v32 = v31;
        else
          v32 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v32,
          0,
          kill_eater_event_t::kKillEaterEvent_Lifestealer_InfestKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      ++v26;
      ++v25;
    }
    while ( hEntities.m_Size > v26 );
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Modifier_Life_Stealer_Infest::CheckState  (line 1022, @0x0000000002b35fd0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Life_Stealer_Infest::CheckState(
        CDOTA_Modifier_Life_Stealer_Infest *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x82884387uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7D77BC78LL;
}


// CDOTA_Modifier_Life_Stealer_Infest::DeclareFunctions  (line 1041, @0x0000000002b36000, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Life_Stealer_Infest::GetModifierAbilityLayout(CModifierParams const&)
void __fastcall CDOTA_Modifier_Life_Stealer_Infest::DeclareFunctions(CDOTA_Modifier_Life_Stealer_Infest *const this)
{
  this->m_Functions[164].__pfn = CDOTA_Modifier_Life_Stealer_Infest::GetModifierAbilityLayout;
  this->m_Functions[164].__delta = 0;
}


// CDOTA_Modifier_Life_Stealer_Infest::GetModifierAbilityLayout  (line 1050, @0x0000000002b36020, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Infest::GetModifierAbilityLayout(
        CDOTA_Modifier_Life_Stealer_Infest *const this,
        const CModifierParams *const params)
{
  return 0x40A0000000000001uLL;
}


// CDOTA_Modifier_Life_Stealer_Infest::UpdateHorizontalMotion  (line 1058, @0x0000000002b47880, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->, operator==<CBaseEntity>
// calls: CDOTA_Buff::Destroy, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Life_Stealer_Infest::UpdateHorizontalMotion(
        CDOTA_Modifier_Life_Stealer_Infest *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  uint32 v9; // ecx
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  const Vector *AbsOrigin; // rax

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v8 = &v7[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v8->m_EHandle.m_Index
    && v8->m_pInstance != 0
    && (*(v8->m_pInstance->_vptr_IHandleEntity + 139))(v8->m_pInstance, a3, dt) != 0 )
  {
    v9 = this->m_hTarget.m_Index;
    m_pInstance = 0;
    if ( v9 + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[this->m_hTarget.m_Index & 0x1FF];
        if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
          m_pInstance = v12->m_pInstance;
      }
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    CBaseEntity::SetAbsOrigin(me, AbsOrigin);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Life_Stealer_Infest::UpdateVerticalMotion  (line 1073, @0x0000000002b47780, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->, operator==<CBaseEntity>
// calls: CDOTA_Buff::Destroy, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Life_Stealer_Infest::UpdateVerticalMotion(
        CDOTA_Modifier_Life_Stealer_Infest *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  uint32 v9; // ecx
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  const Vector *AbsOrigin; // rax

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v8 = &v7[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v8->m_EHandle.m_Index
    && v8->m_pInstance != 0
    && (*(v8->m_pInstance->_vptr_IHandleEntity + 139))(v8->m_pInstance, a3, dt) != 0 )
  {
    v9 = this->m_hTarget.m_Index;
    m_pInstance = 0;
    if ( v9 + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[this->m_hTarget.m_Index & 0x1FF];
        if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
          m_pInstance = v12->m_pInstance;
      }
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    CBaseEntity::SetAbsOrigin(me, AbsOrigin);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Life_Stealer_Infest_Effect::~CDOTA_Modifier_Life_Stealer_Infest_Effect  (line 1090, @0x0000000002b99880, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Effect::~CDOTA_Modifier_Life_Stealer_Infest_Effect(
        CDOTA_Modifier_Life_Stealer_Infest_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_45199D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Life_Stealer_Infest_Effect::~CDOTA_Modifier_Life_Stealer_Infest_Effect  (line 1090, @0x0000000002b998a0, libserver.so)  // inlines: ~CDOTA_Modifier_Life_Stealer_Infest_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Effect::~CDOTA_Modifier_Life_Stealer_Infest_Effect(
        CDOTA_Modifier_Life_Stealer_Infest_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_45199D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Life_Stealer_Infest_Effect::IsPurgable  (line 1097, @0x0000000002b92d40, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Infest_Effect::IsPurgable(
        CDOTA_Modifier_Life_Stealer_Infest_Effect *const this)
{
  return 0;
}


// CDOTA_Modifier_Life_Stealer_Infest_Effect::IsHidden  (line 1098, @0x0000000002b92d50, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Infest_Effect::IsHidden(
        CDOTA_Modifier_Life_Stealer_Infest_Effect *const this)
{
  return 1;
}


// CDOTA_Modifier_Life_Stealer_Infest_Effect::OnCreated  (line 1112, @0x0000000002b6c9f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_increase_pct"
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Effect::OnCreated(
        CDOTA_Modifier_Life_Stealer_Infest_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_increase_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_increase_pct", -1, 0);
  else
    this->damage_increase_pct = 0;
}


// CDOTA_Modifier_Life_Stealer_Infest_Effect::DeclareFunctions  (line 1142, @0x0000000002b36040, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Life_Stealer_Infest_Effect::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Effect::DeclareFunctions(
        CDOTA_Modifier_Life_Stealer_Infest_Effect *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_Life_Stealer_Infest_Effect::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Life_Stealer_Infest_Effect::OnTakeDamage  (line 1149, @0x0000000002b36060, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Infest_Effect::OnTakeDamage(
        CDOTA_Modifier_Life_Stealer_Infest_Effect *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Life_Stealer_Infest_Effect::OnDestroy  (line 1168, @0x0000000002b36070, libserver.so)
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Effect::OnDestroy(
        CDOTA_Modifier_Life_Stealer_Infest_Effect *const this)
{
  ;
}


// CDOTA_Ability_Life_Stealer_Consume::~CDOTA_Ability_Life_Stealer_Consume  (line 1188, @0x0000000002ba1dc0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_Consume::~CDOTA_Ability_Life_Stealer_Consume(
        CDOTA_Ability_Life_Stealer_Consume *const this)
{
  this->_vptr_IHandleEntity = &off_4519D30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_Consume::~CDOTA_Ability_Life_Stealer_Consume  (line 1188, @0x0000000002ba1de0, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_Consume
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Consume::~CDOTA_Ability_Life_Stealer_Consume(
        CDOTA_Ability_Life_Stealer_Consume *const this)
{
  this->_vptr_IHandleEntity = &off_4519D30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Consume::Schema_DynamicBinding  (line 1190, @0x0000000002b92d60, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Consume::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Consume::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Consume *const this)
{
  return CDOTA_Ability_Life_Stealer_Consume::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1190, @0x0000000002b92d70, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::DestructInstance  (line 1190, @0x0000000002b92d80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_Consume>
void __fastcall CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::FreeInstance  (line 1190, @0x0000000002b92da0, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::CanAllocate  (line 1190, @0x0000000002b92dc0, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1190, @0x0000000002b92dd0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Consume::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Consume::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::AllocateInstance  (line 1190, @0x0000000002b989a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::ConstructInstance  (line 1190, @0x0000000002b9da00, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_Consume, Construct<CDOTA_Ability_Life_Stealer_Consume>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4519D30;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1190, @0x0000000002bab920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1190, @0x0000000002bab940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal  (line 1190, @0x0000000002bd05f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "life_stealer_consume", "CDOTA_Ability_Life_Stealer_Consume"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass, CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClassInfo, CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass) != 0 )
  {
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_pClassInfo = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_flags = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_pInputs = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_nInputCount = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_pOutputs = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_nOutputCount = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_pGameClass = 0;
    CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass._vptr_CEntityClass = off_4519CB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_Consume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_ConsumeClass != 0 )
    return &CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClassInfo,
      "CDOTA_Ability_Life_Stealer_Consume",
      "life_stealer_consume",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClassInfo);
  }
  CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_pClassInfo = &CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClassInfo;
  CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_ConsumeClass = &CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass;
  CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass;
  CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_ConsumeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_Consume::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ConsumeClass;
}


// CDOTA_Ability_Life_Stealer_Consume::ProcsMagicStick  (line 1195, @0x0000000002b92de0, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Consume::ProcsMagicStick(CDOTA_Ability_Life_Stealer_Consume *const this)
{
  return 0;
}


// CDOTA_Ability_Life_Stealer_Consume::GetAssociatedPrimaryAbilities  (line 1197, @0x0000000002b92df0, libserver.so)
const char *__fastcall CDOTA_Ability_Life_Stealer_Consume::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Life_Stealer_Consume *const this)
{
  return "life_stealer_infest";
}


// CDOTA_Ability_Life_Stealer_Consume::IsHiddenWhenStolen  (line 1198, @0x0000000002b92e00, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Consume::IsHiddenWhenStolen(CDOTA_Ability_Life_Stealer_Consume *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Consume::OnSpellStart  (line 1207, @0x0000000002b46f10, libserver.so)  // inlines: CEntityHandle, CHandle, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetInfestedUnit, GetInstance, GetUnitName, IndexToIdentity, LookupEntity, String, ToCStr, ToDOTABaseNPC, _V_strstr, operator CBaseEntity*, operator CEntityInstance*, strstr
// calls: CDOTABaseAbility::GetCaster, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, __dynamic_cast, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, strstr
// strings: "modifier_life_stealer_infest", "Hero_LifeStealer.Consume", "modifier_life_stealer_infest_effect", "Hero_LifeStealer.Consume.Mech"
// globals: `typeinfo for'CDOTA_Modifier_Life_Stealer_Infest, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Life_Stealer_Consume::OnSpellStart(CDOTA_Ability_Life_Stealer_Consume *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CModifieractoryDictionary *v3; // rax
  const char *v4; // r12
  IModifierFactory *Factory; // rax
  CDOTA_Buff *v6; // rax
  _DWORD *v7; // rax
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v13; // rax
  CEntityInstance *m_pInstance; // rax
  const char *m_pAsString; // rdi

  if ( (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 1) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster == 0 )
      return;
  }
  else
  {
    v11 = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v11, "modifier_life_stealer_infest_effect", 0);
    if ( ModifierByName == 0 )
      return;
    v13 = CDOTA_Buff::GetCaster(ModifierByName);
    Caster = v13;
    if ( v13 == 0 || !v13->m_bIsDOTANPC )
      return;
  }
  v3 = ModifierFactoryDictionary();
  v4 = "Hero_LifeStealer.Consume";
  Factory = CModifieractoryDictionary::FindFactory(v3, "modifier_life_stealer_infest");
  v6 = CDOTA_ModifierManager::FindModifierByName(
         &Caster->m_ModifierManager,
         Factory,
         "modifier_life_stealer_infest",
         Caster);
  if ( v6 != 0 )
  {
    v7 = __dynamic_cast(v6, &`typeinfo for'CDOTA_Buff, &`typeinfo for'CDOTA_Modifier_Life_Stealer_Infest, 0);
    if ( v7 != 0 )
    {
      v8 = v7[753];
      if ( (v8 + 2) > 1
        && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) != 0
        && (v10 = &v9[v8 & 0x1FF]) != 0
        && v8 == v10->m_EHandle.m_Index
        && (m_pInstance = v10->m_pInstance, v10->m_pInstance != 0)
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString) != 0
        && strstr(m_pAsString, "_siege") != 0 )
      {
        v4 = "Hero_LifeStealer.Consume.Mech";
      }
      else
      {
        v4 = "Hero_LifeStealer.Consume";
      }
    }
  }
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_life_stealer_infest");
  CDOTA_BaseNPC::UnitEmitSound(Caster, v4, 0.0, 0, 0);
}


// CDOTA_Ability_Life_Stealer_Consume::OnUpgrade  (line 1243, @0x0000000002b37e80, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Ability_Life_Stealer_Consume::OnUpgrade(CDOTA_Ability_Life_Stealer_Consume *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "life_stealer_infest", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Life_Stealer_Consume::GetAbilityDamageToTargetOverInterval  (line 1257, @0x0000000002b6ac70, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Life_Stealer_Consume::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Life_Stealer_Consume *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // ebx

  if ( eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "life_stealer_infest", 0);
  if ( AbilityByName == 0 )
    return 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "damage", -1, 0);
  return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
}


// CDOTA_Ability_Life_Stealer_Control::~CDOTA_Ability_Life_Stealer_Control  (line 1275, @0x0000000002ba1e10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_Control::~CDOTA_Ability_Life_Stealer_Control(
        CDOTA_Ability_Life_Stealer_Control *const this)
{
  this->_vptr_IHandleEntity = &off_451A830;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_Control::~CDOTA_Ability_Life_Stealer_Control  (line 1275, @0x0000000002ba1e30, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_Control
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Control::~CDOTA_Ability_Life_Stealer_Control(
        CDOTA_Ability_Life_Stealer_Control *const this)
{
  this->_vptr_IHandleEntity = &off_451A830;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Control::Schema_DynamicBinding  (line 1277, @0x0000000002b92e10, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Control::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Control::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Control *const this)
{
  return CDOTA_Ability_Life_Stealer_Control::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1277, @0x0000000002b92e20, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::DestructInstance  (line 1277, @0x0000000002b92e30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_Control>
void __fastcall CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::FreeInstance  (line 1277, @0x0000000002b92e50, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::CanAllocate  (line 1277, @0x0000000002b92e70, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1277, @0x0000000002b92e80, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Control::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Control::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::AllocateInstance  (line 1277, @0x0000000002b989e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::ConstructInstance  (line 1277, @0x0000000002b9da30, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_Control, Construct<CDOTA_Ability_Life_Stealer_Control>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_451A830;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1277, @0x0000000002bab970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1277, @0x0000000002bab990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal  (line 1277, @0x0000000002bcc4a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "life_stealer_control", "CDOTA_Ability_Life_Stealer_Control"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass, CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass, __dso_handle, CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_Control::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClassInfo, CDOTA_Ability_Life_Stealer_Control::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass);
    CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass._vptr_CEntityClass = off_451A7B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_Control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_ControlClass != 0 )
    return &CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Control::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Control::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_Control::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClassInfo,
      "CDOTA_Ability_Life_Stealer_Control",
      "life_stealer_control",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Control::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClassInfo);
  }
  CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass.m_pClassInfo = &CDOTA_Ability_Life_Stealer_Control::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClassInfo;
  CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_Control::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_ControlClass = &CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass;
  CDOTA_Ability_Life_Stealer_Control::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass;
  CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_ControlClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_Control::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_ControlClass;
}


// CDOTA_Ability_Life_Stealer_Control::IsStealable  (line 1282, @0x0000000002b92e90, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Control::IsStealable(CDOTA_Ability_Life_Stealer_Control *const this)
{
  return 0;
}


// CDOTA_Ability_Life_Stealer_Control::IsHiddenWhenStolen  (line 1283, @0x0000000002b92ea0, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Control::IsHiddenWhenStolen(CDOTA_Ability_Life_Stealer_Control *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Control::OnSpellStart  (line 1291, @0x0000000002b443a0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInfestedUnit, GetInstance, IndexToIdentity, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_life_stealer_infest", "modifier_life_stealer_infest_creep"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Life_Stealer_Control::OnSpellStart(CDOTA_Ability_Life_Stealer_Control *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *v3; // rbx
  CDOTA_Buff *ModifierByName; // rax
  int m_pFactory_high; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r13
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_life_stealer_infest", 0);
    if ( ModifierByName != 0 )
    {
      m_pFactory_high = HIDWORD(ModifierByName[1].m_pFactory);
      if ( (m_pFactory_high + 2) > 1 )
      {
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_pFactory_high >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[m_pFactory_high & 0x1FF];
          if ( v7 != 0 && m_pFactory_high == v7->m_EHandle.m_Index )
          {
            m_pInstance = v7->m_pInstance;
            if ( v7->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && SLOBYTE(m_pInstance[43].m_iszPrivateVScripts.u.m_Id) < 0 )
            {
              KeyValues::KeyValues(&kv, "modifier_life_stealer_infest_creep");
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v3, this, "modifier_life_stealer_infest_creep", &kv, 0);
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::~CDOTA_Modifier_Life_Stealer_Infest_Creep  (line 1319, @0x0000000002b99830, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::~CDOTA_Modifier_Life_Stealer_Infest_Creep(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this)
{
  this->_vptr_CDOTA_Buff = &off_451B2F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::~CDOTA_Modifier_Life_Stealer_Infest_Creep  (line 1319, @0x0000000002b99850, libserver.so)  // inlines: ~CDOTA_Modifier_Life_Stealer_Infest_Creep
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::~CDOTA_Modifier_Life_Stealer_Infest_Creep(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this)
{
  this->_vptr_CDOTA_Buff = &off_451B2F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::IsPurgable  (line 1326, @0x0000000002b92eb0, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::IsPurgable(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this)
{
  return 0;
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::IsHidden  (line 1327, @0x0000000002b92ec0, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::IsHidden(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this)
{
  return 1;
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::OnCreated  (line 1343, @0x0000000002b5e3e0, libserver.so)  // inlines: GetMaxMana, GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::Interrupt, CDOTA_BaseNPC::ResetPlayerControls, CDOTA_BaseNPC::SetControllableByPlayer, CDOTA_BaseNPC::SetMana, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_BaseNPC::Script_AddAbility, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility, CFmtStrN<256, false>::CFmtStrN (13 total)
// strings: "life_stealer_consume", "life_stealer_empty_%d"
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::OnCreated(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this,
        KeyValues *pKV)
{
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  int v7; // r12d
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // r12
  void (__fastcall *v10)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // r13
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  void (__fastcall *v13)(CDOTA_BaseNPC *, _QWORD); // r13
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rdi
  int v16; // r12d
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTABaseAbility *v23; // rax
  CDOTABaseAbility *v24; // rbx
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v28; // r12
  void (__fastcall *v29)(CDOTA_BaseNPC *, _QWORD); // r13
  CDOTA_BaseNPC *Caster; // rax
  float v31; // [rsp+Ch] [rbp-144h]
  CFmtStr strAbilityName; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v33; // [rsp+128h] [rbp-28h]

  v33 = __readfsqword(0x28u);
  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  this->m_bChangedTeams = m_Value != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Interrupt(Parent);
  if ( CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value == 4 )
  {
    v28 = CDOTA_Buff::GetParent(this);
    v29 = *(v28->_vptr_IHandleEntity + 70);
    Caster = CDOTA_Buff::GetCaster(this);
    v29(v28, Caster->m_iTeamNum.m_Value);
    this->m_bChangedTeams = 0;
  }
  v5 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ResetPlayerControls(v5);
  v6 = CDOTA_Buff::GetCaster(this);
  v7 = (*(v6->_vptr_IHandleEntity + 414))(v6);
  v8 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::SetControllableByPlayer(v8, v7, 0);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = *(v9->_vptr_IHandleEntity + 40);
  v11 = CDOTA_Buff::GetCaster(this);
  v10(v9, v11);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = *(v12->_vptr_IHandleEntity + 70);
  v14 = CDOTA_Buff::GetCaster(this);
  v15 = v12;
  v16 = 1;
  v13(v15, v14->m_iTeamNum.m_Value);
  v17 = CDOTA_Buff::GetParent(this);
  (*(v17->_vptr_IHandleEntity + 389))(v17);
  v31 = CDOTA_Buff::GetParent(this)->m_flMaxMana.m_Value;
  v18 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::SetMana(v18, v31, v19);
  do
  {
    v20 = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::GetAbilityByIndex(v20, v16 - 1) == 0 )
    {
      CFmtStrN<256,false>::CFmtStrN(&strAbilityName, "life_stealer_empty_%d", v16);
      v25 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::Script_AddAbility(v25, strAbilityName.m_szBuf);
      v26 = CDOTA_Buff::GetParent(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v26, strAbilityName.m_szBuf, 0);
      CDOTABaseAbility::SetHidden(AbilityByName, 0);
    }
    ++v16;
  }
  while ( v16 != 4 );
  v21 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Script_AddAbility(v21, "life_stealer_consume");
  v22 = CDOTA_Buff::GetParent(this);
  v23 = CDOTA_BaseNPC::FindAbilityByName(v22, "life_stealer_consume", 0);
  v24 = v23;
  if ( v23 != 0 )
  {
    CDOTABaseAbility::SetHidden(v23, 0);
    CDOTABaseAbility::UpgradeAbility(v24, 0);
  }
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::OnDestroy  (line 1398, @0x0000000002b36080, libserver.so)
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::OnDestroy(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this)
{
  ;
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::CheckState  (line 1415, @0x0000000002b36090, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::CheckState(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 m_nDisabledStateMask; // rcx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x400000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFBFFFFFLL;
  if ( this->m_bChangedTeams )
  {
    buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x100400000LL;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFEFFBFFFFFLL;
  }
  else
  {
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFEFFBFFFFFLL | 0x100000000LL;
    buffState->m_nEnabledStateMask = m_nEnabledStateMask & 0xFFFFFFFEFFBFFFFFLL | 0x400000;
  }
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::DeclareFunctions  (line 1432, @0x0000000002b36120, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Life_Stealer_Infest_Creep::GetModifierMoveSpeedOverride(CModifierParams const&), CDOTA_Modifier_Life_Stealer_Infest_Creep::GetModifierAbilityLayout(CModifierParams const&), CDOTA_Modifier_Life_Stealer_Infest_Creep::OnDominated(CModifierParams const&)
void __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::DeclareFunctions(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this)
{
  this->m_Functions[12].__pfn = CDOTA_Modifier_Life_Stealer_Infest_Creep::GetModifierMoveSpeedOverride;
  this->m_Functions[12].__delta = 0;
  this->m_Functions[164].__delta = 0;
  this->m_Functions[164].__pfn = CDOTA_Modifier_Life_Stealer_Infest_Creep::GetModifierAbilityLayout;
  this->m_Functions[165].__pfn = CDOTA_Modifier_Life_Stealer_Infest_Creep::OnDominated;
  this->m_Functions[165].__delta = 0;
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::GetModifierMoveSpeedOverride  (line 1442, @0x0000000002b37740, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::GetModifierMoveSpeedOverride(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __int64 v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  CDOTA_BaseNPC *v9; // rax
  __m128i v10; // xmm0

  Parent = CDOTA_Buff::GetParent(this);
  v4 = (*(Parent->_vptr_IHandleEntity + 413))(Parent);
  Caster = CDOTA_Buff::GetCaster(this);
  v6 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
  v7 = 0xBF80000000000001LL;
  if ( v4 == v6 )
  {
    v9 = CDOTA_Buff::GetCaster(this);
    *v10.m128i_i64 = (*(v9->_vptr_IHandleEntity + 386))(v9);
    return ((_mm_cvtsi128_si32(v10) << 32) | 1);
  }
  return v7;
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::GetModifierAbilityLayout  (line 1452, @0x0000000002b36180, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::GetModifierAbilityLayout(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this,
        const CModifierParams *const params)
{
  return 0x4080000000000001uLL;
}


// CDOTA_Modifier_Life_Stealer_Infest_Creep::OnDominated  (line 1459, @0x0000000002b470b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::Script_RemoveAbility
// strings: "life_stealer_consume"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Infest_Creep::OnDominated(
        CDOTA_Modifier_Life_Stealer_Infest_Creep *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v8; // ecx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CDOTA_BaseNPC *v11; // rdi

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
          v8 = params->hunit.m_Index;
          if ( v8 + 2 <= 1
            || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
            || (v10 = &v9[params->hunit.m_Index & 0x1FF]) == 0
            || v8 != v10->m_EHandle.m_Index
            || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
            || !v11->m_bIsDOTANPC )
          {
            v11 = 0;
          }
          CDOTA_BaseNPC::Script_RemoveAbility(v11, "life_stealer_consume");
        }
      }
    }
  }
  return 0xBF80000000000001LL;
}


// CDOTA_Ability_Life_Stealer_Assimilate::~CDOTA_Ability_Life_Stealer_Assimilate  (line 1474, @0x0000000002ba1e60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_Assimilate::~CDOTA_Ability_Life_Stealer_Assimilate(
        CDOTA_Ability_Life_Stealer_Assimilate *const this)
{
  this->_vptr_IHandleEntity = &off_451B650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_Assimilate::~CDOTA_Ability_Life_Stealer_Assimilate  (line 1474, @0x0000000002ba1e80, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_Assimilate
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Assimilate::~CDOTA_Ability_Life_Stealer_Assimilate(
        CDOTA_Ability_Life_Stealer_Assimilate *const this)
{
  this->_vptr_IHandleEntity = &off_451B650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Assimilate::Schema_DynamicBinding  (line 1476, @0x0000000002b92ed0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Assimilate::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Assimilate::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Assimilate *const this)
{
  return CDOTA_Ability_Life_Stealer_Assimilate::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1476, @0x0000000002b92ee0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::DestructInstance  (line 1476, @0x0000000002b92ef0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_Assimilate>
void __fastcall CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::FreeInstance  (line 1476, @0x0000000002b92f10, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::CanAllocate  (line 1476, @0x0000000002b92f30, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1476, @0x0000000002b92f40, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_Assimilate::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_Assimilate::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::AllocateInstance  (line 1476, @0x0000000002b98a20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::ConstructInstance  (line 1476, @0x0000000002b9da60, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_Assimilate, CEntityHandle, CHandle, Construct<CDOTA_Ability_Life_Stealer_Assimilate>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_451B650;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1476, @0x0000000002bab9c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1476, @0x0000000002bab9e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal  (line 1476, @0x0000000002bcfc00, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "life_stealer_assimilate", "CDOTA_Ability_Life_Stealer_Assimilate"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass, CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClassInfo, CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass) != 0 )
  {
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_pClassInfo = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_flags = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_pInputs = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_nInputCount = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_pOutputs = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_nOutputCount = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_pGameClass = 0;
    CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass._vptr_CEntityClass = off_451B5D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_Assimilate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_AssimilateClass != 0 )
    return &CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClassInfo,
      "CDOTA_Ability_Life_Stealer_Assimilate",
      "life_stealer_assimilate",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClassInfo);
  }
  CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_pClassInfo = &CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClassInfo;
  CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_AssimilateClass = &CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass;
  CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass;
  CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_AssimilateClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_Assimilate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateClass;
}


// CDOTA_Ability_Life_Stealer_Assimilate::ProcsMagicStick  (line 1482, @0x0000000002b92f50, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Assimilate::ProcsMagicStick(
        CDOTA_Ability_Life_Stealer_Assimilate *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_Assimilate::IsStealable  (line 1484, @0x0000000002b92f60, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_Assimilate::IsStealable(CDOTA_Ability_Life_Stealer_Assimilate *const this)
{
  return 0;
}


// CDOTA_Ability_Life_Stealer_Assimilate::GetGestureBasedActivity  (line 1489, @0x0000000002b92f70, libserver.so)
Activity __fastcall CDOTA_Ability_Life_Stealer_Assimilate::GetGestureBasedActivity(
        CDOTA_Ability_Life_Stealer_Assimilate *const this)
{
  return 1703;
}


// CDOTA_Ability_Life_Stealer_Assimilate::CastFilterResult  (line 1501, @0x0000000002b38ac0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Ability_Life_Stealer_Assimilate::CastFilterResult(
        CDOTA_Ability_Life_Stealer_Assimilate *const this,
        CDOTA_BaseNPC *pTarget)
{
  if ( CDOTABaseAbility::GetCaster(this) == pTarget || pTarget->m_bIsIllusion.m_Value )
    return 23;
  else
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
}


// CDOTA_Ability_Life_Stealer_Assimilate::GetCustomCastError  (line 1514, @0x0000000002b36c70, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_illusion", "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_Life_Stealer_Assimilate::GetCustomCastError(
        CDOTA_Ability_Life_Stealer_Assimilate *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax

  if ( CDOTABaseAbility::GetCaster(this) == pTarget )
    return "#dota_hud_error_cant_cast_on_self";
  result = "#dota_hud_error_cant_cast_on_illusion";
  if ( !pTarget->m_bIsIllusion.m_Value )
    return "";
  return result;
}


// CDOTA_Ability_Life_Stealer_Assimilate::OnSpellStart  (line 1525, @0x0000000002b4aff0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::Interrupt, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, Purge, CDOTA_ModifierManager::RemoveModifierByName, CDOTA_BaseNPC::SwapAbilities, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CBaseEntity::GetAbsAngles (31 total)
// strings: "modifier_life_stealer_assimilate", "modifier_dazzle_shallow_grave", "modifier_legion_commander_duel", "modifier_earth_spirit_rolling_boulder_caster", "modifier_life_stealer_assimilate_effect", "life_stealer_assimilate_eject" (10 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Life_Stealer_Assimilate::OnSpellStart(CDOTA_Ability_Life_Stealer_Assimilate *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *AbsOrigin; // r13
  vec_t v16; // xmm0_4
  vec_t v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v20; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v23; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v25; // r15
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rbx
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  unsigned __int8 m_Value; // r15
  CEntityInstance *m_pInstance; // rdi
  int nInfestCastParticleIndex; // [rsp+Ch] [rbp-1B4h]
  Vector vCastDir; // [rsp+10h] [rbp-1B0h] BYREF
  Vector CursorPosition; // [rsp+20h] [rbp-1A0h]
  KeyValues kv; // [rsp+30h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v38; // [rsp+188h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && CursorTarget != CDOTABaseAbility::GetCaster(this) )
  {
    m_Index = this->m_hLastAssimilation.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLastAssimilation.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hLastAssimilation.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_life_stealer_assimilate");
          }
        }
      }
    }
    CDOTA_BaseNPC::Interrupt(v3);
    KeyValues::KeyValues(&kv, "modifier_life_stealer_assimilate");
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_life_stealer_assimilate", &kv, 0);
    Purge(v3, this, 28);
    CDOTA_ModifierManager::RemoveModifierByName(&v3->m_ModifierManager, "modifier_dazzle_shallow_grave");
    CDOTA_ModifierManager::RemoveModifierByName(&v3->m_ModifierManager, "modifier_legion_commander_duel");
    CDOTA_ModifierManager::RemoveModifierByName(&v3->m_ModifierManager, "modifier_earth_spirit_rolling_boulder_caster");
    m_pEntity = v3->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hLastAssimilation.m_Index) = v10 | this->m_hLastAssimilation.m_Index & 0x8000;
      this->m_hLastAssimilation.m_Index = (v9 << 15) | this->m_hLastAssimilation.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hLastAssimilation.m_Index = -1;
    }
    v11 = CDOTABaseAbility::GetCaster(this);
    v12 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v12, v11, this, "modifier_life_stealer_assimilate_effect", &kv, 0);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v13, "life_stealer_assimilate", "life_stealer_assimilate_eject", 0, 1);
    v14 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    v16 = CursorPosition.y - AbsOrigin->y;
    v17 = CursorPosition.x - AbsOrigin->x;
    vCastDir.z = 0.0;
    vCastDir.y = v16;
    vCastDir.x = v17;
    if ( VectorNormalize(&vCastDir) < 0.0099999998 )
    {
      v18 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v18);
      AngleVectors(AbsAngles, &vCastDir, 0, 0);
    }
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    if ( (v3->m_iUnitType & 1) == 0
      || (m_Value = v3->m_iTeamNum.m_Value) == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      v20 = CDOTABaseAbility::GetCaster(this);
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v20);
      GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
      CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
    }
    v23 = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filter, v23);
    ParticleManager = GetParticleManager();
    nInfestCastParticleIndex = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/units/heroes/hero_life_stealer/life_stealer_infest_cast.vpcf",
                                 2,
                                 0,
                                 &filter,
                                 0);
    v25 = CBaseEntity::GetAbsOrigin(v3);
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v26, nInfestCastParticleIndex, 0, *&v25->x, v25->z);
    v27 = CDOTABaseAbility::GetCaster(this);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      v28,
      nInfestCastParticleIndex,
      1,
      v27,
      5,
      "attach_hitloc",
      vec3_invalid,
      1);
    v29 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v29, nInfestCastParticleIndex, 2, *&vCastDir.x, vCastDir.z);
    v30 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v30, nInfestCastParticleIndex);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_LifeStealer.Assimilate.Target", 0.0, 0, 0);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Life_Stealer_Assimilate::~CDOTA_Modifier_Life_Stealer_Assimilate  (line 1586, @0x0000000002b997b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::~CDOTA_Modifier_Life_Stealer_Assimilate(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this)
{
  this->_vptr_CDOTA_Buff = &off_451C110;
  this->_vptr_CHorizontalMotionController = &off_451C408;
  this->_vptr_CVerticalMotionController = &off_451C448;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Life_Stealer_Assimilate::~CDOTA_Modifier_Life_Stealer_Assimilate  (line 1586, @0x0000000002b997e0, libserver.so)  // inlines: ~CDOTA_Modifier_Life_Stealer_Assimilate
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::~CDOTA_Modifier_Life_Stealer_Assimilate(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this)
{
  this->_vptr_CDOTA_Buff = &off_451C110;
  this->_vptr_CHorizontalMotionController = &off_451C408;
  this->_vptr_CVerticalMotionController = &off_451C448;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Life_Stealer_Assimilate::GetPriority  (line 1601, @0x0000000002b92f80, libserver.so)
int __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::GetPriority(CDOTA_Modifier_Life_Stealer_Assimilate *const this)
{
  return 4;
}


// CDOTA_Modifier_Life_Stealer_Assimilate::CanBeManuallyRemoved  (line 1606, @0x0000000002b92f90, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::CanBeManuallyRemoved(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this)
{
  return 1;
}


// CDOTA_Modifier_Life_Stealer_Assimilate::IsPurgable  (line 1607, @0x0000000002b92fa0, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::IsPurgable(CDOTA_Modifier_Life_Stealer_Assimilate *const this)
{
  return 0;
}


// CDOTA_Modifier_Life_Stealer_Assimilate::IsHorizontalMotionValidToApply  (line 1611, @0x0000000002b92fb0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Life_Stealer_Assimilate::IsVerticalMotionValidToApply  (line 1612, @0x0000000002b92fe0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Life_Stealer_Assimilate::IsMotionController  (line 1614, @0x0000000002b93010, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::IsMotionController(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this)
{
  return 1;
}


// CDOTA_Modifier_Life_Stealer_Assimilate::OnCreated  (line 1631, @0x0000000002b7f620, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SetAbilityActive, CBaseEntity::AddEffects
// strings: "order_lock_duration", "life_stealer_assimilate_eject"
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::OnCreated(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float LevelSpecialValue; // xmm0_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTALocomotor *v9; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v11; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "order_lock_duration", -1, 0);
    this->order_lock_duration = LevelSpecialValue;
  }
  else
  {
    LevelSpecialValue = 0.0;
    this->order_lock_duration = 0.0;
  }
  v5 = 0.0;
  if ( g_pGameRules != 0 )
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fOrderLockDone = LevelSpecialValue + v5;
  Parent = CDOTA_Buff::GetParent(this);
  v7 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v7, &this->CHorizontalMotionController, 0)
    && (v8 = CDOTA_Buff::GetParent(this),
        v9 = (*(v8->_vptr_IHandleEntity + 376))(v8),
        CDOTALocomotor::ApplyVerticalMotionController(v9, &this->CVerticalMotionController, 0)) )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::SetAbilityActive(Caster, "life_stealer_assimilate_eject", 1);
    v11 = CDOTA_Buff::GetParent(this);
    CBaseEntity::AddEffects(v11, 32);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Life_Stealer_Assimilate::DeclareFunctions  (line 1654, @0x0000000002b361a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Life_Stealer_Assimilate::OnHealthGained(CModifierParams const&), CDOTA_Modifier_Life_Stealer_Assimilate::OnOrder(CModifierParams const&)
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::DeclareFunctions(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this)
{
  this->m_Functions[144].__pfn = CDOTA_Modifier_Life_Stealer_Assimilate::OnHealthGained;
  this->m_Functions[144].__delta = 0;
  this->m_Functions[125].__delta = 0;
  this->m_Functions[125].__pfn = CDOTA_Modifier_Life_Stealer_Assimilate::OnOrder;
}


// CDOTA_Modifier_Life_Stealer_Assimilate::OnHealthGained  (line 1662, @0x0000000002b44140, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::OnHealthGained(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v11; // rax
  float flAmount; // [rsp+Ch] [rbp-24h]

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      flAmount = params->fGain;
      v11 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::Heal(v11, flAmount, Ability, 0, 1);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Life_Stealer_Assimilate::OnOrder  (line 1678, @0x0000000002b444d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, OrderCancelsChannel, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::OnOrder(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  int nOrdertype; // eax

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
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && (OrderCancelsChannel(params->nOrdertype)
           || ((nOrdertype = params->nOrdertype) - 12) <= 3
           || nOrdertype == 18) )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Life_Stealer_Assimilate::OnDestroy  (line 1701, @0x0000000002b660c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, MarkPVSInformationDirty, Purge, RemoveEffects, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController, CBaseEntity::DispatchUpdateTransmitState, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::StartGesture, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CBaseEntity::GetAbsOrigin (21 total)
// strings: "particles/units/heroes/hero_life_stealer/life_stealer_infest_emerge_bloody.vpcf", "modifier_life_stealer_assimilate_effect", "life_stealer_assimilate_eject", "life_stealer_assimilate", "Hero_LifeStealer.Assimilate.Destroy"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::OnDestroy(CDOTA_Modifier_Life_Stealer_Assimilate *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rbx
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v12; // rax
  __m128i v13; // xmm4
  float v14; // r13d
  CDOTA_BaseNPC *v15; // r12
  CDOTA_BaseNPC *v16; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v18; // rax
  __int64 v19; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v21; // rdx
  uint32 m_Index; // eax
  __int16 v23; // cx
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTABaseAbility *v27; // r14
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  float flDamage; // [rsp+2Ch] [rbp-64h]
  int radius; // [rsp+38h] [rbp-58h] BYREF
  int damage; // [rsp+3Ch] [rbp-54h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-50h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  CDOTALocomotor::RemoveVerticalMotionController(v5, &this->CVerticalMotionController);
  v6 = CDOTA_Buff::GetParent(this);
  (*(v6->_vptr_IHandleEntity + 188))(v6, v6->m_fEffects.m_Value & 0xFFFFFFDF);
  v6->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(v6);
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_life_stealer/life_stealer_infest_emerge_bloody.vpcf",
                      1,
                      Caster,
                      0,
                      0);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, Caster);
  v10 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v10, 1704, 0.0, 0.1, 9, 0, 1.0);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &radius, "radius");
  v12 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v12, &damage, "damage");
  *v13.m128i_i32 = radius;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  v15 = CDOTA_Buff::GetCaster(this);
  v16 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
  v18 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v18->m_iTeamNum.m_Value, AbsOrigin, v15, v14, &hEntities, 2, 3, 0, 0, 0);
  v19 = 0;
  for ( i = 0; hEntities.m_Size > i; ++v19 )
  {
    while ( 1 )
    {
      v21 = &hEntities.m_Memory.m_pMemory[v19];
      m_Index = hEntities.m_Memory.m_pMemory[v19].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v23 = v21->m_Index;
        v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v21->m_Index) >> 9) & 0x3F];
        if ( v24 != 0 )
        {
          v25 = &v24[v23 & 0x1FF];
          if ( v25 != 0 && m_Index == v25->m_EHandle.m_Index )
          {
            m_pInstance = v25->m_pInstance;
            if ( v25->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v19;
      if ( hEntities.m_Size <= i )
        goto LABEL_11;
    }
    flDamage = damage;
    v27 = CDOTA_Buff::GetAbility(this);
    v28 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v28, m_pInstance, v27, flDamage, 2, 0);
    ++i;
  }
LABEL_11:
  v29 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v29, "modifier_life_stealer_assimilate_effect");
  v30 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v30, "life_stealer_assimilate", "life_stealer_assimilate_eject", 1, 0);
  v31 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v31, "Hero_LifeStealer.Assimilate.Destroy", 0.0, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
}


// CDOTA_Modifier_Life_Stealer_Assimilate::CheckState  (line 1740, @0x0000000002b361e0, libserver.so)  // inlines: DOTAGameRules, Enable, GetGameTime
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::CheckState(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rcx
  uint64 m_nDisabledStateMask; // rdx
  float v4; // xmm0_4

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  v4 = 0.0;
  buffState->m_nEnabledStateMask |= 0x82804387uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7D7FBC78LL;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  if ( this->m_fOrderLockDone > v4 )
  {
    buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x82884387;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7D77BC78LL;
  }
}


// CDOTA_Modifier_Life_Stealer_Assimilate::UpdateHorizontalMotion  (line 1763, @0x0000000002b397c0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::UpdateHorizontalMotion(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 )
  {
    v7 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
    CBaseEntity::SetAbsOrigin(me, AbsOrigin);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Life_Stealer_Assimilate::UpdateVerticalMotion  (line 1778, @0x0000000002b39830, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate::UpdateVerticalMotion(
        CDOTA_Modifier_Life_Stealer_Assimilate *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 )
  {
    v7 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
    CBaseEntity::SetAbsOrigin(me, AbsOrigin);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Life_Stealer_Assimilate_Effect::~CDOTA_Modifier_Life_Stealer_Assimilate_Effect  (line 1798, @0x0000000002b99760, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate_Effect::~CDOTA_Modifier_Life_Stealer_Assimilate_Effect(
        CDOTA_Modifier_Life_Stealer_Assimilate_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_451C4D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Life_Stealer_Assimilate_Effect::~CDOTA_Modifier_Life_Stealer_Assimilate_Effect  (line 1798, @0x0000000002b99780, libserver.so)  // inlines: ~CDOTA_Modifier_Life_Stealer_Assimilate_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate_Effect::~CDOTA_Modifier_Life_Stealer_Assimilate_Effect(
        CDOTA_Modifier_Life_Stealer_Assimilate_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_451C4D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Life_Stealer_Assimilate_Effect::IsPurgable  (line 1804, @0x0000000002b93020, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Assimilate_Effect::IsPurgable(
        CDOTA_Modifier_Life_Stealer_Assimilate_Effect *const this)
{
  return 0;
}


// CDOTA_Modifier_Life_Stealer_Assimilate_Effect::IsHidden  (line 1805, @0x0000000002b93030, libserver.so)
bool __fastcall CDOTA_Modifier_Life_Stealer_Assimilate_Effect::IsHidden(
        CDOTA_Modifier_Life_Stealer_Assimilate_Effect *const this)
{
  return 1;
}


// CDOTA_Modifier_Life_Stealer_Assimilate_Effect::OnCreated  (line 1812, @0x0000000002b36250, libserver.so)
void __fastcall CDOTA_Modifier_Life_Stealer_Assimilate_Effect::OnCreated(
        CDOTA_Modifier_Life_Stealer_Assimilate_Effect *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::~CDOTA_Ability_Life_Stealer_AssimilateEject  (line 1833, @0x0000000002ba1eb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::~CDOTA_Ability_Life_Stealer_AssimilateEject(
        CDOTA_Ability_Life_Stealer_AssimilateEject *const this)
{
  this->_vptr_IHandleEntity = &off_451C830;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::~CDOTA_Ability_Life_Stealer_AssimilateEject  (line 1833, @0x0000000002ba1ed0, libserver.so)  // inlines: ~CDOTA_Ability_Life_Stealer_AssimilateEject
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::~CDOTA_Ability_Life_Stealer_AssimilateEject(
        CDOTA_Ability_Life_Stealer_AssimilateEject *const this)
{
  this->_vptr_IHandleEntity = &off_451C830;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::Schema_DynamicBinding  (line 1835, @0x0000000002b93040, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_AssimilateEject::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_AssimilateEject *const this)
{
  return CDOTA_Ability_Life_Stealer_AssimilateEject::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1835, @0x0000000002b93050, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::DestructInstance  (line 1835, @0x0000000002b93060, libserver.so)  // inlines: Destruct<CDOTA_Ability_Life_Stealer_AssimilateEject>
void __fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::FreeInstance  (line 1835, @0x0000000002b93080, libserver.so)
void __fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::CanAllocate  (line 1835, @0x0000000002b930a0, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1835, @0x0000000002b930b0, libserver.so)
// globals: CDOTA_Ability_Life_Stealer_AssimilateEject::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Life_Stealer_AssimilateEject::s_pSchemaBinding;
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::AllocateInstance  (line 1835, @0x0000000002b98a60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::ConstructInstance  (line 1835, @0x0000000002b9daa0, libserver.so)  // inlines: CDOTA_Ability_Life_Stealer_AssimilateEject, Construct<CDOTA_Ability_Life_Stealer_AssimilateEject>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_451C830;
  }
  return p;
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1835, @0x0000000002baba10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1835, @0x0000000002baba30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal  (line 1835, @0x0000000002bcc5f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "life_stealer_assimilate_eject", "CDOTA_Ability_Life_Stealer_AssimilateEject"
// globals: `guard variable for'CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass, CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass, __dso_handle, CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClassInfo, CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClassInfo
CEntityClass *__cdecl CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass);
    CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass._vptr_CEntityClass = off_451C7B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass);
    __cxa_atexit(
      CDOTA_Ability_Life_Stealer_AssimilateEject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass != 0 )
    return &CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass;
  if ( `guard variable for'CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClassInfo,
      "CDOTA_Ability_Life_Stealer_AssimilateEject",
      "life_stealer_assimilate_eject",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClassInfo);
  }
  CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass.m_pClassInfo = &CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClassInfo;
  CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass.m_pBaseClassInfo = CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass = &CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass;
  CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClassInfo.m_pClass = &CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass;
  CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Life_Stealer_AssimilateEject::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Life_Stealer_AssimilateEjectClass;
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::ProcsMagicStick  (line 1839, @0x0000000002b930c0, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::ProcsMagicStick(
        CDOTA_Ability_Life_Stealer_AssimilateEject *const this)
{
  return 0;
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::IsStealable  (line 1841, @0x0000000002b930d0, libserver.so)
bool __fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::IsStealable(
        CDOTA_Ability_Life_Stealer_AssimilateEject *const this)
{
  return 0;
}


// CDOTA_Ability_Life_Stealer_AssimilateEject::OnSpellStart  (line 1847, @0x0000000002b46240, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLastAssimilatedHero, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::SwapAbilities
// strings: "life_stealer_assimilate", "modifier_life_stealer_assimilate", "life_stealer_assimilate_eject"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Life_Stealer_AssimilateEject::OnSpellStart(
        CDOTA_Ability_Life_Stealer_AssimilateEject *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int vptr_IHandleEntity; // edx
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CEntityInstance *m_pInstance; // rdi
  CDOTA_BaseNPC *v9; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "life_stealer_assimilate", 0);
  if ( AbilityByName != 0 )
  {
    vptr_IHandleEntity = AbilityByName[1]._vptr_IHandleEntity;
    if ( (vptr_IHandleEntity + 2) > 1 )
    {
      v5 = AbilityByName[1]._vptr_IHandleEntity;
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[v5 & 0x1FF];
        if ( v7 != 0 && vptr_IHandleEntity == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_life_stealer_assimilate");
            v9 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::SwapAbilities(v9, "life_stealer_assimilate", "life_stealer_assimilate_eject", 1, 0);
          }
        }
      }
    }
  }
}


