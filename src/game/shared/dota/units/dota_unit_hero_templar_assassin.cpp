// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:32
class CDOTA_Unit_Hero_TemplarAssassin : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_TemplarAssassin(CDOTA_Unit_Hero_TemplarAssassin &);
	CDOTA_Unit_Hero_TemplarAssassin(CDOTA_Unit_Hero_TemplarAssassin &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	CDOTA_Unit_Hero_TemplarAssassin();
	virtual ~CDOTA_Unit_Hero_TemplarAssassin();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:44
class C_CDOTA_Unit_Hero_TemplarAssassin_MapInstall {
	C_CDOTA_Unit_Hero_TemplarAssassin_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:67
class CDOTA_Ability_TemplarAssassin_Refraction : public CDOTABaseAbility {
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
	CDOTA_Ability_TemplarAssassin_Refraction(CDOTA_Ability_TemplarAssassin_Refraction &);
	CDOTA_Ability_TemplarAssassin_Refraction(CDOTA_Ability_TemplarAssassin_Refraction &);
	CDOTA_Ability_TemplarAssassin_Refraction();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Ability_TemplarAssassin_Refraction();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:175
class CDOTA_Modifier_TemplarAssassin_RefractionDamage : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_TemplarAssassin_RefractionDamage();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual bool IsPurgable();
	int GetRefractionBonus();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_TemplarAssassin_RefractionDamage();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPreAttack_BonusDamage
	// vtable[90] OnAttacked
	// vtable[14] IsPurgable
	// vtable[32] GetTexture
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:266
class CDOTA_Modifier_TemplarAssassin_RefractionAbsorb : public CDOTA_Buff {
public:

private:

	int damage_threshold;  // +0xba8
	CDOTA_Modifier_TemplarAssassin_RefractionAbsorb();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual ModifierVariant_t GetModifierAvoidDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_TemplarAssassin_RefractionAbsorb();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[89] GetModifierAvoidDamage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:345
class CDOTA_Ability_TemplarAssassin_Meld : public CDOTABaseAbility {
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
	CDOTA_Ability_TemplarAssassin_Meld(CDOTA_Ability_TemplarAssassin_Meld &);
	CDOTA_Ability_TemplarAssassin_Meld(CDOTA_Ability_TemplarAssassin_Meld &);
	CDOTA_Ability_TemplarAssassin_Meld();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual bool HasInvisibility();
	virtual ~CDOTA_Ability_TemplarAssassin_Meld();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// vtable[326] HasInvisibility
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:411
class CDOTA_Modifier_TemplarAssassin_Meld_Animation : public CDOTA_Buff {
public:

private:

	bool launched_attack;  // +0xba8
	CDOTA_Modifier_TemplarAssassin_Meld_Animation();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_TemplarAssassin_Meld_Animation();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:492
class CDOTA_Modifier_TemplarAssassin_Meld : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	bool launched_attack;  // +0xbac

	EHANDLE m_hTarget;  // +0xbb0
	CDOTA_Modifier_TemplarAssassin_Meld();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	ModifierVariant_t OnProjectileDodge(const CModifierParams &);
	ModifierVariant_t OnUnitMoved(const CModifierParams &);
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_TemplarAssassin_Meld();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:718
class CDOTA_Modifier_TemplarAssassin_MeldArmor : public CDOTA_Buff {
public:

private:

	int bonus_armor;  // +0xba8
	CDOTA_Modifier_TemplarAssassin_MeldArmor();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_TemplarAssassin_MeldArmor();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPhysicalArmorBonus
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:771
class CDOTA_Ability_TemplarAssassin_PsiBlades : public CDOTABaseAbility {
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
	CDOTA_Ability_TemplarAssassin_PsiBlades(CDOTA_Ability_TemplarAssassin_PsiBlades &);
	CDOTA_Ability_TemplarAssassin_PsiBlades(CDOTA_Ability_TemplarAssassin_PsiBlades &);
	CDOTA_Ability_TemplarAssassin_PsiBlades();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_TemplarAssassin_PsiBlades();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:786
class CDOTA_Modifier_TemplarAssassin_PsiBlades : public CDOTA_Buff {
public:

private:

	int bonus_attack_range;  // +0xba8
	int attack_spill_range;  // +0xbac
	int attack_spill_width;  // +0xbb0
	CDOTA_Modifier_TemplarAssassin_PsiBlades();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_TemplarAssassin_PsiBlades();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttacked
	// vtable[90] GetModifierAttackRangeBonus
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:925
class CDOTA_Ability_TemplarAssassin_PsionicTrap : public CDOTABaseAbility {
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
	CDOTA_Ability_TemplarAssassin_PsionicTrap(CDOTA_Ability_TemplarAssassin_PsionicTrap &);
	CDOTA_Ability_TemplarAssassin_PsionicTrap(CDOTA_Ability_TemplarAssassin_PsionicTrap &);
	CDOTA_Ability_TemplarAssassin_PsionicTrap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_TemplarAssassin_PsionicTrap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:1011
class CDOTA_Modifier_TemplarAssassin_Trap : public CDOTA_Modifier_Invisible {
public:

	CDOTA_Modifier_TemplarAssassin_Trap();

private:

	virtual bool IsHidden();
	virtual const char * GetEffectName();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_TemplarAssassin_Trap();

	// vtable[11] IsHidden
	// vtable[67] GetEffectName
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:1054
class CDOTA_Ability_TemplarAssassin_Trap : public CDOTABaseAbility {
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
	CDOTA_Ability_TemplarAssassin_Trap(CDOTA_Ability_TemplarAssassin_Trap &);
	CDOTA_Ability_TemplarAssassin_Trap(CDOTA_Ability_TemplarAssassin_Trap &);
	CDOTA_Ability_TemplarAssassin_Trap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual int CastFilterResult();
	virtual const char * GetCustomCastError();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual ~CDOTA_Ability_TemplarAssassin_Trap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[260] CastFilterResult
	// vtable[261] GetCustomCastError
	// vtable[303] GetAssociatedPrimaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:1176
class CDOTA_Modifier_TemplarAssassin_Trap_Slow : public CDOTA_Buff {
public:

private:

	int movement_speed_bonus;  // +0xba8
	float movement_speed_bonus_stage;  // +0xbac
	int stage;  // +0xbb0
	CDOTA_Modifier_TemplarAssassin_Trap_Slow();
	virtual bool IsDebuff();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_TemplarAssassin_Trap_Slow();

	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:1228
class CDOTA_Ability_TemplarAssassin_SelfTrap : public CDOTABaseAbility {
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
	CDOTA_Ability_TemplarAssassin_SelfTrap(CDOTA_Ability_TemplarAssassin_SelfTrap &);
	CDOTA_Ability_TemplarAssassin_SelfTrap(CDOTA_Ability_TemplarAssassin_SelfTrap &);
	CDOTA_Ability_TemplarAssassin_SelfTrap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_TemplarAssassin_SelfTrap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:1297
class CDOTA_Ability_TemplarAssassin_Refraction_Holdout : public CDOTABaseAbility {
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
	CDOTA_Ability_TemplarAssassin_Refraction_Holdout(CDOTA_Ability_TemplarAssassin_Refraction_Holdout &);
	CDOTA_Ability_TemplarAssassin_Refraction_Holdout(CDOTA_Ability_TemplarAssassin_Refraction_Holdout &);
	CDOTA_Ability_TemplarAssassin_Refraction_Holdout();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_TemplarAssassin_Refraction_Holdout();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_templar_assassin.cpp:1334
class CDOTA_Modifier_TemplarAssassin_Refraction_Holdout : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	int damage_absorb;  // +0xbac
	float m_flDamageAbsorbed;  // +0xbb0
	CDOTA_Modifier_TemplarAssassin_Refraction_Holdout();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierTotal_ConstantBlock(const CModifierParams &);
	virtual bool IsPurgable();
	virtual const char * GetTexture();
	virtual bool ShouldSendToTeam(int);
	virtual ~CDOTA_Modifier_TemplarAssassin_Refraction_Holdout();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[89] GetModifierPreAttack_BonusDamage
	// vtable[14] IsPurgable
	// vtable[32] GetTexture
	// vtable[9] ShouldSendToTeam
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_TemplarAssassin::~CDOTA_Unit_Hero_TemplarAssassin  (line 32, @0x0000000002ac6cb0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_TemplarAssassin::~CDOTA_Unit_Hero_TemplarAssassin(
        CDOTA_Unit_Hero_TemplarAssassin *const this)
{
  this->_vptr_IHandleEntity = &off_442A390;
  this->_vptr_INextBotEventResponder = &off_442B370;
  this->_vptr_CObstructionObject = &off_442B6A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_TemplarAssassin::~CDOTA_Unit_Hero_TemplarAssassin  (line 32, @0x0000000002ac6cf0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_TemplarAssassin
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_TemplarAssassin::~CDOTA_Unit_Hero_TemplarAssassin(
        CDOTA_Unit_Hero_TemplarAssassin *const this)
{
  this->_vptr_IHandleEntity = &off_442A390;
  this->_vptr_INextBotEventResponder = &off_442B370;
  this->_vptr_CObstructionObject = &off_442B6A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_TemplarAssassin::Schema_DynamicBinding  (line 34, @0x0000000002abb410, libserver.so)
// globals: CDOTA_Unit_Hero_TemplarAssassin::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_TemplarAssassin::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_TemplarAssassin *const this)
{
  return CDOTA_Unit_Hero_TemplarAssassin::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002abb440, libserver.so)
// globals: CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002abb450, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_TemplarAssassin>
void __fastcall CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002abb470, libserver.so)
void __fastcall CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002abb490, libserver.so)
bool __fastcall CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002abb4a0, libserver.so)
// globals: CDOTA_Unit_Hero_TemplarAssassin::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_TemplarAssassin::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002abf940, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002ac4b80, libserver.so)  // inlines: CDOTA_Unit_Hero_TemplarAssassin, Construct<CDOTA_Unit_Hero_TemplarAssassin>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_442A390;
    *(p + 236) = &off_442B370;
    *(p + 257) = &off_442B6A0;
  }
  return p;
}


// CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002acd1b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002acd4a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal  (line 34, @0x0000000002ae3260, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_templar_assassin", "CDOTA_Unit_Hero_TemplarAssassin"
// globals: `guard variable for'CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass, CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass, __dso_handle, CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClassInfo, CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass);
    CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass._vptr_CEntityClass = off_442A310;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_TemplarAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_TemplarAssassinClass != 0 )
    return &CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass;
  if ( `guard variable for'CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClassInfo,
      "CDOTA_Unit_Hero_TemplarAssassin",
      "npc_dota_hero_templar_assassin",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClassInfo);
  }
  CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass.m_pClassInfo = &CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClassInfo;
  CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass.m_pBaseClassInfo = CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_TemplarAssassinClass = &CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass;
  CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClassInfo.m_pClass = &CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass;
  CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_TemplarAssassinClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_TemplarAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TemplarAssassinClass;
}


// CDOTA_Unit_Hero_TemplarAssassin::YouForgotToImplementOrDeclareServerClass  (line 44, @0x0000000002a78dc0, libserver.so)
int __fastcall CDOTA_Unit_Hero_TemplarAssassin::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_TemplarAssassin *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_TemplarAssassin::GetServerClass  (line 44, @0x0000000002a89930, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_TemplarAssassin::GetServerClass(CDOTA_Unit_Hero_TemplarAssassin *const this)
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


// CDOTA_Unit_Hero_TemplarAssassin::Precache  (line 50, @0x0000000002a7b660, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_templar_assassin_psionic_trap"
void __fastcall CDOTA_Unit_Hero_TemplarAssassin::Precache(
        CDOTA_Unit_Hero_TemplarAssassin *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_templar_assassin_psionic_trap", pContext->m_pManifest, -1);
}


// CDOTA_Ability_TemplarAssassin_Refraction::~CDOTA_Ability_TemplarAssassin_Refraction  (line 67, @0x0000000002ac60b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction::~CDOTA_Ability_TemplarAssassin_Refraction(
        CDOTA_Ability_TemplarAssassin_Refraction *const this)
{
  this->_vptr_IHandleEntity = &off_442B770;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_TemplarAssassin_Refraction::~CDOTA_Ability_TemplarAssassin_Refraction  (line 67, @0x0000000002ac60d0, libserver.so)  // inlines: ~CDOTA_Ability_TemplarAssassin_Refraction
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction::~CDOTA_Ability_TemplarAssassin_Refraction(
        CDOTA_Ability_TemplarAssassin_Refraction *const this)
{
  this->_vptr_IHandleEntity = &off_442B770;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_Refraction::Schema_DynamicBinding  (line 69, @0x0000000002abb4b0, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Refraction::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_Refraction::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_Refraction *const this)
{
  return CDOTA_Ability_TemplarAssassin_Refraction::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 69, @0x0000000002abb4c0, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::DestructInstance  (line 69, @0x0000000002abb4d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_TemplarAssassin_Refraction>
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::FreeInstance  (line 69, @0x0000000002abb4f0, libserver.so)
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::CanAllocate  (line 69, @0x0000000002abb510, libserver.so)
bool __fastcall CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 69, @0x0000000002abb520, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Refraction::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_Refraction::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::AllocateInstance  (line 69, @0x0000000002abf980, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::ConstructInstance  (line 69, @0x0000000002ac3170, libserver.so)  // inlines: CDOTA_Ability_TemplarAssassin_Refraction, Construct<CDOTA_Ability_TemplarAssassin_Refraction>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_442B770;
  }
  return p;
}


// CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 69, @0x0000000002accab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 69, @0x0000000002accad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal  (line 69, @0x0000000002ae33b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "templar_assassin_refraction", "CDOTA_Ability_TemplarAssassin_Refraction"
// globals: `guard variable for'CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass, CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass, __dso_handle, CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClassInfo, CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClassInfo
CEntityClass *__cdecl CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass);
    CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass._vptr_CEntityClass = off_442B6F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass);
    __cxa_atexit(
      CDOTA_Ability_TemplarAssassin_Refraction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TemplarAssassin_RefractionClass != 0 )
    return &CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass;
  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClassInfo,
      "CDOTA_Ability_TemplarAssassin_Refraction",
      "templar_assassin_refraction",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClassInfo);
  }
  CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass.m_pClassInfo = &CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClassInfo;
  CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass.m_pBaseClassInfo = CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TemplarAssassin_RefractionClass = &CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass;
  CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClassInfo.m_pClass = &CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass;
  CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TemplarAssassin_RefractionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TemplarAssassin_Refraction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_RefractionClass;
}


// CDOTA_Ability_TemplarAssassin_Refraction::OnSpellStart  (line 82, @0x0000000002aa3a90, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::StartGesture, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "templar_assassin_refraction", "modifier_templar_assassin_refraction_damage", "modifier_templar_assassin_refraction_absorb", "special_bonus_unique_templar_assassin", "Hero_TemplarAssassin.Refraction"
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction::OnSpellStart(
        CDOTA_Ability_TemplarAssassin_Refraction *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_Buff *v5; // r14
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_Buff *v8; // r15
  unsigned int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *v10; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "templar_assassin_refraction");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_templar_assassin_refraction_damage", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_templar_assassin_refraction_absorb", &kv, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "instances", -1, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v10, "special_bonus_unique_templar_assassin", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  (*(v5->_vptr_CDOTA_Buff + 28))(v5, LevelSpecialValue);
  (*(v8->_vptr_CDOTA_Buff + 28))(v8, LevelSpecialValue);
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v12, 1597, 0.1, 0.1, 9, 0, 1.0);
  v13 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_TemplarAssassin.Refraction", v13);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_TemplarAssassin_Refraction::OnSaveState  (line 113, @0x0000000002a7a9c0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTABaseAbility::OnSaveState, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, KeyValues::SetFloat, KeyValues::SetInt
// strings: "modifier_templar_assassin_refraction_damage", "modifier_templar_assassin_refraction_damage_duration", "modifier_templar_assassin_refraction_damage_stacks", "modifier_templar_assassin_refraction_absorb", "modifier_templar_assassin_refraction_absorb_stacks"
bool __fastcall CDOTA_Ability_TemplarAssassin_Refraction::OnSaveState(
        CDOTA_Ability_TemplarAssassin_Refraction *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v6; // rbx
  float v7; // xmm1_4
  int v8; // eax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_Buff *v10; // rax
  int v11; // eax

  CDOTABaseAbility::OnSaveState(this, pKV);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_templar_assassin_refraction_damage", 0);
  v6 = ModifierByName;
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    v7 = 0.0;
    if ( g_pGameRules != 0 )
      v7 = *&g_pGameRules[18].m_szQuestName[20];
    KeyValues::SetFloat(pKV, "modifier_templar_assassin_refraction_damage_duration", v7);
    v8 = (*(v6->_vptr_CDOTA_Buff + 27))(v6);
    KeyValues::SetInt(pKV, "modifier_templar_assassin_refraction_damage_stacks", v8);
  }
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = CDOTA_BaseNPC::FindModifierByName(v9, "modifier_templar_assassin_refraction_absorb", 0);
  if ( v10 != 0 )
  {
    v11 = (*(v10->_vptr_CDOTA_Buff + 27))(v10);
    KeyValues::SetInt(pKV, "modifier_templar_assassin_refraction_absorb_stacks", v11);
  }
  return 1;
}


// CDOTA_Ability_TemplarAssassin_Refraction::OnLoadState  (line 137, @0x0000000002a7aaa0, libserver.so)
// calls: CDOTABaseAbility::OnLoadState, KeyValues::GetFloat, KeyValues::GetInt, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindModifierByName, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_templar_assassin_refraction_damage_duration", "modifier_templar_assassin_refraction_damage_stacks", "modifier_templar_assassin_refraction_absorb_stacks", "modifier_templar_assassin_refraction_damage", "modifier_templar_assassin_refraction_absorb"
bool __fastcall CDOTA_Ability_TemplarAssassin_Refraction::OnLoadState(
        CDOTA_Ability_TemplarAssassin_Refraction *const this,
        KeyValues *pKV)
{
  float v4; // xmm1_4
  unsigned int Int; // r14d
  int v6; // eax
  unsigned int v7; // r13d
  float v8; // xmm1_4
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // r15
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_Buff *v17; // rax
  float fDuration; // [rsp+Ch] [rbp-74h]
  KeyValues kv; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  CDOTABaseAbility::OnLoadState(this, pKV);
  fDuration = KeyValues::GetFloat(pKV, "modifier_templar_assassin_refraction_damage_duration", v4);
  Int = KeyValues::GetInt(pKV, "modifier_templar_assassin_refraction_damage_stacks", 0);
  v6 = KeyValues::GetInt(pKV, "modifier_templar_assassin_refraction_absorb_stacks", 0);
  if ( fDuration > 0.0 )
  {
    v7 = v6;
    KeyValues::KeyValues(&kv, "modifier_templar_assassin_refraction_damage");
    KeyValues::SetFloat(&kv, "duration", v8);
    Caster = CDOTABaseAbility::GetCaster(this);
    v10 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v10, Caster, this, "modifier_templar_assassin_refraction_damage", &kv, 0);
    v11 = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v11, "modifier_templar_assassin_refraction_damage", 0);
    if ( ModifierByName != 0 )
      (*(ModifierByName->_vptr_CDOTA_Buff + 28))(ModifierByName, Int);
    KeyValues::KeyValues(&kv2, "modifier_templar_assassin_refraction_absorb");
    KeyValues::SetFloat(&kv2, "duration", v13);
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v15, v14, this, "modifier_templar_assassin_refraction_absorb", &kv2, 0);
    v16 = CDOTABaseAbility::GetCaster(this);
    v17 = CDOTA_BaseNPC::FindModifierByName(v16, "modifier_templar_assassin_refraction_absorb", 0);
    if ( v17 != 0 )
      (*(v17->_vptr_CDOTA_Buff + 28))(v17, v7);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Modifier_TemplarAssassin_RefractionDamage::~CDOTA_Modifier_TemplarAssassin_RefractionDamage  (line 175, @0x0000000002ac0a10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TemplarAssassin_RefractionDamage::~CDOTA_Modifier_TemplarAssassin_RefractionDamage(
        CDOTA_Modifier_TemplarAssassin_RefractionDamage *const this)
{
  this->_vptr_CDOTA_Buff = &off_442C230;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TemplarAssassin_RefractionDamage::~CDOTA_Modifier_TemplarAssassin_RefractionDamage  (line 175, @0x0000000002ac0a30, libserver.so)  // inlines: ~CDOTA_Modifier_TemplarAssassin_RefractionDamage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TemplarAssassin_RefractionDamage::~CDOTA_Modifier_TemplarAssassin_RefractionDamage(
        CDOTA_Modifier_TemplarAssassin_RefractionDamage *const this)
{
  this->_vptr_CDOTA_Buff = &off_442C230;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TemplarAssassin_RefractionDamage::IsPurgable  (line 185, @0x0000000002abb530, libserver.so)
bool __fastcall CDOTA_Modifier_TemplarAssassin_RefractionDamage::IsPurgable(
        CDOTA_Modifier_TemplarAssassin_RefractionDamage *const this)
{
  return 0;
}


// CDOTA_Modifier_TemplarAssassin_RefractionDamage::GetTexture  (line 189, @0x0000000002abb540, libserver.so)
// strings: "templar_assassin_refraction_damage"
const char *__fastcall CDOTA_Modifier_TemplarAssassin_RefractionDamage::GetTexture(
        CDOTA_Modifier_TemplarAssassin_RefractionDamage *const this)
{
  return "templar_assassin_refraction_damage";
}


// CDOTA_Modifier_TemplarAssassin_RefractionDamage::OnCreated  (line 200, @0x0000000002a9d180, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_templar_assassin/templar_assassin_refraction_dmg.vpcf", "attach_hitloc", "attach_attack1", "attach_attack2"
void __fastcall CDOTA_Modifier_TemplarAssassin_RefractionDamage::OnCreated(
        CDOTA_Modifier_TemplarAssassin_RefractionDamage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  __int64 v12; // r13
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v18; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v19; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_damage, "bonus_damage");
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_templar_assassin/templar_assassin_refraction_dmg.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v6 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, Parent, 0, v8, 5, "attach_hitloc", *AbsOrigin, 1);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = GetParticleManager();
  v12 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v11, Parent, 1, v10, 1, 0, vec3_invalid, 1);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  *&v18.x = v12;
  v18.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 2, v13, 5, "attach_attack1", v18, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  *&v19.x = v12;
  v19.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Parent, 3, v15, 5, "attach_attack2", v19, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_TemplarAssassin_RefractionDamage::DeclareFunctions  (line 215, @0x0000000002a78dd0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_TemplarAssassin_RefractionDamage::DeclareFunctions(
        CDOTA_Modifier_TemplarAssassin_RefractionDamage *const this)
{
  this->m_Functions[0].__pfn = (&stru_10 + 697);
  this->m_Functions[0].__delta = 0;
  this->m_Functions[137].__pfn = (&stru_10 + 705);
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_TemplarAssassin_RefractionDamage::GetModifierPreAttack_BonusDamage  (line 223, @0x0000000002a78e10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_RefractionDamage::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_TemplarAssassin_RefractionDamage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_TemplarAssassin_RefractionDamage::OnAttacked  (line 230, @0x0000000002a85c90, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound, CDOTA_Buff::Destroy
// strings: "Hero_TemplarAssassin.Refraction.Damage"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_RefractionDamage::OnAttacked(
        CDOTA_Modifier_TemplarAssassin_RefractionDamage *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // r13
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *v16; // rax
  CEntityInstance *v17; // rbx
  CDOTA_BaseNPC *Parent; // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->htarget.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
            || (v11 = &v10[params->htarget.m_Index & 0x1FF]) == 0
            || v9 != v11->m_EHandle.m_Index
            || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
            || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
          {
            v12 = 0;
          }
          v13 = params->hattacker.m_Index;
          if ( v13 + 2 > 1
            && (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
            && (v15 = &v14[params->hattacker.m_Index & 0x1FF]) != 0
            && v13 == v15->m_EHandle.m_Index
            && (v17 = v15->m_pInstance, v15->m_pInstance != 0)
            && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
          {
            Parent = CDOTA_Buff::GetParent(this);
            DOTA_EmitSound(10, "Hero_TemplarAssassin.Refraction.Damage", Parent);
            if ( v12 != 0 && HIBYTE(v12[7].m_CScriptComponent) != HIBYTE(v17[7].m_CScriptComponent) )
            {
              (*(this->_vptr_CDOTA_Buff + 26))(this);
              if ( (*(this->_vptr_CDOTA_Buff + 27))(this) == 0 )
                CDOTA_Buff::Destroy(this, 0, 0, 0);
            }
          }
          else
          {
            v16 = CDOTA_Buff::GetParent(this);
            DOTA_EmitSound(10, "Hero_TemplarAssassin.Refraction.Damage", v16);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_TemplarAssassin_RefractionDamage::GetRefractionBonus  (line 257, @0x0000000002a96310, libserver.so)
int __fastcall CDOTA_Modifier_TemplarAssassin_RefractionDamage::GetRefractionBonus(
        CDOTA_Modifier_TemplarAssassin_RefractionDamage *const this)
{
  return this->bonus_damage;
}


// CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::~CDOTA_Modifier_TemplarAssassin_RefractionAbsorb  (line 266, @0x0000000002ac09c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::~CDOTA_Modifier_TemplarAssassin_RefractionAbsorb(
        CDOTA_Modifier_TemplarAssassin_RefractionAbsorb *const this)
{
  this->_vptr_CDOTA_Buff = &off_442C570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::~CDOTA_Modifier_TemplarAssassin_RefractionAbsorb  (line 266, @0x0000000002ac09e0, libserver.so)  // inlines: ~CDOTA_Modifier_TemplarAssassin_RefractionAbsorb
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::~CDOTA_Modifier_TemplarAssassin_RefractionAbsorb(
        CDOTA_Modifier_TemplarAssassin_RefractionAbsorb *const this)
{
  this->_vptr_CDOTA_Buff = &off_442C570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::IsPurgable  (line 274, @0x0000000002abb550, libserver.so)
bool __fastcall CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::IsPurgable(
        CDOTA_Modifier_TemplarAssassin_RefractionAbsorb *const this)
{
  return 0;
}


// CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::OnCreated  (line 286, @0x0000000002a9d340, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_templar_assassin/templar_assassin_refraction.vpcf", "attach_hitloc", "attach_attack1", "attach_attack2"
void __fastcall CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::OnCreated(
        CDOTA_Modifier_TemplarAssassin_RefractionAbsorb *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  __int64 v12; // r13
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v18; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v19; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->damage_threshold, "damage_threshold");
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_templar_assassin/templar_assassin_refraction.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v6 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, Parent, 0, v8, 5, "attach_hitloc", *AbsOrigin, 1);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = GetParticleManager();
  v12 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v11, Parent, 1, v10, 1, 0, vec3_invalid, 1);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  *&v18.x = v12;
  v18.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 2, v13, 5, "attach_attack1", v18, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  *&v19.x = v12;
  v19.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Parent, 3, v15, 5, "attach_attack2", v19, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::DeclareFunctions  (line 301, @0x0000000002a78e30, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::DeclareFunctions(
        CDOTA_Modifier_TemplarAssassin_RefractionAbsorb *const this)
{
  this->m_Functions[42].__pfn = (&stru_10 + 697);
  this->m_Functions[42].__delta = 0;
}


// CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::GetModifierAvoidDamage  (line 308, @0x0000000002a881b0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CDOTA_Buff::Destroy
// strings: "particles/units/heroes/hero_templar_assassin/templar_assassin_refract_hit.vpcf", "attach_hitloc", "Hero_TemplarAssassin.Refraction.Absorb"
// globals: INVALID_ITEM_DEF_INDEX, CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_RefractionAbsorb::GetModifierAvoidDamage(
        CDOTA_Modifier_TemplarAssassin_RefractionAbsorb *const this,
        const CModifierParams *const params)
{
  int fDamage; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v7; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseAnimating *m_pInstance; // r15
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  __int64 v16; // r13
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  ModifierVariant_t result; // 0:rax.16
  Vector v24; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v25; // 0:xmm0_8.8,8:xmm1_4.4

  if ( params->fDamage <= this->damage_threshold || (params->nDamageflags & 0x20) != 0 )
  {
    *&result.m_eType = 1;
  }
  else
  {
    (*(this->_vptr_CDOTA_Buff + 26))(this);
    fDamage = params->fDamage;
    Caster = CDOTA_Buff::GetCaster(this);
    if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
      v7 = Caster;
    else
      v7 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v7,
      0,
      kill_eater_event_t::kKillEaterEvent_TemplarAssassin_DamageAbsorbed,
      fDamage,
      INVALID_ITEM_DEF_INDEX);
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 <= 1
      || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
      || (v10 = &v9[params->hattacker.m_Index & 0x1FF]) == 0
      || m_Index != v10->m_EHandle.m_Index
      || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/units/heroes/hero_templar_assassin/templar_assassin_refract_hit.vpcf",
                        2,
                        Parent,
                        0,
                        0);
    v14 = CDOTA_Buff::GetParent(this);
    v15 = GetParticleManager();
    v16 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v15, Parent, 0, v14, 5, "attach_hitloc", vec3_invalid, 1);
    v17 = GetParticleManager();
    *&v24.x = v16;
    v24.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v17, Parent, 1, m_pInstance, 1, 0, v24, 1);
    v18 = CDOTA_Buff::GetParent(this);
    v19 = GetParticleManager();
    *&v25.x = v16;
    v25.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v19, Parent, 2, v18, 1, 0, v25, 1);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v20, Parent);
    v21 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_TemplarAssassin.Refraction.Absorb", v21);
    if ( (*(this->_vptr_CDOTA_Buff + 27))(this) == 0 )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    *&result.m_eType = 0x3F80000000000001LL;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_TemplarAssassin_Meld::~CDOTA_Ability_TemplarAssassin_Meld  (line 345, @0x0000000002ac6100, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_TemplarAssassin_Meld::~CDOTA_Ability_TemplarAssassin_Meld(
        CDOTA_Ability_TemplarAssassin_Meld *const this)
{
  this->_vptr_IHandleEntity = &off_442C8D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_TemplarAssassin_Meld::~CDOTA_Ability_TemplarAssassin_Meld  (line 345, @0x0000000002ac6120, libserver.so)  // inlines: ~CDOTA_Ability_TemplarAssassin_Meld
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_Meld::~CDOTA_Ability_TemplarAssassin_Meld(
        CDOTA_Ability_TemplarAssassin_Meld *const this)
{
  this->_vptr_IHandleEntity = &off_442C8D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_Meld::Schema_DynamicBinding  (line 347, @0x0000000002abb560, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Meld::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_Meld::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_Meld *const this)
{
  return CDOTA_Ability_TemplarAssassin_Meld::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 347, @0x0000000002abb570, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::DestructInstance  (line 347, @0x0000000002abb580, libserver.so)  // inlines: Destruct<CDOTA_Ability_TemplarAssassin_Meld>
void __fastcall CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::FreeInstance  (line 347, @0x0000000002abb5a0, libserver.so)
void __fastcall CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::CanAllocate  (line 347, @0x0000000002abb5c0, libserver.so)
bool __fastcall CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 347, @0x0000000002abb5d0, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Meld::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_Meld::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::AllocateInstance  (line 347, @0x0000000002abf9c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::ConstructInstance  (line 347, @0x0000000002ac31a0, libserver.so)  // inlines: CDOTA_Ability_TemplarAssassin_Meld, Construct<CDOTA_Ability_TemplarAssassin_Meld>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_442C8D0;
  }
  return p;
}


// CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 347, @0x0000000002accb00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 347, @0x0000000002accb20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal  (line 347, @0x0000000002ae3500, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "templar_assassin_meld", "CDOTA_Ability_TemplarAssassin_Meld"
// globals: `guard variable for'CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass, CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass, __dso_handle, CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClassInfo, CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClassInfo
CEntityClass *__cdecl CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass);
    CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass._vptr_CEntityClass = off_442C850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass);
    __cxa_atexit(
      CDOTA_Ability_TemplarAssassin_Meld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TemplarAssassin_MeldClass != 0 )
    return &CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass;
  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClassInfo,
      "CDOTA_Ability_TemplarAssassin_Meld",
      "templar_assassin_meld",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClassInfo);
  }
  CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass.m_pClassInfo = &CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClassInfo;
  CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass.m_pBaseClassInfo = CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TemplarAssassin_MeldClass = &CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass;
  CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClassInfo.m_pClass = &CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass;
  CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TemplarAssassin_MeldClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TemplarAssassin_Meld::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_MeldClass;
}


// CDOTA_Ability_TemplarAssassin_Meld::HasInvisibility  (line 355, @0x0000000002abb5e0, libserver.so)
bool __fastcall CDOTA_Ability_TemplarAssassin_Meld::HasInvisibility(CDOTA_Ability_TemplarAssassin_Meld *const this)
{
  return 1;
}


// CDOTA_Ability_TemplarAssassin_Meld::OnSpellStart  (line 362, @0x0000000002a7b980, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_templar_assassin_meld", "modifier_templar_assassin_meld_animation", "Hero_TemplarAssassin.Meld"
void __fastcall CDOTA_Ability_TemplarAssassin_Meld::OnSpellStart(CDOTA_Ability_TemplarAssassin_Meld *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_templar_assassin_meld");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_templar_assassin_meld", &kv, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, v4, this, "modifier_templar_assassin_meld_animation", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_TemplarAssassin.Meld", v6);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_TemplarAssassin_Meld::OnSaveState  (line 375, @0x0000000002a7a970, libserver.so)  // inlines: SetBool
// calls: CDOTABaseAbility::OnSaveState, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, KeyValues::SetInt
// strings: "modifier_templar_assassin_meld", "melded"
bool __fastcall CDOTA_Ability_TemplarAssassin_Meld::OnSaveState(
        CDOTA_Ability_TemplarAssassin_Meld *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnSaveState(this, pKV);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_templar_assassin_meld", 0) != 0 )
    KeyValues::SetInt(pKV, "melded", 1);
  return 1;
}


// CDOTA_Ability_TemplarAssassin_Meld::OnLoadState  (line 391, @0x0000000002a7ac80, libserver.so)  // inlines: GetBool
// calls: CDOTABaseAbility::OnLoadState, KeyValues::GetInt, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "melded", "modifier_templar_assassin_meld"
bool __fastcall CDOTA_Ability_TemplarAssassin_Meld::OnLoadState(
        CDOTA_Ability_TemplarAssassin_Meld *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::OnLoadState(this, pKV);
  if ( KeyValues::GetInt(pKV, "melded", 0) != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_templar_assassin_meld");
    Caster = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_templar_assassin_meld", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Modifier_TemplarAssassin_Meld_Animation::~CDOTA_Modifier_TemplarAssassin_Meld_Animation  (line 411, @0x0000000002ac0970, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TemplarAssassin_Meld_Animation::~CDOTA_Modifier_TemplarAssassin_Meld_Animation(
        CDOTA_Modifier_TemplarAssassin_Meld_Animation *const this)
{
  this->_vptr_CDOTA_Buff = &off_442D390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TemplarAssassin_Meld_Animation::~CDOTA_Modifier_TemplarAssassin_Meld_Animation  (line 411, @0x0000000002ac0990, libserver.so)  // inlines: ~CDOTA_Modifier_TemplarAssassin_Meld_Animation
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TemplarAssassin_Meld_Animation::~CDOTA_Modifier_TemplarAssassin_Meld_Animation(
        CDOTA_Modifier_TemplarAssassin_Meld_Animation *const this)
{
  this->_vptr_CDOTA_Buff = &off_442D390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TemplarAssassin_Meld_Animation::IsHidden  (line 417, @0x0000000002abb5f0, libserver.so)
bool __fastcall CDOTA_Modifier_TemplarAssassin_Meld_Animation::IsHidden(
        CDOTA_Modifier_TemplarAssassin_Meld_Animation *const this)
{
  return 1;
}


// CDOTA_Modifier_TemplarAssassin_Meld_Animation::OnCreated  (line 431, @0x0000000002a78e50, libserver.so)
void __fastcall CDOTA_Modifier_TemplarAssassin_Meld_Animation::OnCreated(
        CDOTA_Modifier_TemplarAssassin_Meld_Animation *const this,
        KeyValues *pKV)
{
  this->launched_attack = 0;
}


// CDOTA_Modifier_TemplarAssassin_Meld_Animation::DeclareFunctions  (line 439, @0x0000000002a78e60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_TemplarAssassin_Meld_Animation::OnAttack(CModifierParams const&), CDOTA_Modifier_TemplarAssassin_Meld_Animation::OnAttackStart(CModifierParams const&), CDOTA_Modifier_TemplarAssassin_Meld_Animation::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_TemplarAssassin_Meld_Animation::DeclareFunctions(
        CDOTA_Modifier_TemplarAssassin_Meld_Animation *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_TemplarAssassin_Meld_Animation::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[119].__delta = 0;
  this->m_Functions[119].__pfn = CDOTA_Modifier_TemplarAssassin_Meld_Animation::OnAttackStart;
  this->m_Functions[155].__pfn = CDOTA_Modifier_TemplarAssassin_Meld_Animation::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_TemplarAssassin_Meld_Animation::OnAttack  (line 447, @0x0000000002a82fd0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Meld_Animation::OnAttack(
        CDOTA_Modifier_TemplarAssassin_Meld_Animation *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hattacker.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  this->launched_attack = 1;
  return 1uLL;
}


// CDOTA_Modifier_TemplarAssassin_Meld_Animation::OnAttackStart  (line 458, @0x0000000002a83150, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Meld_Animation::OnAttackStart(
        CDOTA_Modifier_TemplarAssassin_Meld_Animation *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || !m_pInstance->m_bIsDOTANPC
    || CDOTA_Buff::GetParent(this) != m_pInstance
    || !this->launched_attack )
  {
    return 1uLL;
  }
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_TemplarAssassin_Meld_Animation::GetActivityTranslationModifiers  (line 474, @0x0000000002a7cc70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Meld_Animation::GetActivityTranslationModifiers(
        CDOTA_Modifier_TemplarAssassin_Meld_Animation *const this,
        const CModifierParams *const params)
{
  Activity nActivity; // eax
  ModifierVariant_t result; // 0:rax.16

  nActivity = params->nActivity;
  if ( (nActivity - 1503) > 1 && (nActivity != 1500 || this->launched_attack) )
    return 2uLL;
  result.m_szVal = "meld";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_TemplarAssassin_Meld::~CDOTA_Modifier_TemplarAssassin_Meld  (line 492, @0x0000000002ac0920, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TemplarAssassin_Meld::~CDOTA_Modifier_TemplarAssassin_Meld(
        CDOTA_Modifier_TemplarAssassin_Meld *const this)
{
  this->_vptr_CDOTA_Buff = &off_442D6B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TemplarAssassin_Meld::~CDOTA_Modifier_TemplarAssassin_Meld  (line 492, @0x0000000002ac0940, libserver.so)  // inlines: ~CDOTA_Modifier_TemplarAssassin_Meld
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TemplarAssassin_Meld::~CDOTA_Modifier_TemplarAssassin_Meld(
        CDOTA_Modifier_TemplarAssassin_Meld *const this)
{
  this->_vptr_CDOTA_Buff = &off_442D6B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TemplarAssassin_Meld::IsPurgable  (line 497, @0x0000000002abb600, libserver.so)
bool __fastcall CDOTA_Modifier_TemplarAssassin_Meld::IsPurgable(CDOTA_Modifier_TemplarAssassin_Meld *const this)
{
  return 0;
}


// CDOTA_Modifier_TemplarAssassin_Meld::GetEffectName  (line 510, @0x0000000002abb610, libserver.so)
// strings: "particles/generic_hero_status/status_invisibility_start.vpcf"
const char *__fastcall CDOTA_Modifier_TemplarAssassin_Meld::GetEffectName(
        CDOTA_Modifier_TemplarAssassin_Meld *const this)
{
  return "particles/generic_hero_status/status_invisibility_start.vpcf";
}


// CDOTA_Modifier_TemplarAssassin_Meld::OnCreated  (line 523, @0x0000000002aaa340, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, Set, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_TemplarAssassin_Meld::OnCreated(
        CDOTA_Modifier_TemplarAssassin_Meld *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
  this->launched_attack = 0;
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Modifier_TemplarAssassin_Meld::CheckState  (line 541, @0x0000000002a78ec0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_TemplarAssassin_Meld::CheckState(
        CDOTA_Modifier_TemplarAssassin_Meld *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2000080uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFDFFFF7FLL;
}


// CDOTA_Modifier_TemplarAssassin_Meld::DeclareFunctions  (line 551, @0x0000000002a78ee0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_TemplarAssassin_Meld::OnAttack(CModifierParams const&), CDOTA_Modifier_TemplarAssassin_Meld::OnAttacked(CModifierParams const&), CDOTA_Modifier_TemplarAssassin_Meld::OnAttackFail(CModifierParams const&), CDOTA_Modifier_TemplarAssassin_Meld::GetModifierInvisibilityLevel(CModifierParams const&), CDOTA_Modifier_TemplarAssassin_Meld::OnUnitMoved(CModifierParams const&), CDOTA_Modifier_TemplarAssassin_Meld::OnAbilityExecuted(CModifierParams const&), CDOTA_Modifier_TemplarAssassin_Meld::OnProjectileDodge(CModifierParams const&)
void __fastcall CDOTA_Modifier_TemplarAssassin_Meld::DeclareFunctions(CDOTA_Modifier_TemplarAssassin_Meld *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_TemplarAssassin_Meld::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_TemplarAssassin_Meld::OnAttacked;
  this->m_Functions[122].__pfn = CDOTA_Modifier_TemplarAssassin_Meld::OnAttackFail;
  this->m_Functions[9].__pfn = CDOTA_Modifier_TemplarAssassin_Meld::GetModifierInvisibilityLevel;
  this->m_Functions[126].__pfn = CDOTA_Modifier_TemplarAssassin_Meld::OnUnitMoved;
  this->m_Functions[128].__pfn = CDOTA_Modifier_TemplarAssassin_Meld::OnAbilityExecuted;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[9].__delta = 0;
  this->m_Functions[126].__delta = 0;
  this->m_Functions[128].__delta = 0;
  this->m_Functions[124].__pfn = CDOTA_Modifier_TemplarAssassin_Meld::OnProjectileDodge;
  this->m_Functions[124].__delta = 0;
}


// CDOTA_Modifier_TemplarAssassin_Meld::OnAttack  (line 568, @0x0000000002a86b70, libserver.so)  // inlines: AttackerNPC, CEntityHandle, CHandle, ClassMatches, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetProjectileSpeed, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsListeningToEvent, IsUnitMyParent, IsValid, LookupEntity, Set, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, sTrackingProjectileCreateInfo
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, CEntityIdentity::ClassMatches, CDOTA_Buff::GetAbility, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ProjectileManager::CreateTrackingProjectile, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "npc_dota_unit_undying_tombstone", "particles/units/heroes/hero_templar_assassin/templar_assassin_meld_attack.vpcf", "particles/units/heroes/hero_templar_assassin/templar_assassin_meld_start.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Meld::OnAttack(
        CDOTA_Modifier_TemplarAssassin_Meld *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // r12
  char m_CScriptComponent_high; // r13
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v17; // rdx
  float m_iProjectileMoveSpeed; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v21; // cx
  CEntityIdentity *v22; // rax
  __int16 v23; // cx
  CEntityIdentity *v24; // rax
  int v25; // edx
  __int16 v26; // cx
  CDOTA_BaseNPC *v27; // r13
  CDOTA_BaseNPC *v28; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v30; // rbx
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  float v33; // [rsp+Ch] [rbp-94h]
  sTrackingProjectileCreateInfo info; // [rsp+10h] [rbp-90h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-28h]

  v35 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->htarget.m_Index;
          if ( v9 + 2 > 1
            && (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
            && (v11 = &v10[params->htarget.m_Index & 0x1FF]) != 0
            && v9 == v11->m_EHandle.m_Index
            && (v12 = v11->m_pInstance, v11->m_pInstance != 0)
            && BYTE3(v12[7]._vptr_IHandleEntity) != 0
            && (m_CScriptComponent_high = HIBYTE(v12[7].m_CScriptComponent)) != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
            && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
            && !CEntityIdentity::ClassMatches(v12->m_pEntity, "npc_dota_unit_undying_tombstone") )
          {
            if ( !this->launched_attack )
            {
              info.bProvidesVision = 0;
              info.hSource.m_Index = -1;
              info.hTarget.m_Index = -1;
              info.colorGemColor = 0;
              memset(&info.pAbility, 0, 20);
              info.vSourceLoc.x = vec3_origin.x;
              info.vSourceLoc.y = vec3_origin.y;
              z = vec3_origin.z;
              info.iSourceAttachment = 1;
              info.vSourceLoc.z = z;
              info.iVisionTeamNumber = -1;
              info.flExpireTime = 0.0;
              info.flMaxImpactTime = 0.0;
              info.iVisionRadius = 0;
              info.bDrawsOnMinimap = 0;
              info.bDodgeable = 1;
              info.bIsAttack = 0;
              info.bVisibleToEnemies = 1;
              info.pKVExtraData = 0;
              info.bReplaceExisting = 0;
              info.bServerOnly = 0;
              info.pszEffectName = "particles/units/heroes/hero_templar_assassin/templar_assassin_meld_attack.vpcf";
              info.pAbility = CDOTA_Buff::GetAbility(this);
              Caster = CDOTA_Buff::GetCaster(this);
              Modifier_Constant_Additive_Internal = 0.0;
              v17 = Caster->m_ModifierManager.m_buffsForModifiers[72];
              m_iProjectileMoveSpeed = Caster->m_iProjectileMoveSpeed;
              if ( v17 != 0xFF && Caster->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v17].m_Size > 0 )
              {
                v33 = Caster->m_iProjectileMoveSpeed;
                Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                        &Caster->m_ModifierManager,
                                                        modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
                                                        &CModifierParams::s_Default);
                m_iProjectileMoveSpeed = v33;
              }
              info.iMoveSpeed = (Modifier_Constant_Additive_Internal + m_iProjectileMoveSpeed);
              v19 = CDOTA_Buff::GetCaster(this);
              if ( v19 != 0 && (m_pEntity = v19->m_pEntity) != 0 )
              {
                v21 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                     | v21 & 0x7FFF;
              }
              else
              {
                info.hSource.m_Index = -1;
              }
              v22 = v12->m_pEntity;
              if ( v22 != 0 )
              {
                v23 = 0x7FFF;
                if ( v22->m_EHandle.m_Index != -1 )
                  v23 = v22->m_EHandle.m_Index & 0x7FFF;
                info.hTarget.m_Index = (((v22->m_EHandle.m_Index >> 15) - (v22->m_flags & 1)) << 15) | v23 & 0x7FFF;
              }
              else
              {
                info.hTarget.m_Index = -1;
              }
              CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
              this->launched_attack = 1;
              v24 = v12->m_pEntity;
              if ( v24 != 0 )
              {
                v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
                v26 = 0x7FFF;
                if ( v24->m_EHandle.m_Index != -1 )
                  v26 = v24->m_EHandle.m_Index & 0x7FFF;
                LOWORD(this->m_hTarget.m_Index) = v26 | this->m_hTarget.m_Index & 0x8000;
                this->m_hTarget.m_Index = (v25 << 15) | this->m_hTarget.m_Index & 0x7FFF;
              }
              else
              {
                this->m_hTarget.m_Index = -1;
              }
              v27 = CDOTA_Buff::GetCaster(this);
              v28 = CDOTA_Buff::GetCaster(this);
              ParticleManager = GetParticleManager();
              LODWORD(v28) = CDOTA_ParticleManager::CreateParticle(
                               ParticleManager,
                               "particles/units/heroes/hero_templar_assassin/templar_assassin_meld_start.vpcf",
                               1,
                               v28,
                               0,
                               v27);
              v30 = CDOTA_Buff::GetCaster(this);
              v31 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(v31, v28, 1, v30, 5, "attach_hitloc", vec3_invalid, 1);
              v32 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v32, v28);
            }
          }
          else if ( !this->launched_attack )
          {
            CDOTA_Buff::Destroy(this, 0, 0, 0);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_TemplarAssassin_Meld::OnAttacked  (line 607, @0x0000000002a87740, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, Set, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, DOTA_EmitSound (15 total)
// strings: "modifier_templar_assassin_meld_armor", "Hero_TemplarAssassin.Meld.Attack"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Meld::OnAttacked(
        CDOTA_Modifier_TemplarAssassin_Meld *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  unsigned __int64 v10; // rax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // r12
  char m_CScriptComponent_high; // r13
  CDOTABaseAbility *Ability; // rax
  float v16; // xmm1_4
  CDOTABaseAbility *v17; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v19; // r14
  CDOTA_BaseNPC *v20; // rax
  double v21; // xmm0_8
  CDOTA_BaseNPC_Hero *v22; // r14
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC_Hero *v24; // rdi
  float flDamage; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-28h]

  v27 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && this->launched_attack )
        {
          v9 = params->htarget.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = params->htarget.m_Index & 0x7FFF;
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)];
            if ( v11 != 0 )
            {
              v12 = &v11[v10 & 0x1FF];
              if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
              {
                v13 = v12->m_pInstance;
                if ( v12->m_pInstance != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
                {
                  m_CScriptComponent_high = HIBYTE(v13[7].m_CScriptComponent);
                  if ( m_CScriptComponent_high != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
                    && (v13[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
                  {
                    this->m_hTarget.m_Index = -1;
                    KeyValues::KeyValues(&kv, "modifier_templar_assassin_meld_armor");
                    Ability = CDOTA_Buff::GetAbility(this);
                    CDOTABaseAbility::GetDuration(Ability);
                    KeyValues::SetFloat(&kv, "duration", v16);
                    v17 = CDOTA_Buff::GetAbility(this);
                    Caster = CDOTA_Buff::GetCaster(this);
                    CDOTA_BaseNPC::AddNewModifier(v13, Caster, v17, "modifier_templar_assassin_meld_armor", &kv, 0);
                    flDamage = this->bonus_damage;
                    v19 = CDOTA_Buff::GetAbility(this);
                    v20 = CDOTA_Buff::GetCaster(this);
                    v21 = ApplyDamage(v20, v13, v19, flDamage, 1, 8);
                    if ( (v13[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                      && LOBYTE(v13[71].m_pEntity) == 0
                      && (*(v13->_vptr_IHandleEntity + 408))(v13, v21) == 0 )
                    {
                      v22 = 0;
                      if ( BYTE3(v13[7]._vptr_IHandleEntity) != 0
                        && (v13[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                        && LOBYTE(v13[71].m_pEntity) == 0 )
                      {
                        v22 = v13;
                      }
                      v23 = CDOTA_Buff::GetCaster(this);
                      if ( v23 != 0 && (v23->m_iUnitType & 1) != 0 )
                        v24 = v23;
                      else
                        v24 = 0;
                      EconEntity_OnOwnerKillEaterEvent(
                        v24,
                        v22,
                        kill_eater_event_t::kKillEaterEvent_TemplarAssassin_MeldKills,
                        1,
                        INVALID_ITEM_DEF_INDEX);
                    }
                    DOTA_EmitSound(10, "Hero_TemplarAssassin.Meld.Attack", v13);
                    SendOverheadEventMessage(
                      0,
                      DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_CRITICAL,
                      v13,
                      this->bonus_damage,
                      0);
                    KeyValues::~KeyValues(&kv);
                  }
                }
              }
            }
          }
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_TemplarAssassin_Meld::OnAttackFail  (line 644, @0x0000000002a83200, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Meld::OnAttackFail(
        CDOTA_Modifier_TemplarAssassin_Meld *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hattacker.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_TemplarAssassin_Meld::OnProjectileDodge  (line 659, @0x0000000002a84140, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool
// calls: CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Meld::OnProjectileDodge(
        CDOTA_Modifier_TemplarAssassin_Meld *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rax
  uint32 v6; // r9d
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdx
  CEntityInstance *v10; // rax

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  v6 = params->htarget.m_Index;
  if ( v6 + 2 <= 1
    || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v8 = &v7[params->htarget.m_Index & 0x1FF]) == 0
    || v6 != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance) == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v10 = v4->m_pInstance;
  if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 || m_pInstance == 0 || m_pInstance != v10 )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_TemplarAssassin_Meld::OnUnitMoved  (line 678, @0x0000000002a83d60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Buff::Destroy, DOTA_EmitSound
// strings: "modifier_templar_assassin_meld_animation", "Hero_TemplarAssassin.Meld.Move"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Meld::OnUnitMoved(
        CDOTA_Modifier_TemplarAssassin_Meld *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax

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
          && !this->launched_attack )
        {
          Caster = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_templar_assassin_meld_animation");
          CDOTA_Buff::Destroy(this, 0, 0, 0);
          Parent = CDOTA_Buff::GetParent(this);
          DOTA_EmitSound(10, "Hero_TemplarAssassin.Meld.Move", Parent);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_TemplarAssassin_Meld::OnAbilityExecuted  (line 694, @0x0000000002a83450, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Meld::OnAbilityExecuted(
        CDOTA_Modifier_TemplarAssassin_Meld *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

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
  if ( v4->m_pInstance != 0
    && m_pInstance->m_bIsDOTANPC
    && CDOTA_Buff::GetParent(this) == m_pInstance
    && !this->launched_attack )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  return 1uLL;
}


// CDOTA_Modifier_TemplarAssassin_Meld::GetModifierInvisibilityLevel  (line 708, @0x0000000002a78fa0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Meld::GetModifierInvisibilityLevel(
        CDOTA_Modifier_TemplarAssassin_Meld *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_TemplarAssassin_MeldArmor::~CDOTA_Modifier_TemplarAssassin_MeldArmor  (line 718, @0x0000000002ac08d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TemplarAssassin_MeldArmor::~CDOTA_Modifier_TemplarAssassin_MeldArmor(
        CDOTA_Modifier_TemplarAssassin_MeldArmor *const this)
{
  this->_vptr_CDOTA_Buff = &off_442D9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TemplarAssassin_MeldArmor::~CDOTA_Modifier_TemplarAssassin_MeldArmor  (line 718, @0x0000000002ac08f0, libserver.so)  // inlines: ~CDOTA_Modifier_TemplarAssassin_MeldArmor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TemplarAssassin_MeldArmor::~CDOTA_Modifier_TemplarAssassin_MeldArmor(
        CDOTA_Modifier_TemplarAssassin_MeldArmor *const this)
{
  this->_vptr_CDOTA_Buff = &off_442D9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TemplarAssassin_MeldArmor::OnCreated  (line 736, @0x0000000002aa98c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_TemplarAssassin_MeldArmor::OnCreated(
        CDOTA_Modifier_TemplarAssassin_MeldArmor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_armor", -1, 0);
  else
    this->bonus_armor = 0;
}


// CDOTA_Modifier_TemplarAssassin_MeldArmor::DeclareFunctions  (line 753, @0x0000000002a78fc0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_TemplarAssassin_MeldArmor::DeclareFunctions(
        CDOTA_Modifier_TemplarAssassin_MeldArmor *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_TemplarAssassin_MeldArmor::GetModifierPhysicalArmorBonus  (line 760, @0x0000000002a78fe0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_MeldArmor::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_TemplarAssassin_MeldArmor *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::~CDOTA_Ability_TemplarAssassin_PsiBlades  (line 771, @0x0000000002ac6150, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::~CDOTA_Ability_TemplarAssassin_PsiBlades(
        CDOTA_Ability_TemplarAssassin_PsiBlades *const this)
{
  this->_vptr_IHandleEntity = &off_442DD30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::~CDOTA_Ability_TemplarAssassin_PsiBlades  (line 771, @0x0000000002ac6170, libserver.so)  // inlines: ~CDOTA_Ability_TemplarAssassin_PsiBlades
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::~CDOTA_Ability_TemplarAssassin_PsiBlades(
        CDOTA_Ability_TemplarAssassin_PsiBlades *const this)
{
  this->_vptr_IHandleEntity = &off_442DD30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::Schema_DynamicBinding  (line 773, @0x0000000002abb620, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_PsiBlades::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_PsiBlades *const this)
{
  return CDOTA_Ability_TemplarAssassin_PsiBlades::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 773, @0x0000000002abb630, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::DestructInstance  (line 773, @0x0000000002abb640, libserver.so)  // inlines: Destruct<CDOTA_Ability_TemplarAssassin_PsiBlades>
void __fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::FreeInstance  (line 773, @0x0000000002abb660, libserver.so)
void __fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::CanAllocate  (line 773, @0x0000000002abb680, libserver.so)
bool __fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 773, @0x0000000002abb690, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_PsiBlades::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_PsiBlades::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::AllocateInstance  (line 773, @0x0000000002abfa00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::ConstructInstance  (line 773, @0x0000000002ac31d0, libserver.so)  // inlines: CDOTA_Ability_TemplarAssassin_PsiBlades, Construct<CDOTA_Ability_TemplarAssassin_PsiBlades>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_442DD30;
  }
  return p;
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 773, @0x0000000002accb50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 773, @0x0000000002accb70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal  (line 773, @0x0000000002ae3650, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "templar_assassin_psi_blades", "CDOTA_Ability_TemplarAssassin_PsiBlades"
// globals: `guard variable for'CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass, CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass, __dso_handle, CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClassInfo, CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClassInfo
CEntityClass *__cdecl CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass);
    CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass._vptr_CEntityClass = off_442DCB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass);
    __cxa_atexit(
      CDOTA_Ability_TemplarAssassin_PsiBlades::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TemplarAssassin_PsiBladesClass != 0 )
    return &CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass;
  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClassInfo,
      "CDOTA_Ability_TemplarAssassin_PsiBlades",
      "templar_assassin_psi_blades",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClassInfo);
  }
  CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass.m_pClassInfo = &CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClassInfo;
  CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass.m_pBaseClassInfo = CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TemplarAssassin_PsiBladesClass = &CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass;
  CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClassInfo.m_pClass = &CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass;
  CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TemplarAssassin_PsiBladesClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TemplarAssassin_PsiBlades::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsiBladesClass;
}


// CDOTA_Ability_TemplarAssassin_PsiBlades::GetIntrinsicModifierName  (line 776, @0x0000000002abb6a0, libserver.so)
// strings: "modifier_templar_assassin_psi_blades"
const char *__fastcall CDOTA_Ability_TemplarAssassin_PsiBlades::GetIntrinsicModifierName(
        CDOTA_Ability_TemplarAssassin_PsiBlades *const this)
{
  return "modifier_templar_assassin_psi_blades";
}


// CDOTA_Modifier_TemplarAssassin_PsiBlades::~CDOTA_Modifier_TemplarAssassin_PsiBlades  (line 786, @0x0000000002ac0880, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TemplarAssassin_PsiBlades::~CDOTA_Modifier_TemplarAssassin_PsiBlades(
        CDOTA_Modifier_TemplarAssassin_PsiBlades *const this)
{
  this->_vptr_CDOTA_Buff = &off_442E7F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TemplarAssassin_PsiBlades::~CDOTA_Modifier_TemplarAssassin_PsiBlades  (line 786, @0x0000000002ac08a0, libserver.so)  // inlines: ~CDOTA_Modifier_TemplarAssassin_PsiBlades
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TemplarAssassin_PsiBlades::~CDOTA_Modifier_TemplarAssassin_PsiBlades(
        CDOTA_Modifier_TemplarAssassin_PsiBlades *const this)
{
  this->_vptr_CDOTA_Buff = &off_442E7F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TemplarAssassin_PsiBlades::IsHidden  (line 790, @0x0000000002abb6b0, libserver.so)
bool __fastcall CDOTA_Modifier_TemplarAssassin_PsiBlades::IsHidden(
        CDOTA_Modifier_TemplarAssassin_PsiBlades *const this)
{
  return 1;
}


// CDOTA_Modifier_TemplarAssassin_PsiBlades::OnCreated  (line 810, @0x0000000002aab540, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_attack_range", "attack_spill_range", "attack_spill_width"
void __fastcall CDOTA_Modifier_TemplarAssassin_PsiBlades::OnCreated(
        CDOTA_Modifier_TemplarAssassin_PsiBlades *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_range", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->attack_spill_range = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_attack_range = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->attack_spill_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_spill_range", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->attack_spill_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "attack_spill_width", -1, 0);
    return;
  }
LABEL_7:
  this->attack_spill_width = 0;
}


// CDOTA_Modifier_TemplarAssassin_PsiBlades::OnRefresh  (line 819, @0x0000000002aab470, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_attack_range", "attack_spill_range", "attack_spill_width"
void __fastcall CDOTA_Modifier_TemplarAssassin_PsiBlades::OnRefresh(
        CDOTA_Modifier_TemplarAssassin_PsiBlades *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_range", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->attack_spill_range = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_attack_range = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->attack_spill_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_spill_range", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->attack_spill_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "attack_spill_width", -1, 0);
    return;
  }
LABEL_7:
  this->attack_spill_width = 0;
}


// CDOTA_Modifier_TemplarAssassin_PsiBlades::DeclareFunctions  (line 828, @0x0000000002a79000, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_TemplarAssassin_PsiBlades::DeclareFunctions(
        CDOTA_Modifier_TemplarAssassin_PsiBlades *const this)
{
  this->m_Functions[137].__pfn = (&stru_10 + 697);
  this->m_Functions[137].__delta = 0;
  this->m_Functions[69].__pfn = (&stru_10 + 705);
  this->m_Functions[69].__delta = 0;
}


// CDOTA_Modifier_TemplarAssassin_PsiBlades::OnAttacked  (line 836, @0x0000000002a98480, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, FStrEq, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, String, TargetNPC, ToDOTABaseNPC, VectorNormalize2D, VectorSubtract, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_BaseNPC::FindReplacementSound, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle (16 total)
// strings: "Hero_TemplarAssassin.PsiBlade", "particles/units/heroes/hero_templar_assassin/templar_assassin_psi_blade.vpcf", "attach_hitloc", "npc_dota_unit_undying_tombstone"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_PsiBlades::OnAttacked(
        CDOTA_Modifier_TemplarAssassin_PsiBlades *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CEntityInstance *v8; // rax
  CEntityInstance *v9; // r15
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // rbx
  const char *m_pAsString; // rsi
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rbx
  const Vector *v15; // rax
  vec_t v16; // xmm1_4
  vec_t v17; // xmm0_4
  int attack_spill_range; // r12d
  __m128i v19; // xmm7
  int v20; // r12d
  float v21; // r12d
  const Vector *v22; // rbx
  CDOTA_BaseNPC *v23; // rax
  __int64 v24; // rbx
  CHandle<CBaseEntity> *v25; // rdx
  uint32 v26; // eax
  __int16 v27; // cx
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CDOTA_BaseNPC *v30; // r14
  const Vector *v31; // r12
  const Vector *v32; // rax
  float v33; // xmm3_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm3_4
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  const char *ReplacementSound; // rax
  CDOTA_BaseNPC *v41; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v43; // rax
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  float flDamage; // [rsp+2Ch] [rbp-74h]
  int flDamagea; // [rsp+2Ch] [rbp-74h]
  float y; // [rsp+38h] [rbp-68h]
  float v50; // [rsp+3Ch] [rbp-64h]
  Vector vToTarget; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hPotentialSpillTargets; // [rsp+50h] [rbp-50h] BYREF

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v8 = CEntityHandle::operator CEntityInstance *(&params->htarget);
          if ( v8 == 0 || (v9 = v8, BYTE3(v8[7]._vptr_IHandleEntity) == 0) )
            v9 = 0;
          v10 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
          if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
            v11 = v10;
          else
            v11 = 0;
          if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0
            && v9 != 0
            && (v9[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
            && v11 != 0
            && (*(v9->_vptr_IHandleEntity + 408))(v9) != 0 )
          {
            m_pAsString = v9->m_pEntity->m_designerName.u.m_pAsString;
            if ( m_pAsString == 0
              || m_pAsString != "npc_dota_unit_undying_tombstone"
              && strcmp(m_pAsString, "npc_dota_unit_undying_tombstone") != 0 )
            {
              Caster = CDOTA_Buff::GetCaster(this);
              AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
              v15 = CBaseEntity::GetAbsOrigin(v9);
              v16 = v15->x - AbsOrigin->x;
              v17 = v15->y - AbsOrigin->y;
              vToTarget.z = 0.0;
              vToTarget.x = v16;
              vToTarget.y = v17;
              VectorNormalize(&vToTarget);
              attack_spill_range = this->attack_spill_range;
              hPotentialSpillTargets.m_Size = 0;
              v19 = _mm_xor_ps(LODWORD(vToTarget.x), 0x80000000);
              v50 = *v19.m128i_i32;
              v20 = this->attack_spill_width + attack_spill_range;
              y = vToTarget.y;
              hPotentialSpillTargets.m_Memory.m_pMemory = 0;
              hPotentialSpillTargets.m_Memory.m_nAllocationCount = 0;
              hPotentialSpillTargets.m_Memory.m_nGrowSize = 0;
              *v19.m128i_i32 = v20;
              v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
              v22 = CBaseEntity::GetAbsOrigin(v9);
              v23 = CDOTA_Buff::GetCaster(this);
              FindUnitsInRadius(v23->m_iTeamNum.m_Value, v22, v9, v21, &hPotentialSpillTargets, 2, 19, 16, 0, 0);
              if ( hPotentialSpillTargets.m_Size > 0 )
              {
                v24 = 0;
                do
                {
                  v25 = &hPotentialSpillTargets.m_Memory.m_pMemory[v24];
                  v26 = v25->m_Index;
                  if ( v25->m_Index + 2 > 1 )
                  {
                    v27 = v25->m_Index;
                    v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
                    if ( v28 != 0 )
                    {
                      v29 = &v28[v27 & 0x1FF];
                      if ( v29 != 0 && v26 == v29->m_EHandle.m_Index )
                      {
                        v30 = v29->m_pInstance;
                        if ( v29->m_pInstance != 0 && v30->m_bIsDOTANPC )
                        {
                          v31 = CBaseEntity::GetAbsOrigin(v9);
                          v32 = CBaseEntity::GetAbsOrigin(v30);
                          v33 = v32->x - v31->x;
                          v34 = v32->y - v31->y;
                          v35 = v32->z - v31->z;
                          if ( this->attack_spill_width > fabs(((y * v33) + (v50 * v34)) + (0.0 * v35)) )
                          {
                            v36 = ((v33 * vToTarget.x) + (v34 * vToTarget.y)) + (v35 * vToTarget.z);
                            if ( v36 > 0.0 && this->attack_spill_range > v36 )
                            {
                              if ( LOBYTE(v9[71].m_pEntity) == 0 )
                              {
                                flDamage = params->fDamage;
                                Ability = CDOTA_Buff::GetAbility(this);
                                v38 = CDOTA_Buff::GetCaster(this);
                                ApplyDamage(v38, v30, Ability, flDamage, 4, 0);
                                v39 = CDOTA_Buff::GetCaster(this);
                                ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(
                                                     v39,
                                                     "Hero_TemplarAssassin.PsiBlade");
                                CDOTA_BaseNPC::UnitEmitSound(v9, ReplacementSound, 0.0, 0, 0);
                              }
                              v41 = CDOTA_Buff::GetCaster(this);
                              ParticleManager = GetParticleManager();
                              flDamagea = CDOTA_ParticleManager::CreateParticle(
                                            ParticleManager,
                                            "particles/units/heroes/hero_templar_assassin/templar_assassin_psi_blade.vpcf",
                                            2,
                                            0,
                                            0,
                                            v41);
                              v43 = GetParticleManager();
                              CDOTA_ParticleManager::SetParticleControlEnt(
                                v43,
                                flDamagea,
                                0,
                                v9,
                                5,
                                "attach_hitloc",
                                vec3_invalid,
                                1);
                              v44 = GetParticleManager();
                              CDOTA_ParticleManager::SetParticleControlEnt(
                                v44,
                                flDamagea,
                                1,
                                v30,
                                5,
                                "attach_hitloc",
                                vec3_invalid,
                                1);
                              v45 = GetParticleManager();
                              CDOTA_ParticleManager::ReleaseParticleIndex(v45, flDamagea);
                            }
                          }
                        }
                      }
                    }
                  }
                  ++v24;
                }
                while ( hPotentialSpillTargets.m_Size > v24 );
              }
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hPotentialSpillTargets);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_TemplarAssassin_PsiBlades::GetModifierAttackRangeBonus  (line 911, @0x0000000002a7d430, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_PsiBlades::GetModifierAttackRangeBonus(
        CDOTA_Modifier_TemplarAssassin_PsiBlades *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  *v3.m128i_i32 = this->bonus_attack_range;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::~CDOTA_Ability_TemplarAssassin_PsionicTrap  (line 925, @0x0000000002ac61a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::~CDOTA_Ability_TemplarAssassin_PsionicTrap(
        CDOTA_Ability_TemplarAssassin_PsionicTrap *const this)
{
  this->_vptr_IHandleEntity = &off_442EB70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::~CDOTA_Ability_TemplarAssassin_PsionicTrap  (line 925, @0x0000000002ac61c0, libserver.so)  // inlines: ~CDOTA_Ability_TemplarAssassin_PsionicTrap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::~CDOTA_Ability_TemplarAssassin_PsionicTrap(
        CDOTA_Ability_TemplarAssassin_PsionicTrap *const this)
{
  this->_vptr_IHandleEntity = &off_442EB70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::Schema_DynamicBinding  (line 927, @0x0000000002abb6c0, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_PsionicTrap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_PsionicTrap *const this)
{
  return CDOTA_Ability_TemplarAssassin_PsionicTrap::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 927, @0x0000000002abb6d0, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::DestructInstance  (line 927, @0x0000000002abb6e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_TemplarAssassin_PsionicTrap>
void __fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::FreeInstance  (line 927, @0x0000000002abb700, libserver.so)
void __fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::CanAllocate  (line 927, @0x0000000002abb720, libserver.so)
bool __fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 927, @0x0000000002abb730, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_PsionicTrap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_PsionicTrap::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::AllocateInstance  (line 927, @0x0000000002abfa40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::ConstructInstance  (line 927, @0x0000000002ac3200, libserver.so)  // inlines: CDOTA_Ability_TemplarAssassin_PsionicTrap, Construct<CDOTA_Ability_TemplarAssassin_PsionicTrap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_442EB70;
  }
  return p;
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 927, @0x0000000002accba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 927, @0x0000000002accbc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal  (line 927, @0x0000000002ae37a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "templar_assassin_psionic_trap", "CDOTA_Ability_TemplarAssassin_PsionicTrap"
// globals: `guard variable for'CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass, CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass, __dso_handle, CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClassInfo, CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClassInfo
CEntityClass *__cdecl CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass);
    CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass._vptr_CEntityClass = off_442EAF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass);
    __cxa_atexit(
      CDOTA_Ability_TemplarAssassin_PsionicTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass != 0 )
    return &CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass;
  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClassInfo,
      "CDOTA_Ability_TemplarAssassin_PsionicTrap",
      "templar_assassin_psionic_trap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClassInfo);
  }
  CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass.m_pClassInfo = &CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClassInfo;
  CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass.m_pBaseClassInfo = CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass = &CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass;
  CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClassInfo.m_pClass = &CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass;
  CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TemplarAssassin_PsionicTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_PsionicTrapClass;
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::GetAssociatedSecondaryAbilities  (line 933, @0x0000000002abb740, libserver.so)
// strings: "templar_assassin_trap"
const char *__fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_TemplarAssassin_PsionicTrap *const this)
{
  return "templar_assassin_trap";
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::OnUpgrade  (line 942, @0x0000000002a7a7b0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "templar_assassin_trap"
void __fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::OnUpgrade(
        CDOTA_Ability_TemplarAssassin_PsionicTrap *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "templar_assassin_trap", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::OnSpellStart  (line 956, @0x0000000002aa3c60, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, SetBlockCreepSpawn
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTAHeroList::LimitedUnitEnsureSpace, CDOTABaseAbility::GetCursorPosition, DOTA_CreateUnitByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::SetControllableByPlayer, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility (18 total)
// strings: "max_traps", "npc_dota_templar_assassin_psionic_trap", "trap_fade_time", "modifier_templar_assassin_trap", "fadetime", "templar_assassin_self_trap" (8 total)
void __fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::OnSpellStart(
        CDOTA_Ability_TemplarAssassin_PsionicTrap *const this)
{
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // r13d
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // r15
  CDOTA_BaseNPC *v7; // r12
  float v8; // xmm1_4
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  int v11; // eax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  Vector vLocation; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_traps", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTAHeroList::LimitedUnitEnsureSpace(
    &g_HeroList,
    Caster,
    EHeroLimitedUnitType::HERO_LIMITED_UNIT_TEMPLAR_ASSASSIN_TRAPS,
    LevelSpecialValue,
    1);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v7 = DOTA_CreateUnitByName("npc_dota_templar_assassin_psionic_trap", &vLocation, 0, v6, v5, m_Value);
  if ( v7 != 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "trap_fade_time", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_templar_assassin_trap");
    KeyValues::SetFloat(&kv, "fadetime", v8);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, v9, this, "modifier_templar_assassin_trap", &kv, 0);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = (*(v10->_vptr_IHandleEntity + 414))(v10);
    CDOTA_BaseNPC::SetControllableByPlayer(v7, v11, 0);
    v7->m_bBlocksCreepSpawn = 0;
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v7, "templar_assassin_self_trap", 0);
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
    vLocation = CDOTABaseAbility::GetCursorPosition(this);
    FindClearSpaceForUnit(v7, vLocation, 1);
    v13 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_TemplarAssassin.Trap.Cast", v13);
    DOTA_EmitSound(10, "Hero_TemplarAssassin.Trap", v7);
    KeyValues::~KeyValues(&kv);
  }
  v14 = CDOTABaseAbility::GetCaster(this);
  CDOTAHeroList::LimitedUnitTrack(&g_HeroList, v14, EHeroLimitedUnitType::HERO_LIMITED_UNIT_TEMPLAR_ASSASSIN_TRAPS, v7);
}


// CDOTA_Ability_TemplarAssassin_PsionicTrap::GetSlowDuration  (line 996, @0x0000000002a9bdf0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "templar_assassin_trap", "trap_duration"
float __fastcall CDOTA_Ability_TemplarAssassin_PsionicTrap::GetSlowDuration(
        CDOTA_Ability_TemplarAssassin_PsionicTrap *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "templar_assassin_trap", 0);
  if ( AbilityByName != 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "trap_duration", -1, 0);
  else
    return 0.0;
}


// CDOTA_Modifier_TemplarAssassin_Trap::~CDOTA_Modifier_TemplarAssassin_Trap  (line 1011, @0x0000000002ac07e0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TemplarAssassin_Trap::~CDOTA_Modifier_TemplarAssassin_Trap(
        CDOTA_Modifier_TemplarAssassin_Trap *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TemplarAssassin_Trap::~CDOTA_Modifier_TemplarAssassin_Trap  (line 1011, @0x0000000002ac0800, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_TemplarAssassin_Trap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TemplarAssassin_Trap::~CDOTA_Modifier_TemplarAssassin_Trap(
        CDOTA_Modifier_TemplarAssassin_Trap *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TemplarAssassin_Trap::IsHidden  (line 1015, @0x0000000002abb750, libserver.so)
bool __fastcall CDOTA_Modifier_TemplarAssassin_Trap::IsHidden(CDOTA_Modifier_TemplarAssassin_Trap *const this)
{
  return 1;
}


// CDOTA_Modifier_TemplarAssassin_Trap::GetEffectName  (line 1016, @0x0000000002abb760, libserver.so)
// strings: "particles/units/heroes/hero_templar_assassin/templar_assassin_trap.vpcf"
const char *__fastcall CDOTA_Modifier_TemplarAssassin_Trap::GetEffectName(
        CDOTA_Modifier_TemplarAssassin_Trap *const this)
{
  return "particles/units/heroes/hero_templar_assassin/templar_assassin_trap.vpcf";
}


// CDOTA_Modifier_TemplarAssassin_Trap::CheckState  (line 1027, @0x0000000002a7c6f0, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_TemplarAssassin_Trap::CheckState(
        CDOTA_Modifier_TemplarAssassin_Trap *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


// CDOTA_Modifier_TemplarAssassin_Trap::OnCreated  (line 1036, @0x0000000002a7c720, libserver.so)
// calls: CDOTA_Modifier_Invisible::OnCreated
void __fastcall CDOTA_Modifier_TemplarAssassin_Trap::OnCreated(
        CDOTA_Modifier_TemplarAssassin_Trap *const this,
        KeyValues *pKV)
{
  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
}


// CDOTA_Modifier_TemplarAssassin_Trap::OnDestroy  (line 1043, @0x0000000002a79040, libserver.so)
void __fastcall CDOTA_Modifier_TemplarAssassin_Trap::OnDestroy(CDOTA_Modifier_TemplarAssassin_Trap *const this)
{
  ;
}


// CDOTA_Ability_TemplarAssassin_Trap::~CDOTA_Ability_TemplarAssassin_Trap  (line 1054, @0x0000000002ac61f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_TemplarAssassin_Trap::~CDOTA_Ability_TemplarAssassin_Trap(
        CDOTA_Ability_TemplarAssassin_Trap *const this)
{
  this->_vptr_IHandleEntity = &off_442F9B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_TemplarAssassin_Trap::~CDOTA_Ability_TemplarAssassin_Trap  (line 1054, @0x0000000002ac6210, libserver.so)  // inlines: ~CDOTA_Ability_TemplarAssassin_Trap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_Trap::~CDOTA_Ability_TemplarAssassin_Trap(
        CDOTA_Ability_TemplarAssassin_Trap *const this)
{
  this->_vptr_IHandleEntity = &off_442F9B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_Trap::Schema_DynamicBinding  (line 1056, @0x0000000002abb770, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Trap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_Trap::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_Trap *const this)
{
  return CDOTA_Ability_TemplarAssassin_Trap::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1056, @0x0000000002abb780, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::DestructInstance  (line 1056, @0x0000000002abb790, libserver.so)  // inlines: Destruct<CDOTA_Ability_TemplarAssassin_Trap>
void __fastcall CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::FreeInstance  (line 1056, @0x0000000002abb7b0, libserver.so)
void __fastcall CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::CanAllocate  (line 1056, @0x0000000002abb7d0, libserver.so)
bool __fastcall CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1056, @0x0000000002abb7e0, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Trap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_Trap::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::AllocateInstance  (line 1056, @0x0000000002abfa80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::ConstructInstance  (line 1056, @0x0000000002ac3230, libserver.so)  // inlines: CDOTA_Ability_TemplarAssassin_Trap, Construct<CDOTA_Ability_TemplarAssassin_Trap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_442F9B0;
  }
  return p;
}


// CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1056, @0x0000000002accbf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1056, @0x0000000002accc10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal  (line 1056, @0x0000000002ae38f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "templar_assassin_trap", "CDOTA_Ability_TemplarAssassin_Trap"
// globals: `guard variable for'CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass, CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass, __dso_handle, CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClassInfo, CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClassInfo
CEntityClass *__cdecl CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass);
    CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass._vptr_CEntityClass = off_442F930;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass);
    __cxa_atexit(
      CDOTA_Ability_TemplarAssassin_Trap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TemplarAssassin_TrapClass != 0 )
    return &CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass;
  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClassInfo,
      "CDOTA_Ability_TemplarAssassin_Trap",
      "templar_assassin_trap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClassInfo);
  }
  CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass.m_pClassInfo = &CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClassInfo;
  CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass.m_pBaseClassInfo = CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TemplarAssassin_TrapClass = &CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass;
  CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClassInfo.m_pClass = &CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass;
  CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TemplarAssassin_TrapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TemplarAssassin_Trap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_TrapClass;
}


// CDOTA_Ability_TemplarAssassin_Trap::ProcsMagicStick  (line 1060, @0x0000000002abb7f0, libserver.so)
bool __fastcall CDOTA_Ability_TemplarAssassin_Trap::ProcsMagicStick(CDOTA_Ability_TemplarAssassin_Trap *const this)
{
  return 0;
}


// CDOTA_Ability_TemplarAssassin_Trap::GetAssociatedPrimaryAbilities  (line 1067, @0x0000000002abb800, libserver.so)
// strings: "templar_assassin_psionic_trap"
const char *__fastcall CDOTA_Ability_TemplarAssassin_Trap::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_TemplarAssassin_Trap *const this)
{
  return "templar_assassin_psionic_trap";
}


// CDOTA_Ability_TemplarAssassin_Trap::OnSpellStart  (line 1075, @0x0000000002aa7300, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, GetUnitName, IndexToIdentity, IsRealHero, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, KeyValues::KeyValues, KeyValues::SetFloat (20 total)
// strings: "npc_dota_templar_assassin_psionic_trap", "trap_radius", "trap_duration", "particles/units/heroes/hero_templar_assassin/templar_assassin_trap_explode.vpcf", "Hero_TemplarAssassin.Trap.Trigger", "Hero_TemplarAssassin.Trap.Explode" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_TemplarAssassin_Trap::OnSpellStart(CDOTA_Ability_TemplarAssassin_Trap *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v3; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v5; // rax
  CHandle<CBaseEntity> *m_pMemory; // rax
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rsi
  const char *m_pAsString; // rsi
  int LevelSpecialValue; // ebx
  __m128i v11; // xmm2
  float v12; // ebx
  const Vector *v13; // r12
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v17; // rbx
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  __int64 v21; // r12
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *v27; // r13
  float v28; // xmm0_4
  int v29; // r15d
  float v30; // xmm1_4
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC_Hero *v32; // r15
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC_Hero *v34; // rdi
  CDOTA_BaseNPC *m_pInstance; // [rsp+38h] [rbp-98h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+98h] [rbp-38h]

  hEntities.m_Memory.m_nAllocationCount = 0;
  v39 = __readfsqword(0x28u);
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  v5 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, AbsOrigin, Caster, -1.0, &hEntities, 1, 32, 0, 1, 0);
  if ( hEntities.m_Size <= 0 )
  {
LABEL_34:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  }
  else
  {
    m_pMemory = hEntities.m_Memory.m_pMemory;
    while ( 1 )
    {
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[m_pMemory->m_Index & 0x1FF];
          if ( v8 != 0 && m_pMemory->m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0 && BYTE3(v8->m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
              if ( m_pAsString != 0
                && (m_pAsString == "npc_dota_templar_assassin_psionic_trap"
                 || strcmp(m_pAsString, "npc_dota_templar_assassin_psionic_trap") == 0) )
              {
                break;
              }
            }
          }
        }
      }
      if ( ++m_pMemory == &hEntities.m_Memory.m_pMemory[hEntities.m_Size - 1 + 1] )
        goto LABEL_34;
    }
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "trap_radius", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "trap_duration", -1, 0);
    *v11.m128i_i32 = LevelSpecialValue;
    hTargets.m_Size = 0;
    hTargets.m_Memory.m_pMemory = 0;
    hTargets.m_Memory.m_nAllocationCount = 0;
    v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
    hTargets.m_Memory.m_nGrowSize = 0;
    v13 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v14 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v14->m_iTeamNum.m_Value, v13, m_pInstance, v12, &hTargets, 2, 19, 0, 0, 0);
    v15 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_templar_assassin/templar_assassin_trap_explode.vpcf",
                     2,
                     0,
                     0,
                     v15);
    v17 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v18, v13, 0, *&v17->x, v17->z);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v19, v13);
    v20 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_TemplarAssassin.Trap.Trigger", v20);
    DOTA_EmitSound(2, "Hero_TemplarAssassin.Trap.Explode", m_pInstance);
    if ( hTargets.m_Size > 0 )
    {
      v21 = 0;
      do
      {
        while ( 1 )
        {
          v22 = &hTargets.m_Memory.m_pMemory[v21];
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
                v27 = v26->m_pInstance;
                if ( v26->m_pInstance != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
                  break;
              }
            }
          }
          if ( ++v21 >= hTargets.m_Size )
            goto LABEL_33;
        }
        v28 = 0.0;
        if ( g_pGameRules != 0 )
          v28 = *&g_pGameRules[18].m_szQuestName[20];
        v29 = (v28 - m_pInstance->m_flCreationTime);
        KeyValues::KeyValues(&kv, "modifier_templar_assassin_trap_slow");
        KeyValues::SetFloat(&kv, "duration", v30);
        KeyValues::SetInt(&kv, "stage", v29);
        v31 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v27, v31, this, "modifier_templar_assassin_trap_slow", &kv, 0);
        if ( (v27[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(v27[71].m_pEntity) == 0 )
        {
          v32 = 0;
          if ( BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
            v32 = v27;
          v33 = CDOTABaseAbility::GetCaster(this);
          if ( v33 != 0 && (v33->m_iUnitType & 1) != 0 )
            v34 = v33;
          else
            v34 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v34,
            v32,
            kill_eater_event_t::kKillEaterEvent_TemplarAssassin_HeroesSlowed,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
        KeyValues::~KeyValues(&kv);
        ++v21;
      }
      while ( v21 < hTargets.m_Size );
    }
LABEL_33:
    UTIL_Remove(m_pInstance);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  }
}


// CDOTA_Ability_TemplarAssassin_Trap::CastFilterResult  (line 1133, @0x0000000002a99150, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Purge, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "templar_assassin_psionic_trap", "npc_dota_templar_assassin_psionic_trap"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Ability_TemplarAssassin_Trap::CastFilterResult(CDOTA_Ability_TemplarAssassin_Trap *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r14
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v6; // rax
  CHandle<CBaseEntity> *m_pMemory; // rdx
  CHandle<CBaseEntity> *v8; // r9
  CEntityIdentity *v9; // rsi
  CEntityIdentity *v10; // rsi
  CEntityInstance *m_pInstance; // rax
  const char *m_pAsString; // rsi
  bool v13; // zf
  int v14; // r13d
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-40h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindAbilityByName(Caster, "templar_assassin_psionic_trap", 0) == 0 )
    return 0;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, v3, -1.0, &hEntities, 1, 32, 0, 1, 0);
  if ( hEntities.m_Size <= 0 )
  {
LABEL_15:
    v14 = 23;
  }
  else
  {
    m_pMemory = hEntities.m_Memory.m_pMemory;
    v8 = &hEntities.m_Memory.m_pMemory[hEntities.m_Size - 1 + 1];
    while ( 1 )
    {
      while ( 1 )
      {
        if ( m_pMemory->m_Index + 2 > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[m_pMemory->m_Index & 0x1FF];
            if ( v10 != 0 && m_pMemory->m_Index == v10->m_EHandle.m_Index )
            {
              m_pInstance = v10->m_pInstance;
              if ( v10->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
                if ( m_pAsString != 0 )
                  break;
              }
            }
          }
        }
        if ( ++m_pMemory == v8 )
          goto LABEL_15;
      }
      if ( m_pAsString == "npc_dota_templar_assassin_psionic_trap" )
        break;
      v13 = strcmp(m_pAsString, "npc_dota_templar_assassin_psionic_trap") == 0;
      v14 = !v13;
      if ( v13 )
        goto LABEL_16;
      if ( ++m_pMemory == v8 )
        goto LABEL_15;
    }
    v14 = 0;
  }
LABEL_16:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v14;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v14;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  return v14;
}


// CDOTA_Ability_TemplarAssassin_Trap::GetCustomCastError  (line 1165, @0x0000000002a79050, libserver.so)
// strings: "#dota_hud_error_no_traps"
const char *__fastcall CDOTA_Ability_TemplarAssassin_Trap::GetCustomCastError(
        CDOTA_Ability_TemplarAssassin_Trap *const this)
{
  return "#dota_hud_error_no_traps";
}


// CDOTA_Modifier_TemplarAssassin_Trap_Slow::~CDOTA_Modifier_TemplarAssassin_Trap_Slow  (line 1176, @0x0000000002ac0790, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TemplarAssassin_Trap_Slow::~CDOTA_Modifier_TemplarAssassin_Trap_Slow(
        CDOTA_Modifier_TemplarAssassin_Trap_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4430470;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TemplarAssassin_Trap_Slow::~CDOTA_Modifier_TemplarAssassin_Trap_Slow  (line 1176, @0x0000000002ac07b0, libserver.so)  // inlines: ~CDOTA_Modifier_TemplarAssassin_Trap_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TemplarAssassin_Trap_Slow::~CDOTA_Modifier_TemplarAssassin_Trap_Slow(
        CDOTA_Modifier_TemplarAssassin_Trap_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4430470;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TemplarAssassin_Trap_Slow::IsDebuff  (line 1180, @0x0000000002abb810, libserver.so)
bool __fastcall CDOTA_Modifier_TemplarAssassin_Trap_Slow::IsDebuff(
        CDOTA_Modifier_TemplarAssassin_Trap_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_TemplarAssassin_Trap_Slow::GetEffectName  (line 1181, @0x0000000002abb820, libserver.so)
// strings: "particles/units/heroes/hero_templar_assassin/templar_assassin_trap_slow.vpcf"
const char *__fastcall CDOTA_Modifier_TemplarAssassin_Trap_Slow::GetEffectName(
        CDOTA_Modifier_TemplarAssassin_Trap_Slow *const this)
{
  return "particles/units/heroes/hero_templar_assassin/templar_assassin_trap_slow.vpcf";
}


// CDOTA_Modifier_TemplarAssassin_Trap_Slow::GetStatusEffectName  (line 1182, @0x0000000002abb830, libserver.so)
// strings: "particles/status_fx/status_effect_templar_slow.vpcf"
const char *__fastcall CDOTA_Modifier_TemplarAssassin_Trap_Slow::GetStatusEffectName(
        CDOTA_Modifier_TemplarAssassin_Trap_Slow *const this)
{
  return "particles/status_fx/status_effect_templar_slow.vpcf";
}


// CDOTA_Modifier_TemplarAssassin_Trap_Slow::StatusEffectPriority  (line 1183, @0x0000000002abb840, libserver.so)
int __fastcall CDOTA_Modifier_TemplarAssassin_Trap_Slow::StatusEffectPriority(
        CDOTA_Modifier_TemplarAssassin_Trap_Slow *const this)
{
  return 17;
}


// CDOTA_Modifier_TemplarAssassin_Trap_Slow::OnCreated  (line 1201, @0x0000000002aaac10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetInt
// strings: "movement_speed_bonus", "movement_speed_bonus_stage"
void __fastcall CDOTA_Modifier_TemplarAssassin_Trap_Slow::OnCreated(
        CDOTA_Modifier_TemplarAssassin_Trap_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->movement_speed_bonus = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    this->movement_speed_bonus_stage = 0.0;
    goto LABEL_4;
  }
  this->movement_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed_bonus", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  this->movement_speed_bonus_stage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                       v5,
                                       "movement_speed_bonus_stage",
                                       -1,
                                       0);
LABEL_4:
  this->stage = KeyValues::GetInt(pKV, "stage", 0);
}


// CDOTA_Modifier_TemplarAssassin_Trap_Slow::DeclareFunctions  (line 1210, @0x0000000002a79060, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_TemplarAssassin_Trap_Slow::DeclareFunctions(
        CDOTA_Modifier_TemplarAssassin_Trap_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_TemplarAssassin_Trap_Slow::GetModifierMoveSpeedBonus_Percentage  (line 1217, @0x0000000002a79080, libserver.so)  // inlines: Min<int>
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Trap_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_TemplarAssassin_Trap_Slow *const this,
        const CModifierParams *const params)
{
  int stage; // eax
  __int64 v3; // xmm0_8
  ModifierVariant_t result; // 0:rax.16

  stage = this->stage;
  v3 = 1086324736;
  if ( stage <= 5 )
    *&v3 = stage;
  result.m_szVal = 0;
  *&v3 = (*&v3 * this->movement_speed_bonus_stage) + this->movement_speed_bonus;
  *&result.m_eType = (v3 << 32) | 1;
  return result;
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::~CDOTA_Ability_TemplarAssassin_SelfTrap  (line 1228, @0x0000000002ac6240, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::~CDOTA_Ability_TemplarAssassin_SelfTrap(
        CDOTA_Ability_TemplarAssassin_SelfTrap *const this)
{
  this->_vptr_IHandleEntity = &off_44307D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::~CDOTA_Ability_TemplarAssassin_SelfTrap  (line 1228, @0x0000000002ac6260, libserver.so)  // inlines: ~CDOTA_Ability_TemplarAssassin_SelfTrap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::~CDOTA_Ability_TemplarAssassin_SelfTrap(
        CDOTA_Ability_TemplarAssassin_SelfTrap *const this)
{
  this->_vptr_IHandleEntity = &off_44307D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::Schema_DynamicBinding  (line 1230, @0x0000000002abb850, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_SelfTrap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_SelfTrap *const this)
{
  return CDOTA_Ability_TemplarAssassin_SelfTrap::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1230, @0x0000000002abb860, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::DestructInstance  (line 1230, @0x0000000002abb870, libserver.so)  // inlines: Destruct<CDOTA_Ability_TemplarAssassin_SelfTrap>
void __fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::FreeInstance  (line 1230, @0x0000000002abb890, libserver.so)
void __fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::CanAllocate  (line 1230, @0x0000000002abb8b0, libserver.so)
bool __fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1230, @0x0000000002abb8c0, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_SelfTrap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_SelfTrap::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::AllocateInstance  (line 1230, @0x0000000002abfac0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::ConstructInstance  (line 1230, @0x0000000002ac3260, libserver.so)  // inlines: CDOTA_Ability_TemplarAssassin_SelfTrap, Construct<CDOTA_Ability_TemplarAssassin_SelfTrap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44307D0;
  }
  return p;
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1230, @0x0000000002accc40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1230, @0x0000000002accc60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal  (line 1230, @0x0000000002ae3a40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "templar_assassin_self_trap", "CDOTA_Ability_TemplarAssassin_SelfTrap"
// globals: `guard variable for'CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass, CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass, __dso_handle, CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClassInfo, CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClassInfo
CEntityClass *__cdecl CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass);
    CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass._vptr_CEntityClass = off_4430750;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass);
    __cxa_atexit(
      CDOTA_Ability_TemplarAssassin_SelfTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TemplarAssassin_SelfTrapClass != 0 )
    return &CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass;
  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClassInfo,
      "CDOTA_Ability_TemplarAssassin_SelfTrap",
      "templar_assassin_self_trap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClassInfo);
  }
  CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass.m_pClassInfo = &CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClassInfo;
  CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass.m_pBaseClassInfo = CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TemplarAssassin_SelfTrapClass = &CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass;
  CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClassInfo.m_pClass = &CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass;
  CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TemplarAssassin_SelfTrapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TemplarAssassin_SelfTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_SelfTrapClass;
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::ProcsMagicStick  (line 1235, @0x0000000002abb8d0, libserver.so)
bool __fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::ProcsMagicStick(
        CDOTA_Ability_TemplarAssassin_SelfTrap *const this)
{
  return 0;
}


// CDOTA_Ability_TemplarAssassin_SelfTrap::OnSpellStart  (line 1242, @0x0000000002aa7860, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, KeyValues::KeyValues, KeyValues::SetFloat (20 total)
// strings: "trap_radius", "trap_duration", "particles/units/heroes/hero_templar_assassin/templar_assassin_trap_explode.vpcf", "Hero_TemplarAssassin.Trap.Trigger", "Hero_TemplarAssassin.Trap.Explode", "modifier_templar_assassin_trap_slow" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_TemplarAssassin_SelfTrap::OnSpellStart(
        CDOTA_Ability_TemplarAssassin_SelfTrap *const this)
{
  int LevelSpecialValue; // r13d
  __m128i v3; // xmm2
  float v4; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  unsigned __int16 v10; // dx
  int v11; // esi
  int v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *v15; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // rbx
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  __int64 v24; // r13
  int v25; // r12d
  CHandle<CBaseEntity> *v26; // rdx
  uint32 m_Index; // eax
  __int16 v28; // cx
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  float v31; // r15d
  int v32; // r15d
  float v33; // xmm1_4
  CDOTA_Ability_TemplarAssassin_SelfTrap *v34; // r15
  CDOTA_BaseNPC *v35; // rsi
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *v38; // [rsp+20h] [rbp-A0h]
  CBaseEntity *pCaster; // [rsp+28h] [rbp-98h]
  CDOTABaseAbility *pTrapAbility; // [rsp+30h] [rbp-90h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "trap_radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "trap_duration", -1, 0);
  *v3.m128i_i32 = LevelSpecialValue;
  hTargets.m_Size = 0;
  hTargets.m_Memory.m_pMemory = 0;
  hTargets.m_Memory.m_nAllocationCount = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  hTargets.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Caster, v4, &hTargets, 2, 19, 0, 0, 0);
  v9 = CDOTABaseAbility::GetCaster(this);
  if ( v9->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v10 = 0x7FFF;
    v11 = 0x7FFF;
  }
  else
  {
    v10 = v9->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v11 = v10;
  }
  v12 = (v9->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v10 & 0x7FFF;
  if ( (v12 + 2) > 1
    && (v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v11 >> 9]) != 0
    && (v14 = &v13[v11 & 0x1FF]) != 0
    && v12 == v14->m_EHandle.m_Index
    && (m_pInstance = v14->m_pInstance, v14->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    pTrapAbility = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "templar_assassin_trap", 0);
    pCaster = m_pInstance;
  }
  else
  {
    pCaster = 0;
    pTrapAbility = 0;
  }
  v15 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_templar_assassin/templar_assassin_trap_explode.vpcf",
               2,
               0,
               0,
               v15);
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = CBaseEntity::GetAbsOrigin(v18);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, Particle, 0, *&v19->x, v19->z);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
  v22 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_TemplarAssassin.Trap.Trigger", v22);
  v23 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(2, "Hero_TemplarAssassin.Trap.Explode", v23);
  if ( hTargets.m_Size > 0 )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      while ( 1 )
      {
        v26 = &hTargets.m_Memory.m_pMemory[v24];
        m_Index = hTargets.m_Memory.m_pMemory[v24].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v28 = v26->m_Index;
          v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v26->m_Index) >> 9) & 0x3F];
          if ( v29 != 0 )
          {
            v30 = &v29[v28 & 0x1FF];
            if ( v30 != 0 && m_Index == v30->m_EHandle.m_Index )
            {
              v38 = v30->m_pInstance;
              if ( v30->m_pInstance != 0 && BYTE3(v30->m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        ++v25;
        ++v24;
        if ( hTargets.m_Size <= v25 )
          goto LABEL_24;
      }
      v31 = 0.0;
      if ( g_pGameRules != 0 )
        v31 = *&g_pGameRules[18].m_szQuestName[20];
      v32 = (v31 - CDOTABaseAbility::GetCaster(this)->m_flCreationTime);
      KeyValues::KeyValues(&kv, "modifier_templar_assassin_trap_slow");
      KeyValues::SetFloat(&kv, "duration", v33);
      KeyValues::SetInt(&kv, "stage", v32);
      v34 = pTrapAbility;
      if ( pTrapAbility == 0 )
        v34 = this;
      v35 = pCaster;
      if ( pCaster == 0 )
        v35 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v38, v35, v34, "modifier_templar_assassin_trap_slow", &kv, 0);
      ++v25;
      ++v24;
      KeyValues::~KeyValues(&kv);
    }
    while ( hTargets.m_Size > v25 );
  }
LABEL_24:
  v36 = CDOTABaseAbility::GetCaster(this);
  UTIL_Remove(v36);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::~CDOTA_Ability_TemplarAssassin_Refraction_Holdout  (line 1297, @0x0000000002ac6290, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::~CDOTA_Ability_TemplarAssassin_Refraction_Holdout(
        CDOTA_Ability_TemplarAssassin_Refraction_Holdout *const this)
{
  this->_vptr_IHandleEntity = &off_44312D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::~CDOTA_Ability_TemplarAssassin_Refraction_Holdout  (line 1297, @0x0000000002ac62b0, libserver.so)  // inlines: ~CDOTA_Ability_TemplarAssassin_Refraction_Holdout
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::~CDOTA_Ability_TemplarAssassin_Refraction_Holdout(
        CDOTA_Ability_TemplarAssassin_Refraction_Holdout *const this)
{
  this->_vptr_IHandleEntity = &off_44312D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::Schema_DynamicBinding  (line 1299, @0x0000000002abb8e0, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Refraction_Holdout::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_Refraction_Holdout *const this)
{
  return CDOTA_Ability_TemplarAssassin_Refraction_Holdout::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1299, @0x0000000002abb8f0, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::DestructInstance  (line 1299, @0x0000000002abb900, libserver.so)  // inlines: Destruct<CDOTA_Ability_TemplarAssassin_Refraction_Holdout>
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::FreeInstance  (line 1299, @0x0000000002abb920, libserver.so)
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::CanAllocate  (line 1299, @0x0000000002abb940, libserver.so)
bool __fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1299, @0x0000000002abb950, libserver.so)
// globals: CDOTA_Ability_TemplarAssassin_Refraction_Holdout::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TemplarAssassin_Refraction_Holdout::s_pSchemaBinding;
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::AllocateInstance  (line 1299, @0x0000000002abfb00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::ConstructInstance  (line 1299, @0x0000000002ac3290, libserver.so)  // inlines: CDOTA_Ability_TemplarAssassin_Refraction_Holdout, Construct<CDOTA_Ability_TemplarAssassin_Refraction_Holdout>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44312D0;
  }
  return p;
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1299, @0x0000000002accc90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1299, @0x0000000002acccb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal  (line 1299, @0x0000000002ae3b90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "templar_assassin_refraction_holdout", "CDOTA_Ability_TemplarAssassin_Refraction_Holdout"
// globals: `guard variable for'CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClas, CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass, __dso_handle, CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClassInf, CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClassInfo
CEntityClass *__cdecl CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass);
    CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass._vptr_CEntityClass = off_4431250;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass);
    __cxa_atexit(
      CDOTA_Ability_TemplarAssassin_Refraction_Holdout::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass != 0 )
    return &CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass;
  if ( `guard variable for'CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClassInfo,
      "CDOTA_Ability_TemplarAssassin_Refraction_Holdout",
      "templar_assassin_refraction_holdout",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClassInfo);
  }
  CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass.m_pClassInfo = &CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClassInfo;
  CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass.m_pBaseClassInfo = CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass = &CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass;
  CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClassInfo.m_pClass = &CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass;
  CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TemplarAssassin_Refraction_Holdout::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TemplarAssassin_Refraction_HoldoutClass;
}


// CDOTA_Ability_TemplarAssassin_Refraction_Holdout::OnSpellStart  (line 1311, @0x0000000002a9af60, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::StartGesture, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "templar_assassin_refraction_holdout", "modifier_templar_assassin_refraction_holdout", "Hero_TemplarAssassin.Refraction"
void __fastcall CDOTA_Ability_TemplarAssassin_Refraction_Holdout::OnSpellStart(
        CDOTA_Ability_TemplarAssassin_Refraction_Holdout *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "templar_assassin_refraction_holdout");
    KeyValues::SetFloat(&kv, "duration", v2);
    Caster = CDOTABaseAbility::GetCaster(this);
    v4 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_templar_assassin_refraction_holdout", &kv, 0);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v5, 1597, 0.1, 0.1, 9, 0, 1.0);
    v6 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_TemplarAssassin.Refraction", v6);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::~CDOTA_Modifier_TemplarAssassin_Refraction_Holdout  (line 1334, @0x0000000002ac0740, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::~CDOTA_Modifier_TemplarAssassin_Refraction_Holdout(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this)
{
  this->_vptr_CDOTA_Buff = &off_4431D90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::~CDOTA_Modifier_TemplarAssassin_Refraction_Holdout  (line 1334, @0x0000000002ac0760, libserver.so)  // inlines: ~CDOTA_Modifier_TemplarAssassin_Refraction_Holdout
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::~CDOTA_Modifier_TemplarAssassin_Refraction_Holdout(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this)
{
  this->_vptr_CDOTA_Buff = &off_4431D90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::IsPurgable  (line 1350, @0x0000000002abb960, libserver.so)
bool __fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::IsPurgable(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this)
{
  return 0;
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::GetTexture  (line 1351, @0x0000000002abb970, libserver.so)
// strings: "templar_assassin_refraction_damage"
const char *__fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::GetTexture(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this)
{
  return "templar_assassin_refraction_damage";
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::ShouldSendToTeam  (line 1354, @0x0000000002ac7020, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetOpposingTeamNumber
bool __fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::ShouldSendToTeam(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this,
        int nTeamNumber)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  return CDOTA_BaseNPC::GetOpposingTeamNumber(Caster) != nTeamNumber;
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::OnCreated  (line 1370, @0x0000000002a9d500, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipientsByTeam, CDOTA_Buff::GetParent (20 total)
// strings: "damage_absorb", "particles/units/heroes/hero_templar_assassin/templar_assassin_refraction.vpcf", "attach_hitloc", "attach_attack1", "attach_attack2", "particles/units/heroes/hero_templar_assassin/templar_assassin_refraction_dmg.vpcf"
void __fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::OnCreated(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v9; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int v12; // r14d
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v15; // r15
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // r15
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // r15
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // r15
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // r14
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // r15
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // r15
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // r15
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // r15
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *pEnt; // [rsp+8h] [rbp-178h]
  CReliableBroadcastRecipientFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v36; // [rsp+148h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_damage, "bonus_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->damage_absorb, "damage_absorb");
  this->m_flDamageAbsorbed = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  Caster = CDOTA_Buff::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Caster);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
  v9 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, v9);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  v12 = CDOTA_ParticleManager::CreateParticle(
          ParticleManager,
          "particles/units/heroes/hero_templar_assassin/templar_assassin_refraction.vpcf",
          2,
          Parent,
          &filter,
          0);
  v13 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v12, 0, v15, 5, "attach_hitloc", *AbsOrigin, 1);
  v17 = CDOTA_Buff::GetParent(this);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, v12, 1, v17, 1, 0, vec3_invalid, 1);
  v19 = CDOTA_Buff::GetParent(this);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v20, v12, 2, v19, 5, "attach_attack1", vec3_invalid, 1);
  v21 = CDOTA_Buff::GetParent(this);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v22, v12, 3, v21, 5, "attach_attack2", vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, v12, 0, 0, -1, 0, 0);
  v23 = CDOTA_Buff::GetParent(this);
  v24 = GetParticleManager();
  LODWORD(v23) = CDOTA_ParticleManager::CreateParticle(
                   v24,
                   "particles/units/heroes/hero_templar_assassin/templar_assassin_refraction_dmg.vpcf",
                   2,
                   v23,
                   0,
                   0);
  v25 = CDOTA_Buff::GetParent(this);
  v26 = CBaseEntity::GetAbsOrigin(v25);
  pEnt = CDOTA_Buff::GetParent(this);
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v27, v23, 0, pEnt, 5, "attach_hitloc", *v26, 1);
  v28 = CDOTA_Buff::GetParent(this);
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v29, v23, 1, v28, 1, 0, vec3_invalid, 1);
  v30 = CDOTA_Buff::GetParent(this);
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v31, v23, 2, v30, 5, "attach_attack1", vec3_invalid, 1);
  v32 = CDOTA_Buff::GetParent(this);
  v33 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v33, v23, 3, v32, 5, "attach_attack2", vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, v23, 0, 0, -1, 0, 0);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::OnRefresh  (line 1402, @0x0000000002aaa2e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_absorb"
void __fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::OnRefresh(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_absorb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_absorb", -1, 0);
  else
    this->damage_absorb = 0;
  this->m_flDamageAbsorbed = 0.0;
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::DeclareFunctions  (line 1411, @0x0000000002a790c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::GetModifierTotal_ConstantBlock(CModifierParams const&)
void __fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::DeclareFunctions(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this)
{
  this->m_Functions[0].__pfn = (&stru_10 + 697);
  this->m_Functions[0].__delta = 0;
  this->m_Functions[89].__pfn = CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::GetModifierTotal_ConstantBlock;
  this->m_Functions[89].__delta = 0;
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::GetModifierPreAttack_BonusDamage  (line 1420, @0x0000000002a79100, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::GetModifierTotal_ConstantBlock  (line 1428, @0x0000000002a87f30, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound
// strings: "modifier_abaddon_borrowed_time", "particles/units/heroes/hero_templar_assassin/templar_assassin_refract_hit.vpcf", "attach_hitloc", "Hero_TemplarAssassin.Refraction.Absorb", "Hero_TemplarAssassin.Refraction.Damage"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::GetModifierTotal_ConstantBlock(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  __m128i fDamage_low; // xmm0
  CDOTA_BaseNPC *v8; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v11; // r15
  CDOTA_ParticleManager *v12; // rax
  __int64 v13; // r14
  CDOTA_BaseNPC *v14; // r15
  CDOTA_ParticleManager *v15; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  float damage_absorb; // xmm0_4
  float m_flDamageAbsorbed; // xmm1_4
  float v24; // xmm1_4
  const CBaseAnimating *m_pInstance; // r15
  CDOTA_ParticleManager *v26; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  ModifierVariant_t result; // 0:rax.16
  Vector v29; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v30; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (params->nDamageflags & 0x20) != 0 || params->fDamage == 0.0 )
  {
    *&result.m_eType = 1;
  }
  else
  {
    Parent = CDOTA_Buff::GetParent(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_abaddon_borrowed_time", 0);
    fDamage_low = 0u;
    if ( ModifierByName == 0 )
    {
      this->m_flDamageAbsorbed = this->m_flDamageAbsorbed + params->fDamage;
      v8 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_templar_assassin/templar_assassin_refract_hit.vpcf",
                   2,
                   v8,
                   0,
                   0);
      v11 = CDOTA_Buff::GetParent(this);
      v12 = GetParticleManager();
      v13 = *&vec3_invalid.x;
      vecFallbackPosition = vec3_invalid.z;
      CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 0, v11, 5, "attach_hitloc", vec3_invalid, 1);
      v14 = CDOTA_Buff::GetParent(this);
      v15 = GetParticleManager();
      v29.z = vecFallbackPosition;
      *&v29.x = v13;
      CDOTA_ParticleManager::SetParticleControlEnt(v15, Particle, 2, v14, 1, 0, v29, 1);
      m_Index = params->hattacker.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
        if ( v17 != 0 )
        {
          v18 = &v17[params->hattacker.m_Index & 0x1FF];
          if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index )
          {
            m_pInstance = v18->m_pInstance;
            if ( v18->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              v26 = GetParticleManager();
              v30.z = vecFallbackPosition;
              *&v30.x = v13;
              CDOTA_ParticleManager::SetParticleControlEnt(v26, Particle, 1, m_pInstance, 1, 0, v30, 1);
            }
          }
        }
      }
      v19 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v19, Particle);
      v20 = CDOTA_Buff::GetParent(this);
      DOTA_EmitSound(10, "Hero_TemplarAssassin.Refraction.Absorb", v20);
      v21 = CDOTA_Buff::GetParent(this);
      DOTA_EmitSound(10, "Hero_TemplarAssassin.Refraction.Damage", v21);
      damage_absorb = this->damage_absorb;
      m_flDamageAbsorbed = this->m_flDamageAbsorbed;
      if ( m_flDamageAbsorbed > damage_absorb )
      {
        v24 = m_flDamageAbsorbed - damage_absorb;
        fDamage_low = LODWORD(params->fDamage);
        *fDamage_low.m128i_i32 = *fDamage_low.m128i_i32 - v24;
      }
      else
      {
        fDamage_low = LODWORD(params->fDamage);
      }
    }
    *&result.m_eType = (_mm_cvtsi128_si32(fDamage_low) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::OnIntervalThink  (line 1468, @0x0000000002a7c770, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_TemplarAssassin_Refraction_Holdout::OnIntervalThink(
        CDOTA_Modifier_TemplarAssassin_Refraction_Holdout *const this)
{
  if ( this->m_flDamageAbsorbed > this->damage_absorb )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


