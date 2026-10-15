// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:38
class CDOTA_Unit_Hero_Winter_Wyvern : public CDOTA_BaseNPC_Hero {
public:

private:

	int m_nFXDeath;  // +0x16ec
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
	CDOTA_Unit_Hero_Winter_Wyvern(CDOTA_Unit_Hero_Winter_Wyvern &);
	CDOTA_Unit_Hero_Winter_Wyvern(CDOTA_Unit_Hero_Winter_Wyvern &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool ShouldDoFlyHeightVisual();
	virtual bool IsFlyingVisually();
	virtual const char * GetSoundSet();
	virtual const char * GetDeathEffectName();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual void OnDeath();
	virtual void OnAlive();
	virtual void OnDying();
	CDOTA_Unit_Hero_Winter_Wyvern();
	virtual void CalculateActivityModifiers(Activity);
	virtual ~CDOTA_Unit_Hero_Winter_Wyvern();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[488] ShouldDoFlyHeightVisual
	// vtable[489] IsFlyingVisually
	// vtable[460] GetSoundSet
	// vtable[502] GetDeathEffectName
	// vtable[8] Spawn
	// vtable[159] ModifyOrAppendCriteria
	// vtable[470] OnDeath
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[442] CalculateActivityModifiers
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:88
class C_CDOTA_Unit_Hero_Winter_Wyvern_MapInstall {
	C_CDOTA_Unit_Hero_Winter_Wyvern_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:171
class CDOTA_Ability_Winter_Wyvern_Arctic_Burn : public CDOTABaseAbility {
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
	CDOTA_Ability_Winter_Wyvern_Arctic_Burn(CDOTA_Ability_Winter_Wyvern_Arctic_Burn &);
	CDOTA_Ability_Winter_Wyvern_Arctic_Burn(CDOTA_Ability_Winter_Wyvern_Arctic_Burn &);
	CDOTA_Ability_Winter_Wyvern_Arctic_Burn();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetBehavior();
	virtual float GetCooldown(int);
	virtual const char * GetIntrinsicModifierName();
	virtual void OnToggle();
	virtual bool ProcsMagicStick();
	bool HasBurnTarget(CEntityIndex);
	void AddBurnTarget(CEntityIndex);
	virtual void OnInventoryContentsChanged();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Winter_Wyvern_Arctic_Burn();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[251] GetBehavior
	// vtable[242] GetCooldown
	// vtable[280] GetIntrinsicModifierName
	// vtable[270] OnToggle
	// vtable[239] ProcsMagicStick
	// vtable[283] OnInventoryContentsChanged
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:198
class C_CDOTA_Ability_Winter_Wyvern_Arctic_Burn_MapInstall {
	C_CDOTA_Ability_Winter_Wyvern_Arctic_Burn_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:335
class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:440
class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight : public CDOTA_Buff {
public:

private:

	float attack_point;  // +0xba8
	int attack_range_bonus;  // +0xbac
	int projectile_speed_bonus;  // +0xbb0
	int night_vision_bonus;  // +0xbb4
	string_t m_iszRangedAttackEffect;  // +0xbb8
	int max_attacks;  // +0xbc0
	int m_iNumAttacks;  // +0xbc4
	CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttack(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	ModifierVariant_t GetModifierAttackPointConstant(const CModifierParams &);
	ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	ModifierVariant_t GetModifierProjectileSpeedBonus(const CModifierParams &);
	ModifierVariant_t GetBonusNightVision(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t GetActivityModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight();

	// vtable[5] CheckState
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:653
class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow : public CDOTA_Buff {
public:

private:

	float percent_damage;  // +0xba8
	int move_slow;  // +0xbac
	CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:751
class CDOTA_Ability_Winter_Wyvern_Splinter_Blast : public CDOTABaseAbility {
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
	CDOTA_Ability_Winter_Wyvern_Splinter_Blast(CDOTA_Ability_Winter_Wyvern_Splinter_Blast &);
	CDOTA_Ability_Winter_Wyvern_Splinter_Blast(CDOTA_Ability_Winter_Wyvern_Splinter_Blast &);
	CDOTA_Ability_Winter_Wyvern_Splinter_Blast();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnProjectileThink(const Vector &);
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Winter_Wyvern_Splinter_Blast();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[291] OnProjectileThink
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[242] GetCooldown
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:767
class C_CDOTA_Ability_Winter_Wyvern_Splinter_Blast_MapInstall {
	C_CDOTA_Ability_Winter_Wyvern_Splinter_Blast_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:929
class CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow : public CDOTA_Buff {
public:

private:

	int bonus_movespeed;  // +0xba8
	CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:983
class CDOTA_Ability_Winter_Wyvern_Cold_Embrace : public CDOTABaseAbility {
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
	CDOTA_Ability_Winter_Wyvern_Cold_Embrace(CDOTA_Ability_Winter_Wyvern_Cold_Embrace &);
	CDOTA_Ability_Winter_Wyvern_Cold_Embrace(CDOTA_Ability_Winter_Wyvern_Cold_Embrace &);
	CDOTA_Ability_Winter_Wyvern_Cold_Embrace();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_Winter_Wyvern_Cold_Embrace();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[256] CastFilterResult
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:1001
class C_CDOTA_Ability_Winter_Wyvern_Cold_Embrace_MapInstall {
	C_CDOTA_Ability_Winter_Wyvern_Cold_Embrace_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:1060
class CDOTA_Modifier_Winter_Wyvern_Cold_Embrace : public CDOTA_Buff {
public:

private:

	int heal_additive;  // +0xbb0
	float heal_percentage;  // +0xbb4
	CDOTA_Modifier_Winter_Wyvern_Cold_Embrace();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void OnIntervalThink();
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationRate(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Winter_Wyvern_Cold_Embrace();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:1192
class CDOTA_Ability_Winter_Wyvern_Winters_Curse : public CDOTABaseAbility {
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
	CDOTA_Ability_Winter_Wyvern_Winters_Curse(CDOTA_Ability_Winter_Wyvern_Winters_Curse &);
	CDOTA_Ability_Winter_Wyvern_Winters_Curse(CDOTA_Ability_Winter_Wyvern_Winters_Curse &);
	CDOTA_Ability_Winter_Wyvern_Winters_Curse();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual int GetConceptRecipientType();
	virtual void OnSpellStart();
	virtual float GetAOERadius();
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Winter_Wyvern_Winters_Curse();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[299] GetConceptRecipientType
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:1209
class C_CDOTA_Ability_Winter_Wyvern_Winters_Curse_MapInstall {
	C_CDOTA_Ability_Winter_Wyvern_Winters_Curse_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:1258
class CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	ModifierVariant_t OnTakeDamageKillCredit(const CModifierParams &);
	virtual ~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:1378
class CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	EHANDLE m_hTarget;  // +0xbac
	int damage_amplification;  // +0xbb0
	int damage_reduction;  // +0xbb4
	CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual void SetAuraCreateData(KeyValues *);
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[43] SetAuraCreateData
	// vtable[42] GetAuraEntityReject
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_winter_wyvern.cpp:1499
class CDOTA_Modifier_Winter_Wyvern_Winters_Curse : public CDOTA_Buff {
public:

private:

	EHANDLE m_hZombieTarget;  // +0xba8
	EHANDLE m_hDesiredTarget;  // +0xbac
	int damage_reduction;  // +0xbb0
	int bonus_attack_speed;  // +0xbb4
	CDOTA_Modifier_Winter_Wyvern_Winters_Curse();
	virtual bool IsDebuff();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Winter_Wyvern_Winters_Curse();

	// vtable[12] IsDebuff
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[7] GetAttributes
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Winter_Wyvern::~CDOTA_Unit_Hero_Winter_Wyvern  (line 38, @0x0000000002d2d560, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::~CDOTA_Unit_Hero_Winter_Wyvern(
        CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  this->_vptr_IHandleEntity = &off_466D570;
  this->_vptr_INextBotEventResponder = &off_466E550;
  this->_vptr_CObstructionObject = &off_466E880;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Winter_Wyvern::~CDOTA_Unit_Hero_Winter_Wyvern  (line 38, @0x0000000002d2d5a0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Winter_Wyvern
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::~CDOTA_Unit_Hero_Winter_Wyvern(
        CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  this->_vptr_IHandleEntity = &off_466D570;
  this->_vptr_INextBotEventResponder = &off_466E550;
  this->_vptr_CObstructionObject = &off_466E880;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Winter_Wyvern::Schema_DynamicBinding  (line 40, @0x0000000002d21070, libserver.so)
// globals: CDOTA_Unit_Hero_Winter_Wyvern::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Winter_Wyvern::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  return CDOTA_Unit_Hero_Winter_Wyvern::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002d210a0, libserver.so)
// globals: CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002d210b0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Winter_Wyvern>
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002d210d0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002d210f0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002d21100, libserver.so)
// globals: CDOTA_Unit_Hero_Winter_Wyvern::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Winter_Wyvern::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002d256d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002d28a60, libserver.so)  // inlines: CDOTA_Unit_Hero_Winter_Wyvern, Construct<CDOTA_Unit_Hero_Winter_Wyvern>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1467) = -1;
    *p = &off_466D570;
    *(p + 236) = &off_466E550;
    *(p + 257) = &off_466E880;
  }
  return p;
}


// CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002d355b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002d357b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal  (line 40, @0x0000000002d4d360, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_winter_wyvern", "CDOTA_Unit_Hero_Winter_Wyvern"
// globals: `guard variable for'CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass, CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass, __dso_handle, CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClassInfo, CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass);
    CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass._vptr_CEntityClass = off_466D4F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Winter_Wyvern::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Winter_WyvernClass != 0 )
    return &CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClassInfo,
      "CDOTA_Unit_Hero_Winter_Wyvern",
      "npc_dota_hero_winter_wyvern",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClassInfo);
  }
  CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass.m_pClassInfo = &CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClassInfo;
  CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Winter_WyvernClass = &CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass;
  CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClassInfo.m_pClass = &CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass;
  CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Winter_WyvernClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Winter_Wyvern::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Winter_WyvernClass;
}


// CDOTA_Unit_Hero_Winter_Wyvern::ShouldDoFlyHeightVisual  (line 44, @0x0000000002d21110, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Winter_Wyvern::ShouldDoFlyHeightVisual(CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Winter_Wyvern::IsFlyingVisually  (line 45, @0x0000000002d32b50, libserver.so)  // inlines: HasFlyMovementCapability, InState
bool __fastcall CDOTA_Unit_Hero_Winter_Wyvern::IsFlyingVisually(CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  bool result; // al

  result = 1;
  if ( (this->m_iMoveCapabilities & 2) == 0 )
    return BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0);
  return result;
}


// CDOTA_Unit_Hero_Winter_Wyvern::GetDeathEffectName  (line 49, @0x0000000002d21120, libserver.so)
const char *__fastcall CDOTA_Unit_Hero_Winter_Wyvern::GetDeathEffectName(CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Winter_Wyvern::CalculateActivityModifiers  (line 63, @0x0000000002d2d7c0, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::AddActivityModifier
// strings: "fastest", "faster"
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::CalculateActivityModifiers(
        CDOTA_Unit_Hero_Winter_Wyvern *const this,
        Activity iActivity)
{
  float v3; // xmm0_4
  UtlSymId_t v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  v3 = CDOTA_BaseNPC::GetAttackSpeed(this) * 100.0;
  if ( v3 > 300.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fastest");
  }
  else if ( v3 >= 205.0 && v3 <= 300.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "faster");
  }
  else if ( v3 >= 155.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fast");
  }
}


// CDOTA_Unit_Hero_Winter_Wyvern::YouForgotToImplementOrDeclareServerClass  (line 88, @0x0000000002ccb010, libserver.so)
int __fastcall CDOTA_Unit_Hero_Winter_Wyvern::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Winter_Wyvern::GetServerClass  (line 88, @0x0000000002cde1f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Winter_Wyvern::GetServerClass(CDOTA_Unit_Hero_Winter_Wyvern *const this)
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


// CDOTA_Unit_Hero_Winter_Wyvern::OnAlive  (line 99, @0x0000000002ccb020, libserver.so)
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::OnAlive(CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  ;
}


// CDOTA_Unit_Hero_Winter_Wyvern::OnDying  (line 113, @0x0000000002ccb030, libserver.so)
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::OnDying(CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  ;
}


// CDOTA_Unit_Hero_Winter_Wyvern::OnDeath  (line 129, @0x0000000002ccb040, libserver.so)
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::OnDeath(CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  ;
}


// CDOTA_Unit_Hero_Winter_Wyvern::Spawn  (line 144, @0x0000000002ccf950, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::Spawn(
        CDOTA_Unit_Hero_Winter_Wyvern *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Unit_Hero_Winter_Wyvern::ModifyOrAppendCriteria  (line 149, @0x0000000002cd0b30, libserver.so)
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_BaseNPC::FindModifierByName, CResponseCriteriaSet::AppendCriteria
// strings: "modifier_winter_wyvern_arctic_burn_flight", "isflying"
void __fastcall CDOTA_Unit_Hero_Winter_Wyvern::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_Winter_Wyvern *const this,
        CResponseCriteriaSet *const set)
{
  float v4; // xmm2_4

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, set);
  CDOTA_BaseNPC::FindModifierByName(this, "modifier_winter_wyvern_arctic_burn_flight", 0);
  CResponseCriteriaSet::AppendCriteria(set, "isflying", 1.0, v4);
}


// CDOTA_Unit_Hero_Winter_Wyvern::GetSoundSet  (line 157, @0x0000000002ccc0f0, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetSoundSet
// strings: "modifier_winter_wyvern_arctic_burn_flight", "Hero_Winter_Wyvern.ArcticBurn"
const char *__fastcall CDOTA_Unit_Hero_Winter_Wyvern::GetSoundSet(CDOTA_Unit_Hero_Winter_Wyvern *const this)
{
  if ( CDOTA_BaseNPC::FindModifierByName(this, "modifier_winter_wyvern_arctic_burn_flight", 0) != 0 )
    return "Hero_Winter_Wyvern.ArcticBurn";
  else
    return CDOTA_BaseNPC::GetSoundSet(this);
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::~CDOTA_Ability_Winter_Wyvern_Arctic_Burn  (line 171, @0x0000000002d45f20, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::~CDOTA_Ability_Winter_Wyvern_Arctic_Burn(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  this->_vptr_IHandleEntity = &off_466E950;
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&this->m_BurnedTargets);
  if ( (this->m_BurnedTargets.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CEntityIndex,int>::Purge(&this->m_BurnedTargets.m_Memory),
        (this->m_BurnedTargets.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_BurnedTargets.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::~CDOTA_Ability_Winter_Wyvern_Arctic_Burn  (line 171, @0x0000000002d45f90, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Winter_Wyvern_Arctic_Burn, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::~CDOTA_Ability_Winter_Wyvern_Arctic_Burn(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  this->_vptr_IHandleEntity = &off_466E950;
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&this->m_BurnedTargets);
  if ( (this->m_BurnedTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_BurnedTargets.m_Memory);
    if ( (this->m_BurnedTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&this->m_BurnedTargets.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::Schema_DynamicBinding  (line 173, @0x0000000002d21130, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Arctic_Burn::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::Schema_DynamicBinding(
        const CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Arctic_Burn::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 173, @0x0000000002d21140, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::DestructInstance  (line 173, @0x0000000002d21150, libserver.so)  // inlines: Destruct<CDOTA_Ability_Winter_Wyvern_Arctic_Burn>
void __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::FreeInstance  (line 173, @0x0000000002d21170, libserver.so)
void __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::CanAllocate  (line 173, @0x0000000002d21190, libserver.so)
bool __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 173, @0x0000000002d211a0, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Arctic_Burn::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Arctic_Burn::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::AllocateInstance  (line 173, @0x0000000002d25710, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::ConstructInstance  (line 173, @0x0000000002d321e0, libserver.so)  // inlines: CDOTA_Ability_Winter_Wyvern_Arctic_Burn, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Winter_Wyvern_Arctic_Burn>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_466E950;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 173, @0x0000000002d34ef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 173, @0x0000000002d34f10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal  (line 173, @0x0000000002d4bd10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "winter_wyvern_arctic_burn", "CDOTA_Ability_Winter_Wyvern_Arctic_Burn"
// globals: `guard variable for'CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass, CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass, __dso_handle, CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClassInfo, CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClassInfo
CEntityClass *__cdecl CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass);
    CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass._vptr_CEntityClass = off_466E8D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass);
    __cxa_atexit(
      CDOTA_Ability_Winter_Wyvern_Arctic_Burn::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass != 0 )
    return &CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass;
  if ( `guard variable for'CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClassInfo,
      "CDOTA_Ability_Winter_Wyvern_Arctic_Burn",
      "winter_wyvern_arctic_burn",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClassInfo);
  }
  CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass.m_pClassInfo = &CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClassInfo;
  CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass.m_pBaseClassInfo = CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass = &CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass;
  CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClassInfo.m_pClass = &CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass;
  CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Arctic_BurnClass;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetIntrinsicModifierName  (line 180, @0x0000000002d211b0, libserver.so)
// strings: "modifier_winter_wyvern_frost_attack"
const char *__fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetIntrinsicModifierName(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  return "modifier_winter_wyvern_frost_attack";
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::YouForgotToImplementOrDeclareServerClass  (line 198, @0x0000000002ccb050, libserver.so)
int __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  return 0;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetServerClass  (line 198, @0x0000000002cde5f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetServerClass(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
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


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetBehavior  (line 208, @0x0000000002cce740, libserver.so)  // inlines: GetAbilityData, GetBehavior
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetBehavior(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return 4194820;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return m_pAbilityData->m_iAbilityBehavior;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::ProcsMagicStick  (line 219, @0x0000000002cce6e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::ProcsMagicStick(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster);
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::OnInventoryContentsChanged  (line 226, @0x0000000002ccf8e0, libserver.so)  // inlines: OnInventoryContentsChanged
// calls: CDOTABaseAbility::InitBaseValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::ToggleAbility
void __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::OnInventoryContentsChanged(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::InitBaseValues(this);
  if ( this->m_bToggleState.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( !CDOTA_BaseNPC::HasScepter(Caster) )
      CDOTABaseAbility::ToggleAbility(this);
  }
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetCooldown  (line 239, @0x0000000002cce700, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown
float __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetCooldown(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return 0.0;
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::OnToggle  (line 252, @0x0000000002ccde40, libserver.so)
// calls: CDOTABaseAbility::OnToggle, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, __stack_chk_fail (13 total)
// strings: "modifier_winter_wyvern_arctic_burn_flight", "Hero_Winter_Wyvern.ArcticBurn.Cast", "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_start.vpcf"
void __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::OnToggle(CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rbx
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  CDOTABaseAbility::OnToggle(this);
  if ( this->m_bToggleState.m_Value )
  {
    KeyValues::KeyValues(&kv, "modifier_winter_wyvern_arctic_burn_flight");
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_winter_wyvern_arctic_burn_flight", &kv, 0);
    v4 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_Winter_Wyvern.ArcticBurn.Cast", 0.0, 0, 0);
    v5 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v5) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_start.vpcf",
                    2,
                    v5,
                    0,
                    0);
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v8, v5, 0, v7, 1, 0, vec3_invalid, 1);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v9, v5);
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    v10 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v10, "modifier_winter_wyvern_arctic_burn_flight");
  }
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::OnSpellStart  (line 277, @0x0000000002cf56c0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::RemoveAll, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues (14 total)
// strings: "modifier_winter_wyvern_arctic_burn_flight", "Hero_Winter_Wyvern.ArcticBurn.Cast", "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_start.vpcf"
void __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::OnSpellStart(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // rbx
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&this->m_BurnedTargets);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_winter_wyvern_arctic_burn_flight");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_winter_wyvern_arctic_burn_flight", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_Winter_Wyvern.ArcticBurn.Cast", 0.0, 0, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_start.vpcf",
                  2,
                  v6,
                  0,
                  0);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, v6, 0, v8, 1, 0, vec3_invalid, 1);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, v6);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::HasBurnTarget  (line 298, @0x0000000002cec540, libserver.so)  // inlines: Find, HasElement
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
// callers: CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttackLanded
bool __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::HasBurnTarget(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this,
        CEntityIndex nTarget)
{
  int m_Size; // ecx
  CEntityIndex *m_pMemory; // rdx
  int v4; // eax
  CDOTA_BaseNPC *Caster; // rax

  m_Size = this->m_BurnedTargets.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_BurnedTargets.m_Memory.m_pMemory;
  if ( nTarget.m_Data != m_pMemory->m_Data )
  {
    v4 = 0;
    while ( ++v4 != m_Size )
    {
      ++m_pMemory;
      if ( nTarget.m_Data == m_pMemory->m_Data )
      {
        if ( v4 < 0 )
          return 0;
        goto LABEL_8;
      }
    }
    return 0;
  }
LABEL_8:
  Caster = CDOTABaseAbility::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster);
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::AddBurnTarget  (line 303, @0x0000000002d172d0, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIndex>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CEntityIndex, int>::Grow
void __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::AddBurnTarget(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this,
        CEntityIndex nTarget)
{
  __int64 m_Size; // r12
  int v5; // eax
  CEntityIndex *v6; // rax

  m_Size = this->m_BurnedTargets.m_Size;
  v5 = this->m_BurnedTargets.m_Size;
  if ( m_Size == this->m_BurnedTargets.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CEntityIndex,int>::Grow(&this->m_BurnedTargets.m_Memory, 1);
    v5 = this->m_BurnedTargets.m_Size;
  }
  this->m_BurnedTargets.m_Size = v5 + 1;
  v6 = &this->m_BurnedTargets.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    v6->m_Data = nTarget.m_Data;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetAbilityDamageToTargetOverInterval  (line 311, @0x0000000002d04250, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "percent_damage"
__int64 __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    fIntervalb = (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "percent_damage", -1, 0) / 100.0) * fIntervala;
    fIntervalc = fIntervalb * CBaseEntity::GetHealth(pTarget);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalc);
  }
  return result;
}


// CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetSlowDuration  (line 326, @0x0000000002cf69b0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Winter_Wyvern_Arctic_Burn::GetSlowDuration(
        CDOTA_Ability_Winter_Wyvern_Arctic_Burn *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack  (line 335, @0x0000000002d33230, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_466F410;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_InFlightAttackRecords.m_Memory,
        CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory),
        (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<short,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack  (line 335, @0x0000000002d33460, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_466F410;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::IsHidden  (line 340, @0x0000000002d211c0, libserver.so)
bool __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::IsHidden(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack *const this)
{
  return 1;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::IsPurgable  (line 341, @0x0000000002d211d0, libserver.so)
bool __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::IsPurgable(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack *const this)
{
  return 0;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::DeclareFunctions  (line 357, @0x0000000002ccb060, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttack(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttackFail(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::DeclareFunctions(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttackFail;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttackFail  (line 369, @0x0000000002cf2c40, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttackFail(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord);
  return 1uLL;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttack  (line 382, @0x0000000002d19d90, libserver.so)  // inlines: AddToTail, Attacker, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CUtlMemory<short int, int>::Grow
// strings: "modifier_winter_wyvern_arctic_burn_flight"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttack(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // rdi
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  __int64 m_Size; // rbx
  int v17; // edx
  __int16 *v18; // rdx
  CDOTA_AttackRecord *pAttackRecord; // [rsp+8h] [rbp-28h]

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = params->hattacker.m_Index;
    if ( v9 + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[params->hattacker.m_Index & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          v12 = v11->m_pInstance;
          if ( v11->m_pInstance != 0
            && v12->m_bIsDOTANPC
            && CDOTA_BaseNPC::FindModifierByName(v12, "modifier_winter_wyvern_arctic_burn_flight", 0) != 0 )
          {
            iRecord = params->iRecord;
            AttackRecordsManager = GetAttackRecordsManager();
            RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
            m_Size = this->m_InFlightAttackRecords.m_Size;
            if ( m_Size == this->m_InFlightAttackRecords.m_Memory.m_nAllocationCount )
            {
              pAttackRecord = RecordByIndex;
              CUtlMemory<short,int>::Grow(&this->m_InFlightAttackRecords.m_Memory, 1);
              v17 = this->m_InFlightAttackRecords.m_Size;
              RecordByIndex = pAttackRecord;
            }
            else
            {
              v17 = this->m_InFlightAttackRecords.m_Size;
            }
            this->m_InFlightAttackRecords.m_Size = v17 + 1;
            v18 = &this->m_InFlightAttackRecords.m_Memory.m_pMemory[m_Size];
            if ( v18 != 0 )
              *v18 = RecordByIndex->m_iRecord;
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttackLanded  (line 400, @0x0000000002d16f70, libserver.so)  // inlines: AddBurnTarget, AddToTail, Attacker, AttackerNPC, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, __dynamic_cast, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CEntityInstance::GetEntityIndex, CDOTA_Ability_Winter_Wyvern_Arctic_Burn::HasBurnTarget, DotaRetrieveAbilityValue<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (15 total)
// strings: "modifier_winter_wyvern_arctic_burn_slow"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Ability_Winter_Wyvern_Arctic_Burn
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack::OnAttackLanded(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Frost_Attack *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // r13
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // r15
  CDOTABaseAbility *Ability; // rax
  CDOTA_Ability_Winter_Wyvern_Arctic_Burn *v18; // r14
  bool v19; // bl
  CEntityIndex v20; // eax
  CDOTABaseAbility *v21; // rax
  float v22; // xmm1_4
  CDOTABaseAbility *v23; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v25; // eax
  __int64 m_Size; // rbx
  int32 m_Data; // r12d
  int v28; // eax
  CEntityIndex *v29; // rdx
  float damage_duration; // [rsp+Ch] [rbp-54h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-38h]

  m_pInstance = 0;
  v32 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
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
    if ( v13 + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[params->hattacker.m_Index & 0x1FF];
        if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
        {
          v16 = v15->m_pInstance;
          if ( v15->m_pInstance != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 && v12 != 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            if ( Ability != 0 )
            {
              v18 = __dynamic_cast(
                      Ability,
                      &`typeinfo for'CDOTABaseAbility,
                      &`typeinfo for'CDOTA_Ability_Winter_Wyvern_Arctic_Burn,
                      0);
              if ( v18 != 0 )
              {
                v19 = CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(
                        &this->m_InFlightAttackRecords,
                        &params->iRecord);
                v20.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
                if ( !CDOTA_Ability_Winter_Wyvern_Arctic_Burn::HasBurnTarget(v18, v20)
                  && v19
                  && HIBYTE(v12[7].m_CScriptComponent) != HIBYTE(v16[7].m_CScriptComponent)
                  && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
                  && (*(v12->_vptr_IHandleEntity + 403))(v12) == 0
                  && (BYTE1(v12[58]._vptr_IHandleEntity) & 2) == 0
                  && LOBYTE(v16[71].m_pEntity) == 0 )
                {
                  v21 = CDOTA_Buff::GetAbility(this);
                  DotaRetrieveAbilityValue<float>(v21, &damage_duration, "damage_duration");
                  KeyValues::KeyValues(&kv, "modifier_winter_wyvern_arctic_burn_slow");
                  KeyValues::SetFloat(&kv, "duration", v22);
                  v23 = CDOTA_Buff::GetAbility(this);
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(v12, Caster, v23, "modifier_winter_wyvern_arctic_burn_slow", &kv, 0);
                  v25.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
                  m_Size = v18->m_BurnedTargets.m_Size;
                  m_Data = v25.m_Data;
                  v28 = v18->m_BurnedTargets.m_Size;
                  if ( m_Size == v18->m_BurnedTargets.m_Memory.m_nAllocationCount )
                  {
                    CUtlMemory<CEntityIndex,int>::Grow(&v18->m_BurnedTargets.m_Memory, 1);
                    v28 = v18->m_BurnedTargets.m_Size;
                  }
                  v18->m_BurnedTargets.m_Size = v28 + 1;
                  v29 = &v18->m_BurnedTargets.m_Memory.m_pMemory[m_Size];
                  if ( v29 != 0 )
                    v29->m_Data = m_Data;
                  KeyValues::~KeyValues(&kv);
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


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight  (line 440, @0x0000000002d26600, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this)
{
  this->_vptr_CDOTA_Buff = &off_466F730;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight  (line 440, @0x0000000002d26620, libserver.so)  // inlines: ~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this)
{
  this->_vptr_CDOTA_Buff = &off_466F730;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::IsPurgable  (line 447, @0x0000000002d211e0, libserver.so)
bool __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::IsPurgable(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this)
{
  return 0;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetHeroEffectName  (line 456, @0x0000000002d211f0, libserver.so)
// strings: "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetHeroEffectName(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this)
{
  return "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_hero_effect.vpcf";
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::HeroEffectPriority  (line 457, @0x0000000002d21200, libserver.so)
int __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::HeroEffectPriority(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this)
{
  return 100;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnCreated  (line 480, @0x0000000002cfba20, libserver.so)  // inlines: CUtlSymbolLarge, GetRangedProjectileName, SetRangedProjectileName, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::AddParticle, CDOTA_BaseNPC::StartGesture (14 total)
// strings: "night_vision_bonus", "attack_point", "max_attacks", "attack_range_bonus", "projectile_speed_bonus", "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_buff.vpcf" (17 total)
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnCreated(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  float v7; // xmm1_4
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r13
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v17; // r15
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // r14
  CDOTA_BaseNPC *v21; // r15
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const Vector *v24; // r14
  CDOTA_BaseNPC *v25; // r15
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // r14
  CDOTA_BaseNPC *v29; // r15
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // r12
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // r14
  CDOTA_ParticleManager *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  const Vector *v37; // r13
  CDOTA_BaseNPC *v38; // r14
  CDOTA_ParticleManager *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  const Vector *v41; // r13
  CDOTA_BaseNPC *v42; // r14
  CDOTA_ParticleManager *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  const Vector *v45; // r13
  CDOTA_BaseNPC *v46; // r14
  CDOTA_ParticleManager *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  const Vector *v49; // r13
  CDOTA_BaseNPC *v50; // r14
  CDOTA_ParticleManager *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  const Vector *v53; // r13
  CDOTA_BaseNPC *v54; // r14
  CDOTA_ParticleManager *v55; // rax
  CDOTA_BaseNPC *v56; // rbx
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-44h]
  UtlSymLargeId_t v58; // [rsp+10h] [rbp-40h]
  Vector v59; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->night_vision_bonus, "night_vision_bonus");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v4, &this->attack_point, "attack_point");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->max_attacks, "max_attacks");
  this->m_iNumAttacks = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    CDOTA_Buff::StartIntervalThink(this, 1.0, v7);
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->attack_range_bonus, "attack_range_bonus");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->projectile_speed_bonus, "projectile_speed_bonus");
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_buff.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = GetParticleManager();
  v14 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v13, Parent, 0, v12, 1, 0, vec3_invalid, 1);
  v15 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTA_Buff::GetParent(this);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, Parent, 1, v17, 5, "attach_hitloc", *AbsOrigin, 1);
  v19 = CDOTA_Buff::GetParent(this);
  v20 = CBaseEntity::GetAbsOrigin(v19);
  v21 = CDOTA_Buff::GetParent(this);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v22, Parent, 2, v21, 5, "attach_attack1", *v20, 1);
  v23 = CDOTA_Buff::GetParent(this);
  v24 = CBaseEntity::GetAbsOrigin(v23);
  v25 = CDOTA_Buff::GetParent(this);
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v26, Parent, 3, v25, 5, "attach_eye_l", *v24, 1);
  v27 = CDOTA_Buff::GetParent(this);
  v28 = CBaseEntity::GetAbsOrigin(v27);
  v29 = CDOTA_Buff::GetParent(this);
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v30, Parent, 4, v29, 5, "attach_eye_r", *v28, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  if ( !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    v31 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v31, 1510, 0.1, 0.1, 9, 0, 1.0);
    v32 = CDOTA_Buff::GetParent(this);
    v33 = GetParticleManager();
    LODWORD(v32) = CDOTA_ParticleManager::CreateParticle(
                     v33,
                     "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_flying.vpcf",
                     2,
                     v32,
                     0,
                     0);
    v34 = CDOTA_Buff::GetParent(this);
    v35 = GetParticleManager();
    v59.z = vecFallbackPosition;
    *&v59.x = v14;
    CDOTA_ParticleManager::SetParticleControlEnt(v35, v32, 0, v34, 1, 0, v59, 1);
    v36 = CDOTA_Buff::GetParent(this);
    v37 = CBaseEntity::GetAbsOrigin(v36);
    v38 = CDOTA_Buff::GetParent(this);
    v39 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v39, v32, 1, v38, 5, "attach_spine_1", *v37, 1);
    v40 = CDOTA_Buff::GetParent(this);
    v41 = CBaseEntity::GetAbsOrigin(v40);
    v42 = CDOTA_Buff::GetParent(this);
    v43 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v43, v32, 2, v42, 5, "attach_spine_2", *v41, 1);
    v44 = CDOTA_Buff::GetParent(this);
    v45 = CBaseEntity::GetAbsOrigin(v44);
    v46 = CDOTA_Buff::GetParent(this);
    v47 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v47, v32, 3, v46, 5, "attach_spine_3", *v45, 1);
    v48 = CDOTA_Buff::GetParent(this);
    v49 = CBaseEntity::GetAbsOrigin(v48);
    v50 = CDOTA_Buff::GetParent(this);
    v51 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v51, v32, 4, v50, 5, "attach_spine_4", *v49, 1);
    v52 = CDOTA_Buff::GetParent(this);
    v53 = CBaseEntity::GetAbsOrigin(v52);
    v54 = CDOTA_Buff::GetParent(this);
    v55 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v55, v32, 5, v54, 5, "attach_spine_5", *v53, 1);
    CDOTA_Buff::AddParticle(this, v32, 0, 0, -1, 0, 0);
  }
  this->m_iszRangedAttackEffect.u.m_Id = CDOTA_Buff::GetCaster(this)->m_iszAutoAttackRangedParticle.u.m_Id;
  v56 = CDOTA_Buff::GetCaster(this);
  MakeEntitySystemString("particles/units/heroes/hero_winter_wyvern/winter_wyvern_arctic_attack.vpcf");
  v56->m_iszAutoAttackRangedParticle.u.m_Id = v58;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnRefresh  (line 524, @0x0000000002d0a8e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "night_vision_bonus", "attack_point", "attack_range_bonus", "projectile_speed_bonus"
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnRefresh(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->night_vision_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "night_vision_bonus", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->night_vision_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->attack_point = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "attack_point", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->attack_range_bonus = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->attack_point = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->attack_range_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "attack_range_bonus", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->projectile_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "projectile_speed_bonus", -1, 0);
    return;
  }
LABEL_9:
  this->projectile_speed_bonus = 0;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnIntervalThink  (line 534, @0x0000000002d0a600, libserver.so)  // inlines: DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::SpendMana
// strings: "mana_cost_scepter"
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnIntervalThink(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this)
{
  int LevelSpecialValue; // r12d
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  __m128i v5; // xmm1
  CDOTABaseAbility *v6; // r13
  float v7; // r12d
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *v9; // rax

  LevelSpecialValue = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "mana_cost_scepter", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  *v5.m128i_i32 = LevelSpecialValue;
  v6 = v4;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::SpendMana(Parent, v7, v6, 0);
  if ( CDOTA_Buff::GetAbility(this)->m_bToggleState.m_Value && v7 >= CDOTA_Buff::GetParent(this)->m_flMana.m_Value )
  {
    v9 = CDOTA_Buff::GetAbility(this);
    (*(v9->_vptr_IHandleEntity + 270))(v9);
  }
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnDestroy  (line 553, @0x0000000002d0d920, libserver.so)  // inlines: DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, SetRangedProjectileName, String, ToCStr, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, MakeEntitySystemString, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::StartGesture, CBaseEntity::StopSound
// strings: "tree_destruction_radius", "modifier_winter_wyvern_cold_embrace", "Hero_Winter_Wyvern.ArcticBurn.Cast"
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnDestroy(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this)
{
  int LevelSpecialValue; // r12d
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v5; // r13d
  CDOTA_BaseNPC *Parent; // rax
  Vector *AbsOrigin; // rax
  unsigned int v8; // edx
  const char *m_pAsString; // r13
  float v10; // xmm3_4
  CDOTA_BaseNPC *v11; // r14
  CDOTA_BaseNPC *v12; // rax
  unsigned int v13; // r13d
  CDOTA_BaseNPC *v14; // rax
  float v15; // xmm3_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  UtlSymLargeId_t v20; // [rsp+0h] [rbp-30h]
  Vector v21; // 0:xmm0_8.8,8:xmm1_4.4

  LevelSpecialValue = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "tree_destruction_radius", -1, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v8 = v5;
  m_pAsString = "";
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v8, *AbsOrigin, LevelSpecialValue, v10);
  if ( this->m_iszRangedAttackEffect.u.m_Id != 0 )
    m_pAsString = this->m_iszRangedAttackEffect.u.m_pAsString;
  v11 = CDOTA_Buff::GetCaster(this);
  MakeEntitySystemString(m_pAsString);
  v11->m_iszAutoAttackRangedParticle.u.m_Id = v20;
  if ( !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    v16 = CDOTA_Buff::GetParent(this);
    if ( (*(v16->_vptr_IHandleEntity + 408))(v16) != 0 )
    {
      v17 = CDOTA_Buff::GetParent(this);
      if ( CDOTA_BaseNPC::FindModifierByName(v17, "modifier_winter_wyvern_cold_embrace", 0) == 0 )
      {
        v18 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::StartGesture(v18, 1682, 0.1, 0.1, 9, 0, 1.0);
        v19 = CDOTA_Buff::GetParent(this);
        CBaseEntity::StopSound(v19, "Hero_Winter_Wyvern.ArcticBurn.Cast");
      }
    }
  }
  v12 = CDOTA_Buff::GetCaster(this);
  v13 = (*(v12->_vptr_IHandleEntity + 414))(v12);
  v14 = CDOTA_Buff::GetParent(this);
  v21 = *CBaseEntity::GetAbsOrigin(v14);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v13, v21, 150.0, v15);
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnAttack  (line 576, @0x0000000002cd8b10, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnAttack(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13

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
          && !params->bNoCooldown )
        {
          ++this->m_iNumAttacks;
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::DeclareFunctions  (line 595, @0x0000000002ccb0c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnAttack(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierAttackPointConstant(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetActivityModifiers(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierAttackRangeBonus(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierProjectileSpeedBonus(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetBonusNightVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::DeclareFunctions(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[27].__delta = 0;
  this->m_Functions[27].__pfn = CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierAttackPointConstant;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetActivityModifiers;
  this->m_Functions[69].__pfn = CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierAttackRangeBonus;
  this->m_Functions[72].__pfn = CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierProjectileSpeedBonus;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[69].__delta = 0;
  this->m_Functions[72].__delta = 0;
  this->m_Functions[97].__pfn = CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetBonusNightVision;
  this->m_Functions[97].__delta = 0;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierAttackPointConstant  (line 607, @0x0000000002ccb160, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierAttackPointConstant(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->attack_point) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierAttackRangeBonus  (line 614, @0x0000000002ccb180, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierAttackRangeBonus(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_range_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierProjectileSpeedBonus  (line 621, @0x0000000002ccb1a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetModifierProjectileSpeedBonus(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->projectile_speed_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetBonusNightVision  (line 628, @0x0000000002ccb1c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetBonusNightVision(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->night_vision_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetActivityModifiers  (line 635, @0x0000000002ccb1e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::GetActivityModifiers(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "flying";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::CheckState  (line 642, @0x0000000002ccb200, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight::CheckState(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x3000000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFCFFFFFFLL;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow  (line 653, @0x0000000002d265b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_466FA50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow  (line 653, @0x0000000002d265d0, libserver.so)  // inlines: ~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::~CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_466FA50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::GetStatusEffectName  (line 666, @0x0000000002d21210, libserver.so)
// strings: "particles/status_fx/status_effect_wyvern_arctic_burn.vpcf"
const char *__fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::GetStatusEffectName(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow *const this)
{
  return "particles/status_fx/status_effect_wyvern_arctic_burn.vpcf";
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::StatusEffectPriority  (line 667, @0x0000000002d21220, libserver.so)
int __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::StatusEffectPriority(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow *const this)
{
  return 15;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::OnCreated  (line 678, @0x0000000002d00820, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin (13 total)
// strings: "special_bonus_unique_winter_wyvern_1", "percent_damage", "tick_rate", "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_slow.vpcf", "attach_hitloc", "attach_attack1"
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::OnCreated(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r13
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v17; // r15
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // r14
  CDOTA_ParticleManager *v20; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->move_slow, "move_slow");
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_winter_wyvern_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->move_slow += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->percent_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "percent_damage", -1, 0);
  else
    this->percent_damage = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( v7 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "tick_rate", -1, 0);
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v8);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_winter_wyvern/wyvern_arctic_burn_slow.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = GetParticleManager();
  v14 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v13, Parent, 0, v12, 1, 0, vec3_invalid, 1);
  v15 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
  v17 = CDOTA_Buff::GetParent(this);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, Parent, 1, v17, 5, "attach_hitloc", *AbsOrigin, 1);
  v19 = CDOTA_Buff::GetParent(this);
  v20 = GetParticleManager();
  *&v22.x = v14;
  v22.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v20, Parent, 2, v19, 5, "attach_attack1", v22, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::OnRefresh  (line 704, @0x0000000002d0a440, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "special_bonus_unique_winter_wyvern_1", "percent_damage"
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::OnRefresh(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->move_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_slow", -1, 0);
  else
    this->move_slow = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_winter_wyvern_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->move_slow += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->percent_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "percent_damage", -1, 0);
  else
    this->percent_damage = 0.0;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::OnIntervalThink  (line 721, @0x0000000002ccd890, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::OnIntervalThink(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]
  float flDamagea; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 403))(Parent) == 0 )
  {
    flDamage = 0.0099999998 * this->percent_damage;
    v3 = CDOTA_Buff::GetParent(this);
    flDamagea = flDamage * CBaseEntity::GetHealth(v3);
    Ability = CDOTA_Buff::GetAbility(this);
    v5 = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, v5, Ability, flDamagea, 2, 0);
    v7 = CDOTA_Buff::GetParent(this);
    SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v7, flDamagea, 0);
  }
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::DeclareFunctions  (line 735, @0x0000000002ccb220, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::DeclareFunctions(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::GetModifierMoveSpeedBonus_Percentage  (line 742, @0x0000000002ccb240, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->move_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::~CDOTA_Ability_Winter_Wyvern_Splinter_Blast  (line 751, @0x0000000002d2c860, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::~CDOTA_Ability_Winter_Wyvern_Splinter_Blast(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast *const this)
{
  this->_vptr_IHandleEntity = &off_466FDB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::~CDOTA_Ability_Winter_Wyvern_Splinter_Blast  (line 751, @0x0000000002d2c880, libserver.so)  // inlines: ~CDOTA_Ability_Winter_Wyvern_Splinter_Blast
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::~CDOTA_Ability_Winter_Wyvern_Splinter_Blast(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast *const this)
{
  this->_vptr_IHandleEntity = &off_466FDB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::Schema_DynamicBinding  (line 753, @0x0000000002d21230, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Splinter_Blast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::Schema_DynamicBinding(
        const CDOTA_Ability_Winter_Wyvern_Splinter_Blast *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Splinter_Blast::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 753, @0x0000000002d21240, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::DestructInstance  (line 753, @0x0000000002d21250, libserver.so)  // inlines: Destruct<CDOTA_Ability_Winter_Wyvern_Splinter_Blast>
void __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::FreeInstance  (line 753, @0x0000000002d21270, libserver.so)
void __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::CanAllocate  (line 753, @0x0000000002d21290, libserver.so)
bool __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 753, @0x0000000002d212a0, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Splinter_Blast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Splinter_Blast::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::AllocateInstance  (line 753, @0x0000000002d25750, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::ConstructInstance  (line 753, @0x0000000002d297b0, libserver.so)  // inlines: CDOTA_Ability_Winter_Wyvern_Splinter_Blast, Construct<CDOTA_Ability_Winter_Wyvern_Splinter_Blast>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_466FDB0;
    *(p + 229) = -1;
  }
  return p;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 753, @0x0000000002d34f40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 753, @0x0000000002d34f60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal  (line 753, @0x0000000002d4be60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "winter_wyvern_splinter_blast", "CDOTA_Ability_Winter_Wyvern_Splinter_Blast"
// globals: `guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass, CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass, __dso_handle, CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClassInfo, CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClassInfo
CEntityClass *__cdecl CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass);
    CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass._vptr_CEntityClass = off_466FD30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass);
    __cxa_atexit(
      CDOTA_Ability_Winter_Wyvern_Splinter_Blast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass != 0 )
    return &CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass;
  if ( `guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClassInfo,
      "CDOTA_Ability_Winter_Wyvern_Splinter_Blast",
      "winter_wyvern_splinter_blast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClassInfo);
  }
  CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass.m_pClassInfo = &CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClassInfo;
  CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass.m_pBaseClassInfo = CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass = &CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass;
  CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClassInfo.m_pClass = &CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass;
  CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Splinter_BlastClass;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::YouForgotToImplementOrDeclareServerClass  (line 767, @0x0000000002ccb260, libserver.so)
int __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast *const this)
{
  return 0;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetServerClass  (line 767, @0x0000000002cddc30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetServerClass(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast *const this)
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


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetCooldown  (line 777, @0x0000000002cfffc0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_winter_wyvern_2"
float __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetCooldown(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_winter_wyvern_2", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::OnSpellStart  (line 792, @0x0000000002d03190, libserver.so)  // inlines: CEntityHandle, CHandle, Color, DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, VectorNormalize2D, VectorSubtract, operator-, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorTarget, VectorNormalize, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "projectile_max_time", "particles/units/heroes/hero_winter_wyvern/wyvern_splinter.vpcf", "Hero_Winter_Wyvern.SplinterBlast.Cast", "Hero_Winter_Wyvern.SplinterBlast.Projectile"
void __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::OnSpellStart(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast *const this)
{
  int LevelSpecialValue; // r12d
  float v3; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  CBaseEntity *CursorTarget; // rax
  const Vector *v7; // rax
  vec_t v8; // xmm3_4
  vec_t v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  CBaseEntity *v19; // rax
  CEntityIdentity *v20; // rdx
  int v21; // eax
  __int16 v22; // cx
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  float projectile_max_time; // [rsp+Ch] [rbp-A4h]
  Vector vDirection; // [rsp+10h] [rbp-A0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+20h] [rbp-90h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-28h]

  v28 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "projectile_max_time", -1, 0);
  if ( v3 != 0.0 )
  {
    projectile_max_time = v3;
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v7 = CBaseEntity::GetAbsOrigin(CursorTarget);
    v8 = v7->x - AbsOrigin->x;
    v9 = v7->y - AbsOrigin->y;
    vDirection.z = 0.0;
    vDirection.x = v8;
    vDirection.y = v9;
    v10 = VectorNormalize(&vDirection);
    v11 = LevelSpecialValue;
    v12 = 0.0;
    if ( (LevelSpecialValue * projectile_max_time) <= v10 )
      v11 = v10 / projectile_max_time;
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.pAttackRecord = 0;
    info.iSourceAttachment = 1;
    info.bProvidesVision = 0;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.iVisionTeamNumber = -1;
    info.vSourceLoc.y = y;
    z = vec3_origin.z;
    info.pszEffectName = "particles/units/heroes/hero_winter_wyvern/wyvern_splinter.vpcf";
    info.vSourceLoc.z = z;
    info.iVisionRadius = 0;
    info.bDrawsOnMinimap = 0;
    info.iMoveSpeed = v11;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.bServerOnly = 0;
    info.pAbility = this;
    info.bDodgeable = 0;
    if ( g_pGameRules != 0 )
      v12 = *&g_pGameRules[18].m_szQuestName[20];
    info.flMaxImpactTime = projectile_max_time + v12;
    v15 = CDOTABaseAbility::GetCaster(this);
    if ( v15 != 0 && (m_pEntity = v15->m_pEntity) != 0 )
    {
      v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v18 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v18 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v17 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    v19 = CDOTABaseAbility::GetCursorTarget(this);
    if ( v19 != 0 && (v20 = v19->m_pEntity) != 0 )
    {
      v21 = (v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1);
      v22 = 0x7FFF;
      if ( v20->m_EHandle.m_Index != -1 )
        v22 = v20->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hTarget.m_Index) = v22 | info.hTarget.m_Index & 0x8000;
      info.hTarget.m_Index = (v21 << 15) | info.hTarget.m_Index & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    info.iSourceAttachment = 1;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    v23 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v23, "Hero_Winter_Wyvern.SplinterBlast.Cast", 0.0, 0, 0);
    v24 = CDOTABaseAbility::GetCaster(this);
    this->m_nProjectileSound = CDOTA_BaseNPC::UnitEmitSound(
                                 v24,
                                 "Hero_Winter_Wyvern.SplinterBlast.Projectile",
                                 0.0,
                                 0,
                                 0);
  }
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::OnProjectileThink  (line 829, @0x0000000002cdd950, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetSoundEventParam, SetValue, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::SetSoundEventParam, CRecipientFilter::~CRecipientFilter, operator delete [], operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::OnProjectileThink(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast *const this,
        const Vector *const vLocation)
{
  __m128i z_low; // xmm0
  __m128i y_low; // xmm1
  int v6; // r15d
  int v7; // r14d
  SndOpEventGuid_t m_nProjectileSound; // r15
  CSoundOpGameSystem *v9; // r14
  SosFieldValueMem_t *v10; // rax
  CSosFieldData fieldData; // [rsp+10h] [rbp-2D0h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+30h] [rbp-2B0h] BYREF
  CRecipientFilter v13; // [rsp+170h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+2A8h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  z_low = LODWORD(vLocation->z);
  fieldData.m_pData = 0;
  y_low = LODWORD(vLocation->y);
  v6 = _mm_cvtsi128_si32(z_low);
  *&vLocation = vLocation->x;
  v7 = _mm_cvtsi128_si32(y_low);
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v10 = operator new[](0xCu);
  fieldData.m_pData = v10;
  fieldData.m_nAllocSize = 12;
  *v10 = vLocation;
  *(v10 + 1) = v7;
  *(v10 + 2) = v6;
  m_nProjectileSound = this->m_nProjectileSound;
  v9 = g_pSoundOpGameSystem;
  CRecipientFilter::CRecipientFilter(&v13);
  v13._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v13);
  v13._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v13);
  CSoundOpGameSystem::SetSoundEventParam(v9, &v13, m_nProjectileSound, "position", &fieldData, 0, 0);
  v13._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v13);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::OnProjectileHit_ExtraData  (line 837, @0x0000000002d06b80, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, InState, InValidate, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Purge, Set, SetBool, StopSoundEvent, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sTrackingProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __stack_chk_fail, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, CDOTA_BaseNPC::TriggerSpellAbsorb, CBaseEntity::GetAbsOrigin (24 total)
// strings: "split_radius", "modifier_winter_wyvern_splinter_blast_slow", "Hero_Winter_Wyvern.SplinterBlast.Splinter", "splinter", "Hero_Winter_Wyvern.SplinterBlast.Target", "secondary_projectile_speed" (7 total)
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::OnProjectileHit_ExtraData(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  int v5; // eax
  unsigned __int64 v6; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int LevelSpecialValue; // r15d
  unsigned __int64 m_Value; // rax
  int v14; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  __m128i v18; // xmm1
  float v19; // r15d
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v21; // rax
  CSoundOpGameSystem *v22; // r14
  __int64 v23; // r13
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityInstance *v26; // r14
  CEntityIdentity *v27; // rdx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v31; // edx
  __int16 v32; // cx
  CEntityIdentity *v33; // rdx
  int v34; // eax
  __int16 v35; // cx
  CHandle<CBaseEntity> *v36; // rdx
  uint32 m_Index; // eax
  CDOTA_BaseNPC *v38; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-1B0h] BYREF
  KeyValues kv_0; // [rsp+50h] [rbp-190h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v42; // [rsp+1A8h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  v5 = *hTarget;
  if ( (*hTarget + 2) <= 1 )
    return 0;
  v6 = *hTarget;
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
  if ( v7 == 0 )
    return 0;
  v8 = &v7[v6 & 0x1FF];
  if ( v8 == 0 )
    return 0;
  if ( v5 != v8->m_EHandle.m_Index )
    return 0;
  m_pInstance = v8->m_pInstance;
  if ( v8->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return 0;
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "split_radius", -1, 0);
  if ( pExtraData != 0 )
  {
    m_Value = m_pInstance->m_nUnitState64.m_Value;
    if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
    {
      v14 = (*(this->_vptr_IHandleEntity + 247))(this);
      Caster = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(Caster, m_pInstance, this, v14, 2, 0);
      KeyValues::KeyValues(&info, "modifier_winter_wyvern_splinter_blast_slow");
      KeyValues::SetFloat(&info, "duration", v16);
      v17 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v17, this, "modifier_winter_wyvern_splinter_blast_slow", &info, 0);
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Winter_Wyvern.SplinterBlast.Splinter", 0.0, 0, 0);
      KeyValues::~KeyValues(&info);
    }
    return 0;
  }
  if ( CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
    return 0;
  *v18.m128i_i32 = LevelSpecialValue;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v21 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v21->m_iTeamNum.m_Value, AbsOrigin, m_pInstance, v19, &entities, 2, 19, 80, 0, 0);
  KeyValues::KeyValues(&kv_0, "wyvern_splinter_blast");
  KeyValues::SetInt(&kv_0, "splinter", 1);
  CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Winter_Wyvern.SplinterBlast.Target", 0.0, 0, 0);
  v22 = g_pSoundOpGameSystem;
  if ( this->m_nProjectileSound.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&info);
    info.pszEffectName = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&info);
    info.pszEffectName = &off_3FCB130;
    CRecipientFilter::MakeReliable(&info);
    CSoundOpGameSystem::StopSoundEvent(v22, &info, this->m_nProjectileSound);
    info.pszEffectName = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&info);
    this->m_nProjectileSound.m_nGuid.m_Data = 0;
    this->m_nProjectileSound.m_hStackHash = -1;
  }
  v23 = 0;
  if ( entities.m_Size > 0 )
  {
    while ( 1 )
    {
      v36 = &entities.m_Memory.m_pMemory[v23];
      m_Index = v36->m_Index;
      if ( v36->m_Index + 2 <= 1 )
        break;
      v24 = v36->m_Index;
      v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v36->m_Index) >> 9) & 0x3F];
      if ( v25 == 0 )
        break;
      v26 = 0;
      v27 = &v25[v24 & 0x1FF];
      if ( v27 == 0 )
        goto LABEL_21;
      if ( m_Index != v27->m_EHandle.m_Index )
        goto LABEL_21;
      v38 = v27->m_pInstance;
      if ( v27->m_pInstance == 0 )
        goto LABEL_21;
      if ( !v38->m_bIsDOTANPC )
        goto LABEL_21;
      v26 = v27->m_pInstance;
      if ( m_pInstance != v38 )
        goto LABEL_21;
LABEL_31:
      if ( entities.m_Size <= ++v23 )
        goto LABEL_36;
    }
    v26 = 0;
LABEL_21:
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.pAttackRecord = 0;
    info.iMoveSpeed = 0;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.iSourceAttachment = 1;
    info.vSourceLoc.y = y;
    z = vec3_origin.z;
    info.bProvidesVision = 0;
    info.vSourceLoc.z = z;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = 0;
    info.bDrawsOnMinimap = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = "particles/units/heroes/hero_winter_wyvern/wyvern_splinter_blast.vpcf";
    info.pAbility = this;
    info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "secondary_projectile_speed", -1, 0);
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v31 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v32 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v32 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v32 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v31 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    if ( v26 != 0 && (v33 = v26->m_pEntity) != 0 )
    {
      v34 = (v33->m_EHandle.m_Index >> 15) - (v33->m_flags & 1);
      v35 = 0x7FFF;
      if ( v33->m_EHandle.m_Index != -1 )
        v35 = v33->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hTarget.m_Index) = v35 | info.hTarget.m_Index & 0x8000;
      info.hTarget.m_Index = (v34 << 15) | info.hTarget.m_Index & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    info.iSourceAttachment = 3;
    info.pKVExtraData = &kv_0;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    goto LABEL_31;
  }
LABEL_36:
  KeyValues::~KeyValues(&kv_0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  return 0;
}


// CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval  (line 899, @0x0000000002d07260, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_release, __cxa_atexit
// strings: "split_radius"
// globals: `guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Winter_Wyvern_Splinter_Blast *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  CDOTA_Bot *m_pBot; // rdi
  int v9; // r12d

  if ( eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
    return 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "split_radius", -1, 0);
  if ( `guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities) != 0 )
  {
    CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size = 0;
    CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nGrowSize = 0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
    __cxa_atexit(
      CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
      &CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
      &_dso_handle);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
  m_pBot = pTarget->m_pBot;
  if ( m_pBot != 0 )
  {
    CDOTA_Bot::GetNearbyCreeps(
      m_pBot,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
      &CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
      LevelSpecialValue);
    CDOTA_Bot::GetNearbyHeroes(
      pTarget->m_pBot,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
      &CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
      LevelSpecialValue);
  }
  result = 0;
  if ( CDOTA_Ability_Winter_Wyvern_Splinter_Blast::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size > 1 )
  {
    v9 = (*(this->_vptr_IHandleEntity + 247))(this);
    return (v9 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::~CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow  (line 929, @0x0000000002d26560, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::~CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow(
        CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4670870;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::~CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow  (line 929, @0x0000000002d26580, libserver.so)  // inlines: ~CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::~CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow(
        CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4670870;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::OnCreated  (line 952, @0x0000000002d08e60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movespeed"
void __fastcall CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::OnCreated(
        CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movespeed", -1, 0);
  else
    this->bonus_movespeed = 0;
}


// CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::DeclareFunctions  (line 967, @0x0000000002ccb270, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::DeclareFunctions(
        CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::GetModifierMoveSpeedBonus_Percentage  (line 974, @0x0000000002ccb290, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Winter_Wyvern_Splinter_Blast_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::~CDOTA_Ability_Winter_Wyvern_Cold_Embrace  (line 983, @0x0000000002d2c8b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::~CDOTA_Ability_Winter_Wyvern_Cold_Embrace(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace *const this)
{
  this->_vptr_IHandleEntity = &off_4670BD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::~CDOTA_Ability_Winter_Wyvern_Cold_Embrace  (line 983, @0x0000000002d2c8d0, libserver.so)  // inlines: ~CDOTA_Ability_Winter_Wyvern_Cold_Embrace
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::~CDOTA_Ability_Winter_Wyvern_Cold_Embrace(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace *const this)
{
  this->_vptr_IHandleEntity = &off_4670BD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::Schema_DynamicBinding  (line 985, @0x0000000002d212b0, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Cold_Embrace::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::Schema_DynamicBinding(
        const CDOTA_Ability_Winter_Wyvern_Cold_Embrace *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Cold_Embrace::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 985, @0x0000000002d212c0, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::DestructInstance  (line 985, @0x0000000002d212d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Winter_Wyvern_Cold_Embrace>
void __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::FreeInstance  (line 985, @0x0000000002d212f0, libserver.so)
void __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::CanAllocate  (line 985, @0x0000000002d21310, libserver.so)
bool __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 985, @0x0000000002d21320, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Cold_Embrace::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Cold_Embrace::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::AllocateInstance  (line 985, @0x0000000002d25790, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::ConstructInstance  (line 985, @0x0000000002d29800, libserver.so)  // inlines: CDOTA_Ability_Winter_Wyvern_Cold_Embrace, Construct<CDOTA_Ability_Winter_Wyvern_Cold_Embrace>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4670BD0;
  }
  return p;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 985, @0x0000000002d34f90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 985, @0x0000000002d34fb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal  (line 985, @0x0000000002d4bfb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "winter_wyvern_cold_embrace", "CDOTA_Ability_Winter_Wyvern_Cold_Embrace"
// globals: `guard variable for'CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass, CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass, __dso_handle, CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClassInfo, CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClassInfo
CEntityClass *__cdecl CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass);
    CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass._vptr_CEntityClass = off_4670B50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass);
    __cxa_atexit(
      CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass != 0 )
    return &CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass;
  if ( `guard variable for'CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClassInfo,
      "CDOTA_Ability_Winter_Wyvern_Cold_Embrace",
      "winter_wyvern_cold_embrace",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClassInfo);
  }
  CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass.m_pClassInfo = &CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClassInfo;
  CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass.m_pBaseClassInfo = CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass = &CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass;
  CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClassInfo.m_pClass = &CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass;
  CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Cold_EmbraceClass;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetConceptRecipientType  (line 991, @0x0000000002d21330, libserver.so)
int __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetConceptRecipientType(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace *const this)
{
  return 3;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::YouForgotToImplementOrDeclareServerClass  (line 1001, @0x0000000002ccb2b0, libserver.so)
int __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace *const this)
{
  return 0;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetServerClass  (line 1001, @0x0000000002cddd30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::GetServerClass(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace *const this)
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


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CastFilterResult  (line 1011, @0x0000000002cd1920, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
int __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::CastFilterResult(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace *const this,
        CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *Caster; // rax
  bool IsDisableHelpSetForPlayerID; // dl

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 0 )
  {
    if ( (pTarget->m_iUnitType & 1) == 0 )
      return 0;
    m_Value = pTarget->m_iTeamNum.m_Value;
    if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      return 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    IsDisableHelpSetForPlayerID = CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
                                    g_pDOTAPlayerResource,
                                    pTarget->m_nControllingPlayerID,
                                    Caster->m_nControllingPlayerID);
    result = 25;
    if ( !IsDisableHelpSetForPlayerID )
      return 0;
  }
  return result;
}


// CDOTA_Ability_Winter_Wyvern_Cold_Embrace::OnSpellStart  (line 1031, @0x0000000002cf5840, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues (15 total)
// strings: "modifier_winter_wyvern_cold_embrace", "particles/units/heroes/hero_winter_wyvern/wyvern_cold_embrace_start.vpcf", "attach_attack1", "attach_hitloc", "Hero_Winter_Wyvern.ColdEmbrace.Cast"
void __fastcall CDOTA_Ability_Winter_Wyvern_Cold_Embrace::OnSpellStart(
        CDOTA_Ability_Winter_Wyvern_Cold_Embrace *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // r15
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v12; // rax
  const Vector *v13; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *duration; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_winter_wyvern_cold_embrace");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_winter_wyvern_cold_embrace", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_winter_wyvern/wyvern_cold_embrace_start.vpcf",
                    2,
                    v6,
                    0,
                    0);
    v8 = CDOTABaseAbility::GetCaster(this);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v9, v6, 0, v8, 1, 0, vec3_invalid, 1);
    v10 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    duration = CDOTABaseAbility::GetCaster(this);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v12, v6, 1, duration, 5, "attach_attack1", *AbsOrigin, 1);
    v13 = CBaseEntity::GetAbsOrigin(v3);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v14, v6, 2, v3, 5, "attach_hitloc", *v13, 1);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v15, v6);
    KeyValues::~KeyValues(&kv);
  }
  v16 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v16, "Hero_Winter_Wyvern.ColdEmbrace.Cast", 0.0, 0, 0);
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::~CDOTA_Modifier_Winter_Wyvern_Cold_Embrace  (line 1060, @0x0000000002d26510, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::~CDOTA_Modifier_Winter_Wyvern_Cold_Embrace(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this)
{
  this->_vptr_CDOTA_Buff = &off_4671690;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::~CDOTA_Modifier_Winter_Wyvern_Cold_Embrace  (line 1060, @0x0000000002d26530, libserver.so)  // inlines: ~CDOTA_Modifier_Winter_Wyvern_Cold_Embrace
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::~CDOTA_Modifier_Winter_Wyvern_Cold_Embrace(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this)
{
  this->_vptr_CDOTA_Buff = &off_4671690;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::IsPurgable  (line 1068, @0x0000000002d21340, libserver.so)
bool __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::IsPurgable(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this)
{
  return 0;
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetStatusEffectName  (line 1073, @0x0000000002d21350, libserver.so)
// strings: "particles/status_fx/status_effect_wyvern_cold_embrace.vpcf"
const char *__fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetStatusEffectName(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this)
{
  return "particles/status_fx/status_effect_wyvern_cold_embrace.vpcf";
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::StatusEffectPriority  (line 1074, @0x0000000002d21360, libserver.so)
int __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::StatusEffectPriority(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this)
{
  return 20;
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::OnCreated  (line 1094, @0x0000000002cfbfc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::AddParticle, CDOTA_BaseNPC::UnitEmitSound
// strings: "heal_additive", "heal_percentage", "particles/units/heroes/hero_winter_wyvern/wyvern_cold_embrace_buff.vpcf", "attach_hitloc", "Hero_Winter_Wyvern.ColdEmbrace"
void __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::OnCreated(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // r13
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->heal_additive, "heal_additive");
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->heal_percentage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "heal_percentage", -1, 0);
  else
    this->heal_percentage = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_winter_wyvern/wyvern_cold_embrace_buff.vpcf",
                      2,
                      Parent,
                      0,
                      Caster);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Parent, 0, v9, 1, 0, vec3_invalid, 1);
  v11 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 1, v13, 5, "attach_hitloc", *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  v15 = CDOTA_Buff::GetParent(this);
  this->m_nColdEmbraceSound = CDOTA_BaseNPC::UnitEmitSound(v15, "Hero_Winter_Wyvern.ColdEmbrace", 0.0, 0, 0);
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::OnDestroy  (line 1113, @0x0000000002ce2c90, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTABody::StartAnimation, CSoundOpGameSystem::StopSoundEvent
void __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::OnDestroy(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABody *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 377))(Parent);
  CDOTABody::StartAnimation(v3, 0x5DCu, 1, 1.0);
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nColdEmbraceSound);
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::OnIntervalThink  (line 1123, @0x0000000002cd15a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_CombatLog::AddHealthEvent, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::OnIntervalThink(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this)
{
  int heal_additive; // r12d
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // rax
  int v5; // r13d
  CDOTA_BaseNPC *v6; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v8; // rax
  bool v9; // cc
  int v10; // r12d
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *v16; // rax
  CDOTA_BaseNPC *v17; // r13
  CDOTA_BaseNPC *v18; // r13
  CDOTA_BaseNPC *v19; // rax
  CDOTAPlayer *v20; // rax
  float v21; // [rsp+1Ch] [rbp-24h]

  heal_additive = this->heal_additive;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->heal_percentage)));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    v21 = heal_additive + ((v3 * 0.0099999998) * v5);
    v6 = CDOTA_Buff::GetParent(this);
    Health = CBaseEntity::GetHealth(v6);
    v8 = CDOTA_Buff::GetParent(this);
    v9 = Health < (*(v8->_vptr_IHandleEntity + 156))(v8);
    v10 = v21;
    if ( v9 )
    {
      v14 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      v16 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
      SendOverheadEventMessage(v16, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v14, v10, 0);
      v17 = CDOTA_Buff::GetParent(this);
      if ( v17 != CDOTA_Buff::GetCaster(this) )
      {
        v18 = CDOTA_Buff::GetParent(this);
        v19 = CDOTA_Buff::GetParent(this);
        v20 = (*(v19->_vptr_IHandleEntity + 413))(v19);
        SendOverheadEventMessage(v20, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v18, v10, 0);
      }
    }
    Ability = CDOTA_Buff::GetAbility(this);
    v12 = CDOTA_Buff::GetCaster(this);
    v13 = CDOTA_Buff::GetParent(this);
    CDOTA_CombatLog::AddHealthEvent(g_pDOTACombatLog, 1, v13, v12, Ability, v10, 0, 0, 0);
  }
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetModifierConstantHealthRegen  (line 1147, @0x0000000002ccc4e0, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128 v3; // xmm0
  int v4; // eax
  float v6; // [rsp+8h] [rbp-8h]
  float heal_additive; // [rsp+Ch] [rbp-4h]
  ModifierVariant_t result; // 0:rax.16

  heal_additive = this->heal_additive;
  v6 = 0.0099999998 * this->heal_percentage;
  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  result.m_szVal = 0;
  v3.m128_f32[0] = (v4 * v6) + heal_additive;
  *&result.m_eType = (v3.m128_u64[0] << 32) | 1;
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::DeclareFunctions  (line 1154, @0x0000000002ccb2c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetOverrideAnimationRate(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::DeclareFunctions(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this)
{
  this->m_Functions[103].__pfn = CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetAbsoluteNoDamagePhysical;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[92].__delta = 0;
  this->m_Functions[92].__pfn = CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetOverrideAnimationRate;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetAbsoluteNoDamagePhysical  (line 1163, @0x0000000002ccb320, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetOverrideAnimationRate  (line 1170, @0x0000000002ccb340, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::GetOverrideAnimationRate(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::CheckState  (line 1177, @0x0000000002ccb350, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Winter_Wyvern_Cold_Embrace::CheckState(
        CDOTA_Modifier_Winter_Wyvern_Cold_Embrace *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  buffState->m_nDisabledStateMask = buffState->m_nDisabledStateMask & 0xFFFFFFFDFEFBFFDFLL | 0x201000000LL;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask & 0xFFFFFFFDFEFBFFDFLL | 0x40020;
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::~CDOTA_Ability_Winter_Wyvern_Winters_Curse  (line 1192, @0x0000000002d2c900, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::~CDOTA_Ability_Winter_Wyvern_Winters_Curse(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse *const this)
{
  this->_vptr_IHandleEntity = &off_46719F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::~CDOTA_Ability_Winter_Wyvern_Winters_Curse  (line 1192, @0x0000000002d2c920, libserver.so)  // inlines: ~CDOTA_Ability_Winter_Wyvern_Winters_Curse
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::~CDOTA_Ability_Winter_Wyvern_Winters_Curse(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse *const this)
{
  this->_vptr_IHandleEntity = &off_46719F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::Schema_DynamicBinding  (line 1194, @0x0000000002d21370, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Winters_Curse::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::Schema_DynamicBinding(
        const CDOTA_Ability_Winter_Wyvern_Winters_Curse *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Winters_Curse::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1194, @0x0000000002d21380, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::DestructInstance  (line 1194, @0x0000000002d21390, libserver.so)  // inlines: Destruct<CDOTA_Ability_Winter_Wyvern_Winters_Curse>
void __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::FreeInstance  (line 1194, @0x0000000002d213b0, libserver.so)
void __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::CanAllocate  (line 1194, @0x0000000002d213d0, libserver.so)
bool __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1194, @0x0000000002d213e0, libserver.so)
// globals: CDOTA_Ability_Winter_Wyvern_Winters_Curse::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Winter_Wyvern_Winters_Curse::s_pSchemaBinding;
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::AllocateInstance  (line 1194, @0x0000000002d257d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::ConstructInstance  (line 1194, @0x0000000002d29830, libserver.so)  // inlines: CDOTA_Ability_Winter_Wyvern_Winters_Curse, Construct<CDOTA_Ability_Winter_Wyvern_Winters_Curse>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46719F0;
  }
  return p;
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1194, @0x0000000002d34fe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1194, @0x0000000002d35000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal  (line 1194, @0x0000000002d4c100, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "winter_wyvern_winters_curse", "CDOTA_Ability_Winter_Wyvern_Winters_Curse"
// globals: `guard variable for'CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass, CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass, __dso_handle, CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClassInfo, CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass);
    CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass._vptr_CEntityClass = off_4671970;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass);
    __cxa_atexit(
      CDOTA_Ability_Winter_Wyvern_Winters_Curse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass != 0 )
    return &CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass;
  if ( `guard variable for'CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClassInfo,
      "CDOTA_Ability_Winter_Wyvern_Winters_Curse",
      "winter_wyvern_winters_curse",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClassInfo);
  }
  CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass.m_pClassInfo = &CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClassInfo;
  CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass.m_pBaseClassInfo = CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass = &CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass;
  CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClassInfo.m_pClass = &CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass;
  CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Winter_Wyvern_Winters_CurseClass;
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetIntrinsicModifierName  (line 1198, @0x0000000002d213f0, libserver.so)
// strings: "winter_wyvern_winters_curse_kill_credit"
const char *__fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetIntrinsicModifierName(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse *const this)
{
  return "winter_wyvern_winters_curse_kill_credit";
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetConceptRecipientType  (line 1200, @0x0000000002d21400, libserver.so)
int __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetConceptRecipientType(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse *const this)
{
  return 4;
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetAOERadius  (line 1204, @0x0000000002d47220, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetAOERadius(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::YouForgotToImplementOrDeclareServerClass  (line 1209, @0x0000000002ccb390, libserver.so)
int __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse *const this)
{
  return 0;
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetServerClass  (line 1209, @0x0000000002cddcb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetServerClass(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse *const this)
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


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::OnSpellStart  (line 1218, @0x0000000002cf5a70, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin (18 total)
// strings: "Hero_Winter_Wyvern.WintersCurse.Cast", "modifier_winter_wyvern_winters_curse_aura", "Hero_Winter_Wyvern.WintersCurse.Target", "particles/units/heroes/hero_winter_wyvern/wyvern_winters_curse_start.vpcf", "attach_attack1"
void __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::OnSpellStart(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  const Vector *v18; // r12
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm3_4
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *pEnt; // [rsp+10h] [rbp-60h]
  float duration; // [rsp+1Ch] [rbp-54h]
  KeyValues kv2; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Winter_Wyvern.WintersCurse.Cast", 0.0, 0, 0);
    if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      KeyValues::KeyValues(&kv2, "modifier_winter_wyvern_winters_curse_aura");
      KeyValues::SetFloat(&kv2, "duration", v5);
      v6 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v6, this, "modifier_winter_wyvern_winters_curse_aura", &kv2, 0);
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Winter_Wyvern.WintersCurse.Target", 0.0, 0, 0);
      v7 = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_winter_wyvern/wyvern_winters_curse_start.vpcf",
                   2,
                   v7,
                   0,
                   0);
      v10 = CDOTABaseAbility::GetCaster(this);
      v11 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v11, Particle, 0, v10, 1, 0, vec3_invalid, 1);
      v12 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
      pEnt = CDOTABaseAbility::GetCaster(this);
      v14 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v14, Particle, 1, pEnt, 5, "attach_attack1", *AbsOrigin, 1);
      v15 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v15, Particle);
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      v18 = CBaseEntity::GetAbsOrigin(v3);
      v19 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(
        g_pGameRules,
        v19,
        0,
        m_iAbilityID,
        0,
        0,
        *&v18->x,
        v18->z,
        duration,
        v20);
      KeyValues::~KeyValues(&kv2);
    }
  }
  else
  {
    v21 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v21, "Hero_Winter_Wyvern.WintersCurse.Cast", 0.0, 0, 0);
  }
}


// CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetStunDuration  (line 1249, @0x0000000002cf69d0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Winter_Wyvern_Winters_Curse::GetStunDuration(
        CDOTA_Ability_Winter_Wyvern_Winters_Curse *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit  (line 1258, @0x0000000002d332a0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_46724B0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_InFlightAttackRecords.m_Memory,
        CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory),
        (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<short,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit  (line 1258, @0x0000000002d334d0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_46724B0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::IsHidden  (line 1264, @0x0000000002d21410, libserver.so)
bool __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::IsHidden(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit *const this)
{
  return 1;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::IsPurgable  (line 1265, @0x0000000002d21420, libserver.so)
bool __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::IsPurgable(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit *const this)
{
  return 0;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnCreated  (line 1281, @0x0000000002ccb3a0, libserver.so)
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnCreated(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::DeclareFunctions  (line 1287, @0x0000000002ccb3b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnAttack(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnAttackFail(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnTakeDamageKillCredit(CModifierParams const&)
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::DeclareFunctions(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnAttackFail;
  this->m_Functions[146].__pfn = CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnTakeDamageKillCredit;
  this->m_Functions[146].__delta = 0;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnAttackFail  (line 1306, @0x0000000002cf2ce0, libserver.so)
// calls: CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnAttackFail(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit *const this,
        const CModifierParams *const params)
{
  CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord);
  return 1uLL;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnAttack  (line 1316, @0x0000000002d19f20, libserver.so)  // inlines: AddToTail, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CUtlMemory<short int, int>::Grow
// strings: "modifier_winter_wyvern_winters_curse_aura"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnAttack(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // r14
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *Caster; // r15
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  int m_Size; // ebx
  CDOTA_AttackRecord *v20; // r13
  __int16 *v21; // rdx

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v9 = params->htarget.m_Index;
  if ( v9 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[params->htarget.m_Index & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
      {
        v13 = v11->m_pInstance;
        if ( v11->m_pInstance != 0 && v13->m_bIsDOTANPC && m_pInstance != 0 )
        {
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(v13, "modifier_winter_wyvern_winters_curse_aura", 0);
          if ( ModifierByName != 0 )
          {
            Caster = CDOTA_Buff::GetCaster(ModifierByName);
            if ( Caster == CDOTA_Buff::GetCaster(this)
              && HIBYTE(m_pInstance[7].m_CScriptComponent) == v13->m_iTeamNum.m_Value )
            {
              iRecord = params->iRecord;
              AttackRecordsManager = GetAttackRecordsManager();
              RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
              m_Size = this->m_InFlightAttackRecords.m_Size;
              v20 = RecordByIndex;
              if ( m_Size == this->m_InFlightAttackRecords.m_Memory.m_nAllocationCount )
                CUtlMemory<short,int>::Grow(&this->m_InFlightAttackRecords.m_Memory, 1);
              ++this->m_InFlightAttackRecords.m_Size;
              v21 = &this->m_InFlightAttackRecords.m_Memory.m_pMemory[m_Size];
              if ( v21 != 0 )
                *v21 = v20->m_iRecord;
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnTakeDamageKillCredit  (line 1340, @0x0000000002cf2d00, libserver.so)  // inlines: Ceil2Int, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CDOTA_BaseNPC::FindModifierByName, Warning, ceilf, CBaseEntity::GetHealth, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Kill
// strings: "modifier_necrolyte_reapers_scythe", "Excessive numbers(%d) of in flight attacks for winter's curse!\n", "modifier_winter_wyvern_winters_curse_aura", "modifier_skeleton_king_reincarnation_scepter_active", "modifier_skeleton_king_reincarnation_scepter"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit::OnTakeDamageKillCredit(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Kill_Credit *const this,
        const CModifierParams *const params)
{
  bool v4; // al
  uint32 m_Index; // edx
  bool v6; // r14
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CDOTA_BaseNPC *m_pInstance; // rbx
  int m_Size; // esi
  CDOTA_BaseNPC *Caster; // r12
  CDOTABaseAbility *Ability; // rax
  float v14; // [rsp+Ch] [rbp-24h]

  v4 = CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord);
  m_Index = params->htarget.m_Index;
  v6 = v4;
  if ( m_Index + 2 <= 1
    || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v8 = &v7[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  m_Size = this->m_InFlightAttackRecords.m_Size;
  if ( m_Size > 20 )
    Warning("Excessive numbers(%d) of in flight attacks for winter's curse!\n", m_Size);
  if ( (m_pInstance != 0
     && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
     && !params->bRangedAttack
     && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_winter_wyvern_winters_curse_aura", 0) != 0
     || v6)
    && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_necrolyte_reapers_scythe", 0) == 0
    && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_skeleton_king_reincarnation_scepter_active", 0) == 0
    && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_skeleton_king_reincarnation_scepter", 0) == 0 )
  {
    v14 = ceilf(params->fDamage);
    if ( CBaseEntity::GetHealth(m_pInstance) <= v14 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTA_BaseNPC::Kill(m_pInstance, Ability, Caster, 0.0, 0);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura  (line 1378, @0x0000000002d264c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_46727D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura  (line 1378, @0x0000000002d264e0, libserver.so)  // inlines: ~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_46727D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::IsAura  (line 1392, @0x0000000002d21430, libserver.so)
bool __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::IsAura(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetModifierAura  (line 1393, @0x0000000002d21440, libserver.so)
// strings: "modifier_winter_wyvern_winters_curse"
const char *__fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetModifierAura(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  return "modifier_winter_wyvern_winters_curse";
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetStatusEffectName  (line 1395, @0x0000000002d21450, libserver.so)
// strings: "particles/status_fx/status_effect_wyvern_curse_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetStatusEffectName(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  return "particles/status_fx/status_effect_wyvern_curse_buff.vpcf";
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::StatusEffectPriority  (line 1396, @0x0000000002d21460, libserver.so)
int __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::StatusEffectPriority(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  return 25;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetAuraSearchTeam  (line 1398, @0x0000000002d21470, libserver.so)
int __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetAuraSearchType  (line 1399, @0x0000000002d21480, libserver.so)
int __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetAuraSearchType(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  return 19;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetAuraRadius  (line 1400, @0x0000000002d21490, libserver.so)
int __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetAuraRadius(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetAuraDuration  (line 1401, @0x0000000002d214a0, libserver.so)
float __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetAuraDuration(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 33))(this);
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::SetAuraCreateData  (line 1402, @0x0000000002d359c0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator void*
// calls: KeyValues::SetPtr
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::SetAuraCreateData(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this,
        KeyValues *pKV)
{
  CEntityInstance *m_pInstance; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx

  m_pInstance = 0;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  KeyValues::SetPtr(pKV, "target", m_pInstance);
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetAuraEntityReject  (line 1403, @0x0000000002d2fb10, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_winter_wyvern_winters_curse"
bool __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetAuraEntityReject(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this,
        CDOTA_BaseNPC *pNPC)
{
  CDOTA_BaseNPC *Parent; // rax
  bool result; // al

  result = CDOTA_Buff::GetParent(this) == pNPC
        || (Parent = CDOTA_Buff::GetParent(this), (*(Parent->_vptr_IHandleEntity + 408))(Parent) == 0)
        || (pNPC->m_nUnitState64.m_Value & 0x200) != 0
        || CDOTA_BaseNPC::FindModifierByName(pNPC, "modifier_winter_wyvern_winters_curse", 0) != 0;
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::OnCreated  (line 1430, @0x0000000002cf9e00, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, Vector, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CEntityHandle::operator CEntityInstance*, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, CDOTA_Buff::CreateBuffParticleEffect
// strings: "damage_amplification", "particles/units/heroes/hero_winter_wyvern/wyvern_winters_curse.vpcf", "attach_hitloc", "particles/units/heroes/hero_winter_wyvern/wyvern_winters_curse_overhead.vpcf", "particles/units/heroes/hero_winter_wyvern/wyvern_winters_curse_ground.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::OnCreated(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Parent; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  CDOTA_BaseNPC *Caster; // r14
  CBaseEntity *v11; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  const CBaseEntity *m_pInstance; // rdi
  int v15; // r13d
  uint32 m_Index; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  const Vector *AbsOrigin; // r14
  const CBaseAnimating *v20; // r15
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CBaseEntity *v23; // rax
  const CBaseAnimating *v24; // r15
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  const CBaseEntity *v27; // rax
  const Vector *v28; // r15
  CDOTA_ParticleManager *v29; // rax
  const CBaseEntity *v30; // rax
  const Vector *v31; // r15
  const CBaseAnimating *v32; // r12
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  double v35; // [rsp+10h] [rbp-40h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->damage_amplification, "damage_amplification");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->damage_reduction, "damage_reduction");
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 && (m_pEntity = Parent->m_pEntity) != 0 )
  {
    v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v9 = 0x7FFF;
    else
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v9 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v8 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_winter_wyvern/wyvern_winters_curse.vpcf",
               1,
               v11,
               0,
               Caster);
  m_pInstance = 0;
  v15 = Particle;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v17 != 0 )
    {
      v18 = &v17[this->m_hTarget.m_Index & 0x1FF];
      if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index )
        m_pInstance = v18->m_pInstance;
    }
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v20 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v21, v15, 1, v20, 5, "attach_hitloc", *AbsOrigin, 1);
  *&v35 = this->radius;
  *(&v35 + 1) = *&v35;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, v15, 2, v35, *&v35);
  CDOTA_Buff::AddParticle(this, v15, 0, 0, -1, 0, 0);
  v23 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  LODWORD(AbsOrigin) = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_winter_wyvern/wyvern_winters_curse_overhead.vpcf",
                         7,
                         v23,
                         0);
  v24 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v25, AbsOrigin, 1, v24, 1, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, AbsOrigin, 0, 0, -1, 0, 1);
  v26 = GetParticleManager();
  LODWORD(AbsOrigin) = CDOTA_ParticleManager::CreateParticle(
                         v26,
                         "particles/units/heroes/hero_winter_wyvern/wyvern_winters_curse_ground.vpcf",
                         2,
                         0,
                         0,
                         0);
  v27 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  v28 = CBaseEntity::GetAbsOrigin(v27);
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v29, AbsOrigin, 0, *&v28->x, v28->z);
  v30 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  v31 = CBaseEntity::GetAbsOrigin(v30);
  v32 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  v33 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v33, AbsOrigin, 1, v32, 5, "attach_hitloc", *v31, 1);
  *&v35 = this->radius;
  *(&v35 + 1) = *&v35;
  v34 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v34, AbsOrigin, 2, v35, *&v35);
  CDOTA_Buff::AddParticle(this, v15, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::OnRefresh  (line 1457, @0x0000000002d090a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::OnRefresh(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::CheckState  (line 1464, @0x0000000002ccb410, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::CheckState(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 v3; // rdx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  v3 = buffState->m_nDisabledStateMask & 0xFFFFFFFFFFFBFFDFLL;
  LOBYTE(v3) = buffState->m_nDisabledStateMask & 0x5F | 0x80;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x40020;
  buffState->m_nDisabledStateMask = v3;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::DeclareFunctions  (line 1475, @0x0000000002ccb440, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetModifierIncomingDamage_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::DeclareFunctions(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this)
{
  this->m_Functions[36].__pfn = CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetModifierIncomingDamage_Percentage;
  this->m_Functions[36].__delta = 0;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetModifierIncomingDamage_Percentage  (line 1482, @0x0000000002cd8a50, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rax
  char m_CScriptComponent_high; // r12
  __m128i v10; // xmm1
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1
    && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
    && (v6 = &v5[params->hattacker.m_Index & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent)) == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
  {
    *v10.m128i_i32 = this->damage_amplification;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v10) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
    *v2.m128i_i32 = -this->damage_reduction;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse  (line 1499, @0x0000000002d26470, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this)
{
  this->_vptr_CDOTA_Buff = &off_4672AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse  (line 1499, @0x0000000002d26490, libserver.so)  // inlines: ~CDOTA_Modifier_Winter_Wyvern_Winters_Curse
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::~CDOTA_Modifier_Winter_Wyvern_Winters_Curse(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this)
{
  this->_vptr_CDOTA_Buff = &off_4672AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::IsDebuff  (line 1504, @0x0000000002d214c0, libserver.so)
bool __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::IsDebuff(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this)
{
  return 1;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::IsPurgable  (line 1510, @0x0000000002d214d0, libserver.so)
bool __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::IsPurgable(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this)
{
  return 0;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetStatusEffectName  (line 1514, @0x0000000002d214e0, libserver.so)
// strings: "particles/status_fx/status_effect_wyvern_curse_target.vpcf"
const char *__fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetStatusEffectName(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this)
{
  return "particles/status_fx/status_effect_wyvern_curse_target.vpcf";
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::StatusEffectPriority  (line 1515, @0x0000000002d214f0, libserver.so)
int __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::StatusEffectPriority(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this)
{
  return 15;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetAttributes  (line 1517, @0x0000000002d21500, libserver.so)
int __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetAttributes(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this)
{
  return 4;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::DeclareFunctions  (line 1530, @0x0000000002ccb460, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetModifierIncomingDamage_Percentage(CModifierParams const&), CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::DeclareFunctions(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this)
{
  this->m_Functions[36].__pfn = CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetModifierIncomingDamage_Percentage;
  this->m_Functions[36].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetModifierAttackSpeedBonus_Constant  (line 1536, @0x0000000002ccb4a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::OnCreated  (line 1543, @0x0000000002d0c130, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Set, SetForceAttackTarget, SetIdleAcquire, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetPtr, CDOTA_Buff::GetParent, CDOTA_Buff::StartIntervalThink, CDOTA_BaseNPC::Interrupt, CDOTA_BaseNPC::UpdatePseudoQueuedOrder, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::AddParticle (13 total)
// strings: "particles/units/heroes/hero_winter_wyvern/wyvern_winters_curse_buff.vpcf", "attach_hitloc", "attach_eye_l", "attach_eye_r"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::OnCreated(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Ptr; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v8; // edx
  __int16 v9; // si
  CDOTA_BaseNPC *v10; // r12
  float v11; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  uint32 m_Index; // edx
  unsigned __int16 v16; // cx
  CEntityIdentity *v17; // rax
  CEntityIdentity *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CEntityIdentity *v20; // rdx
  int v21; // ecx
  __int16 v22; // si
  CDOTA_BaseNPC *v23; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v25; // r13
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v29; // r14
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  const Vector *v32; // r13
  CDOTA_BaseNPC *v33; // r14
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // r13
  CDOTA_BaseNPC *v37; // r14
  CDOTA_ParticleManager *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  CEntityInstance *v40; // rax
  CEntityIdentity *v41; // rdx
  int v42; // eax
  __int16 v43; // cx
  CEntityInstance *m_pInstance; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
  else
    this->bonus_attack_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_reduction", -1, 0);
  else
    this->damage_reduction = 0;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr == 0 || !Ptr->m_bIsDOTANPC )
  {
    v10 = 0;
LABEL_26:
    this->m_hDesiredTarget.m_Index = -1;
    goto LABEL_11;
  }
  m_pEntity = Ptr->m_pEntity;
  if ( m_pEntity == 0 )
  {
    v10 = Ptr;
    goto LABEL_26;
  }
  v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v9 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v10 = Ptr;
  LOWORD(this->m_hDesiredTarget.m_Index) = v9 | this->m_hDesiredTarget.m_Index & 0x8000;
  this->m_hDesiredTarget.m_Index = (v8 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
LABEL_11:
  if ( CDOTA_Buff::GetParent(this) != v10
    && !v10->m_bIsWaitingToSpawn.m_Value
    && (v10->m_nUnitState64.m_Value & 0x100) == 0 )
  {
    CDOTA_Buff::StartIntervalThink(this, 0.0, v11);
    Parent = CDOTA_Buff::GetParent(this);
    if ( (*(Parent->_vptr_IHandleEntity + 405))(Parent) != 0 )
    {
      v39 = CDOTA_Buff::GetParent(this);
      v40 = CEntityHandle::operator CEntityInstance *(&v39->m_hForceAttackTarget);
      if ( v40 != 0 && BYTE3(v40[7]._vptr_IHandleEntity) != 0 && (v41 = v40->m_pEntity) != 0 )
      {
        v42 = (v41->m_EHandle.m_Index >> 15) - (v41->m_flags & 1);
        v43 = 0x7FFF;
        if ( v41->m_EHandle.m_Index != -1 )
          v43 = v41->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hZombieTarget.m_Index) = v43 | this->m_hZombieTarget.m_Index & 0x8000;
        this->m_hZombieTarget.m_Index = (v42 << 15) | this->m_hZombieTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hZombieTarget.m_Index = -1;
      }
    }
    v13 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Interrupt(v13);
    CDOTA_Buff::GetParent(this)->m_bIdleAcquire = 1;
    v14 = CDOTA_Buff::GetParent(this);
    m_Index = v14->m_hForceAttackTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v16 = v14->m_hForceAttackTarget.m_Index,
          (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v16 >> 9) & 0x3F]) == 0)
      || (v18 = &v17[v16 & 0x1FF]) == 0
      || m_Index != v18->m_EHandle.m_Index
      || (m_pInstance = v18->m_pInstance) == 0
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      v19 = CDOTA_Buff::GetParent(this);
      v20 = v10->m_pEntity;
      if ( v20 != 0 )
      {
        v21 = (v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1);
        if ( v20->m_EHandle.m_Index == -1 )
          v22 = 0x7FFF;
        else
          v22 = v20->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v19->m_hForceAttackTarget.m_Index) = v22 | v19->m_hForceAttackTarget.m_Index & 0x8000;
        v19->m_hForceAttackTarget.m_Index = (v21 << 15) | v19->m_hForceAttackTarget.m_Index & 0x7FFF;
      }
      else
      {
        v19->m_hForceAttackTarget.m_Index = -1;
      }
      v19->m_bAllowAllyForceAttack = 1;
      CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v19, 1);
      v23 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(v23) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_winter_wyvern/wyvern_winters_curse_buff.vpcf",
                       2,
                       v23,
                       0,
                       0);
      v25 = CDOTA_Buff::GetParent(this);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v26, v23, 0, v25, 1, 0, vec3_invalid, 1);
      v27 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v27);
      v29 = CDOTA_Buff::GetParent(this);
      v30 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v30, v23, 1, v29, 5, "attach_hitloc", *AbsOrigin, 1);
      v31 = CDOTA_Buff::GetParent(this);
      v32 = CBaseEntity::GetAbsOrigin(v31);
      v33 = CDOTA_Buff::GetParent(this);
      v34 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v34, v23, 2, v33, 5, "attach_eye_l", *v32, 1);
      v35 = CDOTA_Buff::GetParent(this);
      v36 = CBaseEntity::GetAbsOrigin(v35);
      v37 = CDOTA_Buff::GetParent(this);
      v38 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v38, v23, 3, v37, 5, "attach_eye_r", *v36, 1);
      CDOTA_Buff::AddParticle(this, v23, 0, 0, -1, 0, 0);
    }
  }
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetModifierIncomingDamage_Percentage  (line 1581, @0x0000000002ccb4c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->damage_reduction;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::OnDestroy  (line 1588, @0x0000000002cdcf20, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetForceAttackTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::OnDestroy(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *v6; // rax
  uint32 m_Index; // edx
  unsigned __int16 v8; // cx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CEntityInstance *m_pInstance; // rax
  uint32 v12; // edx
  CEntityInstance *v13; // rdi
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  CEntityInstance *v16; // r12
  CDOTA_BaseNPC *v17; // rax
  CEntityIdentity *m_pEntity; // rdx
  CDOTA_BaseNPC *v19; // rdi
  int v20; // eax
  __int16 v21; // cx
  CDOTA_BaseNPC *v22; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 405))(Parent) != 0
    && (v3 = this->m_hZombieTarget.m_Index) + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hZombieTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[this->m_hZombieTarget.m_Index & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && (v16 = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
  {
    v17 = CDOTA_Buff::GetParent(this);
    m_pEntity = v16->m_pEntity;
    v19 = v17;
    if ( m_pEntity != 0 )
    {
      v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v21 = 0x7FFF;
      else
        v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v19->m_hForceAttackTarget.m_Index) = v21 | v19->m_hForceAttackTarget.m_Index & 0x8000;
      v19->m_hForceAttackTarget.m_Index = (v20 << 15) | v19->m_hForceAttackTarget.m_Index & 0x7FFF;
    }
    else
    {
      v17->m_hForceAttackTarget.m_Index = -1;
    }
    v19->m_bAllowAllyForceAttack = 0;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v19, 1);
  }
  else
  {
    v6 = CDOTA_Buff::GetParent(this);
    m_Index = v6->m_hForceAttackTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v8 = v6->m_hForceAttackTarget.m_Index,
          (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) == 0)
      || (v10 = &v9[v8 & 0x1FF]) == 0
      || m_Index != v10->m_EHandle.m_Index
      || (m_pInstance = v10->m_pInstance) == 0
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v12 = this->m_hDesiredTarget.m_Index;
    v13 = 0;
    if ( v12 + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_hDesiredTarget.m_Index & 0x1FF];
        if ( v15 != 0 && v12 == v15->m_EHandle.m_Index )
          v13 = v15->m_pInstance;
      }
    }
    if ( m_pInstance == v13 )
    {
      v22 = CDOTA_Buff::GetParent(this);
      v22->m_hForceAttackTarget.m_Index = -1;
      v22->m_bAllowAllyForceAttack = 0;
      CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v22, 1);
    }
  }
}


// CDOTA_Modifier_Winter_Wyvern_Winters_Curse::OnIntervalThink  (line 1606, @0x0000000002cda510, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetForceAttackTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::Destroy, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Winter_Wyvern_Winters_Curse::OnIntervalThink(
        CDOTA_Modifier_Winter_Wyvern_Winters_Curse *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  uint32 v7; // edx
  unsigned __int16 v8; // cx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v13; // ecx
  __int16 v14; // si
  CEntityInstance *v15; // rax

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    goto LABEL_5;
  v4 = &v3[this->m_hDesiredTarget.m_Index & 0x1FF];
  if ( v4 == 0 )
    goto LABEL_5;
  if ( m_Index != v4->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  Parent = CDOTA_Buff::GetParent(this);
  v7 = Parent->m_hForceAttackTarget.m_Index;
  if ( v7 + 2 <= 1
    || (v8 = Parent->m_hForceAttackTarget.m_Index,
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) == 0)
    || (v10 = &v9[v8 & 0x1FF]) == 0
    || v7 != v10->m_EHandle.m_Index
    || (v15 = v10->m_pInstance) == 0
    || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
  {
    v11 = CDOTA_Buff::GetParent(this);
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v14 = 0x7FFF;
      else
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v11->m_hForceAttackTarget.m_Index) = v14 | v11->m_hForceAttackTarget.m_Index & 0x8000;
      v11->m_hForceAttackTarget.m_Index = (v13 << 15) | v11->m_hForceAttackTarget.m_Index & 0x7FFF;
    }
    else
    {
      v11->m_hForceAttackTarget.m_Index = -1;
    }
    v11->m_bAllowAllyForceAttack = 1;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v11, 1);
  }
  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
LABEL_5:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


